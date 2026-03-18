/*
 * XREFs of PipEnumerateCompleted @ 0x14090D2B4
 * Callers:
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 *     PiSwFindChildren @ 0x14090DC6C (PiSwFindChildren.c)
 *     PipProcessEnumeratedChildDevice @ 0x14090DC90 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x14091493C (PnpRequestDeviceRemoval.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiSwGetChildPdo @ 0x140A7AAD4 (PiSwGetChildPdo.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *MaxDataSize)
{
  _QWORD *v1; // rdi
  _QWORD **Children; // rax
  _QWORD *v4; // rdi
  __int64 *v5; // rdi
  char v6; // bp
  __int64 *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int i; // edi
  unsigned int *v14; // rcx
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
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
      v14 = (unsigned int *)MaxDataSize[66];
      if ( i >= *v14 )
        break;
      if ( !*(_QWORD *)&v14[2 * i + 2] )
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
        v19 = MaxDataSize[2];
        if ( v19 && *(_WORD *)(v19 + 56) )
        {
          IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(MaxDataSize[2] + 64LL),
            (PVOID)*(unsigned __int16 *)(MaxDataSize[2] + 56LL));
        }
        KeBugCheckEx(0xCAu, 8uLL, MaxDataSize[4], *(unsigned int *)MaxDataSize[66], i);
      }
      PipProcessEnumeratedChildDevice(MaxDataSize);
    }
    ExFreePoolWithTag(v14, 0);
    MaxDataSize[66] = 0LL;
  }
  PiSwLock();
  Children = (_QWORD **)PiSwFindChildren(MaxDataSize + 5);
  v4 = Children;
  if ( Children )
  {
    v15 = *Children;
    while ( v15 != v4 )
    {
      v16 = v15;
      v15 = (_QWORD *)*v15;
      if ( PiSwGetChildPdo(MaxDataSize[4], v16) )
        PipProcessEnumeratedChildDevice(MaxDataSize);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v5 = (__int64 *)MaxDataSize[1];
  v6 = 0;
  if ( v5 )
  {
    do
    {
      v7 = (__int64 *)*v5;
      if ( (*((_DWORD *)v5 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v5, 0x10000LL);
        LOBYTE(v17) = 1;
        PnpRequestDeviceRemoval(v5, v17, 24LL);
        v6 = 1;
      }
      v5 = v7;
    }
    while ( v7 );
  }
  PipSetDevNodeState((__int64)MaxDataSize, 778);
  if ( !v6 || (v18 = MaxDataSize == IopRootDeviceNode, v9 = -1073741106, v18) )
    v9 = 0;
  PiPnpRtlBeginOperation(&P, v8);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v9;
}
