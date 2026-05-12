/*
 * XREFs of sub_140194600 @ 0x140194600
 * Callers:
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400CBA00 @ 0x1400CBA00 (sub_1400CBA00.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 *     sub_1400D74A8 @ 0x1400D74A8 (sub_1400D74A8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003E8E8 @ 0x14003E8E8 (sub_14003E8E8.c)
 *     sub_140056054 @ 0x140056054 (sub_140056054.c)
 *     sub_1400AEFB0 @ 0x1400AEFB0 (sub_1400AEFB0.c)
 *     sub_1400DC188 @ 0x1400DC188 (sub_1400DC188.c)
 *     sub_1400E08E8 @ 0x1400E08E8 (sub_1400E08E8.c)
 *     sub_1400E9790 @ 0x1400E9790 (sub_1400E9790.c)
 *     sub_1400E9B64 @ 0x1400E9B64 (sub_1400E9B64.c)
 *     sub_1400EA11C @ 0x1400EA11C (sub_1400EA11C.c)
 *     sub_1400EA21C @ 0x1400EA21C (sub_1400EA21C.c)
 *     sub_1400EE010 @ 0x1400EE010 (sub_1400EE010.c)
 *     sub_1400F11DC @ 0x1400F11DC (sub_1400F11DC.c)
 */

__int64 __fastcall sub_140194600(__int64 a1, __int64 a2, char a3, _OWORD *a4, _QWORD *a5)
{
  char v9; // r15
  char v10; // r12
  _DWORD *v11; // rbx
  int v12; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  struct _IO_WORKITEM *v14; // rcx
  void *v15; // rcx
  struct _IO_WORKITEM *v16; // rcx
  struct _IO_WORKITEM *v17; // rcx
  struct _IO_WORKITEM *v18; // rcx
  struct _IO_WORKITEM *v19; // rcx
  struct _IO_WORKITEM *v20; // rcx
  struct _IO_WORKITEM *v21; // rcx
  struct _IO_WORKITEM *v22; // rcx
  struct _IO_WORKITEM *v23; // rcx
  void *v24; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v25; // rcx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v28; // rax
  PIO_WORKITEM v29; // rax
  PIO_WORKITEM v30; // rax
  PIO_WORKITEM v31; // rax
  PIO_WORKITEM v32; // rax
  PIO_WORKITEM v33; // rax
  __int64 v34; // rax
  __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int128 v38; // xmm1
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  PIO_WORKITEM v42; // rax
  PIO_WORKITEM v43; // rax
  __int64 v44; // rax

  v9 = 0;
  v10 = 0;
  v11 = (_DWORD *)sub_1400143E0(72LL, 1792LL, 1380147538LL, *(_QWORD *)(a1 + 8));
  if ( !v11 )
    return (unsigned int)-1073741801;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x52436152u);
  *((_QWORD *)v11 + 69) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
    goto LABEL_4;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 18) = WorkItem;
  if ( !WorkItem )
    goto LABEL_4;
  v28 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 19) = v28;
  if ( !v28 )
    goto LABEL_4;
  v29 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 20) = v29;
  if ( !v29 )
    goto LABEL_4;
  v30 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 21) = v30;
  if ( !v30 )
    goto LABEL_4;
  v31 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 164) = v31;
  if ( !v31 )
    goto LABEL_4;
  v32 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 22) = v32;
  if ( !v32 )
    goto LABEL_4;
  v33 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)v11 + 178) = v33;
  if ( !v33 )
    goto LABEL_4;
  KeInitializeEvent((PRKEVENT)(v11 + 46), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(v11 + 52), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(v11 + 58), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(v11 + 64), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(v11 + 70));
  KeInitializeDpc((PRKDPC)(v11 + 86), (PKDEFERRED_ROUTINE)sub_1400E2F10, v11);
  KeInitializeTimer((PKTIMER)(v11 + 102));
  KeInitializeDpc((PRKDPC)(v11 + 118), (PKDEFERRED_ROUTINE)sub_1400E2F10, v11);
  *((_WORD *)v11 + 2) = -1;
  *((_QWORD *)v11 + 9) = v11 + 16;
  *((_QWORD *)v11 + 8) = v11 + 16;
  *((_QWORD *)v11 + 11) = v11 + 20;
  *((_QWORD *)v11 + 10) = v11 + 20;
  *((_QWORD *)v11 + 15) = v11 + 28;
  *((_QWORD *)v11 + 14) = v11 + 28;
  *((_WORD *)v11 + 3) = 4096;
  *((_QWORD *)v11 + 16) = a1;
  *v11 = 1314276178;
  v11[142] = 0;
  if ( a3 )
  {
    v11[186] = 255;
    goto LABEL_44;
  }
  if ( a2 )
  {
    v34 = sub_1400143E0(64LL, 72LL, 1380147538LL, *(_QWORD *)(a1 + 8));
    *((_QWORD *)v11 + 13) = v34;
    if ( v34 )
    {
      v35 = *(_WORD *)(a2 + 6);
      if ( v35 )
        *((_WORD *)v11 + 3) = v35;
      v36 = *((_QWORD *)v11 + 17);
      *((_QWORD *)v11 + 12) = a2;
      v37 = v36 | 2;
      *((_QWORD *)v11 + 17) = v37;
      v11[143] = 2 - ((*(_BYTE *)(a2 + 32) & 2) != 0);
      v11[186] = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4LL);
      *((_QWORD *)v11 + 94) = *(_QWORD *)(a2 + 24) + 72LL;
      if ( a4 && *(_BYTE *)a4 )
      {
        *(_OWORD *)(v11 + 190) = *a4;
        v38 = a4[1];
      }
      else
      {
        *(_OWORD *)(v11 + 190) = *(_OWORD *)(a2 + 572);
        v38 = *(_OWORD *)(a2 + 588);
      }
      *(_OWORD *)(v11 + 194) = v38;
      *((_QWORD *)v11 + 99) = a2 + 60;
      v11[8] = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      if ( (*(_BYTE *)(a2 + 32) & 8) != 0 )
        *((_QWORD *)v11 + 17) = v37 | 4;
      v12 = sub_1400DC188((__int64)v11);
      if ( v12 < 0 )
        goto LABEL_5;
      goto LABEL_56;
    }
