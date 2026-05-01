/*
 * XREFs of SdbpGetPathMergeSource @ 0x180091D10
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x1800916B0 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathMergeSource(_WORD *a1, unsigned __int64 a2, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // eax
  unsigned int v8; // ebx
  _OWORD v9[2]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v10; // [rsp+50h] [rbp-248h]
  wchar_t v11; // [rsp+58h] [rbp-240h]
  wchar_t v12[264]; // [rsp+60h] [rbp-238h] BYREF

  v3 = a3;
  v11 = aMergesdbfiless[20];
  v9[0] = *(_OWORD *)L"\\MergeSdbFilesSource";
  v10 = *(_QWORD *)L"urce";
  v9[1] = *(_OWORD *)L"bFilesSource";
  if ( a2 < 0x15 )
    return 3221225507LL;
  *a1 = 0;
  v12[0] = 0;
  if ( !a3 )
    v3 = &word_1800BBB1C;
  v7 = AslPathCombine(v9, v3, v12, 260LL);
  v8 = v7;
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v12);
  else
    AslLogCallPrintf(1LL, "SdbpGetPathMergeSource", 1136LL, "AslPathCombine failed [%x]", v7);
  return v8;
}
