/*
 * XREFs of ViIrpAllocateLockedPacket @ 0x140B7E0DC
 * Callers:
 *     VfIoAllocateIrp1 @ 0x140B7DDC4 (VfIoAllocateIrp1.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     IoInitializeIrp @ 0x14043ECB0 (IoInitializeIrp.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfPacketCreateAndLock @ 0x140B8B450 (VfPacketCreateAndLock.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ViIrpAllocateLockedPacket(CCHAR a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  _KPROCESS *Process; // rsi
  USHORT v8; // r9
  USHORT v9; // r15
  ULONG_PTR Pool2; // rax
  IRP *v11; // rdi
  __int64 v12; // rax

  v4 = 0LL;
  v5 = 0;
  Process = 0LL;
  v8 = 72 * a1 + 208;
  v9 = v8;
  if ( (VfRuleClasses & 1) != 0 )
    Pool2 = VfHandlePoolAlloc(
              NonPagedPool,
              0x240uLL,
              v8,
              0x2B707249u,
              LowPoolPriority,
              (__int64)&VfExtendedParameters,
              1,
              a3);
  else
    Pool2 = ExAllocatePool2(0x40uLL, v8, 0x2B707249uLL);
  v11 = (IRP *)Pool2;
  if ( Pool2 )
  {
    if ( a2
      && (v5 = 4096,
          Process = KeGetCurrentThread()->ApcState.Process,
          (int)PsChargeProcessNonPagedPoolQuota((__int64)Process, 0x1000uLL) < 0) )
    {
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      IoInitializeIrp(v11, v9, a1);
      v12 = VfPacketCreateAndLock(v11);
      v4 = v12;
      if ( v12 )
      {
        *(_DWORD *)(v12 + 56) |= 0x200008u;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 20));
        ++*(_DWORD *)(v12 + 24);
        v11->Flags |= 0x40000000u;
        if ( a2 )
        {
          v11->AllocationFlags |= 1u;
          *(_DWORD *)(v12 + 84) = v5;
          *(_QWORD *)(v12 + 88) = Process;
          ObfReferenceObjectWithTag(Process, 0x49667256u);
        }
      }
      else
      {
        ExFreePoolWithTag(v11, 0);
        if ( a2 )
          PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, v5);
      }
    }
  }
  return v4;
}
