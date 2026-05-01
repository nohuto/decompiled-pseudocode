/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x180091B90
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x1800916B0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180091EE0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(_WORD *a1, unsigned __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 *v8; // rsi
  int ProcessHostGuestArchitectures; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-E0h]
  __int16 v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+40h] [rbp-C0h]
  wchar_t v18; // [rsp+44h] [rbp-BCh]
  _OWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t v20[264]; // [rsp+70h] [rbp-90h] BYREF

  v16 = *(_QWORD *)L"Custom";
  v17 = *(_DWORD *)L"om";
  v18 = aCustom[6];
  v19[0] = *(_OWORD *)L"Custom\\Custom64";
  v19[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v15 = -1;
  *a1 = 0;
  v8 = &v16;
  v20[0] = 0;
  v14[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v15, v14, a4);
  v10 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v14[0] == 9 || v14[0] == 12 )
      v8 = (__int64 *)v19;
    if ( !a3 )
      a3 = &word_1800BBB1C;
    ProcessHostGuestArchitectures = AslPathCombine(v8, a3, v20, 260LL);
    v10 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(a1, a2, v20);
    v11 = "AslPathCombine failed [%x]";
    v12 = 1253LL;
  }
  else
  {
    v11 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v12 = 1239LL;
  }
  v13 = ProcessHostGuestArchitectures;
  AslLogCallPrintf(1LL, "SdbpGetPathCustomSdbPreRS3", v12, v11, v13);
  return v10;
}
