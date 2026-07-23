/*
 * XREFs of LdrQueryInLoadOrderModuleList32 @ 0x1800D4730
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList32(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, unsigned int *, __int64, __int64 *); // rax
  __int64 v9; // rcx
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = 0;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  result = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, __int64, _QWORD))a1[2])(*a1, 26LL, &v11, 8LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v11 )
    {
      v7 = *a1;
      v8 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *, __int64, __int64 *))a1[1];
      v12 = 0LL;
      result = v8(v7, v11 + 12, &v10, 4LL, &v12);
      if ( (int)result < 0 )
        return result;
      if ( v12 != 4 )
        return 2147483661LL;
      v9 = v10;
      if ( v10 )
      {
        *a2 = v10 + 12LL;
        if ( a3 )
          *a3 = v9 + 28;
      }
    }
    return 0LL;
  }
  return result;
}
