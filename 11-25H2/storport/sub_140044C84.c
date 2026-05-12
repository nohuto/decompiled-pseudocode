/*
 * XREFs of sub_140044C84 @ 0x140044C84
 * Callers:
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 *     sub_1401AB0F0 @ 0x1401AB0F0 (sub_1401AB0F0.c)
 *     sub_1401AD6E8 @ 0x1401AD6E8 (sub_1401AD6E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140044C84(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IRP *MasterIrp; // rdi
  bool v3; // cf
  unsigned int Options; // eax
  unsigned int v5; // ecx
  unsigned int IrpCount; // edx
  int MdlAddress_high; // r8d
  unsigned int v9; // r9d
  int MdlAddress; // r10d
  unsigned int v11; // r8d

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  v3 = IoIs32bitProcess(a1) != 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v5 = v3 ? 52 : 64;
  if ( Options < v5 )
    return 3221225507LL;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v5 )
    return 3221225561LL;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  v9 = MdlAddress_high + IrpCount;
  if ( MdlAddress_high + IrpCount >= IrpCount
    && (MdlAddress = (int)MasterIrp->MdlAddress) != 0
    && MdlAddress_high
    && (v11 = v5 + MdlAddress - 1, IrpCount >= v11)
    && Options > v11
    && Options >= v9
    && BYTE2(MasterIrp->Flags) <= 3u )
  {
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
