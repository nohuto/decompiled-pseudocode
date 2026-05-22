/*
 * XREFs of ?QueryInterface@BamoDropTargetClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054720
 * Callers:
 *     ?QueryInterface@BamoDropTargetClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801247C0 (-QueryInterface@BamoDropTargetClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDropTargetClientProxy::QueryInterface(
        BamoDropTargetClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( v3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2997278b_3edd_8da0_6daf_809840cbb7ae.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2997278b_3edd_8da0_6daf_809840cbb7ae.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2997278b_3edd_8da0_6daf_809840cbb7ae.Data4;
    if ( v6 )
      goto LABEL_7;
  }
  if ( !this )
  {
LABEL_7:
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (char *)this + 8;
  if ( this == (BamoDropTargetClientProxy *)-8LL )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(BamoDropTargetClientProxy *))this)(this);
  return v4;
}
