/*
 * XREFs of SshpAlpcProcessAlpcMessage @ 0x1407EA404
 * Callers:
 *     SshpAlpcMessageCallback @ 0x1407EA2C0 (SshpAlpcMessageCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x140728EE0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x140728F00 (ZwAlpcCancelMessage.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E959C (SshpSessionManagerOpenControlTrace.c)
 */

__int64 __fastcall SshpAlpcProcessAlpcMessage(
        PPORT_MESSAGE SendMessageA,
        PALPC_CONTEXT_ATTR MessageContext,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  __int64 Type; // rdx
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  void *v16; // rdx
  signed __int8 v17; // cf
  AutoBoost *v18; // r15
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // r14
  HANDLE v22; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-59h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+80h] [rbp-29h] BYREF

  v5 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  Type = (unsigned __int16)SendMessageA->u2.s2.Type;
  v8 = (unsigned __int16)SendMessageA->u2.s2.Type;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = (v8 & 0xFFFF00FF) - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 && (v13 = v12 - 1) != 0 )
        {
          if ( v13 == 4 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 512;
            ObjectAttributes.ObjectName = 0LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            memset_0(&PortAttributes, 0, sizeof(PortAttributes));
            PortAttributes.MaxMessageLength = 64LL;
            v15 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.Padding[4], 0LL, 0LL, v14);
            v17 = _interlockedbittestandset64(
                    (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Padding[4],
                    0LL);
            v18 = v15;
            if ( v17 )
              ExfAcquirePushLockExclusiveEx(
                &PsAltSystemCallRegistrationLock.Padding[4],
                v15,
                (__int64)&PsAltSystemCallRegistrationLock.Padding[4]);
            if ( v18 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v18, v16);
              else
                *((_BYTE *)v18 + 10) = 1;
            }
            if ( ZwAlpcAcceptConnectPort(
                   &qword_140F0A830,
                   (HANDLE)PsAltSystemCallRegistrationLock.Padding[3],
                   0,
                   &ObjectAttributes,
                   &PortAttributes,
                   0LL,
                   SendMessageA,
                   0LL,
                   qword_140F0A830 == 0LL) < 0 )
              ZwAlpcAcceptConnectPort(
                &qword_140F0A830,
                (HANDLE)PsAltSystemCallRegistrationLock.Padding[3],
                0,
                &ObjectAttributes,
                &PortAttributes,
                0LL,
                SendMessageA,
                0LL,
                0);
            SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Padding[4]);
          }
        }
        else
        {
          v19 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.Padding[4], 0LL, 0LL, a4);
          v17 = _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Padding[4], 0LL);
          v21 = v19;
          if ( v17 )
            ExfAcquirePushLockExclusiveEx(
              &PsAltSystemCallRegistrationLock.Padding[4],
              v19,
              (__int64)&PsAltSystemCallRegistrationLock.Padding[4]);
          if ( v21 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v21, v20);
            else
              *((_BYTE *)v21 + 10) = 1;
          }
          v22 = qword_140F0A830;
          qword_140F0A830 = 0LL;
          SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Padding[4]);
          ZwClose(v22);
        }
        return v5;
      }
    }
    if ( (Type & 0x2000) != 0 )
      return (unsigned int)ZwAlpcCancelMessage((HANDLE)PsAltSystemCallRegistrationLock.Padding[3], 0, MessageContext);
  }
  if ( SendMessageA[1].u1.Length == 1 )
  {
    LODWORD(SendMessageA[1].DoNotUseThisField) = SshpSessionManagerOpenControlTrace(
                                                   (__int64)SendMessageA[1].ClientId.UniqueProcess,
                                                   Type);
    ZwAlpcSendWaitReceivePort(qword_140F0A830, 0x10000u, SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return v5;
}
