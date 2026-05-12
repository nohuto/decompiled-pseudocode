/*
 * XREFs of sub_140111914 @ 0x140111914
 * Callers:
 *     sub_1401085A8 @ 0x1401085A8 (sub_1401085A8.c)
 *     sub_140108958 @ 0x140108958 (sub_140108958.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 */

__int64 __fastcall sub_140111914(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  _DWORD *v5; // rbp
  __int64 v6; // r12
  unsigned int v7; // r13d
  char v8; // r15
  char v9; // r14
  int v11; // eax
  __int64 i; // rsi
  __int64 v14; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 256);
  v4 = 0;
  v5 = qword_140168E40;
  v6 = 0LL;
  v7 = 0;
  v14 = v3;
  v8 = 0;
  v9 = a3;
  if ( a3 )
  {
    v11 = sub_1400CA35C(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL));
    v3 = v14;
    v4 = v11;
    if ( v11 < 0 )
      v9 = 0;
    else
      v8 = 1;
  }
  for ( i = 0LL; (unsigned int)i < v5[3]; i = (unsigned int)(i + 1) )
  {
    if ( v9 )
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL) + 8 * i);
    while ( **(_DWORD **)(v3 + 8 * i + 24) )
    {
      sub_14002CDD0(0x3E8u);
      v7 += 1000;
      if ( v7 >= 0x989680 )
      {
        v4 = -1073741643;
        goto LABEL_16;
      }
      v3 = v14;
    }
    if ( v9 )
      _InterlockedExchange64((volatile __int64 *)(v6 + 8LL * *(unsigned int *)(a1 + 56) + 264), 0LL);
  }
LABEL_16:
  if ( v8 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL)
                                                                        + 152LL));
  return v4;
}
