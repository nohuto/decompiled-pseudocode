/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1404109B0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14040F450 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopUpdateIrpTransferCount(__int64 a1, volatile signed __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  struct _KTHREAD *v4; // rcx
  unsigned __int64 v5; // r8
  struct _KTHREAD *v6; // rcx
  unsigned __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rcx

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x100) != 0 )
  {
    v7 = *(unsigned int *)(a1 + 56);
    CurrentThread = KeGetCurrentThread();
    if ( (IopPerfIoTrackingLock.QuantumTarget & 2) != 0 && a2 && a2 == (volatile signed __int64 *)CurrentThread->Process )
    {
      result = v7;
      CurrentThread->ReadTransferCount += v7;
      __addgsqword(0x2EE8u, v7);
    }
    else
    {
      result = v7;
      if ( a2 )
        _InterlockedAdd64(a2 + 119, v7);
      else
        CurrentThread->ReadTransferCount += v7;
      __addgsqword(0x2EE8u, v7);
    }
  }
  else if ( (result & 0x200) != 0 )
  {
    v5 = *(unsigned int *)(a1 + 56);
    v6 = KeGetCurrentThread();
    if ( (IopPerfIoTrackingLock.QuantumTarget & 2) != 0 && a2 && a2 == (volatile signed __int64 *)v6->Process )
    {
      result = v5;
      v6->WriteTransferCount += v5;
      __addgsqword(0x2EF0u, v5);
    }
    else
    {
      result = v5;
      if ( a2 )
        _InterlockedAdd64(a2 + 120, v5);
      else
        v6->WriteTransferCount += v5;
      __addgsqword(0x2EF0u, v5);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      v4 = KeGetCurrentThread();
      if ( (IopPerfIoTrackingLock.QuantumTarget & 2) != 0 && a2 && a2 == (volatile signed __int64 *)v4->Process )
      {
        result = (unsigned int)v3;
        v4->OtherTransferCount += (unsigned int)v3;
        __addgsqword(0x2EF8u, (unsigned int)v3);
      }
      else
      {
        result = (unsigned int)v3;
        if ( a2 )
          _InterlockedAdd64(a2 + 121, (unsigned int)v3);
        else
          v4->OtherTransferCount += (unsigned int)v3;
        __addgsqword(0x2EF8u, (unsigned int)v3);
      }
    }
  }
  return result;
}
