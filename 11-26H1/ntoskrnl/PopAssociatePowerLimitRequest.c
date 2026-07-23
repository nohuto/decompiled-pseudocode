/*
 * XREFs of PopAssociatePowerLimitRequest @ 0x1407CD8A0
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x1407CD340 (PoCreatePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     PopCleanPowerLimitExtension @ 0x140606490 (PopCleanPowerLimitExtension.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CD7E4 (PopAcquirePowerLimitInterface.c)
 *     PopQueryPowerLimitAttributes @ 0x1407CE318 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x1407CE484 (PopRegisterTargetDeviceProtection.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D711C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D74B0 (PopDiagTracePowerLimitRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociatePowerLimitRequest(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 Dope; // rbp
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 Pool2; // rax
  int PowerLimitAttributes; // ebx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 i; // r10
  __int64 v28; // rdx

  v4 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, v5, v7, v8);
  if ( *(_QWORD *)(Dope + 72) )
    goto LABEL_11;
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
  Pool2 = ExAllocatePool2(0x100uLL);
  v4 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v14 = (_QWORD *)(Pool2 + 16);
    v14[1] = v14;
    *v14 = v14;
    v4[5] = 0LL;
    v4[4] = 0LL;
    v4[7] = a2;
    PowerLimitAttributes = PopAcquirePowerLimitInterface((__int64)v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_22;
    PowerLimitAttributes = PopQueryPowerLimitAttributes(v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_22;
    PowerLimitAttributes = PopRegisterTargetDeviceProtection(v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_22;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, v15, v16, v17);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v18 = (_QWORD *)qword_140F0FED8;
      if ( *(__int64 **)qword_140F0FED8 != &PopPowerLimitExtensionList )
        goto LABEL_17;
      *v4 = &PopPowerLimitExtensionList;
      v4[1] = v18;
      *v18 = v4;
      qword_140F0FED8 = (__int64)v4;
      *(_QWORD *)(Dope + 72) = v4;
      *((_BYTE *)v4 + 48) = 1;
      PopDiagTracePowerLimitExtension(v4, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
      v4 = 0LL;
    }
LABEL_11:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 72) + 32LL), v9, v10, v11);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(Dope + 72) + 72LL);
    v19 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 40) = v19;
    if ( !v19 || (v20 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a1 + 56) = v20) == 0LL) )
    {
      v21 = *(_QWORD *)(Dope + 72);
      PowerLimitAttributes = -1073741670;
      if ( v21 )
        PopReleaseRwLock((struct _KTHREAD *)(v21 + 32));
      PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
      goto LABEL_21;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(Dope + 72);
    v22 = *(_QWORD *)(Dope + 72) + 16LL;
    v23 = *(_QWORD **)(*(_QWORD *)(Dope + 72) + 24LL);
    if ( *v23 == v22 )
    {
      *(_QWORD *)a1 = v22;
      *(_QWORD *)(a1 + 8) = v23;
      *v23 = a1;
      *(_QWORD *)(v22 + 8) = a1;
      memmove(*(void **)(a1 + 40), *(const void **)(*(_QWORD *)(a1 + 64) + 88LL), 16LL * *(unsigned int *)(a1 + 32));
      v26 = 0LL;
      for ( i = MEMORY[0xFFFFF78000000008];
            (unsigned int)v26 < *(_DWORD *)(a1 + 32);
            *(_QWORD *)(104 * v25 + *(_QWORD *)(a1 + 56)) = i )
      {
        v28 = 2LL * (unsigned int)v26;
        v25 = (unsigned int)v26;
        v26 = (struct _KLOCK_ENTRIES *)(unsigned int)((_DWORD)v26 + 1);
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v28 + 8) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v28 + 12) = -1;
        v24 = 104 * v25;
      }
      *(_BYTE *)(a1 + 16) = 1;
      *(_BYTE *)(a1 + 48) = 1;
      PopThermalUpdateTelemetryClientCount(1, v24, v25, v26);
      PopDiagTracePowerLimitRequest(a1, POP_ETW_EVENT_POWER_LIMIT_REQUEST_ADD);
      PopReleaseRwLock((struct _KTHREAD *)(*(_QWORD *)(Dope + 72) + 32LL));
      PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
      PowerLimitAttributes = 0;
LABEL_21:
      if ( !v4 )
        return (unsigned int)PowerLimitAttributes;
LABEL_22:
      PopCleanPowerLimitExtension(v4, v15);
      return (unsigned int)PowerLimitAttributes;
    }
LABEL_17:
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}
