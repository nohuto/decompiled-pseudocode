/*
 * XREFs of FsRtlGetMarkHandleInfo @ 0x14042864C
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140428770 (IoIs32bitProcess.c)
 */

__int64 __fastcall FsRtlGetMarkHandleInfo(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  BOOLEAN v3; // al
  unsigned int Options; // ecx
  struct _IRP *v5; // rcx
  struct _IRP *MasterIrp; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int MdlAddress; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  MdlAddress = 0;
  v8 = 0LL;
  v3 = IoIs32bitProcess(a1);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !v3 )
  {
    if ( Options >= 0x18 )
    {
      MasterIrp = a1->AssociatedIrp.MasterIrp;
      return MasterIrp->Flags;
    }
    return 0LL;
  }
  if ( Options < 0xC )
    return 0LL;
  v5 = a1->AssociatedIrp.MasterIrp;
  MdlAddress = (int)v5->MdlAddress;
  LODWORD(v8) = *(_DWORD *)&v5->Type;
  *((_QWORD *)&v8 + 1) = *(int *)(&v5->Size + 1);
  MasterIrp = (struct _IRP *)&v8;
  return MasterIrp->Flags;
}
