/*
 * XREFs of LdrQueryNextListEntry32 @ 0x1800FC920
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryNextListEntry32(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, __int64, __int64 *))(a1 + 8))(
             *(_QWORD *)a1,
             a2,
             &v5,
             4LL,
             &v6);
  if ( (int)result >= 0 )
  {
    if ( v6 == 4 )
    {
      result = 0LL;
      *a3 = v5;
    }
    else
    {
      return 2147483661LL;
    }
  }
  return result;
}
