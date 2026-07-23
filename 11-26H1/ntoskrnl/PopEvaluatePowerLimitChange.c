/*
 * XREFs of PopEvaluatePowerLimitChange @ 0x1407CDC04
 * Callers:
 *     PoSetPowerLimitValue @ 0x1407CD610 (PoSetPowerLimitValue.c)
 *     PopDisablePowerLimitExtension @ 0x1407CDB28 (PopDisablePowerLimitExtension.c)
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 *     PopPowerLimitPnpNotification @ 0x1407CE1B0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x1407CE2C4 (PopPowerLimitUpdatePendingEvents.c)
 *     PopDiagTracePowerLimitExtensionValueUpdate @ 0x1407D7364 (PopDiagTracePowerLimitExtensionValueUpdate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopEvaluatePowerLimitChange(__int64 a1)
{
  int v1; // eax
  void *v2; // rbp
  unsigned int v4; // r13d
  __int64 v5; // r9
  __int64 v6; // r12
  unsigned int v7; // r10d
  unsigned int v8; // r14d
  int v9; // eax
  int v10; // ecx
  __int64 *i; // r11
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // r11d
  __int64 j; // r9
  int v17; // r10d
  unsigned __int64 k; // r8
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 Pool2; // [rsp+70h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 176);
  v2 = 0LL;
  Pool2 = 0LL;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 176) = v1 + 1;
  }
  else
  {
    while ( 1 )
    {
      v4 = 0;
      memset_0(*(void **)(a1 + 104), 0, 8LL * *(unsigned int *)(a1 + 96));
      v5 = 0LL;
      if ( !*(_DWORD *)(a1 + 72) )
        break;
      do
      {
        v6 = *(_QWORD *)(a1 + 88);
        v7 = -1;
        v8 = -1;
        v9 = *(_DWORD *)(v6 + 16LL * (unsigned int)v5);
        v10 = *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 4);
        if ( *(_BYTE *)(a1 + 48) )
        {
          for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
          {
            if ( *((_BYTE *)i + 16) )
            {
              v12 = i[5];
              v13 = *(_DWORD *)(v12 + 16LL * (unsigned int)v5 + 8);
              if ( v13 != -1
                && *(_DWORD *)(v12 + 16LL * (unsigned int)v5) == v9
                && *(_DWORD *)(v12 + 16LL * (unsigned int)v5 + 4) == v10
                && (v7 == -1 || v13 <= v7) )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 36 * v5 + 32) & 1) != 0 )
                {
                  v14 = *(_DWORD *)(v12 + 16LL * (unsigned int)v5 + 12);
                  if ( v13 != v7 || v14 != -1 && v8 >= v14 )
                    v8 = *(_DWORD *)(v12 + 16LL * (unsigned int)v5 + 12);
                }
                v9 = *(_DWORD *)(v6 + 16LL * (unsigned int)v5);
                v7 = *(_DWORD *)(v12 + 16LL * (unsigned int)v5 + 8);
                v10 = *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 4);
              }
            }
          }
        }
        if ( *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 8) != v7
          || (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 36 * v5 + 32) & 1) != 0
          && *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 12) != v8 )
        {
          *(_DWORD *)(v6 + 16LL * (unsigned int)v5 + 8) = v7;
          ++v4;
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 16LL * (unsigned int)v5 + 12) = v8;
          *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * ((unsigned __int64)(unsigned int)v5 >> 6)) |= 1LL << (v5 & 0x3F);
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a1 + 72) );
      v2 = (void *)Pool2;
      if ( !v4 )
        break;
      Pool2 = ExAllocatePool2(0x100uLL);
      v2 = (void *)Pool2;
      if ( !Pool2 )
        return;
      v15 = 0;
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 96); j = (unsigned int)(j + 1) )
      {
        v17 = 0;
        for ( k = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * j); k; k >>= 1 )
        {
          if ( (k & 1) != 0 )
          {
            v19 = 2LL * v15++;
            *(_OWORD *)(Pool2 + 8 * v19) = *(_OWORD *)(*(_QWORD *)(a1 + 88)
                                                     + 16LL * (unsigned int)(v17 + ((_DWORD)j << 6)));
          }
          ++v17;
        }
      }
      v20 = *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 176) = v20 + 1;
      PopReleaseRwLock((struct _KTHREAD *)(a1 + 32));
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 120), v4);
      PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 32), v21, v22, v23);
      if ( --*(_DWORD *)(a1 + 176) == v20 )
      {
        PopDiagTracePowerLimitExtensionValueUpdate(a1);
        PopPowerLimitUpdatePendingEvents(a1);
        goto LABEL_35;
      }
    }
    if ( !v2 )
      return;
LABEL_35:
    ExFreePoolWithTag(v2, 0x6D6C5050u);
  }
}
