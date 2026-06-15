/*
 * XREFs of sub_14000DB20 @ 0x14000DB20
 * Callers:
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_14000C330 @ 0x14000C330 (sub_14000C330.c)
 *     sub_14000C4E4 @ 0x14000C4E4 (sub_14000C4E4.c)
 *     sub_14000D020 @ 0x14000D020 (sub_14000D020.c)
 * Callees:
 *     sub_14000DC30 @ 0x14000DC30 (sub_14000DC30.c)
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

char __fastcall sub_14000DB20(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  void *v9; // rbp
  const void *v10; // rdx
  size_t v11; // r8
  unsigned int v12; // esi
  __int64 v14; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v6 = (void *)o_calloc(a2, 8LL);
    v9 = v6;
    if ( v6 )
    {
      v10 = *(const void **)a1;
      v11 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v11 )
      {
        if ( !v10 )
        {
          v12 = 22;
          *(_DWORD *)o__errno(v7, 0LL, v11, v8) = 22;
          o__invalid_parameter_noinfo();
          goto LABEL_13;
        }
        memcpy(v6, v10, v11);
      }
      v12 = 0;
LABEL_13:
      sub_14000DC30(v12, v10, v11, v8);
      _o_free(*(_QWORD *)a1);
      *(_QWORD *)a1 = v9;
LABEL_14:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  else
  {
    if ( v5 > a2 )
      a2 = v5;
    v14 = o_calloc(a2, 8LL);
    *(_QWORD *)a1 = v14;
    if ( v14 )
      goto LABEL_14;
  }
  return 0;
}
