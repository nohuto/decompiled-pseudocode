/*
 * XREFs of RaidAdapterSetSystemPowerCompletion @ 0x14000F6F0
 * Callers:
 *     <none>
 * Callees:
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  __int64 RaidAdapter; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  POWER_STATE v8; // ebx
  REQUEST_POWER_COMPLETE *v9; // r9
  void *Context; // rdx
  NTSTATUS v11; // esi
  bool v12; // cl
  char v13; // r14

  v4 = 1;
  RaidAdapter = GetRaidAdapter(a1, a2, a3);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      RaidAdapter,
      a2);
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(int *)(v6 + 24);
  v8.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[v7];
  if ( *(_DWORD *)(RaidAdapter + 344) < (int)v7 )
  {
    v4 = 0;
LABEL_7:
    v9 = (REQUEST_POWER_COMPLETE *)RaidAdapterSetDevicePowerCompletionRoutine;
    Context = (void *)a2;
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(RaidAdapter + 5024) )
    goto LABEL_7;
  v9 = StorPortAdapterPoFxD0Completion;
  Context = (void *)RaidAdapter;
LABEL_8:
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v6 + 3) |= 1u;
  v11 = *(_DWORD *)(a2 + 48);
  if ( v11 >= 0 )
  {
    v12 = (_DWORD)v7 != 1 && *(_DWORD *)(RaidAdapter + 344) < (int)v7;
    *(_DWORD *)(RaidAdapter + 352) = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    v13 = 2;
    *(_BYTE *)(RaidAdapter + 356) = v12;
    *(_DWORD *)(RaidAdapter + 344) = v7;
    v11 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(RaidAdapter + 8), 2u, v8, v9, Context, 0LL);
    if ( v11 == 259 )
    {
      if ( v8.SystemState != PowerSystemWorking )
        v13 = 4;
      *(_BYTE *)(RaidAdapter + 107) |= v13;
      v11 = 0;
    }
  }
  if ( v4 || v11 < 0 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(RaidAdapter + 336));
  else
    v11 = -1073741802;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      44LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      RaidAdapter,
      a2,
      v11);
  }
  return (unsigned int)v11;
}
