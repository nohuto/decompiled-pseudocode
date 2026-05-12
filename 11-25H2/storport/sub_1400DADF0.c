/*
 * XREFs of sub_1400DADF0 @ 0x1400DADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1400DADF0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v5; // r9
  unsigned __int16 *v6; // rdx
  unsigned __int16 *v7; // r8
  bool v8; // r11
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r8
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a2 )
    return 0;
  if ( *(_DWORD *)a2 != 1314275652 )
    return 0;
  if ( (*(_DWORD *)(a2 + 144) & 0x80) == 0 )
    return 0;
  v5 = *(_QWORD *)(a2 + 1136);
  if ( a3 > *(_WORD *)(v5 + 26) )
    return 0;
  if ( *(_DWORD *)(v5 + 908) > 1u )
  {
    if ( a3 )
      v6 = (unsigned __int16 *)(((unsigned __int64)a3 << 7) + *(_QWORD *)(v5 + 864) - 128LL);
    else
      v6 = *(unsigned __int16 **)(v5 + 856);
    v7 = (unsigned __int16 *)(*(_QWORD *)v6 + 16LL * v6[17]);
    v8 = (v7[7] & 1) != v6[18];
    goto LABEL_14;
  }
  v6 = *(unsigned __int16 **)(v5 + 856);
  v7 = (unsigned __int16 *)(16LL * v6[17] + *(_QWORD *)v6);
  if ( (v7[7] & 1) == v6[18] )
  {
    v8 = 0;
    v9 = 0;
    if ( *(_WORD *)(v5 + 26) )
    {
      do
      {
        v6 = (unsigned __int16 *)(*(_QWORD *)(v5 + 864) + ((unsigned __int64)v9 << 7));
        v7 = (unsigned __int16 *)(16LL * v6[17] + *(_QWORD *)v6);
        if ( (v7[7] & 1) != v6[18] )
          goto LABEL_15;
      }
      while ( ++v9 < *(unsigned __int16 *)(v5 + 26) );
    }
LABEL_14:
    if ( v8 )
      goto LABEL_15;
    return 0;
  }
LABEL_15:
  v10 = *(_QWORD *)(a2 + 1136);
  v11 = v7[6];
  if ( a3 )
    v12 = 192LL * v7[5] + *(_QWORD *)(v10 + 728) - 192LL;
  else
    v12 = *(_QWORD *)(v10 + 712);
  if ( *(_DWORD *)(v10 + 904) != 3 )
  {
    *(_DWORD *)(*(_QWORD *)(v10 + 920) + 12LL) = 1 << *((_BYTE *)v6 + 24);
    _InterlockedOr(v14, 0);
  }
  KeInsertQueueDpc(
    (PRKDPC)(*((_QWORD *)v6 + 8)
           + ((unsigned __int64)*(unsigned __int16 *)((v11 << 7) + *(_QWORD *)(v12 + 32) + 52) << 6)),
    v6,
    (PVOID)v10);
  return 1;
}
