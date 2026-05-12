/*
 * XREFs of sub_140075FA8 @ 0x140075FA8
 * Callers:
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 * Callees:
 *     sub_14006B2F4 @ 0x14006B2F4 (sub_14006B2F4.c)
 *     sub_14017BF24 @ 0x14017BF24 (sub_14017BF24.c)
 */

__int64 __fastcall sub_140075FA8(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // r14
  int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = a1 + 912;
  v3 = 0x80000000;
  v4 = a1 + 880;
  do
  {
    v7 = sub_14006B2F4(
           v4,
           v3,
           *(_QWORD *)(a1 + 4296),
           *(_QWORD *)(a1 + 4288),
           *(_QWORD *)(a1 + 4304),
           *(_DWORD *)(a1 + 4280),
           *a2,
           v2);
    if ( v7 >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 920);
      *(_QWORD *)(a1 + 4296) = v10 & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4288) = v10 | 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x8000000 );
  if ( *a2 == 0x80000000 )
    return (unsigned int)v7;
  v8 = 0x80000000;
  while ( 1 )
  {
    v7 = sub_14006B2F4(
           v4,
           v8,
           *(_QWORD *)(a1 + 4296),
           *(_QWORD *)(a1 + 4288),
           *(_QWORD *)(a1 + 4304),
           *(_DWORD *)(a1 + 4280),
           0x80000000,
           v2);
    if ( v7 >= 0 )
      break;
    v8 >>= 1;
    if ( v8 < 0x8000000 )
      return (unsigned int)v7;
  }
  v9 = *(_QWORD *)(a1 + 920);
  *a2 = 0x80000000;
  *(_QWORD *)(a1 + 4296) = v9 & 0xFFFFFFFF00000000uLL;
  *(_QWORD *)(a1 + 4288) = v9 | 0xFFFFFFFFLL;
LABEL_11:
  sub_14017BF24(v4, v2);
  return (unsigned int)v7;
}
