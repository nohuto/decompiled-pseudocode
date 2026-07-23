/*
 * XREFs of RawSetInformation @ 0x140805AB4
 * Callers:
 *     RawDispatch @ 0x140919E90 (RawDispatch.c)
 * Callees:
 *     RawBeginOperation @ 0x140218CC4 (RawBeginOperation.c)
 *     RawEndOperation @ 0x140258E74 (RawEndOperation.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 */

__int64 __fastcall RawSetInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct _IRP *MasterIrp; // r14
  struct _FILE_OBJECT *v8; // rbp

  v6 = 0;
  if ( RawBeginOperation(a1, *(_QWORD *)(a3 + 48)) )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      v8 = *(struct _FILE_OBJECT **)(a3 + 48);
      if ( (IoGetRelatedDeviceObject(v8)->AlignmentRequirement & *(_DWORD *)&MasterIrp->Type) != 0 )
        v6 = -1073741811;
      else
        v8->CurrentByteOffset.QuadPart = *(_QWORD *)&MasterIrp->Type;
    }
    else
    {
      v6 = -1073741808;
    }
    RawEndOperation(a1, *(_QWORD *)(a3 + 48));
  }
  else
  {
    v6 = -1073741202;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 1);
  return v6;
}
