/*
 * XREFs of SshpAlpcProcessAlpcMessage @ 0x1407E48A4
 * Callers:
 *     SshpAlpcMessageCallback @ 0x1407E4760 (SshpAlpcMessageCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404B32FC (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x140724310 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x140724330 (ZwAlpcCancelMessage.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E4148 (SshpSessionManagerOpenControlTrace.c)
 */

__int64 __fastcall SshpAlpcProcessAlpcMessage(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  signed __int8 v15; // cf
  AutoBoost *v16; // r15
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // r14
  void *KernelShadowStackBase; // rbx
  char v22[16]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v23; // [rsp+90h] [rbp-19h]

  v5 = 0;
  v6 = *(unsigned __int16 *)(a1 + 4);
  v7 = (*(unsigned __int16 *)(a1 + 4) & 0xFFFF00FF) - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 2;
        if ( v10 && (v11 = v10 - 1) != 0 )
        {
          if ( v11 == 4 )
          {
            memset_0(v22, 0, 0x48uLL);
            v23 = 64LL;
            v13 = (AutoBoost *)KeAbPreAcquire(
                                 (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
                                 0LL,
                                 0LL,
                                 v12);
            v15 = _interlockedbittestandset64(
                    (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
                    0LL);
            v16 = v13;
            if ( v15 )
              ExfAcquirePushLockExclusiveEx(
                (unsigned __int64 *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
                v13,
                (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
            if ( v16 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v16, v14);
              else
                *((_BYTE *)v16 + 10) = 1;
            }
            if ( (int)ZwAlpcAcceptConnectPort(
                        (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackBase,
                        (__int64)PsAltSystemCallRegistrationLock.KernelShadowStack) < 0 )
              ZwAlpcAcceptConnectPort(
                (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackBase,
                (__int64)PsAltSystemCallRegistrationLock.KernelShadowStack);
            SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
          }
        }
        else
        {
          v17 = (AutoBoost *)KeAbPreAcquire(
                               (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
                               0LL,
                               0LL,
                               a4);
          v15 = _interlockedbittestandset64(
                  (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
                  0LL);
          v19 = v17;
          if ( v15 )
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
              v17,
              (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
          if ( v19 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v19, v18);
            else
              *((_BYTE *)v19 + 10) = 1;
          }
          KernelShadowStackBase = PsAltSystemCallRegistrationLock.KernelShadowStackBase;
          PsAltSystemCallRegistrationLock.KernelShadowStackBase = 0LL;
          SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
          ZwClose(KernelShadowStackBase);
        }
        return v5;
      }
    }
    if ( (v6 & 0x2000) != 0 )
      return (unsigned int)ZwAlpcCancelMessage((__int64)PsAltSystemCallRegistrationLock.KernelShadowStack, 0LL);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    *(_DWORD *)(a1 + 48) = SshpSessionManagerOpenControlTrace(*(_QWORD *)(a1 + 48), v6);
    ZwAlpcSendWaitReceivePort((__int64)PsAltSystemCallRegistrationLock.KernelShadowStackBase, 0x10000LL);
  }
  return v5;
}
