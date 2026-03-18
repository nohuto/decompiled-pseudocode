/*
 * XREFs of PopUmpoProcessMessage @ 0x140AAA1C8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140AAA08C (PopUmpoProcessMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x140724310 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x140724330 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x140724510 (ZwAlpcOpenSenderProcess.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     PopAcquireUmpoPushLock @ 0x140AE47FC (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140AEB244 (PopReleaseUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // r8
  int v5; // ebx
  _KSCB *QueuedScb; // rcx
  int v8; // eax
  NTSTATUS v9; // eax
  void *v10; // rbx
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  int v13; // [rsp+60h] [rbp-49h]
  int v14; // [rsp+64h] [rbp-45h]
  __int64 v15; // [rsp+68h] [rbp-41h]
  __int64 v16; // [rsp+70h] [rbp-39h]
  int v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+7Ch] [rbp-2Dh]
  __int128 v19; // [rsp+80h] [rbp-29h]
  _BYTE v20[16]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-9h]

  v14 = 0;
  v4 = *(_WORD *)(a1 + 4);
  v18 = 0;
  switch ( (unsigned __int8)v4 )
  {
    case 1u:
      goto LABEL_6;
    case 2u:
    case 3u:
      if ( (v4 & 0x2000) == 0 )
      {
        v5 = PopUmpoProcessPowerMessage(a1 + 40, a3);
        if ( v5 < 0 )
          return (unsigned int)v5;
        return 0;
      }
LABEL_6:
      ZwAlpcCancelMessage(*(__int64 *)&PopModernStandbyStateNotify.ThreadTimerDelay, 0LL);
      return 0;
    case 5u:
    case 6u:
      BYTE4(PopModernStandbyStateNotify.OtherTransferCount) = 0;
      LODWORD(PopModernStandbyStateNotify.OtherTransferCount) = 0;
      QueuedScb = PopModernStandbyStateNotify.QueuedScb;
      if ( PopModernStandbyStateNotify.QueuedScb )
      {
        ObfDereferenceObjectWithTag(PopModernStandbyStateNotify.QueuedScb, 0x746C6644u);
        PopModernStandbyStateNotify.QueuedScb = 0LL;
      }
      LOBYTE(QueuedScb) = 1;
      PopAcquireUmpoPushLock(QueuedScb);
      v10 = (void *)PopModernStandbyStateNotify.TracingPrivate[0];
      PopModernStandbyStateNotify.TracingPrivate[0] = 0LL;
      PopReleaseUmpoPushLock();
      ZwClose(v10);
      return (unsigned int)-1073740032;
  }
  if ( (unsigned __int8)v4 != 10 )
    return 0;
  v13 = 48;
  v15 = 0LL;
  v17 = 512;
  v16 = 0LL;
  v19 = 0LL;
  memset_0(v20, 0, 0x48uLL);
  v21 = 4096LL;
  v8 = ZwAlpcAcceptConnectPort(
         (__int64)PopModernStandbyStateNotify.TracingPrivate,
         *(__int64 *)&PopModernStandbyStateNotify.ThreadTimerDelay);
  v5 = v8;
  if ( v8 < 0 )
  {
    ZwAlpcAcceptConnectPort(
      (__int64)PopModernStandbyStateNotify.TracingPrivate,
      *(__int64 *)&PopModernStandbyStateNotify.ThreadTimerDelay);
    return (unsigned int)v5;
  }
  BYTE4(PopModernStandbyStateNotify.OtherTransferCount) = 1;
  v13 = 48;
  v15 = 0LL;
  v17 = 512;
  v16 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  v5 = ZwAlpcOpenSenderProcess((__int64)&Handle, *(__int64 *)&PopModernStandbyStateNotify.ThreadTimerDelay);
  if ( v5 >= 0 && Handle )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    PopModernStandbyStateNotify.QueuedScb = (_KSCB *)Object;
    if ( v9 < 0 )
      PopModernStandbyStateNotify.QueuedScb = 0LL;
    ZwClose(Handle);
    return 0;
  }
  return (unsigned int)v5;
}
