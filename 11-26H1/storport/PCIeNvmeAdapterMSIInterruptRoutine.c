/*
 * XREFs of PCIeNvmeAdapterMSIInterruptRoutine @ 0x14003E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PCIeNvmeAdapterMSIInterruptRoutine(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // r11
  unsigned __int16 *v5; // r10
  unsigned __int16 *v6; // r9
  bool v7; // bl
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // edi
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a2 )
    return 0;
  if ( *(_DWORD *)a2 != 1314275652 )
    return 0;
  if ( (*(_DWORD *)(a2 + 144) & 0x80) == 0 )
    return 0;
  v4 = *(_QWORD *)(a2 + 1152);
  if ( a3 > *(_WORD *)(v4 + 26) )
    return 0;
  if ( *(_DWORD *)(v4 + 908) <= 1u )
  {
    v5 = *(unsigned __int16 **)(v4 + 856);
    v6 = (unsigned __int16 *)(*(_QWORD *)v5 + 16LL * v5[17]);
    if ( (v6[7] & 1) != v5[18] )
      goto LABEL_11;
    v7 = 0;
    v11 = 0;
    if ( *(_WORD *)(v4 + 26) )
    {
      do
      {
        v5 = (unsigned __int16 *)(*(_QWORD *)(v4 + 864) + ((unsigned __int64)v11 << 7));
        v6 = (unsigned __int16 *)(*(_QWORD *)v5 + 16LL * v5[17]);
        if ( (v6[7] & 1) != v5[18] )
          goto LABEL_11;
      }
      while ( ++v11 < *(unsigned __int16 *)(v4 + 26) );
    }
  }
  else
  {
    v5 = a3
       ? (unsigned __int16 *)(((unsigned __int64)a3 << 7) + *(_QWORD *)(v4 + 864) - 128LL)
       : *(unsigned __int16 **)(v4 + 856);
    v6 = (unsigned __int16 *)(16LL * v5[17] + *(_QWORD *)v5);
    v7 = (v6[7] & 1) != v5[18];
  }
  if ( !v7 )
    return 0;
LABEL_11:
  v8 = *(_QWORD *)(a2 + 1152);
  v9 = v6[6];
  if ( a3 )
    v10 = 192LL * v6[5] + *(_QWORD *)(v8 + 728) - 192LL;
  else
    v10 = *(_QWORD *)(v8 + 712);
  if ( *(_DWORD *)(v8 + 904) != 3 )
  {
    *(_DWORD *)(*(_QWORD *)(v8 + 920) + 12LL) = 1 << *((_BYTE *)v5 + 24);
    _InterlockedOr(v12, 0);
  }
  KeInsertQueueDpc(
    (PRKDPC)(*((_QWORD *)v5 + 8) + ((unsigned __int64)*(unsigned __int16 *)((v9 << 7) + *(_QWORD *)(v10 + 32) + 52) << 6)),
    v5,
    (PVOID)v8);
  return 1;
}
