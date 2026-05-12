/*
 * XREFs of sub_140045574 @ 0x140045574
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_14003CC04 @ 0x14003CC04 (sub_14003CC04.c)
 *     sub_140055690 @ 0x140055690 (sub_140055690.c)
 *     sub_140055804 @ 0x140055804 (sub_140055804.c)
 *     sub_140056054 @ 0x140056054 (sub_140056054.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140066D1C @ 0x140066D1C (sub_140066D1C.c)
 *     sub_1401782E0 @ 0x1401782E0 (sub_1401782E0.c)
 *     sub_140178334 @ 0x140178334 (sub_140178334.c)
 *     sub_14017AF14 @ 0x14017AF14 (sub_14017AF14.c)
 *     sub_14017BF24 @ 0x14017BF24 (sub_14017BF24.c)
 *     sub_1401A7310 @ 0x1401A7310 (sub_1401A7310.c)
 *     sub_1401A8784 @ 0x1401A8784 (sub_1401A8784.c)
 *     sub_1401A8ACC @ 0x1401A8ACC (sub_1401A8ACC.c)
 *     sub_1401B0E68 @ 0x1401B0E68 (sub_1401B0E68.c)
 */

void __fastcall sub_140045574(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  struct _UNICODE_STRING *v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v13; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  void *v15; // rcx
  KIRQL v16; // bl
  void *v17; // rcx
  _DWORD *v18; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  PSLIST_ENTRY i; // rax
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  signed __int32 v34[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 6000);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49436152u);
    *(_QWORD *)(a1 + 6000) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 6160);
  if ( v3 )
  {
    v4 = *(void **)(v3 + 48);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 48LL) = 0LL;
    }
    v5 = *(void **)(*(_QWORD *)(a1 + 6160) + 40LL);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 6160);
    v7 = *(void **)(v6 + 112);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 112LL) = 0LL;
      v6 = *(_QWORD *)(a1 + 6160);
    }
    if ( (unsigned __int8)sub_140056088(a1, v6) )
      RtlFreeUnicodeString(v8 + 1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6160), 0x464D6152u);
    *(_QWORD *)(a1 + 6160) = 0LL;
  }
  v9 = *(void **)(a1 + 6152);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x464D6152u);
    *(_QWORD *)(a1 + 6152) = 0LL;
  }
  if ( (unsigned int)sub_1400566F8() )
    sub_1401A8784(a1);
  sub_140066D1C(*(PVOID *)(a1 + 6208));
  v10 = *(void **)(a1 + 6144);
  *(_QWORD *)(a1 + 6208) = 0LL;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x45526152u);
    *(_QWORD *)(a1 + 6144) = 0LL;
  }
  sub_140055690(a1 + 2008);
  *(_DWORD *)(a1 + 2064) = 0;
  sub_1401782E0(a1 + 360);
  LOBYTE(v11) = *(_BYTE *)(a1 + 4370) == 0;
  sub_1401B0E68(a1 + 376, v11);
  if ( *(_DWORD *)(a1 + 928) )
    sub_14017BF24(a1 + 880, a1 + 912);
  v12 = *(_QWORD *)(a1 + 4552);
  if ( v12 )
  {
    sub_140016754(a1, v12);
    *(_QWORD *)(a1 + 4552) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4370) )
    sub_14017AF14(a1 + 880);
  sub_140178334(a1 + 776);
  sub_14003CC04((union _SLIST_HEADER *)(a1 + 1008));
  sub_14003CC04((union _SLIST_HEADER *)(a1 + 1392));
  if ( *(_QWORD *)(a1 + 2000) )
  {
    sub_1401A8ACC();
    *(_QWORD *)(a1 + 2000) = 0LL;
  }
  v13 = *(void **)(a1 + 4376);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x52446152u);
    *(_QWORD *)(a1 + 4376) = 0LL;
  }
  if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    sub_1401A7310(a1);
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1976));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5544));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5728));
  sub_140055804(a1);
  v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v14 )
  {
    ExFreeCacheAwareRundownProtection(v14);
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  v15 = *(void **)(a1 + 4360);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x72446152u);
    *(_QWORD *)(a1 + 4360) = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4660) & 1) != 0 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( _InterlockedExchangeAdd(&dword_140168560, 0xFFFFFFFF) == 1 )
    {
      dword_140168668 = 0;
      _InterlockedOr(v34, 0);
      ExFreePoolWithTag(P, 0x72446152u);
      ExFreePoolWithTag(qword_140168520, 0x72446152u);
      P = 0LL;
      qword_140168520 = 0LL;
    }
    KeReleaseSpinLock(&SpinLock, v16);
    v17 = *(void **)(a1 + 4680);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x72446152u);
      *(_QWORD *)(a1 + 4680) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4664) > 1 && *(_QWORD *)(a1 + 4672) )
  {
    v18 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v20 = 0;
    v21 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        for ( i = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + ((unsigned __int64)v20 << 6)));
              i;
              i = i->Next )
        {
          v18 = i;
          if ( !HIDWORD(i[1].Next) )
            break;
        }
        if ( !v18[5] )
          break;
        ++v20;
      }
      while ( v20 < v21 );
      ExFreePoolWithTag(v18, 0x54436152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 4672), 0x54436152u);
    *(_QWORD *)(a1 + 4672) = 0LL;
  }
  v23 = *(void **)(a1 + 4728);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x54456152u);
    *(_QWORD *)(a1 + 4728) = 0LL;
  }
  v24 = *(void **)(a1 + 4880);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x4D566152u);
    *(_QWORD *)(a1 + 4880) = 0LL;
  }
  sub_140056054(a1 + 168);
  v26 = *(void **)(a1 + 48);
  if ( v26 )
    ExFreePoolWithTag(v26, 0x53446152u);
  v27 = *(void **)(a1 + 5384);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0x45436152u);
    *(_QWORD *)(a1 + 5384) = 0LL;
  }
  v28 = *(void **)(a1 + 5080);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0x54456152u);
    *(_QWORD *)(a1 + 5080) = 0LL;
  }
  *(_DWORD *)(a1 + 4928) = -1;
  v29 = *(void **)(a1 + 6056);
  *(_DWORD *)(a1 + 4932) = 0;
  *(_QWORD *)(a1 + 4936) = 0LL;
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0x43546152u);
    *(_QWORD *)(a1 + 6056) = 0LL;
  }
  v30 = *(void **)(a1 + 6064);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0x43546152u);
    *(_QWORD *)(a1 + 6064) = 0LL;
  }
  if ( (unsigned int)sub_1400567A0(v30, v25) )
  {
    v31 = *(void **)(a1 + 5616);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0x72436152u);
      *(_QWORD *)(a1 + 5616) = 0LL;
    }
    v32 = *(void **)(a1 + 5624);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
  }
  v33 = *(void **)(a1 + 6200);
  if ( v33 )
  {
    IoUnregisterPlugPlayNotificationEx(v33);
    *(_QWORD *)(a1 + 6200) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
