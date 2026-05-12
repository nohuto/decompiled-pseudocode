/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x140046E3C (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     StorEtwProtocolCommandCompletion @ 0x140052ABC (StorEtwProtocolCommandCompletion.c)
 *     StorGetStorageProtocolCommandBufferTotalLength @ 0x140097670 (StorGetStorageProtocolCommandBufferTotalLength.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _DWORD *v4; // r12
  _IRP *MasterIrp; // r14
  unsigned int Options; // r13d
  _WORD *v10; // r15
  __int64 v11; // r12
  __int64 Srb; // rax
  __int64 v13; // r8
  _WORD *v14; // rbx
  NTSTATUS v15; // edi
  bool v16; // zf
  int UserEvent_low; // eax
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int LockArray_high; // eax
  __int64 v22; // rdx
  int Blink; // eax
  int v24; // eax
  IRP *v25; // rax
  IRP *v26; // r13
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  char v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_DWORD **)(a1 + 24);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v29 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v10 = 0LL;
  if ( Options <= CurrentStackLocation->Parameters.Read.Length )
    Options = CurrentStackLocation->Parameters.Read.Length;
  if ( *v4 == 1314275652 )
  {
    v11 = (__int64)v4 + 274;
  }
  else if ( *v4 == 1094997074 )
  {
    v11 = (__int64)v4 + 482;
  }
  else
  {
    v11 = 98LL;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 9, *(_BYTE *)v11, 0);
  v13 = 0LL;
  v14 = (_WORD *)Srb;
  if ( !Srb )
    goto LABEL_9;
  v16 = DisableIEEE1667 == 0;
  MasterIrp->Flags = 255;
  if ( !v16
    && LODWORD(MasterIrp->MdlAddress) == 3
    && ((UserEvent_low = (unsigned __int8)LODWORD(MasterIrp->UserEvent), UserEvent_low == 129) || UserEvent_low == 130)
    && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
  {
    v15 = -1073741637;
  }
  else
  {
    v18 = (LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0) | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v18 = LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0;
    if ( !a3 )
    {
      v18 |= 0x102u;
      if ( *((_BYTE *)v14 + 2) == 40 )
        v14[19] = 32;
      else
        *((_BYTE *)v14 + 9) = 32;
    }
    if ( *(_BYTE *)v11 == 1 )
    {
      v19 = *((unsigned int *)v14 + 13);
      v10 = v14;
      *((_DWORD *)v14 + 5) = 9;
      *((_DWORD *)v14 + 6) = v18;
      v20 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v20 == 1094997074 && (*(_BYTE *)(v20 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v20 + 6232) + 8LL * LockArray_high));
        v22 = **(_QWORD **)(*(_QWORD *)(v20 + 6232) + 8LL * LockArray_high);
        *((_DWORD *)v14 + 11) = HIDWORD(v22);
      }
      else
      {
        LODWORD(v22) = -1;
      }
      *((_DWORD *)v14 + 8) = v22;
      *((_QWORD *)v14 + 8) = MasterIrp;
      *((_DWORD *)v14 + 15) = Options;
      v14[18] = IoGetIoPriorityHint(a2);
      *((_QWORD *)v14 + 10) = a2;
      Blink = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 1392);
      *((_DWORD *)v14 + 10) = Blink;
      *((_BYTE *)v14 + v19 + 8) = *(_BYTE *)(a1 + 104);
      *((_BYTE *)v14 + v19 + 9) = *(_BYTE *)(a1 + 105);
      *((_BYTE *)v14 + v19 + 10) = *(_BYTE *)(a1 + 106);
    }
    else
    {
      *v14 = 88;
      *((_BYTE *)v14 + 2) = 9;
      *((_DWORD *)v14 + 3) = v18;
      *((_BYTE *)v14 + 8) = -1;
      *((_QWORD *)v14 + 3) = MasterIrp;
      *((_DWORD *)v14 + 4) = Options;
      *((_QWORD *)v14 + 6) = a2;
      v24 = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !v24 )
        v24 = *(_DWORD *)(a1 + 1392);
      *((_DWORD *)v14 + 5) = v24;
      *((_BYTE *)v14 + 5) = *(_BYTE *)(a1 + 104);
      *((_BYTE *)v14 + 6) = *(_BYTE *)(a1 + 105);
      *((_BYTE *)v14 + 7) = *(_BYTE *)(a1 + 106);
    }
    v25 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)v14, v13, &v29);
    v26 = v25;
    if ( !v25 )
    {
LABEL_9:
      v15 = -1073741801;
      goto LABEL_44;
    }
    if ( *(_BYTE *)v11 == 1 )
    {
      v10 = v14;
      *((_QWORD *)v14 + 10) = a2;
    }
    else
    {
      *((_QWORD *)v14 + 6) = a2;
    }
    v15 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v25);
    if ( v15 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
      {
        v15 = -1073741637;
      }
      else
      {
        v30 = 84;
        StorGetStorageProtocolCommandBufferTotalLength(MasterIrp, &v30);
        a2->IoStatus.Information = v30;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    StorFreeSynchronousScsiRequest(v26);
  }
LABEL_44:
  if ( StorEtwLoggingEnabled )
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), (__int64)a2, v31);
  if ( v14 )
  {
    if ( *(_BYTE *)v11 == 1 )
    {
      if ( !v10 )
        v10 = v14;
      *((_QWORD *)v10 + 10) = 0LL;
      *((_QWORD *)v10 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v14 + 6) = 0LL;
      *((_QWORD *)v14 + 7) = 0LL;
    }
    ExFreePoolWithTag(v14, 0x72536152u);
  }
  return (unsigned int)v15;
}
