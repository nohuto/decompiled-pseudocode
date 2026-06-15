/*
 * XREFs of sub_140078EFC @ 0x140078EFC
 * Callers:
 *     sub_14007F550 @ 0x14007F550 (sub_14007F550.c)
 *     sub_14007F5F0 @ 0x14007F5F0 (sub_14007F5F0.c)
 *     sub_14007F810 @ 0x14007F810 (sub_14007F810.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140078EFC(__int64 a1)
{
  signed __int32 v1; // ecx
  __int64 result; // rax
  signed __int32 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v3 = -2;
  _InterlockedCompareExchange(&v3, v1, -2);
  if ( v3 == 4 )
  {
    RoOriginateError(2147483662LL, 0LL);
    return 2147483662LL;
  }
  else
  {
    result = 0LL;
    if ( v3 == -1 )
      return 2147483673LL;
  }
  return result;
}