LABEL_4:
    v12 = -1073741801;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 416) & 0x40) == 0 )
    goto LABEL_56;
  v11[186] = 0;
LABEL_44:
  v11[143] = 1;
  v11[226] = (*(_DWORD *)(a1 + 144) >> 10) & 2 | 1;
LABEL_56:
  *((_WORD *)v11 + 28) = -1;
  v39 = *(_DWORD *)(a1 + 976);
  if ( (v39 & 2) != 0 )
  {
    *((_QWORD *)v11 + 17) |= 0x10uLL;
  }
  else if ( (v39 & 4) != 0 )
  {
    *((_QWORD *)v11 + 17) |= 0x20uLL;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)v11 + 90);
  v40 = v11[143];
  if ( v40 == 1 )
  {
    v11[2] = 0xFFFF;
    *((_QWORD *)v11 + 81) = v11 + 160;
    *((_QWORD *)v11 + 80) = v11 + 160;
    *((_WORD *)v11 + 10) = -1;
    *((_WORD *)v11 + 14) = 0;
    KeInitializeSpinLock((PKSPIN_LOCK)v11 + 79);
    v12 = sub_14003E8E8((__int64)(v11 + 166), 0x20u, v41, (__int64)sub_1400F8440);
    if ( v12 < 0 )
      goto LABEL_5;
    v9 = 1;
  }
  else if ( v40 == 2 )
  {
    ExInitializeResourceLite((PERESOURCE)v11 + 14);
    v10 = 1;
    *((_QWORD *)v11 + 198) = v11 + 394;
    *((_QWORD *)v11 + 197) = v11 + 394;
    *((_QWORD *)v11 + 202) = v11 + 402;
    *((_QWORD *)v11 + 201) = v11 + 402;
  }
  *((_WORD *)v11 + 308) = _InterlockedExchangeAdd16((volatile signed __int16 *)(a1 + 984), 1u);
  v12 = sub_1400E9B64(v11);
  if ( v12 < 0 )
    goto LABEL_5;
  v12 = sub_1400E9790((__int64)v11);
  if ( v12 < 0 )
    goto LABEL_5;
  v42 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*((_QWORD *)v11 + 16) + 8LL));
  *((_QWORD *)v11 + 129) = v42;
  if ( v42 )
  {
    v12 = sub_1400EE010((__int64)v11);
    if ( v12 < 0 )
      goto LABEL_5;
    if ( (v11[34] & 2) != 0
      || (v43 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*((_QWORD *)v11 + 16) + 8LL)),
          (*((_QWORD *)v11 + 130) = v43) != 0LL)
      && (v44 = sub_1400143E0(72LL, 32LL, 1380147538LL, *(_QWORD *)(*((_QWORD *)v11 + 16) + 8LL)),
          (*((_QWORD *)v11 + 217) = v44) != 0LL) )
    {
      sub_1400AEFB0((__int64)v11);
      *((_BYTE *)v11 + 1729) = 1;
      *a5 = v11;
      return (unsigned int)v12;
    }
  }
  v12 = -1073741670;
LABEL_5:
  sub_1400F11DC((__int64)v11);
  v14 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 129);
  if ( v14 )
  {
    IoFreeWorkItem(v14);
    *((_QWORD *)v11 + 129) = 0LL;
  }
  if ( v9 )
    sub_140056054((__int64)(v11 + 166));
  if ( v10 )
    ExDeleteResourceLite((PERESOURCE)v11 + 14);
  sub_1400E08E8((__int64)v11);
  v15 = (void *)*((_QWORD *)v11 + 13);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x52436152u);
  v16 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 21);
  if ( v16 )
    IoFreeWorkItem(v16);
  v17 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 22);
  if ( v17 )
    IoFreeWorkItem(v17);
  v18 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 20);
  if ( v18 )
    IoFreeWorkItem(v18);
  v19 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 19);
  if ( v19 )
    IoFreeWorkItem(v19);
  v20 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 18);
  if ( v20 )
    IoFreeWorkItem(v20);
  v21 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 164);
  if ( v21 )
    IoFreeWorkItem(v21);
  v22 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 178);
  if ( v22 )
    IoFreeWorkItem(v22);
  sub_1400EA21C((__int64)v11);
  sub_1400EA11C((__int64)v11);
  v23 = (struct _IO_WORKITEM *)*((_QWORD *)v11 + 130);
  if ( v23 )
  {
    IoFreeWorkItem(v23);
    *((_QWORD *)v11 + 130) = 0LL;
  }
  v24 = (void *)*((_QWORD *)v11 + 217);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x52436152u);
    *((_QWORD *)v11 + 217) = 0LL;
  }
  v25 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v11 + 69);
  if ( v25 )
    ExFreeCacheAwareRundownProtection(v25);
  ExFreePoolWithTag(v11, 0x52436152u);
  return (unsigned int)v12;
}
