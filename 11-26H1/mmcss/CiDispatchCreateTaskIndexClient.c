/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x14000E0B0
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexDereference @ 0x140003BB0 (CiTaskIndexDereference.c)
 *     CiTaskIndexReference @ 0x140003FE0 (CiTaskIndexReference.c)
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x140004888 (WPP_SF_dd.c)
 *     CiTaskIndexCreate @ 0x14000E260 (CiTaskIndexCreate.c)
 *     CiLookupTask @ 0x14000E670 (CiLookupTask.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2)
{
  __int64 v2; // r8
  char v3; // r15
  struct _IRP *MasterIrp; // r9
  unsigned int v5; // ebp
  NTSTATUS v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // eax
  signed __int64 v13; // rcx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned int *)(a2 + 32);
  v3 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0;
  v8 = -1073741811;
  if ( (_DWORD)v2 != 280 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xFu, v2, v2, 280);
    goto LABEL_12;
  }
  v9 = *(_QWORD *)&MasterIrp->Flags;
  if ( v9 && Irp->RequestorMode )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids);
    goto LABEL_12;
  }
  v14 = *(_QWORD *)&MasterIrp->Flags;
  v10 = 0LL;
  v15 = 0LL;
  if ( !v9 )
  {
    v8 = CiLookupTask(
           &MasterIrp->AssociatedIrp,
           &MasterIrp->Tail.CompletionKey + 4,
           v2,
           BYTE3(MasterIrp->MdlAddress),
           &v15);
    if ( v8 < 0 )
      goto LABEL_8;
    v10 = v15;
  }
  v3 = 1;
  KeEnterCriticalRegion();
  if ( v9 )
  {
    CiTaskIndexReference(v9);
    goto LABEL_14;
  }
  v11 = CiTaskIndexCreate(v10, &v14);
  v9 = v14;
  v8 = v11;
  if ( v11 >= 0 )
  {
LABEL_14:
    v13 = *(_QWORD *)(a2 + 48);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 8), v13, 0LL) )
    {
      v8 = 0;
      *(_QWORD *)(v13 + 24) = v9;
      v5 = *(_DWORD *)(v9 + 144);
LABEL_11:
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
    v8 = -1073740008;
  }
LABEL_8:
  if ( v9 )
    CiTaskIndexDereference((_QWORD *)v9);
  if ( v3 )
    goto LABEL_11;
LABEL_12:
  Irp->IoStatus.Information = v5;
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
