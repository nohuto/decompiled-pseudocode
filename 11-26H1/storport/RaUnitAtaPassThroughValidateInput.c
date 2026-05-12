/*
 * XREFs of RaUnitAtaPassThroughValidateInput @ 0x14003F79C
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitAtaPassThroughValidateInput(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r14d
  __int64 Options; // rsi
  __int64 v9; // rbx
  _IRP *v10; // rcx
  unsigned __int16 v11; // ax
  _IRP *MasterIrp; // rdi
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rdx
  bool v16; // zf
  unsigned int MdlAddress_high; // eax
  char v18; // al
  unsigned __int16 Size; // ax
  unsigned __int64 v21; // r8
  _BYTE *v22; // rdx
  unsigned int IrpCount; // ecx
  unsigned int v24; // edx
  unsigned __int16 v25; // ax
  __int128 v26; // [rsp+28h] [rbp-60h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+48h] [rbp-40h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9 = 0LL;
  if ( !IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x30 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 48 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      goto LABEL_8;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x28 )
    return 3221225485LL;
  v10 = a2->AssociatedIrp.MasterIrp;
  if ( v10->Type != 40 )
    return 3221225561LL;
  v11 = v10->Size;
  if ( (v11 & 4) != 0 && !LODWORD(v10->MdlAddress) || (v11 & 2) != 0 && !LODWORD(v10->MdlAddress) )
    return 3221225485LL;
  MasterIrp = (_IRP *)&v26;
  v13 = *(_OWORD *)&v10->Type;
  *((_QWORD *)&v28 + 1) = v10->ThreadListEntry.Flink;
  v14 = *(_QWORD *)&v10->Flags;
  *(_QWORD *)&v28 = v10->AssociatedIrp.MasterIrp;
  *((_QWORD *)&v27 + 1) = *(&v10->Flags + 1);
  v26 = v13;
  *(_QWORD *)&v27 = v14;
LABEL_8:
  if ( !a3 )
  {
    v21 = (unsigned __int64)MasterIrp->AssociatedIrp.MasterIrp;
    if ( (unsigned __int16)MasterIrp->Type <= v21 || !LODWORD(MasterIrp->MdlAddress) )
    {
      if ( v21 > 0xFFFFFFFF )
        return 3221225621LL;
      IrpCount = MasterIrp->AssociatedIrp.IrpCount;
      v24 = IrpCount + LODWORD(MasterIrp->MdlAddress);
      if ( v24 < IrpCount )
        return 3221225621LL;
      v25 = MasterIrp->Size;
      if ( ((v25 & 4) == 0 || v24 <= (unsigned int)Options) && ((v25 & 2) == 0 || v24 <= Length) )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = ((__int64)((__int64)a2->AssociatedIrp.MasterIrp + v21) & *(unsigned int *)(v15 + 152)) == 0;
        goto LABEL_10;
      }
    }
    return 3221225485LL;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = (*(unsigned int *)(v15 + 152) & (__int64)MasterIrp->AssociatedIrp.MasterIrp) == 0;
LABEL_10:
  if ( !v16 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v15 + 152) & (__int64)MasterIrp->MdlAddress) != 0 )
    return 3221225485LL;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( !MdlAddress_high || MdlAddress_high > 0x1A5E0 )
    return 3221225485LL;
  if ( Length > (unsigned int)Options )
    memset_0((char *)a2->AssociatedIrp.MasterIrp + Options, 0, Length - (unsigned int)Options);
  v18 = BYTE6(MasterIrp->ThreadListEntry.Blink);
  if ( v18 != -76 )
  {
    if ( v18 != -15 )
      return 0LL;
    if ( !a3 )
    {
      if ( g_InWinPE )
      {
        v22 = (char *)MasterIrp->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
        if ( (unsigned int)Options >= 0x230 && LODWORD(MasterIrp->MdlAddress) >= 0x200 && (*v22 & 1) == 0 )
        {
          while ( (unsigned int)v9 < 0x20 )
          {
            if ( (unsigned __int8)WellKnownPassword[v9] != (char)v22[v9 + 2] )
              return 3221225485LL;
            v9 = (unsigned int)(v9 + 1);
          }
          return 0LL;
        }
      }
    }
    return 3221225485LL;
  }
  return g_InWinPE == 0 ? 0xC00000BB : 0;
}
