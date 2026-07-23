/*
 * XREFs of PiIommuGetInterface @ 0x1409DB224
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PiIommuPutInterface @ 0x1407B7AA8 (PiIommuPutInterface.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int Interface; // ebx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_6;
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v8 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v8 )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)(unsigned int)*(__int16 *)(v8 + 2));
      v9 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v10 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      IoAddTriageDumpDataBlock(v10, (PVOID)0x388);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      v12 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v13 && *(_WORD *)(v13 + 56) )
      {
        IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
      }
    }
LABEL_6:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  Interface = PnpQueryInterface((PVOID)BugCheckParameter2, BugCheckParameter2, a2);
  if ( Interface >= 0 )
  {
    if ( a2[2] && a2[3] && a2[8] && a2[7] )
    {
      return 0;
    }
    else
    {
      Interface = -1073741637;
      PiIommuPutInterface((__int64)a2, v5);
    }
  }
  return (unsigned int)Interface;
}
