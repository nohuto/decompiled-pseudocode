/*
 * XREFs of sub_1400DEFC4 @ 0x1400DEFC4
 * Callers:
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400CBA00 @ 0x1400CBA00 (sub_1400CBA00.c)
 *     sub_1400D74A8 @ 0x1400D74A8 (sub_1400D74A8.c)
 *     sub_1400D7730 @ 0x1400D7730 (sub_1400D7730.c)
 *     sub_14018D030 @ 0x14018D030 (sub_14018D030.c)
 *     sub_14019188C @ 0x14019188C (sub_14019188C.c)
 * Callees:
 *     sub_140056054 @ 0x140056054 (sub_140056054.c)
 *     sub_1400BCC68 @ 0x1400BCC68 (sub_1400BCC68.c)
 *     sub_1400E08E8 @ 0x1400E08E8 (sub_1400E08E8.c)
 *     sub_1400E4D80 @ 0x1400E4D80 (sub_1400E4D80.c)
 *     sub_1400EA11C @ 0x1400EA11C (sub_1400EA11C.c)
 *     sub_1400EA21C @ 0x1400EA21C (sub_1400EA21C.c)
 *     sub_1400F11DC @ 0x1400F11DC (sub_1400F11DC.c)
 *     sub_140115008 @ 0x140115008 (sub_140115008.c)
 *     sub_140115130 @ 0x140115130 (sub_140115130.c)
 *     sub_140115214 @ 0x140115214 (sub_140115214.c)
 *     sub_1401224B4 @ 0x1401224B4 (sub_1401224B4.c)
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 *     sub_14017BF24 @ 0x14017BF24 (sub_14017BF24.c)
 */

void __fastcall sub_1400DEFC4(__int64 *a1)
{
  __int64 v2; // rbp
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  int v5; // eax
  union _SLIST_HEADER *v6; // rdi
  PSLIST_ENTRY v7; // rax
  void *Alignment; // rcx
  void *v9; // rcx
  struct _IO_WORKITEM *v10; // rcx
  struct _IO_WORKITEM *v11; // rcx
  struct _IO_WORKITEM *v12; // rcx
  struct _IO_WORKITEM *v13; // rcx
  struct _IO_WORKITEM *v14; // rcx
  struct _IO_WORKITEM *v15; // rcx
  struct _IO_WORKITEM *v16; // rcx
  struct _IO_WORKITEM *v17; // rcx
  struct _IO_WORKITEM *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx

  v2 = *(_QWORD *)(*a1 + 128);
  sub_1400EA21C();
  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*a1 + 552);
  if ( v3 )
    ExWaitForRundownProtectionReleaseCacheAware(v3);
  if ( *(_QWORD *)(*a1 + 560) )
    sub_1400E4D80();
  v4 = (struct _ERESOURCE *)*a1;
  v5 = *(_DWORD *)(*a1 + 572);
  if ( v5 == 1 )
  {
    sub_140056054((__int64)&v4[6].ExclusiveWaiters);
  }
  else if ( v5 == 2 )
  {
    ExDeleteResourceLite(v4 + 14);
  }
  v6 = (union _SLIST_HEADER *)*a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v7 = ExpInterlockedPopEntrySList(v6 + 71);
      if ( !v7 )
        break;
      sub_140122570(v6, &v7[-1]);
    }
    sub_1401224B4(v6);
    Alignment = (void *)v6[73].Alignment;
    if ( Alignment )
    {
      ExFreePoolWithTag(Alignment, 0x52436152u);
      v6[73].Alignment = 0LL;
    }
  }
  sub_1400E08E8(*a1);
  v9 = *(void **)(*a1 + 104);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x52436152u);
    *(_QWORD *)(*a1 + 104) = 0LL;
  }
  v10 = *(struct _IO_WORKITEM **)(*a1 + 168);
  if ( v10 )
  {
    IoFreeWorkItem(v10);
    *(_QWORD *)(*a1 + 168) = 0LL;
  }
  v11 = *(struct _IO_WORKITEM **)(*a1 + 160);
  if ( v11 )
  {
    IoFreeWorkItem(v11);
    *(_QWORD *)(*a1 + 160) = 0LL;
  }
  v12 = *(struct _IO_WORKITEM **)(*a1 + 152);
  if ( v12 )
  {
    IoFreeWorkItem(v12);
    *(_QWORD *)(*a1 + 152) = 0LL;
  }
  v13 = *(struct _IO_WORKITEM **)(*a1 + 176);
  if ( v13 )
  {
    IoFreeWorkItem(v13);
    *(_QWORD *)(*a1 + 176) = 0LL;
  }
  v14 = *(struct _IO_WORKITEM **)(*a1 + 144);
  if ( v14 )
  {
    IoFreeWorkItem(v14);
    *(_QWORD *)(*a1 + 144) = 0LL;
  }
  v15 = *(struct _IO_WORKITEM **)(*a1 + 1032);
  if ( v15 )
  {
    IoFreeWorkItem(v15);
    *(_QWORD *)(*a1 + 1032) = 0LL;
  }
  v16 = *(struct _IO_WORKITEM **)(*a1 + 1312);
  if ( v16 )
  {
    IoFreeWorkItem(v16);
    *(_QWORD *)(*a1 + 1312) = 0LL;
  }
  v17 = *(struct _IO_WORKITEM **)(*a1 + 1424);
  if ( v17 )
  {
    IoFreeWorkItem(v17);
    *(_QWORD *)(*a1 + 1424) = 0LL;
  }
  v18 = *(struct _IO_WORKITEM **)(*a1 + 1040);
  if ( v18 )
  {
    IoFreeWorkItem(v18);
    *(_QWORD *)(*a1 + 1040) = 0LL;
  }
  v19 = *(void **)(*a1 + 1736);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x52436152u);
    *(_QWORD *)(*a1 + 1736) = 0LL;
  }
  sub_1400EA11C(*a1);
  sub_140115214(*a1);
  sub_140115008(*a1);
  sub_140115130(*a1);
  sub_1400BCC68(*a1);
  v20 = *(void **)(*a1 + 872);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x52436152u);
    *(_QWORD *)(*a1 + 872) = 0LL;
  }
  v21 = *(void **)(*a1 + 1048);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x52436152u);
    *(_QWORD *)(*a1 + 1048) = 0LL;
  }
  ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*a1 + 552));
  sub_1400F11DC(*a1);
  if ( (*(_BYTE *)(*a1 + 136) & 2) == 0 )
  {
    v22 = *(void **)(*a1 + 792);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0x52436152u);
      *(_QWORD *)(*a1 + 792) = 0LL;
    }
    v23 = *(void **)(*a1 + 752);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0x52436152u);
      *(_QWORD *)(*a1 + 752) = 0LL;
    }
  }
  v24 = *a1;
  v25 = *(void **)(*a1 + 1648);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0x52436152u);
    *(_QWORD *)(*a1 + 1648) = 0LL;
    v24 = *a1;
  }
  if ( v2 && *(_DWORD *)(v24 + 1640) )
  {
    sub_14017BF24(v2 + 1144, v24 + 1624);
    *(_QWORD *)(*a1 + 1112) = 0LL;
    *(_QWORD *)(*a1 + 1120) = 0LL;
  }
  v26 = *(void **)(*a1 + 1248);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0x52436152u);
    *(_QWORD *)(*a1 + 1248) = 0LL;
  }
  v27 = *(void **)(*a1 + 1256);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0x52436152u);
    *(_QWORD *)(*a1 + 1256) = 0LL;
  }
  ExFreePoolWithTag((PVOID)*a1, 0x52436152u);
  *a1 = 0LL;
}
