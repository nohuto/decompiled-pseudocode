/*
 * XREFs of sub_1400153FC @ 0x1400153FC
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x140011CCC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_140014CBC @ 0x140014CBC (sub_140014CBC.c)
 *     sub_140098228 @ 0x140098228 (sub_140098228.c)
 *     sub_14009B090 @ 0x14009B090 (sub_14009B090.c)
 *     sub_14009BE34 @ 0x14009BE34 (sub_14009BE34.c)
 *     sub_14009C2C8 @ 0x14009C2C8 (sub_14009C2C8.c)
 *     sub_14009C7D0 @ 0x14009C7D0 (sub_14009C7D0.c)
 *     sub_14009CDA8 @ 0x14009CDA8 (sub_14009CDA8.c)
 *     sub_14017F1A8 @ 0x14017F1A8 (sub_14017F1A8.c)
 * Callees:
 *     sub_1400158A4 @ 0x1400158A4 (sub_1400158A4.c)
 *     sub_1400158F0 @ 0x1400158F0 (sub_1400158F0.c)
 *     sub_140015988 @ 0x140015988 (sub_140015988.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400153FC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  char *v7; // rbp
  _DWORD *v8; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // ebx
  char *Pool2; // rdi
  char *v14; // r8
  int v15; // eax
  _QWORD *v16; // r12
  PIRP Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *v19; // r10
  ULONG *v20; // rax
  ULONG v21; // edx
  int v22; // ecx
  PMDL Mdl; // rax
  __int64 v24; // rdx
  struct _DEVICE_OBJECT *v25; // rbx
  struct _IO_STACK_LOCATION *v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  int Status; // ebx
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // r9
  _DWORD *v34; // r11
  unsigned int LockArray_high; // eax
  __int64 v36; // rdx
  void **v37; // [rsp+30h] [rbp-98h]
  ULONG *v38; // [rsp+38h] [rbp-90h]
  _QWORD *v39; // [rsp+40h] [rbp-88h]
  ULONG *v40; // [rsp+48h] [rbp-80h]
  __int128 v41; // [rsp+50h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-68h] BYREF
  _BYTE *v43; // [rsp+D0h] [rbp+8h]

  v7 = 0LL;
  v41 = 0LL;
  v8 = *(_DWORD **)(a1 + 24);
  if ( *v8 == 1314275652 )
  {
    v10 = (__int64)v8 + 274;
  }
  else
  {
    v10 = (__int64)v8 + 482;
    if ( *v8 != 1094997074 )
      v10 = 98LL;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 2;
  if ( *(_BYTE *)v10 != 1 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( !Pool2 && v11 )
      sub_14008D9B8(v11, 64, 88, 1918067026, 0x80000000);
    goto LABEL_6;
  }
  v31 = ExAllocatePool2(64LL, 144LL, 1918067026LL);
  Pool2 = (char *)v31;
  if ( !v31 )
  {
    if ( v11 )
    {
      sub_14008D9B8(v11, 64, 144, 1918067026, 0x80000000);
      return (unsigned int)-1073741801;
    }
LABEL_6:
    v14 = Pool2;
    if ( Pool2 )
      goto LABEL_7;
    return (unsigned int)-1073741801;
  }
  *(_DWORD *)(v31 + 56) = 0;
  *(_DWORD *)(v31 + 12) = 1;
  v14 = (char *)v31;
  *(_WORD *)v31 = 8;
  *(_BYTE *)(v31 + 2) = 40;
  *(_DWORD *)(v31 + 8) = 1397899864;
  *(_DWORD *)(v31 + 16) = 144;
  *(_DWORD *)(v31 + 20) = 2;
  *(_WORD *)(v31 + 36) = 2;
  *(_DWORD *)(v31 + 52) = 128;
  *(_WORD *)(v31 + 128) = 1;
  *(_DWORD *)(v31 + 132) = 4;
LABEL_7:
  v15 = a7;
  if ( !a6 )
  {
    v15 = a7 | 0x102;
    if ( Pool2[2] == 40 )
      *((_WORD *)Pool2 + 19) = 32;
    else
      Pool2[9] = 32;
  }
  v16 = v14 + 24;
  if ( *(_BYTE *)v10 != 1 )
  {
    *(_WORD *)Pool2 = 88;
    Pool2[2] = 2;
    Pool2[8] = -1;
    v43 = Pool2 + 2;
    *((_DWORD *)Pool2 + 3) = v15;
    *v16 = a3;
    v39 = Pool2 + 12;
    *((_DWORD *)Pool2 + 4) = a4;
    *((_QWORD *)Pool2 + 6) = a2;
    *((_DWORD *)v14 + 5) = *(_DWORD *)(a1 + 1392);
    Pool2[5] = *(_BYTE *)(a1 + 104);
    Pool2[6] = *(_BYTE *)(a1 + 105);
    Pool2[7] = *(_BYTE *)(a1 + 106);
    v40 = (ULONG *)(Pool2 + 16);
    v38 = (ULONG *)(v14 + 60);
    v37 = (void **)(v14 + 64);
    goto LABEL_12;
  }
  v32 = *((unsigned int *)Pool2 + 13);
  v7 = Pool2;
  *((_DWORD *)v14 + 5) = 2;
  *(_DWORD *)v16 = v15;
  v33 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)v33 != 1094997074 )
  {
    v34 = v14 + 32;
    goto LABEL_59;
  }
  v34 = Pool2 + 32;
  if ( (*(_BYTE *)(v33 + 111) & 4) == 0 )
  {
LABEL_59:
    LODWORD(v36) = -1;
    goto LABEL_60;
  }
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(v33 + 6168) + 8LL * LockArray_high), 1u);
  v36 = **(_QWORD **)(*(_QWORD *)(v33 + 6168) + 8LL * LockArray_high);
  *((_DWORD *)Pool2 + 11) = HIDWORD(v36);
LABEL_60:
  *v34 = v36;
  *((_QWORD *)Pool2 + 8) = a3;
  v37 = (void **)(Pool2 + 64);
  *((_DWORD *)Pool2 + 15) = a4;
  *((_QWORD *)Pool2 + 10) = a2;
  *((_DWORD *)Pool2 + 10) = *(_DWORD *)(a1 + 1392);
  Pool2[v32 + 8] = *(_BYTE *)(a1 + 104);
  Pool2[v32 + 9] = *(_BYTE *)(a1 + 105);
  Pool2[v32 + 10] = *(_BYTE *)(a1 + 106);
  v43 = v14 + 2;
  v39 = v14 + 12;
  v40 = (ULONG *)(v14 + 16);
  v38 = (ULONG *)(Pool2 + 60);
LABEL_12:
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 8) + 76LL), 0);
  if ( !Irp )
    goto LABEL_39;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
  if ( *v43 == 40 )
  {
    v20 = v38;
    v19 = *v37;
  }
  else
  {
    v19 = (void *)*v16;
    v16 = v39;
    v20 = v40;
  }
  v21 = *v20;
  v22 = *(_DWORD *)v16;
  if ( (*(_BYTE *)v16 & 0xC0) != 0xC0 )
  {
    if ( (v22 & 0x40) != 0 )
      v12 = 1;
    else
      v12 = ((v22 & 0x80u) != 0) - 1;
  }
  if ( v21 )
  {
    Mdl = IoAllocateMdl(v19, v21, 0, 0, 0LL);
    Irp->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( (int)sub_140015988(Mdl, v24, v12) >= 0 )
        goto LABEL_21;
      IoFreeMdl(Irp->MdlAddress);
      Irp->MdlAddress = 0LL;
    }
    IoFreeIrp(Irp);
LABEL_39:
    Status = -1073741801;
    goto LABEL_30;
  }
LABEL_21:
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v41;
  Irp->UserEvent = 0LL;
  if ( *(_BYTE *)v10 == 1 )
  {
    v7 = Pool2;
    *((_QWORD *)Pool2 + 10) = Irp;
  }
  else
  {
    *((_QWORD *)Pool2 + 6) = Irp;
  }
  v25 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v26 = Irp->Tail.Overlay.CurrentStackLocation;
  v26[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1400357D0;
  v26[-1].Context = &Event;
  v26[-1].Control = -32;
  v27 = IofCallDriver(v25, Irp);
  Status = v27;
  if ( v27 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_25:
    Status = Irp->IoStatus.Status;
    if ( Status >= 0 )
    {
      if ( !a5 || (Status = a5(*(unsigned int *)(a3 + 20)), Status >= 0) )
      {
        LOBYTE(v28) = Pool2[3];
        Status = sub_1400158F0(v28);
      }
    }
    goto LABEL_29;
  }
  if ( v27 >= 0 )
    goto LABEL_25;
LABEL_29:
  sub_1400158A4(Irp);
LABEL_30:
  if ( *(_BYTE *)v10 == 1 )
  {
    if ( !v7 )
      v7 = Pool2;
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 13) = 0LL;
  }
  else
  {
    *((_QWORD *)Pool2 + 6) = 0LL;
    *((_QWORD *)Pool2 + 7) = 0LL;
  }
  ExFreePoolWithTag(Pool2, 0x72536152u);
  return (unsigned int)Status;
}
