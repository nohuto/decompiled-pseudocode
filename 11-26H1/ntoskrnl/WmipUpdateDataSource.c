/*
 * XREFs of WmipUpdateDataSource @ 0x140A09CB4
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140A0AADC (WmipProcessWmiRegInfo.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipGenerateBinaryMofNotification @ 0x14082A070 (WmipGenerateBinaryMofNotification.c)
 *     WmipUpdateModifyGuid @ 0x14082A3AC (WmipUpdateModifyGuid.c)
 *     WmipSendGuidUpdateNotifications @ 0x140A0B3B8 (WmipSendGuidUpdateNotifications.c)
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140A0B824 (WmipUnlinkInstanceSetFromGuidEntry.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0B87C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     WmipCachePtrs @ 0x140ADE6EC (WmipCachePtrs.c)
 *     WmipFindISInDSByGuid @ 0x140B5289C (WmipFindISInDSByGuid.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipUpdateDataSource(__int64 a1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  _QWORD *v10; // r12
  int v11; // r12d
  __int64 v12; // rdx
  __int64 ISInDSByGuid; // rax
  __int64 v14; // r15
  PVOID *p_P; // rax
  int *v16; // r9
  int v17; // edx
  unsigned int *v18; // r8
  int updated; // eax
  unsigned int v20; // esi
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  char *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  PVOID v27; // rsi
  __int64 *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rcx
  PVOID v31; // r14
  __int64 *v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rcx
  unsigned int v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch] BYREF
  int v37; // [rsp+38h] [rbp-28h] BYREF
  int v38; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID v41; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+40h] BYREF
  int v44; // [rsp+B0h] [rbp+50h]
  unsigned int v45; // [rsp+B8h] [rbp+58h] BYREF

  v44 = a3;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v39 = 0LL;
  if ( !v3 )
    return 3221225524LL;
  WmipReferenceEntry(v3);
  v7 = 0;
  v45 = 0;
  v43 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v8 = 0;
  v36 = 0;
  v9 = 0;
  P = 0LL;
  v41 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 16) )
    goto LABEL_16;
  v11 = v44;
  do
  {
    v12 = a2 + 32LL * v4 + 24;
    if ( (*(_DWORD *)(v12 + 16) & 0x10000) != 0 )
    {
      ISInDSByGuid = WmipFindISInDSByGuid(v3, v12);
      v14 = ISInDSByGuid;
      if ( !ISInDSByGuid )
        goto LABEL_14;
      WmipUnreferenceEntry(&WmipISChunkInfo, ISInDSByGuid);
      p_P = (PVOID *)&v42;
      v39 = v14;
      v16 = &v36;
      v17 = v14;
      v18 = &v43;
    }
    else
    {
      updated = WmipUpdateModifyGuid(v3, v12, a2, v11, &v39);
      if ( updated == 1 )
      {
        p_P = &v41;
        v16 = &v37;
        v18 = &v45;
      }
      else
      {
        if ( updated != 2 )
          goto LABEL_14;
        p_P = &P;
        v16 = &v38;
        v18 = &v35;
      }
      v17 = v39;
    }
    WmipCachePtrs(a2 + 32 * v4 + 24, v17, (_DWORD)v18, (_DWORD)v16, (__int64)p_P);
LABEL_14:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 16) );
  v10 = v42;
  v8 = v45;
  v9 = v35;
  v7 = v43;
LABEL_16:
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceEntry(&WmipDSChunkInfo, v3);
  if ( v7 )
  {
    v20 = 0;
    do
    {
      v21 = (_QWORD *)v10[2 * v20];
      v22 = *v21 - WmipBinaryMofGuid;
      if ( *v21 == WmipBinaryMofGuid )
        v22 = v21[1] - 0x102906C9A000F0B2LL;
      v23 = (char *)&v10[2 * v20];
      if ( !v22 )
        WmipGenerateBinaryMofNotification(*((_QWORD *)v23 + 1), &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
      v24 = *((_QWORD *)v23 + 1);
      WmipDisableCollectionForRemovedGuid(v10[2 * v20], v24);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)v24 )
        WmipUnlinkInstanceSetFromGuidEntry(v24);
      if ( (*(_DWORD *)(v24 + 16) & 8) == 0 )
        WmipUnreferenceEntry(&WmipGEChunkInfo, *(_QWORD *)(v24 + 56));
      *(_QWORD *)(v24 + 56) = 0LL;
      v25 = *(_QWORD *)(v24 + 40);
      if ( *(_QWORD *)(v25 + 8) != v24 + 40 || (v26 = *(_QWORD **)(v24 + 48), *v26 != v24 + 40) )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      WmipUnreferenceEntry(&WmipISChunkInfo, v24);
      KeReleaseMutex(&WmipSMMutex, 0);
      ++v20;
    }
    while ( v20 < v43 );
    WmipSendGuidUpdateNotifications(2LL, v43, v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v9 )
  {
    v27 = P;
    v28 = (__int64 *)P;
    v29 = v9;
    do
    {
      v30 = *(_QWORD *)*v28 - WmipBinaryMofGuid;
      if ( !v30 )
        v30 = *(_QWORD *)(*v28 + 8) - 0x102906C9A000F0B2LL;
      if ( !v30 )
        WmipGenerateBinaryMofNotification(v28[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      v28 += 2;
      --v29;
    }
    while ( v29 );
    WmipSendGuidUpdateNotifications(4LL, v9, v27);
    ExFreePoolWithTag(v27, 0);
  }
  if ( v8 )
  {
    v31 = v41;
    v32 = (__int64 *)v41;
    v33 = v8;
    do
    {
      v34 = *(_QWORD *)*v32 - WmipBinaryMofGuid;
      if ( !v34 )
        v34 = *(_QWORD *)(*v32 + 8) - 0x102906C9A000F0B2LL;
      if ( !v34 )
        WmipGenerateBinaryMofNotification(v32[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      WmipEnableCollectionForNewGuid(*v32, v32[1]);
      v32 += 2;
      --v33;
    }
    while ( v33 );
    WmipSendGuidUpdateNotifications(1LL, v8, v31);
    ExFreePoolWithTag(v31, 0);
  }
  return 0LL;
}
