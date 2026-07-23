/*
 * XREFs of PopAssociateThermalRequest @ 0x1407CE88C
 * Callers:
 *     PoCreateThermalRequest @ 0x1407CE5F0 (PoCreateThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopAcquireCoolingInterface @ 0x1407CE800 (PopAcquireCoolingInterface.c)
 *     PopCleanCoolingExtension @ 0x1407CEA70 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1407CEF78 (PopRegisterCoolingExtensionProtection.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC37E0 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC398C (PopDiagTraceThermalRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  _QWORD *v20; // rax
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock, v7, v9, v10);
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_11;
  PopReleaseRwLock((struct _KTHREAD *)&PopCoolingExtensionLock);
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock, v17, v18, v19);
    if ( !*(_QWORD *)(Dope + 64) )
    {
      v20 = (_QWORD *)qword_140F0FEB8;
      if ( *(__int64 **)qword_140F0FEB8 != &PopCoolingExtensionList )
        goto LABEL_14;
      *v6 = &PopCoolingExtensionList;
      v6[1] = v20;
      *v20 = v6;
      qword_140F0FEB8 = (__int64)v6;
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
        PopReleaseRwLock((struct _KTHREAD *)&PopCoolingExtensionLock);
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
