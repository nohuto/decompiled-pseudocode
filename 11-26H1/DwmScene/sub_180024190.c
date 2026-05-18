/*
 * XREFs of sub_180024190 @ 0x180024190
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 *     sub_180021944 @ 0x180021944 (sub_180021944.c)
 *     sub_180021F34 @ 0x180021F34 (sub_180021F34.c)
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

int __fastcall sub_180024190(__int64 a1, _OWORD *a2)
{
  int result; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int128 v7; // xmm0
  volatile signed __int64 *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  result = memcmp(a2, &unk_1800F9CD8, 0x10uLL);
  if ( result )
  {
    v5 = sub_180021F34();
    v6 = v5;
    if ( v5 )
    {
      v7 = *a2;
      *(_QWORD *)(v5 + 152) = 127LL;
      v9 = v7;
      sub_180021944(v5, &v9);
    }
    else
    {
      v6 = 0LL;
    }
    sub_18002470C(a1 + 112, v6);
    v8 = *(volatile signed __int64 **)(a1 + 112);
    _InterlockedExchangeAdd64(v8 + 18, 0LL);
    return sub_180024250((void *)v8);
  }
  return result;
}
