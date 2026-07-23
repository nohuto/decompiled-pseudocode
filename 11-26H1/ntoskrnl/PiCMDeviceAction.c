/*
 * XREFs of PiCMDeviceAction @ 0x14094D6E4
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpCancelDeviceActionRequest @ 0x1405DDFE4 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405DE0A8 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiCMSetProblem @ 0x14094CFF8 (PiCMSetProblem.c)
 *     _CmValidateDeviceName @ 0x14094D660 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHavePrivilege @ 0x14094DA38 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B05244 (PnpDeleteDeviceActionRequest.c)
 *     PiQueueDeviceRequest @ 0x140B63610 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeviceAction(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // r15d
  int inited; // ebx
  const WCHAR *v10; // r14
  int v11; // esi
  int v12; // r10d
  int v13; // r10d
  int v14; // esi
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v18; // rdx
  _BOOL8 v19; // r8
  int v20; // esi
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  __int64 v26; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  int v29; // [rsp+68h] [rbp-29h] BYREF
  int v30; // [rsp+6Ch] [rbp-25h] BYREF
  __int128 v31; // [rsp+70h] [rbp-21h]
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-11h]
  __int64 v33; // [rsp+90h] [rbp-1h]
  struct _KEVENT Event; // [rsp+98h] [rbp+7h] BYREF

  v33 = 0LL;
  v26 = 0LL;
  v30 = 0;
  DestinationString = 0LL;
  *a6 = 0;
  v8 = 0;
  v31 = 0LL;
  v29 = 0;
  *(_OWORD *)SourceString = 0LL;
  inited = PiCMCaptureObjectInputData(a1);
  if ( inited >= 0 )
  {
    v10 = SourceString[0];
    if ( !SourceString[0] || DWORD2(v31) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_31;
    }
    if ( HIDWORD(SourceString[1]) == 1 )
    {
      v11 = DWORD1(v31);
      if ( SDWORD1(v31) <= 0 || SDWORD1(v31) >= 7 )
        goto LABEL_30;
    }
    else
    {
      if ( HIDWORD(SourceString[1]) != 2 )
        goto LABEL_30;
      v8 = DWORD1(v31);
      if ( SDWORD1(v31) <= 0 || SDWORD1(v31) >= 3 )
        inited = -1073741811;
      v11 = 0;
      if ( inited < 0 )
        goto LABEL_31;
    }
    inited = CmValidateDeviceName((unsigned int)(HIDWORD(SourceString[1]) - 1), SourceString[0]);
    if ( inited < 0 )
      goto LABEL_31;
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_30;
      if ( !(unsigned __int8)PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        goto LABEL_55;
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
      if ( inited < 0 )
        goto LABEL_31;
      v18 = 9LL;
      v19 = v8 != 2;
    }
    else
    {
      if ( v11 != 1 && v11 != 2 )
      {
        if ( v11 == 3 || v11 == 4 || (unsigned int)(v11 - 5) <= 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
          {
            inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
            if ( inited >= 0 )
            {
              v14 = v11 - 3;
              if ( !v14 )
              {
                P = 0LL;
                memset(&Event, 0, sizeof(Event));
                v15 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1131441744LL);
                v16 = (void *)v15;
                if ( v15 && *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL) )
                {
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  inited = PnpRequestDeviceAction(v16, 0x15u, 0, 0LL, (__int64)&Event, (__int64)&v26, (__int64 *)&P);
                  if ( inited >= 0 )
                  {
                    inited = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
                    if ( inited == 257 )
                    {
                      if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(P) )
                      {
                        inited = -1073741536;
                      }
                      else
                      {
                        PnpCancelDeviceActionRequest((__int64)P, v23, v24, v25);
                        inited = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      }
                    }
                  }
                }
                else
                {
                  inited = -1073741810;
                }
                if ( P )
                  PnpDeleteDeviceActionRequest(P);
                if ( v16 )
                  ObfDereferenceObjectWithTag(v16, 0x43706E50u);
                goto LABEL_28;
              }
              v20 = v14 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 != 1 )
                  {
                    inited = -1073741811;
                    LODWORD(v26) = -1073741811;
                    goto LABEL_31;
                  }
                  v22 = 24LL;
                }
                else
                {
                  v22 = 23LL;
                }
              }
              else
              {
                v22 = 22LL;
              }
              inited = PiQueueDeviceRequest(&DestinationString, v22, 1LL);
LABEL_28:
              if ( inited >= 0 )
                inited = v26;
            }
LABEL_31:
            inited = PiCMReturnBasicResultData((unsigned int)inited, (unsigned int)v33, a3, a4, a6);
            goto LABEL_32;
          }
LABEL_55:
          inited = -1073741790;
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      if ( !(unsigned __int8)PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        goto LABEL_55;
      if ( (unsigned __int8)CmIsRootDevice(SourceString[0]) )
      {
LABEL_30:
        inited = -1073741811;
        goto LABEL_31;
      }
      LODWORD(v26) = CmGetDeviceStatus(
                       PiPnpRtlCtx,
                       SourceString[0],
                       0,
                       (unsigned int)&v26 + 4,
                       (__int64)&v30,
                       (__int64)&v29);
      if ( (int)v26 >= 0 )
      {
        if ( (v26 & 0x800000000LL) != 0 )
          goto LABEL_31;
        if ( (v26 & 0x40000000000LL) != 0 )
        {
          inited = PiCMSetProblem(v10, 0, 1);
          if ( inited < 0 )
            goto LABEL_31;
        }
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, v10);
      if ( inited < 0 )
        goto LABEL_31;
      v18 = 16LL;
      if ( v11 != 1 )
        v18 = 12LL;
      v19 = 1LL;
    }
    inited = PiQueueDeviceRequest(&DestinationString, v18, v19);
    goto LABEL_31;
  }
LABEL_32:
  if ( SourceString[0] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)inited;
}
