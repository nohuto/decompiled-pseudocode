/*
 * XREFs of sub_1400D7168 @ 0x1400D7168
 * Callers:
 *     sub_14012702C @ 0x14012702C (sub_14012702C.c)
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 *     sub_1401929D8 @ 0x1401929D8 (sub_1401929D8.c)
 * Callees:
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 *     sub_1400D7410 @ 0x1400D7410 (sub_1400D7410.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_1400F2658 @ 0x1400F2658 (sub_1400F2658.c)
 *     sub_1400F2F70 @ 0x1400F2F70 (sub_1400F2F70.c)
 */

__int64 __fastcall sub_1400D7168(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // eax
  struct _ERESOURCE *v11; // r13
  char v12; // bp
  _QWORD *v13; // r14
  _QWORD *v14; // rsi
  int v15; // ecx

  v2 = *(_QWORD *)(a1 + 400);
  v5 = 0;
  v6 = 0;
  if ( !v2 || !*(_QWORD *)(a1 + 408) )
    return (unsigned int)v5;
  if ( (*(_DWORD *)(v2 + 184) & 0x40000000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 416) & 0x40) == 0 )
      goto LABEL_13;
    KeEnterCriticalRegion();
    v11 = (struct _ERESOURCE *)(a1 + 1176);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
    v12 = 0;
    v13 = *(_QWORD **)(a1 + 1288);
    if ( v13 == (_QWORD *)(a1 + 1288) )
      goto LABEL_31;
    while ( 1 )
    {
      v14 = v13 - 14;
      if ( *(_DWORD *)(*(_QWORD *)(v13[145] + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(v14[159] + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(v14[159] + 40LL) + 64LL));
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v14[159] + 40LL) + 192LL), 0, 1);
      }
      sub_1400F2F70(v13 - 14);
      v15 = *(_DWORD *)(a1 + 84);
      if ( (unsigned int)(v15 - 5) <= 1 )
      {
        sub_1400F24C8(v13 - 14, 2147483657LL, 4LL);
        v5 = sub_1400F1278(v13 - 14);
        if ( v5 < 0 )
        {
          *((_DWORD *)v14 + 294) = 48;
          goto LABEL_28;
        }
      }
      else if ( v15 == 8 )
      {
        v5 = sub_1400F2658(v13 - 14);
        if ( v5 < 0 )
        {
          *((_DWORD *)v14 + 294) = 47;
LABEL_28:
          v12 = 1;
          v6 = v5;
        }
      }
      else if ( v5 < 0 )
      {
        goto LABEL_28;
      }
      v13 = (_QWORD *)*v13;
      if ( v13 == (_QWORD *)(a1 + 1288) )
      {
        v11 = (struct _ERESOURCE *)(a1 + 1176);
LABEL_31:
        ExReleaseResourceLite(v11);
        KeLeaveCriticalRegion();
        if ( v12 )
          return v6;
LABEL_13:
        if ( sub_14007197C(a1 + 168, 1) )
          return (unsigned int)sub_1400D7410(a1);
        return (unsigned int)v5;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 1136);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1272) + 40LL) + 192LL) )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v7 + 1272) + 40LL) + 128LL));
    KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v7 + 1272) + 40LL) + 64LL));
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 1272) + 40LL) + 192LL), 0, 1);
  }
  if ( a2 != 2 )
    sub_1400F2F70(*(_QWORD *)(a1 + 1136));
  v8 = *(_DWORD *)(a1 + 84);
  if ( (unsigned int)(v8 - 5) <= 1 )
  {
    v9 = sub_1400F1278(*(PVOID *)(a1 + 1136));
  }
  else
  {
    if ( v8 != 8 )
      goto LABEL_13;
    v9 = sub_1400F2658(*(PVOID *)(a1 + 1136));
  }
  v5 = v9;
  if ( v9 >= 0 )
    goto LABEL_13;
  return (unsigned int)v5;
}
