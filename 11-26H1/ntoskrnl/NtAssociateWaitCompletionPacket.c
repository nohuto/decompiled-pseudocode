/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140515EB0
 * Callers:
 *     DifNtAssociateWaitCompletionPacketWrapper @ 0x140671890 (DifNtAssociateWaitCompletionPacketWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObGetAssociatedWaitObject @ 0x1403B4780 (ObGetAssociatedWaitObject.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KIRQL v8; // r12
  char v9; // r13
  PVOID v10; // r15
  PVOID v11; // r14
  int v12; // esi
  KSPIN_LOCK *v13; // rdi
  __int16 *AssociatedWaitObject; // rax
  BOOLEAN v15; // di
  __int64 v16; // rdx
  char AccessMode; // [rsp+30h] [rbp-58h]
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v20; // [rsp+48h] [rbp-40h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-38h]

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v12 = ObReferenceObjectByHandle(
          WaitCompletionPacketHandle,
          1u,
          IopWaitCompletionPacketObjectType,
          AccessMode,
          Object,
          0LL);
  v13 = (KSPIN_LOCK *)Object[0];
  if ( v12 >= 0 )
  {
    Object[0] = 0LL;
    v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, AccessMode, Object, 0LL);
    v10 = Object[0];
    if ( v12 >= 0 )
    {
      Object[0] = 0LL;
      v12 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, AccessMode, Object, 0LL);
      v11 = Object[0];
      LODWORD(Object[0]) = v12;
      if ( v12 >= 0 )
      {
        AssociatedWaitObject = ObGetAssociatedWaitObject((__int64)v11);
        v20 = AssociatedWaitObject;
        if ( !AssociatedWaitObject
          || (*(_BYTE *)AssociatedWaitObject & 0x7F) == 2
          || (*(_BYTE *)AssociatedWaitObject & 0x7F) == 4 )
        {
          v12 = -1073741583;
        }
        else
        {
          v9 = 1;
          SpinLock = v13 + 12;
          v8 = KeAcquireSpinLockRaiseToDpc(v13 + 12);
          if ( *((_BYTE *)v13 + 104) )
          {
            v12 = -1073741585;
          }
          else if ( *((_BYTE *)v13 + 105) )
          {
            v12 = -1073700861;
          }
          else
          {
            *((_BYTE *)v13 + 104) = 1;
            v13[6] = (KSPIN_LOCK)KeyContext;
            v13[7] = (KSPIN_LOCK)ApcContext;
            *((_DWORD *)v13 + 18) = IoStatus;
            v13[8] = IoStatusInformation;
            v13[10] = (KSPIN_LOCK)v11;
            v13[11] = (KSPIN_LOCK)v10;
            v15 = KeRegisterObjectNotification((__int64)v20, (__int64)v10, (__int64)v13);
            KeReleaseSpinLock(SpinLock, v8);
            v9 = 0;
            if ( AlreadySignaled )
            {
              if ( AccessMode )
              {
                LOBYTE(v16) = v15;
                RtlWriteUCharToUser(AlreadySignaled, v16);
              }
              else
              {
                *AlreadySignaled = v15;
              }
            }
            v10 = 0LL;
            v11 = 0LL;
            v13 = 0LL;
          }
        }
      }
    }
  }
  if ( v9 )
    KeReleaseSpinLock(v13 + 12, v8);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  return v12;
}
