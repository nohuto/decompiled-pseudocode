/*
 * XREFs of sub_1400D1DC4 @ 0x1400D1DC4
 * Callers:
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 * Callees:
 *     sub_14002A740 @ 0x14002A740 (sub_14002A740.c)
 */

__int64 __fastcall sub_1400D1DC4(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  char v5; // al
  __int64 *v6; // rbx
  unsigned int v7; // r10d
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0;
  if ( !*(_QWORD *)(a2 + 160) || !*(_QWORD *)(a2 + 104) )
    return 0LL;
  v5 = *(_BYTE *)(a1 + 265);
  v6 = (__int64 *)(v2 + 64);
  if ( v5 == 3 || !*v6 && *(_DWORD *)(v2 + 60) )
    goto LABEL_17;
  if ( v5 == 2 )
  {
    if ( *(_BYTE *)(v2 + 2) == 40 )
    {
      v7 = *(_DWORD *)(v2 + 56);
      if ( v7 )
      {
        for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
        {
          v9 = *(unsigned int *)(v2 + 4 * i + 120);
          if ( (unsigned int)v9 >= 0x80 && (unsigned int)v9 < *(_DWORD *)(v2 + 16) )
          {
            v10 = v2 + v9;
            if ( *(_DWORD *)(v2 + v9) == 67 )
              goto LABEL_16;
          }
        }
      }
    }
    v10 = 0LL;
LABEL_16:
    if ( (unsigned int)(unsigned __int8)*(_DWORD *)(v10 + 16) - 1 > 1 )
    {
LABEL_17:
      v11 = *(_QWORD *)(a2 + 160);
      v12 = *v6;
      v16 = *v6;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        v14 = sub_14002A740(v13, v12, *(_BYTE *)(v11 + 64) != 0 ? 16 : 32, &v16);
        v12 = v16;
        v3 = v14;
      }
      if ( v3 >= 0 )
      {
        *v6 = v12;
        *(_BYTE *)(a2 + 17) |= 0x40u;
      }
    }
  }
  return (unsigned int)v3;
}
