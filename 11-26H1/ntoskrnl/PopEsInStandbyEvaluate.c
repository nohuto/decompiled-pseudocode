/*
 * XREFs of PopEsInStandbyEvaluate @ 0x14094683C
 * Callers:
 *     PopEsInStandbyLowPowerEpochCallback @ 0x140946710 (PopEsInStandbyLowPowerEpochCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140B722C0 (PopEsInStandbyAcDcCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopGetPowerSettingValue @ 0x1404CF78C (PopGetPowerSettingValue.c)
 *     PopTraceEsBgActivityPolicyUpdate @ 0x1407D58C8 (PopTraceEsBgActivityPolicyUpdate.c)
 *     PopEsQueueStateEvaluation @ 0x140947B44 (PopEsQueueStateEvaluation.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140948918 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x14094A158 (ExpWnfReadStateData.c)
 */

__int64 __fastcall PopEsInStandbyEvaluate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int PowerSettingValue; // esi
  __int64 v4; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v8; // rsi
  int v9; // ebx
  int v10; // ecx
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+30h] BYREF
  int v15; // [rsp+80h] [rbp+38h] BYREF
  int v16; // [rsp+88h] [rbp+40h] BYREF

  v16 = 0;
  v12[0] = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, a2, 3, &v16, 4u, &v14);
  if ( PowerSettingValue >= 0 )
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v2, 3, &v15, 4u, &v14);
    if ( PowerSettingValue >= 0 )
    {
      Blink = PopModernStandbyStateNotify.ThreadListEntry.Blink;
      v6 = 1;
      v14 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(v4, Blink);
      if ( v8 )
      {
        v9 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *, _QWORD, _DWORD *, char *, unsigned int, unsigned int *))ExpWnfReadStateData)(
               v8,
               0LL,
               v12,
               &v13,
               v14,
               &v14);
        ExReleaseRundownProtection_0(v8 + 1);
        PowerSettingValue = 0;
        if ( v9 < 0 )
          PowerSettingValue = v9;
        KeLeaveCriticalRegion();
        if ( PowerSettingValue >= 0 && v14 )
        {
          if ( !v15 || v16 != 1 || v13 || (unk_140F10F10 & 1) != 0 )
            v6 = 0;
          v10 = PopEsBgActivityPolicy;
          if ( PopEsBgActivityPolicy != v6 )
          {
            PopEsBgActivityPolicy = v6;
            PopTraceEsBgActivityPolicyUpdate(v10);
            PopEsQueueStateEvaluation(0LL);
          }
        }
      }
      else
      {
        KeLeaveCriticalRegion();
        return (unsigned int)-1073741772;
      }
    }
  }
  return (unsigned int)PowerSettingValue;
}
