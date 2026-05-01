/*
 * XREFs of AslPathCombine @ 0x18009EFDC
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1800916B0 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800917B0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x180091940 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x180091A90 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180091B90 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathMergeSource @ 0x180091D10 (SdbpGetPathMergeSource.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A16C0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A17F8 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x18008D074 (RtlStringCchCatW.c)
 *     RtlStringCchLengthW @ 0x18008D2FC (RtlStringCchLengthW.c)
 */

__int64 __fastcall AslPathCombine(__int64 a1, _WORD *a2, _WORD *a3, __int64 a4)
{
  int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // r15
  unsigned int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // eax
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v16 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v9 = RtlStringCchLengthW(a1, 0x7FFFFFFFLL, v15);
  if ( v9 < 0 )
    goto LABEL_23;
  v9 = RtlStringCchLengthW((__int64)a2, v10, &v16);
  if ( v9 < 0 )
    goto LABEL_23;
  if ( v15[0] )
  {
    if ( v16 )
    {
      v11 = (__int64)(a2 + 1);
      v12 = (*(_WORD *)(a1 + 2LL * v15[0] - 2) == 92) + 1;
      if ( *a2 != 92 )
        v12 = *(_WORD *)(a1 + 2LL * v15[0] - 2) == 92;
      if ( v12 <= 1 )
        v11 = (__int64)a2;
      v9 = RtlStringCchCopyW(a3, a4, a1);
      if ( v9 >= 0 )
      {
        v14 = v13 - 1;
        if ( v13 <= 1 )
          v14 = v13;
        if ( v14 || (v9 = RtlStringCchCatW(a3, a4, (__int64)L"\\"), v9 >= 0) )
        {
          v9 = RtlStringCchCatW(a3, a4, v11);
          if ( v9 >= 0 )
            return 0;
        }
      }
LABEL_23:
      AslLogCallPrintf(1LL, "AslPathCombine", 1420LL, "An RtlString API failed [%x]", v9);
      return (unsigned int)v9;
    }
    a2 = (_WORD *)a1;
LABEL_11:
    v9 = RtlStringCchCopyW(a3, a4, (__int64)a2);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_23;
  }
  if ( v16 )
    goto LABEL_11;
  *a3 = 0;
  return 0;
}
