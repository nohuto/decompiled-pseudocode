/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x14051B900
 * Callers:
 *     DifNtAssociateWaitCompletionPacketWrapper @ 0x14066DCB0 (DifNtAssociateWaitCompletionPacketWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObGetAssociatedWaitObject @ 0x1403AAA70 (ObGetAssociatedWaitObject.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     Feature_4132124986__private_IsEnabledDeviceUsageNoInline @ 0x1405CB8AC (Feature_4132124986__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        KSPIN_LOCK a4,
        KSPIN_LOCK a5,
        int a6,
        KSPIN_LOCK a7,
        char *a8)
{
  KIRQL v8; // r12
  char v9; // r13
  PVOID v10; // r15
  PVOID v11; // r14
  NTSTATUS v12; // esi
  KSPIN_LOCK *v13; // rdi
  __int16 *AssociatedWaitObject; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // rdx
  char AccessMode; // [rsp+30h] [rbp-58h]
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v23; // [rsp+48h] [rbp-40h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-38h]

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, AccessMode, Object, 0LL);
  v13 = (KSPIN_LOCK *)Object[0];
  if ( v12 >= 0 )
  {
    Object[0] = 0LL;
    v12 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, AccessMode, Object, 0LL);
    v10 = Object[0];
    if ( v12 >= 0 )
    {
      Object[0] = 0LL;
      v12 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, AccessMode, Object, 0LL);
      v11 = Object[0];
      LODWORD(Object[0]) = v12;
      if ( v12 >= 0 )
      {
        AssociatedWaitObject = ObGetAssociatedWaitObject((__int64)v11);
        v23 = AssociatedWaitObject;
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
          LOBYTE(v17) = *((_BYTE *)v13 + 104);
          if ( (_BYTE)v17 )
          {
            v12 = -1073741585;
          }
          else if ( (unsigned int)Feature_4132124986__private_IsEnabledDeviceUsageNoInline(v17, v15, v16)
                 && *((_BYTE *)v13 + 105) )
          {
            v12 = -1073700861;
          }
          else
          {
            *((_BYTE *)v13 + 104) = 1;
            v13[6] = a4;
            v13[7] = a5;
            *((_DWORD *)v13 + 18) = a6;
            v13[8] = a7;
            v13[10] = (KSPIN_LOCK)v11;
            v13[11] = (KSPIN_LOCK)v10;
            v18 = KeRegisterObjectNotification((__int64)v23, (__int64)v10, (__int64)v13);
            KeReleaseSpinLock(SpinLock, v8);
            v9 = 0;
            if ( a8 )
            {
              if ( AccessMode )
              {
                LOBYTE(v19) = v18;
                RtlWriteUCharToUser(a8, v19);
              }
              else
              {
                *a8 = v18;
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
  return (unsigned int)v12;
}
