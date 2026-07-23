/*
 * XREFs of LdrpMapDllRetry @ 0x18007D9B0
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpGetNtPathFromDosPath @ 0x18007C310 (LdrpGetNtPathFromDosPath.c)
 *     LdrpFindExistingModule @ 0x18007C62C (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllRetry(__int64 a1)
{
  __int64 v2; // r9
  int v3; // r8d
  __m128i *v4; // rsi
  int ExistingModule; // ebx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  memset_thunk_772440563353939046(&v8, 0, 0x110uLL);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 32);
  v8.Buffer = v9;
  *(_DWORD *)&v8.Length = 0x1000000;
  v4 = (__m128i *)(v2 + 72);
  v9[0] = 0;
  ExistingModule = LdrpFindExistingModule(
                     (PUNICODE_STRING)(v2 + 88),
                     (PUNICODE_STRING)(v2 + 72),
                     v3,
                     *(_DWORD *)(v2 + 264),
                     &v7);
  if ( v7 )
  {
    LdrpLoadContextReplaceModule(a1, v7);
  }
  else
  {
    ExistingModule = LdrpGetNtPathFromDosPath(v4, &v8);
    if ( ExistingModule >= 0 )
      ExistingModule = LdrpMapDllNtFileName(a1, &v8);
  }
  if ( v9 != v8.Buffer )
    RtlpSysVolFree(v8.Buffer);
  return (unsigned int)ExistingModule;
}
