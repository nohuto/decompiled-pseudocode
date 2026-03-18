/*
 * XREFs of NVMeControllerReset @ 0x1400175BC
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeHwResetBus @ 0x140013190 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1400169B0 (NVMeControllerAsyncResetWorker.c)
 *     IoTimeoutCallback @ 0x140023190 (IoTimeoutCallback.c)
 * Callees:
 *     NVMeIsDeviceGone @ 0x140006B90 (NVMeIsDeviceGone.c)
 *     NVMeControllerStartFailureEventLog @ 0x140007370 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     IsNVMeControllerOnFatalError @ 0x14000FBB0 (IsNVMeControllerOnFatalError.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x140016168 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x140016A30 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x1400180AC (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x140019374 (NvmSubsystemReset.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 *     ResumeIrpCommands @ 0x14002DC2C (ResumeIrpCommands.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v2; // r15
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // r9
  char v13; // al
  __int64 i; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v19; // [rsp+70h] [rbp-59h] BYREF
  int v20; // [rsp+80h] [rbp-49h]
  int v21; // [rsp+88h] [rbp-41h]
  int v22; // [rsp+8Ch] [rbp-3Dh]
  _DWORD v23[24]; // [rsp+90h] [rbp-39h] BYREF

  v2 = 0;
  v19 = 0LL;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 0) )
    return 1;
  *(_DWORD *)(a1 + 24) |= 0x80000u;
  StorPortPause(a1, 120LL);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), 4u);
  v7 = *(unsigned int *)(a1 + 156);
  if ( (_DWORD)v7 )
    StorPortExtendedFunction(81LL, a1, v7, v6);
  *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
  NVMeCancelAllCompletionQueueDpc(a1);
  v9 = *(unsigned int *)(a1 + 156);
  if ( (_DWORD)v9 )
    StorPortExtendedFunction(81LL, a1, v9, v8);
  NVMeControllerCompleteAllIORequests(a1, 14, v9, v8);
  if ( NVMeIsDeviceGone(a1) )
    goto LABEL_8;
  IsNVMeControllerOnFatalError(v10);
  if ( a2 )
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 192), 0x24u) || !(unsigned __int8)NvmSubsystemReset(a1) )
    {
LABEL_8:
      v11 = 0;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 )
      *(_BYTE *)(a1 + 3728) |= 4u;
    goto LABEL_16;
  }
  if ( !(unsigned int)ControllerReset(a1, 0) )
  {
    *(_BYTE *)(a1 + 3728) &= ~4u;
LABEL_16:
    v11 = NVMeControllerReinitialize(a1);
    goto LABEL_30;
  }
  v11 = 0;
  v18[0] = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x1840) != 0 && !(unsigned int)StorPortExtendedFunction(109LL, a1, v18, v12) && !v18[0] )
  {
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    if ( (*(_DWORD *)(a1 + 56) & 0x40) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 0LL))
      || (*(_DWORD *)(a1 + 56) & 0x800) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 2LL))
      || (*(_DWORD *)(a1 + 56) & 0x1000) != 0
      && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 1LL)) )
    {
      v11 = 1;
      goto LABEL_30;
    }
    v13 = *(_BYTE *)(a1 + 3728);
    if ( (v13 & 4) != 0 )
      *(_BYTE *)(a1 + 3728) = v13 & 0xFB;
  }
  v2 = 1;
LABEL_30:
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
  {
    v15 = *(_QWORD *)(a1 + 8 * i + 1672);
    if ( v15 )
    {
      if ( !a2 )
        ++*(_DWORD *)(v15 + 40);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 1672) + 44LL);
    }
  }
  v16 = *(_DWORD *)(a1 + 24);
  if ( (v16 & 0x10) != 0 )
    *(_DWORD *)(a1 + 24) = v16 & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 3748) &= ~1u;
  StorPortResume(a1);
  ResumeIrpCommands(a1);
  v17 = a1;
  if ( v11 )
  {
    *(_QWORD *)&v19 = v19 | 0x200;
    goto LABEL_42;
  }
  NVMeControllerStartFailureEventLog(a1);
  if ( v2 )
  {
    memset(v23, 0, 0x58uLL);
    FillControllerRuntimeLog(a1, v23);
    v21 = *(_DWORD *)(a1 + 24);
    v22 = *(_DWORD *)(a1 + 28);
    v20 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
    *(_QWORD *)&v19 = v19 | 0x400;
    v17 = a1;
LABEL_42:
    SendNVMeEventNotification(v17, &v19, 0LL, 0LL);
  }
  *(_DWORD *)(a1 + 24) &= ~0x80000u;
  return v11;
}
