/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1409B7010 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404CC23C (PipRestoreDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x1404F83B0 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404F87B4 (PnpUnlockMountableDevice.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404F8CB0 (PiIommuUninitializeDeviceAts.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1405CCFB4 (IopDecrementDeviceObjectHandleCount.c)
 *     PiIommuBlockDevice @ 0x1407B79E4 (PiIommuBlockDevice.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409B79A8 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     PnpDisableDeviceInterfaces @ 0x1409B7A10 (PnpDisableDeviceInterfaces.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     PipDmgDestroyIommuExtension @ 0x1409DB1F0 (PipDmgDestroyIommuExtension.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // r12
  int v5; // eax
  int v6; // r13d
  int v7; // r15d
  int v9; // ebp
  int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  void *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  ULONG_PTR v19; // rsi
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v21 = 0LL;
  v5 = *(_DWORD *)(MaxDataSize + 300);
  v6 = a3;
  v7 = a2;
  v9 = 768;
  if ( v5 == 784 || v5 == 785 )
  {
    v9 = *(_DWORD *)(MaxDataSize + 300);
    PipRestoreDevNodeState(MaxDataSize);
  }
  v10 = *(_DWORD *)(MaxDataSize + 300);
  v11 = 0LL;
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v10 == 787 && v9 == 784 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    PipSetDevNodeState(MaxDataSize, 789);
    return;
  }
  v12 = *(_QWORD *)(MaxDataSize + 8);
  if ( v12 )
  {
    do
    {
      v13 = *(_DWORD *)(v12 + 396);
      v11 = *(_QWORD *)v12;
      if ( (v13 & 0x10) != 0 )
      {
        v13 &= ~0x10u;
        *(_DWORD *)(v12 + 396) = v13;
      }
      if ( *(_QWORD *)(v12 + 416) || *(_QWORD *)(v12 + 544) || (v13 & 0x40) != 0 )
        IopReleaseDeviceResources(v12, 0LL);
      PipSetDevNodeState(v12, 789);
      v12 = v11;
    }
    while ( v11 );
  }
  if ( v10 == 780 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v4, 1, (ULONG_PTR *)&v21);
    PnpUnlockMountableDevice((__int64)v4);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
  }
  switch ( *(_DWORD *)(MaxDataSize + 300) )
  {
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
    case 0x313:
    case 0x314:
    case 0x315:
    case 0x316:
      break;
    default:
      v14 = IopRemoveDevice(v4, 23);
      PnpDisableDeviceInterfaces(MaxDataSize + 40);
      if ( v14 >= 0 )
        IopReleaseDeviceResources(MaxDataSize, 0LL);
      v15 = MaxDataSize;
      if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) != 0 )
      {
        PipSetDevNodeState(MaxDataSize, 787);
        a2 = 784LL;
        if ( v9 != 784 )
          break;
        v15 = MaxDataSize;
      }
      else
      {
        LODWORD(a2) = 789;
      }
      PipSetDevNodeState(v15, a2);
      break;
  }
  if ( v10 == 780 )
  {
    v16 = (void *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v21 + 1), a2, a3, a4);
      ObfDereferenceObject(v16);
    }
  }
  if ( v7 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, v7, v6);
  PnpSurpriseRemovedDeviceNodeDependencyCheck(MaxDataSize);
  if ( *(_QWORD *)(MaxDataSize + 720) != v11 )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v18 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720), v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) != (_WORD)v11 )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) != (_WORD)v11 )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v20 = *(_QWORD *)(MaxDataSize + 16);
      if ( v20 )
      {
        if ( *(_WORD *)(v20 + 56) != (_WORD)v11 )
        {
          IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v19, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  *(_DWORD *)(MaxDataSize + 704) &= ~0x20000u;
}
