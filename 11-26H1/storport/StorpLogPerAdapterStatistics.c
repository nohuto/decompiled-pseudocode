/*
 * XREFs of StorpLogPerAdapterStatistics @ 0x1400B84B8
 * Callers:
 *     StorpLogStatistics @ 0x140038EB8 (StorpLogStatistics.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     StorpInitializeHierarchicalResetBuckets @ 0x14005C0F0 (StorpInitializeHierarchicalResetBuckets.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpLogPerAdapterStatistics(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _IO_WORKITEM *WorkItem; // rax
  struct _IO_WORKITEM *v13; // rax
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  char v16; // [rsp+3Ah] [rbp-CEh] BYREF
  char v17; // [rsp+3Bh] [rbp-CDh] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  int v27; // [rsp+60h] [rbp-A8h] BYREF
  int v28; // [rsp+64h] [rbp-A4h] BYREF
  _DWORD v29[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  int *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  char *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  int *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  char *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  int *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  int *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  char *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  int *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]

  v3 = *(unsigned int *)(a1 + 5156);
  if ( ((_DWORD)v3
     || *(_DWORD *)(a1 + 5168)
     || *(_DWORD *)(a1 + 5180)
     || *(_DWORD *)(a1 + 5192)
     || *(_DWORD *)(a1 + 5204))
    && (unsigned int)dword_140172178 > 5
    && tlgKeywordOn(v3, 0x400000000000LL) )
  {
    v32 = 16LL;
    v31 = a1 + 5128;
    v19 = *(_DWORD *)(a1 + 56);
    v33 = &v19;
    v35 = &v20;
    v21 = *(_DWORD *)(a1 + 5160);
    v37 = &v21;
    v14 = *(_BYTE *)(a1 + 5164);
    v39 = (int *)&v14;
    v22 = *(_DWORD *)(a1 + 5168);
    v41 = &v22;
    v23 = *(_DWORD *)(a1 + 5172);
    v43 = &v23;
    v15 = *(_BYTE *)(a1 + 5176);
    v45 = &v15;
    v24 = *(_DWORD *)(a1 + 5180);
    v47 = &v24;
    v25 = *(_DWORD *)(a1 + 5184);
    v49 = &v25;
    v16 = *(_BYTE *)(a1 + 5188);
    v51 = &v16;
    v26 = *(_DWORD *)(a1 + 5192);
    v53 = &v26;
    v27 = *(_DWORD *)(a1 + 5196);
    v55 = &v27;
    v17 = *(_BYTE *)(a1 + 5200);
    v57 = &v17;
    v28 = *(_DWORD *)(a1 + 5204);
    v59 = &v28;
    v29[0] = *(_DWORD *)(a1 + 5208);
    v61 = v29;
    LOBYTE(v18) = *(_BYTE *)(a1 + 5212);
    v63 = &v18;
    v34 = 4LL;
    v20 = v5;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 1LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 1LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 1LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v5, (unsigned __int8 *)dword_140161CC4, v6, v7, 0x13u, v30);
  }
  v8 = *(unsigned int *)(a1 + 5216);
  if ( ((_DWORD)v8
     || *(_DWORD *)(a1 + 5228)
     || *(_DWORD *)(a1 + 5240)
     || *(_DWORD *)(a1 + 5252)
     || *(_DWORD *)(a1 + 5264))
    && (unsigned int)dword_140172178 > 5
    && tlgKeywordOn(v8, 0x400000000000LL) )
  {
    v32 = 16LL;
    v31 = a1 + 5128;
    v29[0] = *(_DWORD *)(a1 + 56);
    v33 = v29;
    v35 = &v28;
    v27 = *(_DWORD *)(a1 + 5220);
    v37 = &v27;
    LOBYTE(v18) = *(_BYTE *)(a1 + 5224);
    v39 = &v18;
    v26 = *(_DWORD *)(a1 + 5228);
    v41 = &v26;
    v25 = *(_DWORD *)(a1 + 5232);
    v43 = &v25;
    v17 = *(_BYTE *)(a1 + 5236);
    v45 = &v17;
    v24 = *(_DWORD *)(a1 + 5240);
    v47 = &v24;
    v23 = *(_DWORD *)(a1 + 5244);
    v49 = &v23;
    v16 = *(_BYTE *)(a1 + 5248);
    v51 = &v16;
    v22 = *(_DWORD *)(a1 + 5252);
    v53 = &v22;
    v21 = *(_DWORD *)(a1 + 5256);
    v55 = &v21;
    v15 = *(_BYTE *)(a1 + 5260);
    v57 = &v15;
    v20 = *(_DWORD *)(a1 + 5264);
    v59 = &v20;
    v19 = *(_DWORD *)(a1 + 5268);
    v61 = &v19;
    v14 = *(_BYTE *)(a1 + 5272);
    v63 = (int *)&v14;
    v34 = 4LL;
    v28 = v9;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 1LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 1LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 1LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)dword_1401639CB, v10, v11, 0x13u, v30);
  }
  StorpInitializeHierarchicalResetBuckets(a1);
  if ( (*(_DWORD *)(a1 + 5408) & 1) == 0 && (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( WorkItem )
      IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)StorpAdapterTopologyWorkItemRoutine, NormalWorkQueue, WorkItem);
    else
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  }
  if ( a2 < 0
    && (!*(_BYTE *)(a1 + 5424)
     && (*(_BYTE *)(a1 + 5408) & 0xC) != 0xC
     && *(_DWORD *)(a1 + 4340) == 17
     && StorIsMFNDSupported(a1)
     || *(_DWORD *)(a1 + 4340) == 19)
    && (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    v13 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( v13 )
      IoQueueWorkItem(v13, (PIO_WORKITEM_ROUTINE)StorpAdapterHealthWorkItemRoutine, NormalWorkQueue, v13);
    else
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  }
}
