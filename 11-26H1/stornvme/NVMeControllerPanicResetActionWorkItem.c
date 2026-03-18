/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x140024790
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x140007370 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x140016168 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x140016A30 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x1400180AC (NVMeHardwareReset.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 *     ResumeIrpCommands @ 0x14002DC2C (ResumeIrpCommands.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeControllerPanicResetActionWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // r9
  bool v7; // zf
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // al
  __int64 i; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int128 v22; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v23[24]; // [rsp+80h] [rbp-29h] BYREF

  v5 = 0;
  memset(v23, 0, 0x58uLL);
  v7 = (*(_DWORD *)(a1 + 24) & 0x8008) == 0;
  v22 = 0LL;
  if ( v7 && *(_QWORD *)(a1 + 3936) && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 0) )
  {
    *(_DWORD *)(a1 + 24) |= 0x40000u;
    StorPortPause(a1, 120LL);
    *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
    v9 = *(unsigned int *)(a1 + 156);
    if ( (_DWORD)v9 )
      StorPortExtendedFunction(81LL, a1, v9, v8);
    *(_DWORD *)(a1 + 24) |= 0x10u;
    NVMeCancelAllCompletionQueueDpc(a1);
    v11 = *(unsigned int *)(a1 + 156);
    if ( (_DWORD)v11 )
      StorPortExtendedFunction(81LL, a1, v11, v10);
    NVMeControllerCompleteAllIORequests(a1, 14, v11, v10);
    v13 = 10000000LL;
    v14 = 1000 * **(unsigned __int16 **)(a1 + 3936);
    if ( v14 < 0x989680 )
      v13 = v14;
    StorPortExtendedFunction(81LL, a1, v13, v12);
    StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 3936) + 2LL) & 1) == 0 || (unsigned int)ControllerReset(a1, 0) )
    {
      v16 = *(_QWORD *)(a1 + 3936);
      *(_DWORD *)(a1 + 24) &= ~0x10u;
      if ( (*(_BYTE *)(v16 + 2) & 4) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 0, v15))
        || (*(_BYTE *)(*(_QWORD *)(a1 + 3936) + 2LL) & 0x20) != 0
        && (*(_DWORD *)(a1 + 56) & 0x800) != 0
        && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 2u, v15))
        || (*(_BYTE *)(*(_QWORD *)(a1 + 3936) + 2LL) & 0x10) != 0
        && (*(_DWORD *)(a1 + 56) & 0x1000) != 0
        && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 1u, v15)) )
      {
        v5 = 1;
      }
      else
      {
        v17 = *(_BYTE *)(a1 + 3728);
        if ( (v17 & 4) != 0 )
          *(_BYTE *)(a1 + 3728) = v17 & 0xFB;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 3728) &= ~4u;
      v5 = NVMeControllerReinitialize(a1);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v19 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v19 )
        ++*(_DWORD *)(v19 + 44);
    }
    v20 = *(_DWORD *)(a1 + 3748);
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    *(_DWORD *)(a1 + 3748) = v20 & 0xFFFFFFFE;
    StorPortResume(a1);
    ResumeIrpCommands(a1);
    if ( v5 )
    {
      ++*(_DWORD *)(a1 + 4136);
      goto LABEL_32;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeControllerStartFailureEventLog(a1);
      FillControllerRuntimeLog(a1, v23);
      StorPortNotification(4109LL, a1, 0LL);
      *(_QWORD *)&v22 = v22 | 0x400;
      SendNVMeEventNotification(a1, &v22, 0LL, 0LL);
    }
  }
  ++*(_DWORD *)(a1 + 4140);
LABEL_32:
  *(_DWORD *)(a1 + 24) &= ~0x40000u;
  return StorPortExtendedFunction(31LL, a1, a3, v6);
}
