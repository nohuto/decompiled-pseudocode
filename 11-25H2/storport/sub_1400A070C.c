/*
 * XREFs of sub_1400A070C @ 0x1400A070C
 * Callers:
 *     sub_14003BB30 @ 0x14003BB30 (sub_14003BB30.c)
 * Callees:
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_1400158A4 @ 0x1400158A4 (sub_1400158A4.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_140044530 @ 0x140044530 (sub_140044530.c)
 *     sub_14008F59C @ 0x14008F59C (sub_14008F59C.c)
 */

__int64 __fastcall sub_1400A070C(__int64 a1, IRP *a2, char a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _DWORD *v4; // r12
  struct _IRP *MasterIrp; // r14
  ULONG Options; // r13d
  ULONG Length; // eax
  ULONG_PTR v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r8
  ULONG_PTR v15; // rbx
  NTSTATUS v16; // edi
  bool v17; // zf
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
  struct _IO_STATUS_BLOCK v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  char v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_DWORD **)(a1 + 24);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v29 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v11 = 0LL;
  if ( Options <= Length )
    Options = Length;
  if ( *v4 == 1314275652 )
  {
    v12 = (__int64)v4 + 274;
  }
  else if ( *v4 == 1094997074 )
  {
    v12 = (__int64)v4 + 482;
  }
  else
  {
    v12 = 98LL;
  }
  v13 = sub_140015A14(*(_QWORD *)(a1 + 8), 9u, *(_BYTE *)v12, 0);
  v14 = 0LL;
  v15 = v13;
  if ( !v13 )
    goto LABEL_9;
  v17 = byte_1401688B4 == 0;
  MasterIrp->Flags = 255;
  if ( !v17
    && LODWORD(MasterIrp->MdlAddress) == 3
    && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
    && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
  {
    v16 = -1073741637;
  }
  else
  {
    v18 = (LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0) | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v18 = LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0;
    if ( !a3 )
    {
      v18 |= 0x102u;
      if ( *(_BYTE *)(v13 + 2) == 40 )
        *(_WORD *)(v13 + 38) = 32;
      else
        *(_BYTE *)(v13 + 9) = 32;
    }
    if ( *(_BYTE *)v12 == 1 )
    {
      v19 = *(unsigned int *)(v13 + 52);
      v11 = v13;
      *(_DWORD *)(v13 + 20) = 9;
      *(_DWORD *)(v13 + 24) = v18;
      v20 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v20 == 1094997074 && (*(_BYTE *)(v20 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v20 + 6168) + 8LL * LockArray_high));
        v22 = **(_QWORD **)(*(_QWORD *)(v20 + 6168) + 8LL * LockArray_high);
        *(_DWORD *)(v15 + 44) = HIDWORD(v22);
      }
      else
      {
        LODWORD(v22) = -1;
      }
      *(_DWORD *)(v15 + 32) = v22;
      *(_QWORD *)(v15 + 64) = MasterIrp;
      *(_DWORD *)(v15 + 60) = Options;
      *(_WORD *)(v15 + 36) = IoGetIoPriorityHint(a2);
      *(_QWORD *)(v15 + 80) = a2;
      Blink = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 1392);
      *(_DWORD *)(v15 + 40) = Blink;
      *(_BYTE *)(v19 + v15 + 8) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v19 + v15 + 9) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v19 + v15 + 10) = *(_BYTE *)(a1 + 106);
    }
    else
    {
      *(_WORD *)v13 = 88;
      *(_BYTE *)(v13 + 2) = 9;
      *(_DWORD *)(v13 + 12) = v18;
      *(_BYTE *)(v13 + 8) = -1;
      *(_QWORD *)(v13 + 24) = MasterIrp;
      *(_DWORD *)(v13 + 16) = Options;
      *(_QWORD *)(v13 + 48) = a2;
      v24 = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !v24 )
        v24 = *(_DWORD *)(a1 + 1392);
      *(_DWORD *)(v15 + 20) = v24;
      *(_BYTE *)(v15 + 5) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v15 + 6) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v15 + 7) = *(_BYTE *)(a1 + 106);
    }
    v25 = sub_140014B7C(*(_QWORD *)(a1 + 8), v15, v14, &v29);
    v26 = v25;
    if ( !v25 )
    {
LABEL_9:
      v16 = -1073741801;
      goto LABEL_43;
    }
    if ( *(_BYTE *)v12 == 1 )
    {
      v11 = v15;
      *(_QWORD *)(v15 + 80) = a2;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = a2;
    }
    v16 = sub_140018E30(*(PDEVICE_OBJECT *)(a1 + 8), v25);
    if ( v16 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
      {
        v16 = -1073741637;
      }
      else
      {
        v30 = 84;
        sub_14008F59C(MasterIrp, &v30);
        a2->IoStatus.Information = v30;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    sub_1400158A4(v26);
  }
LABEL_43:
  if ( byte_140168DAA )
    sub_140044530(*(_QWORD *)(a1 + 8), (__int64)a2, v31);
  if ( v15 )
  {
    if ( *(_BYTE *)v12 == 1 )
    {
      if ( !v11 )
        v11 = v15;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v15, 0x72536152u);
  }
  return (unsigned int)v16;
}
