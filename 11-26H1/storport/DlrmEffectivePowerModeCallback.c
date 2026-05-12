/*
 * XREFs of DlrmEffectivePowerModeCallback @ 0x14012CFB0
 * Callers:
 *     <none>
 * Callees:
 *     DlrmFetchOrAllocateWorkItem @ 0x14007DC8C (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x14007DCF0 (DlrmQueueWorkItemAndSignalEvent.c)
 *     DlrmGetActionFromPowerMode @ 0x14012D084 (DlrmGetActionFromPowerMode.c)
 *     DlrmTranslateSystemPowerModeToDlrmPowerMode @ 0x14012D3FC (DlrmTranslateSystemPowerModeToDlrmPowerMode.c)
 *     StorLogDLRMEffectivePowerModeCallback @ 0x14012E4F0 (StorLogDLRMEffectivePowerModeCallback.c)
 */

__int64 __fastcall DlrmEffectivePowerModeCallback(__int32 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // r14d
  unsigned int v6; // esi
  int ActionFromPowerMode; // ebp
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 WorkItem; // rax

  v2 = 0;
  v5 = 0;
  v6 = 0;
  ActionFromPowerMode = 0;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      v5 = *(_DWORD *)(a2 + 76);
      _InterlockedExchange((volatile __int32 *)(a2 + 72), a1);
      LOBYTE(v8) = (*(_BYTE *)(v8 + 111) & 8) != 0;
      v9 = DlrmTranslateSystemPowerModeToDlrmPowerMode(*(unsigned int *)(a2 + 72), v8);
      v6 = v9;
      if ( v9 != v5 && v9 )
      {
        ActionFromPowerMode = DlrmGetActionFromPowerMode(v9);
        WorkItem = DlrmFetchOrAllocateWorkItem(a2);
        if ( WorkItem )
        {
          *(_DWORD *)(WorkItem + 16) = ActionFromPowerMode;
          DlrmQueueWorkItemAndSignalEvent(a2, (struct _LIST_ENTRY *)WorkItem);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 264));
        }
        else
        {
          v2 = -1073741670;
        }
      }
    }
    else
    {
      v2 = -1073741584;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  return StorLogDLRMEffectivePowerModeCallback(a2, a1, v5, v6, ActionFromPowerMode, v2);
}
