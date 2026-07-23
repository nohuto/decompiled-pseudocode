/*
 * XREFs of PpmIdleGuestPreselect @ 0x140614AF0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TestForceVPIdleTime__private_IsEnabledDeviceUsageNoInline @ 0x140614A4C (Feature_TestForceVPIdleTime__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned int __fastcall PpmIdleGuestPreselect(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v4; // si
  int IsEnabledDeviceUsageNoInline; // eax
  int *p_Hypervisor; // rcx
  unsigned __int64 *StatisticsPage; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned int HvTargetState; // r8d
  char v11; // dl
  unsigned int result; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  IsEnabledDeviceUsageNoInline = Feature_TestForceVPIdleTime__private_IsEnabledDeviceUsageNoInline();
  p_Hypervisor = (int *)&CurrentPrcb->PowerState.Hypervisor;
  if ( IsEnabledDeviceUsageNoInline || *p_Hypervisor < 2 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)a2;
  }
  else
  {
    StatisticsPage = CurrentPrcb->StatisticsPage;
    v8 = StatisticsPage[stru_140E3EAA8.AbCompletedIoQoSBoostCount];
    v9 = v8 - StatisticsPage[*(unsigned int *)&stru_140E3EAA8.KeReferenceCount];
  }
  HvTargetState = *(_DWORD *)(a2 + 32);
  v11 = 0;
  if ( HvTargetState != -1 )
  {
    if ( HvTargetState < 2 )
    {
LABEL_8:
      CurrentPrcb->PowerState.HvIdleCheck.Time = v8;
      CurrentPrcb->PowerState.HvIdleCheck.Idle = v9;
      goto LABEL_9;
    }
LABEL_7:
    HvTargetState = 1;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 42) && *p_Hypervisor < 2 )
    goto LABEL_7;
  v13 = *(unsigned __int8 *)(a2 + 41);
  if ( !(_BYTE)v13 || !*(_BYTE *)(a2 + 40) )
    goto LABEL_7;
  v14 = v8 - CurrentPrcb->PowerState.HvIdleCheck.Time;
  HvTargetState = CurrentPrcb->PowerState.HvTargetState;
  if ( v14 >= *(unsigned int *)(a2 + 36) )
  {
    v15 = v9 - CurrentPrcb->PowerState.HvIdleCheck.Idle;
    v16 = v14 * *(unsigned __int8 *)(a2 + 40) / 0x64;
    if ( v15 < (unsigned int)(v14 * v13 / 0x64) && CurrentPrcb->PowerState.HvTargetState )
    {
      --HvTargetState;
    }
    else if ( v15 >= (unsigned int)v16 && HvTargetState + 1 < 2 )
    {
      ++HvTargetState;
    }
    v11 = 1;
  }
  v4 = 1;
  if ( v11 )
    goto LABEL_8;
LABEL_9:
  result = HvTargetState | 0x80000000;
  CurrentPrcb->PowerState.HvTargetState = HvTargetState;
  if ( !v4 )
    return HvTargetState;
  return result;
}
