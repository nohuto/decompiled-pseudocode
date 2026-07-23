/*
 * XREFs of PipEnumerateCompleted @ 0x1409AF3E4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwFindChildren @ 0x1409AFD9C (PiSwFindChildren.c)
 *     PipProcessEnumeratedChildDevice @ 0x1409AFDC0 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *MaxDataSize)
{
  _QWORD *v1; // rdi
  _QWORD **Children; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdi
  char v6; // bp
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int i; // edi
  unsigned int *v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  bool v16; // zf
  __int64 v17; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)MaxDataSize[1];
  P = 0LL;
  if ( MaxDataSize[66] )
  {
    while ( v1 )
    {
      PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  else
  {
    while ( v1 )
    {
      if ( *(PDRIVER_OBJECT *)(v1[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  if ( MaxDataSize[66] )
  {
    for ( i = 0; ; ++i )
    {
      v13 = (unsigned int *)MaxDataSize[66];
      if ( i >= *v13 )
        break;
      if ( !*(_QWORD *)&v13[2 * i + 2] )
      {
        IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x388);
        if ( *((_WORD *)MaxDataSize + 20) )
        {
          IoAddTriageDumpDataBlock((_DWORD)MaxDataSize + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(MaxDataSize[6], (PVOID)*((unsigned __int16 *)MaxDataSize + 20));
        }
        if ( *((_WORD *)MaxDataSize + 28) )
        {
          IoAddTriageDumpDataBlock((_DWORD)MaxDataSize + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(MaxDataSize[8], (PVOID)*((unsigned __int16 *)MaxDataSize + 28));
        }
        v17 = MaxDataSize[2];
        if ( v17 && *(_WORD *)(v17 + 56) )
        {
          IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(MaxDataSize[2] + 64LL),
            (PVOID)*(unsigned __int16 *)(MaxDataSize[2] + 56LL));
        }
        KeBugCheckEx(0xCAu, 8uLL, MaxDataSize[4], *(unsigned int *)MaxDataSize[66], i);
      }
      PipProcessEnumeratedChildDevice(MaxDataSize);
    }
    ExFreePoolWithTag(v13, 0);
    MaxDataSize[66] = 0LL;
  }
  PiSwLock();
  Children = (_QWORD **)PiSwFindChildren(MaxDataSize + 5);
  v4 = Children;
  if ( Children )
  {
    v14 = *Children;
    while ( v14 != v4 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      if ( PiSwGetChildPdo(MaxDataSize[4], v15) )
        PipProcessEnumeratedChildDevice(MaxDataSize);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v5 = MaxDataSize[1];
  v6 = 0;
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)v5;
      if ( (*(_DWORD *)(v5 + 396) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v5, 0x10000LL);
        PnpRequestDeviceRemoval(v5, 1, 24, 0);
        v6 = 1;
      }
      v5 = v7;
    }
    while ( v7 );
  }
  PipSetDevNodeState((__int64)MaxDataSize, 778);
  if ( !v6 || (v16 = MaxDataSize == IopRootDeviceNode, v8 = -1073741106, v16) )
    v8 = 0;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v9, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v8;
}
