/*
 * XREFs of sub_1400E9D5C @ 0x1400E9D5C
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     sub_1400EA27C @ 0x1400EA27C (sub_1400EA27C.c)
 */

__int64 __fastcall sub_1400E9D5C(_QWORD *DeferredContext, int a2)
{
  _DWORD *v2; // r14
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  __int64 v6; // rax
  ULONG i; // ebp
  unsigned __int16 *v8; // rdx
  int v9; // r15d
  struct _KTIMER *v10; // rcx
  struct _KDPC *v11; // rcx
  struct _KDPC *v12; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF

  v2 = qword_140168E40;
  v3 = 8 * a2 + 264;
  v4 = 0;
  ProcNumber = 0;
  if ( DeferredContext[138] )
    sub_1400EA27C(DeferredContext);
  v6 = sub_1400143E0(72LL, (unsigned int)(8 * v2[2]), 1414095186LL, *(_QWORD *)(DeferredContext[16] + 8LL));
  DeferredContext[138] = v6;
  if ( v6 )
  {
    for ( i = 0; i < v2[2]; ++i )
    {
      if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0 )
      {
        v8 = *(unsigned __int16 **)(56LL * i + *((_QWORD *)v2 + 4) + 48);
        if ( v8 )
          v9 = *v8;
        else
          v9 = 0x80000000;
        *(_QWORD *)(DeferredContext[138] + 8LL * i) = sub_14008ADD0(
                                                        72LL,
                                                        v3,
                                                        1414095186LL,
                                                        *(_QWORD *)(DeferredContext[16] + 8LL),
                                                        v9);
        if ( !*(_QWORD *)(DeferredContext[138] + 8LL * i) )
          goto LABEL_16;
        *(_QWORD *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 16LL) = sub_14008ADD0(
                                                                            72LL,
                                                                            64LL,
                                                                            1414095186LL,
                                                                            *(_QWORD *)(DeferredContext[16] + 8LL),
                                                                            v9);
        v10 = *(struct _KTIMER **)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 16LL);
        if ( !v10 )
          goto LABEL_16;
        KeInitializeTimer(v10);
        *(_QWORD *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL) = sub_14008ADD0(
                                                                           72LL,
                                                                           64LL,
                                                                           1414095186LL,
                                                                           *(_QWORD *)(DeferredContext[16] + 8LL),
                                                                           v9);
        v11 = *(struct _KDPC **)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL);
        if ( !v11 )
          goto LABEL_16;
        KeInitializeDpc(v11, sub_140118830, DeferredContext);
        KeSetImportanceDpc(*(PRKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL), MediumHighImportance);
        KeSetTargetProcessorDpcEx(*(PKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL), &ProcNumber);
        InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 192LL));
        *(_QWORD *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL) = sub_14008ADD0(
                                                                            72LL,
                                                                            64LL,
                                                                            1414095186LL,
                                                                            *(_QWORD *)(DeferredContext[16] + 8LL),
                                                                            v9);
        v12 = *(struct _KDPC **)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL);
        if ( !v12 )
          goto LABEL_16;
        KeInitializeDpc(v12, sub_1401176D0, DeferredContext);
        KeSetImportanceDpc(*(PRKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL), MediumHighImportance);
        KeSetTargetProcessorDpcEx(*(PKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL), &ProcNumber);
      }
    }
  }
  else
  {
LABEL_16:
    v4 = -1073741670;
    sub_1400EA27C(DeferredContext);
  }
  return v4;
}
