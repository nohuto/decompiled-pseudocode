/*
 * XREFs of PopAssociateThermalRequest @ 0x1407CB7EC
 * Callers:
 *     PoCreateThermalRequest @ 0x1407CB550 (PoCreateThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140438170 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     PopAcquireCoolingInterface @ 0x1407CB760 (PopAcquireCoolingInterface.c)
 *     PopCleanCoolingExtension @ 0x1407CB9D0 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1407CBED8 (PopRegisterCoolingExtensionProtection.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC1740 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC18EC (PopDiagTraceThermalRequest.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 Dope; // rbp
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 Pool2; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  struct _LIST_ENTRY *Blink; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SavedApcState.Process, v7, v9, v10);
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_11;
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
  Pool2 = ExAllocatePool2(0x100uLL);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v16 = (_QWORD *)(Pool2 + 16);
    v16[1] = v16;
    *v16 = v16;
    v6[5] = 0LL;
    v6[4] = 0LL;
    *((_BYTE *)v6 + 66) = 100;
    v6[6] = a2;
    v11 = PopAcquireCoolingInterface((__int64)v6);
    if ( v11 < 0 )
      goto LABEL_21;
    *((_BYTE *)v6 + 64) = 1;
    if ( a3 )
    {
      v11 = PopRegisterCoolingExtensionProtection(v6);
      if ( v11 < 0 )
        goto LABEL_21;
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SavedApcState.Process, v17, v18, v19);
    if ( !*(_QWORD *)(Dope + 64) )
    {
      Blink = stru_140F10828.SavedApcState.ApcListHead[1].Blink;
      if ( stru_140F10828.SavedApcState.ApcListHead[1].Blink->Flink != (struct _LIST_ENTRY *)&stru_140F10828.SavedApcStateFill[16] )
        goto LABEL_14;
      *v6 = &stru_140F10828.SavedApcState.ApcListHead[1];
      v6[1] = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v6;
      stru_140F10828.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)v6;
      *(_QWORD *)(Dope + 64) = v6;
      PopDiagTraceCoolingExtension(v6, POP_ETW_EVENT_COOLING_EXTENSION_ADD);
      v6 = 0LL;
      goto LABEL_13;
    }
LABEL_11:
    if ( a3 )
    {
      v11 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64));
      if ( v11 < 0 )
      {
LABEL_20:
        PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
        if ( !v6 )
          return (unsigned int)v11;
LABEL_21:
        PopCleanCoolingExtension(v6);
        return (unsigned int)v11;
      }
    }
LABEL_13:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 64) + 32LL), v12, v13, v14);
    v21 = *(_QWORD *)(Dope + 64);
    *(_QWORD *)(a1 + 32) = v21;
    v22 = v21 + 16;
    v23 = *(_QWORD **)(v22 + 8);
    if ( *v23 != v22 )
LABEL_14:
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = v23;
    *(_QWORD *)a1 = v22;
    *v23 = a1;
    *(_QWORD *)(v22 + 8) = a1;
    *(_BYTE *)(a1 + 18) = 1;
    PopDiagTraceThermalRequest(a1, POP_ETW_EVENT_THERMAL_REQUEST_ADD);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
      PopThermalUpdateTelemetryClientCount(1, v24, v25, v26);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL) )
      *(_BYTE *)(a1 + 41) = 1;
    PopReleaseRwLock((struct _KTHREAD *)(*(_QWORD *)(Dope + 64) + 32LL));
    v11 = 0;
    goto LABEL_20;
  }
  return (unsigned int)-1073741670;
}
