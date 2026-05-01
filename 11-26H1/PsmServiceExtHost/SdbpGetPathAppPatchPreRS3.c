/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x1800917B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x1800916B0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180091EE0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(_WORD *a1, unsigned __int64 a2, const wchar_t *a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-E0h]
  __int16 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+48h] [rbp-B8h]
  wchar_t v17; // [rsp+4Ch] [rbp-B4h]
  wchar_t v18[264]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = *(_DWORD *)L"64";
  v17 = aApppatch64[10];
  v15 = *(_OWORD *)L"AppPatch64";
  if ( a2 < 0xB )
    return 3221225507LL;
  v14 = -1;
  v18[0] = 0;
  v13[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v13[0] == 9 || v13[0] == 12 )
    {
      if ( !a3 )
        a3 = &word_1800BBB1C;
      ProcessHostGuestArchitectures = AslPathCombine(&v15, a3, v18, 260LL);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1018LL;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = &word_1800BBB1C;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(v18, 260LL, (__int64)a3);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v11 = 1024LL;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v18);
  }
  v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v11 = 1006LL;
LABEL_5:
  v12 = ProcessHostGuestArchitectures;
  AslLogCallPrintf(1LL, "SdbpGetPathAppPatchPreRS3", v11, v10, v12);
  return v9;
}
