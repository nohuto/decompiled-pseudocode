/*
 * XREFs of sub_140016234 @ 0x140016234
 * Callers:
 *     sub_14001467C @ 0x14001467C (sub_14001467C.c)
 *     sub_14003B2E8 @ 0x14003B2E8 (sub_14003B2E8.c)
 *     sub_1400589FC @ 0x1400589FC (sub_1400589FC.c)
 *     sub_14005A6E4 @ 0x14005A6E4 (sub_14005A6E4.c)
 *     sub_14005AC44 @ 0x14005AC44 (sub_14005AC44.c)
 *     sub_14005D120 @ 0x14005D120 (sub_14005D120.c)
 *     sub_1400610C8 @ 0x1400610C8 (sub_1400610C8.c)
 *     sub_1400657EC @ 0x1400657EC (sub_1400657EC.c)
 *     sub_140065CA4 @ 0x140065CA4 (sub_140065CA4.c)
 *     sub_1400667DC @ 0x1400667DC (sub_1400667DC.c)
 *     sub_14008A130 @ 0x14008A130 (sub_14008A130.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_1400158F0 @ 0x1400158F0 (sub_1400158F0.c)
 *     sub_1400159B4 @ 0x1400159B4 (sub_1400159B4.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1400540D4 @ 0x1400540D4 (sub_1400540D4.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140016234(
        CMSPAddress *this,
        PIRP Irp,
        unsigned int *a3,
        ULONG a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // rbp
  unsigned int *v11; // r15
  int v12; // ecx
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int *v20; // rbx
  int v21; // esi
  char v22; // si
  int v23; // eax
  int v24; // eax
  PIRP v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  NTSTATUS v29; // eax
  bool v30; // zf
  KIRQL v31; // bl
  __int64 v32; // rbx
  unsigned int LockArray_high; // eax
  __int64 v34; // rdx
  __int64 v35; // [rsp+30h] [rbp-68h]
  union _LARGE_INTEGER v36; // [rsp+38h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v39; // [rsp+B0h] [rbp+18h]
  ULONG v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v8 = 0LL;
  Timeout.QuadPart = 0LL;
  v11 = 0LL;
  v12 = *(_DWORD *)this;
  memset(&Event, 0, sizeof(Event));
  if ( v12 == 1314275652 )
  {
    v14 = (__int64)this + 274;
  }
  else
  {
    v14 = (__int64)this + 482;
    if ( v12 != 1094997074 )
      v14 = 98LL;
  }
  v15 = 316LL;
  if ( v12 != 1314275652 )
    v15 = 524LL;
  v16 = (*(_DWORD *)((char *)this + v15) + 7) & 0xFFFFFFF8;
  v17 = (unsigned int *)sub_140015A14(*((_QWORD *)this + 1), 2u, *(_BYTE *)v14, 0);
  v18 = sub_14002285C(v16 + 1184);
  v35 = v18;
  if ( !v17 || !v18 )
  {
    v21 = -1073741801;
    if ( !v18 )
      goto LABEL_44;
    goto LABEL_43;
  }
  v8 = v18 + 48;
  sub_140017C40(v18 + 48, v19, 0LL, 0LL);
  v20 = v39;
  v21 = sub_1400159B4(v8, v39, a4);
  if ( v21 < 0 )
    goto LABEL_40;
  v22 = a6;
  v23 = a7;
  if ( !a6 )
  {
    v23 = a7 | 0x102;
    if ( *((_BYTE *)v17 + 2) == 40 )
      *((_WORD *)v17 + 19) = 32;
    else
      *((_BYTE *)v17 + 9) = 32;
  }
  v24 = v23 | 1;
  if ( *(_BYTE *)v14 == 1 )
  {
    v32 = v17[13];
    v11 = v17;
    v17[5] = 2;
    v17[6] = v24;
    if ( *(_DWORD *)this == 1094997074 && (*((_BYTE *)this + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*((_QWORD *)this + 771) + 8LL * LockArray_high));
      v34 = **(_QWORD **)(*((_QWORD *)this + 771) + 8LL * LockArray_high);
      v17[11] = HIDWORD(v34);
    }
    else
    {
      LODWORD(v34) = -1;
    }
    v17[8] = v34;
    *((_QWORD *)v17 + 8) = v39;
    v17[15] = v40;
    *((_WORD *)v17 + 18) = IoGetIoPriorityHint(Irp);
    v17[10] = *((_DWORD *)this + 1031);
    *((_QWORD *)v17 + 12) = v8;
    *((_QWORD *)v17 + 10) = Irp;
    *(_WORD *)((char *)v17 + v32 + 8) = 0;
    *((_BYTE *)v17 + v32 + 10) = 0;
    *(_QWORD *)(v8 + 168) = v17;
    *(_QWORD *)(v8 + 184) = *((_QWORD *)v17 + 8);
    v25 = (PIRP)*((_QWORD *)v17 + 12);
  }
  else
  {
    v17[3] = v24;
    v17[4] = v40;
    *((_QWORD *)v17 + 3) = v20;
    *(_WORD *)v17 = 88;
    *((_BYTE *)v17 + 2) = 2;
    *((_BYTE *)v17 + 8) = -1;
    v17[5] = *((_DWORD *)this + 1031);
    *((_QWORD *)v17 + 6) = v8;
    *(_WORD *)((char *)v17 + 5) = 0;
    *((_BYTE *)v17 + 7) = 0;
    *(_QWORD *)(v8 + 168) = v17;
    *(_QWORD *)(v8 + 184) = *((_QWORD *)v17 + 3);
    v25 = Irp;
  }
  *(_QWORD *)(v8 + 176) = v25;
  sub_1400161E0((int *)this, (__int64)v17, v35 + 1184);
  if ( v22 )
    *(_BYTE *)(v8 + 17) |= 8u;
  KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
  *(_QWORD *)(v8 + 656) = sub_140038660;
  if ( v22 )
  {
    sub_1400099A0((__int64)this);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    sub_1400540D4(*((_QWORD *)this + 120), &Event);
    v36.QuadPart = -1200000000LL;
    v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v36);
    v30 = v29 == 0;
    if ( v29 >= 0 )
      v30 = (unsigned int)sub_1400A6008(this, 120000LL) == 0;
    if ( !v30 )
    {
      Irp->IoStatus.Information = 0LL;
      v21 = -1073741823;
      goto LABEL_43;
    }
  }
  if ( *((_QWORD *)this + 620) )
    sub_1400212C0(this, 0LL, 1LL);
  if ( *(_BYTE *)v14 == 1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_1400681AC(off_140168120->AttachedDevice, 60LL, &unk_14014A2D8, v8, v11, *((_QWORD *)v11 + 13));
    }
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
         && (HIDWORD(off_140168120->Timer) & 0x10) != 0
         && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400681AC(off_140168120->AttachedDevice, 61LL, &unk_14014A2D8, v8, v17, *((_QWORD *)v17 + 7));
  }
  if ( *((_BYTE *)this + 4370) )
    v26 = sub_140017D90(this, v8);
  else
    v26 = sub_1400184D0(this, v8);
  v21 = v26;
  if ( v26 < 0 )
  {
LABEL_28:
    if ( v21 != 258 )
      goto LABEL_29;
    goto LABEL_57;
  }
  if ( a8 )
  {
    Timeout.QuadPart = -10000000LL * a8;
    v21 = KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, &Timeout);
  }
  else
  {
    KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
  }
  if ( v21 != 258 )
  {
    LOBYTE(v27) = *((_BYTE *)v17 + 3);
    v21 = sub_1400229C8(v27);
    goto LABEL_28;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 1545);
LABEL_57:
  CMSPAddress::get_DynamicTerminalClasses(this, 0LL);
LABEL_29:
  if ( a6 )
  {
    v31 = KfRaiseIrql(2u);
    sub_140066768(this);
    KeLowerIrql(v31);
  }
  if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
  {
    sub_14001F93C(this, *(unsigned int *)(v8 + 748));
    *(_BYTE *)(v8 + 17) &= ~1u;
  }
  if ( *((_QWORD *)this + 620) )
    sub_140021110(this, 0LL, 0LL);
  if ( v21 >= 0 )
  {
    if ( v21 == 258 )
    {
LABEL_41:
      v21 = -1073741643;
      goto LABEL_43;
    }
    if ( !a5 || (v21 = a5(v39[5]), v21 >= 0) )
      v21 = sub_1400158F0(*((_BYTE *)v17 + 3));
  }
LABEL_40:
  if ( v21 == 258 )
    goto LABEL_41;
LABEL_43:
  sub_140017A20(v8, 0LL);
  sub_140016754(this, v35);
LABEL_44:
  if ( v17 )
  {
    if ( *(_BYTE *)v14 == 1 )
    {
      if ( !v11 )
        v11 = v17;
      *((_QWORD *)v11 + 10) = 0LL;
      *((_QWORD *)v11 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v17 + 6) = 0LL;
      *((_QWORD *)v17 + 7) = 0LL;
    }
    ExFreePoolWithTag(v17, 0x72536152u);
  }
  return (unsigned int)v21;
}
