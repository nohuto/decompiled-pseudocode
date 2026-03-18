/*
 * XREFs of sub_14000C070 @ 0x14000C070
 * Callers:
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 *     sub_1400183B0 @ 0x1400183B0 (sub_1400183B0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14000C070(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v9 = 0LL;
  if ( a2 >= 0 && (_mm_lfence(), (v4 = *(_QWORD *)(a1 + 8LL * a2 + 3816)) != 0) )
  {
    StorPortExtendedFunction(47LL, a1, &v9, v8);
    v5 = 0LL;
    if ( v9 )
      v5 = 10000 * (1000 * (v8[0] % v9) % v9) / v9 + 10000 * (1000 * (v8[0] / v9) + 1000 * (v8[0] % v9) / v9);
    v6 = *(_QWORD *)(v4 + 8);
    if ( v5 - v6 < *(_QWORD *)(v4 + 16) && v6 )
    {
      ++*(_DWORD *)(v4 + 24);
      return 0;
    }
    else
    {
      *(_QWORD *)(v4 + 8) = v5;
      if ( a3 )
        *a3 = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 24) = 0;
      return 1;
    }
  }
  else
  {
    if ( a3 )
      *a3 = 0;
    return 1;
  }
}
