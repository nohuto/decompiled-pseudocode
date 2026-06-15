/*
 * XREFs of sub_14000E3CC @ 0x14000E3CC
 * Callers:
 *     sub_14000D810 @ 0x14000D810 (sub_14000D810.c)
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 * Callees:
 *     sub_14000E4A8 @ 0x14000E4A8 (sub_14000E4A8.c)
 *     sub_14000E5B8 @ 0x14000E5B8 (sub_14000E5B8.c)
 *     sub_14000E7B8 @ 0x14000E7B8 (sub_14000E7B8.c)
 *     sub_14002AC50 @ 0x14002AC50 (sub_14002AC50.c)
 */

__int64 __fastcall sub_14000E3CC(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  int v5; // edi
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
    v5 = sub_14000E4A8(a1, a2, v4, *(unsigned __int16 *)(a1 + 112) ^ 1u);
    if ( v5 >= 0 )
    {
      sub_14000E5B8(a1);
      v5 = sub_14000E4A8(a1, a2, v6, *(unsigned __int16 *)(a1 + 112) ^ 1u);
      if ( v5 < 0 )
      {
        sub_14000E5B8(a1);
        v8 = sub_14002AC50(a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL), &v10);
        sub_14000E7B8(v9, v8);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v5;
}
