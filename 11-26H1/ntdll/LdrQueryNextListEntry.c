/*
 * XREFs of LdrQueryNextListEntry @ 0x1800DF3F0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18008EE40 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800CBEC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryNextListEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64 *))(a1 + 8))(
             *(_QWORD *)a1,
             a2,
             a3,
             8LL,
             &v4);
  if ( (int)result >= 0 )
    return v4 != 8 ? 0x8000000D : 0;
  return result;
}
