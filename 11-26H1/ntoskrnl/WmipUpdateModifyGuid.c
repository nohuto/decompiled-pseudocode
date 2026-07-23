/*
 * XREFs of WmipUpdateModifyGuid @ 0x14082A3AC
 * Callers:
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 * Callees:
 *     WmipIsEqualInstanceSets @ 0x14082A22C (WmipIsEqualInstanceSets.c)
 *     WmipUpdateAddGuid @ 0x14082A2D4 (WmipUpdateAddGuid.c)
 *     WmipAllocEntry @ 0x140A0AF24 (WmipAllocEntry.c)
 *     WmipBuildInstanceSet @ 0x140A0AF78 (WmipBuildInstanceSet.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipFindISInDSByGuid @ 0x140B5289C (WmipFindISInDSByGuid.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipUpdateModifyGuid(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  unsigned int v5; // esi
  __int64 ISInDSByGuid; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // xmm0
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-E8h]
  __int128 v22; // [rsp+40h] [rbp-D8h]
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int128 v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+70h] [rbp-A8h]

  v5 = 0;
  *a5 = 0LL;
  ISInDSByGuid = WmipFindISInDSByGuid();
  if ( ISInDSByGuid )
  {
    v11 = WmipAllocEntry(&WmipISChunkInfo);
    v12 = v11;
    if ( v11
      && (int)WmipBuildInstanceSet(a2, a3, a4, v11, *(_DWORD *)(a1 + 56)) >= 0
      && !WmipIsEqualInstanceSets(ISInDSByGuid, v12) )
    {
      v21 = *(_OWORD *)ISInDSByGuid;
      v22 = *(_OWORD *)(ISInDSByGuid + 16);
      v23 = *(_OWORD *)(ISInDSByGuid + 32);
      v24 = *(_OWORD *)(ISInDSByGuid + 48);
      v25 = *(_OWORD *)(ISInDSByGuid + 64);
      v13 = *(_OWORD *)(ISInDSByGuid + 80);
      *(_QWORD *)(ISInDSByGuid + 88) = 0LL;
      v14 = *(_QWORD *)ISInDSByGuid;
      if ( *(_QWORD *)(*(_QWORD *)ISInDSByGuid + 8LL) != ISInDSByGuid )
        goto LABEL_20;
      v15 = *(_QWORD **)(ISInDSByGuid + 8);
      if ( *v15 != ISInDSByGuid )
        goto LABEL_20;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = WmipBuildInstanceSet(a2, a3, a4, ISInDSByGuid, *(_DWORD *)(a1 + 56));
      if ( v16 < 0 )
      {
        v17 = *(void **)(ISInDSByGuid + 88);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        *(_OWORD *)ISInDSByGuid = v21;
        *(_OWORD *)(ISInDSByGuid + 16) = v22;
        *(_OWORD *)(ISInDSByGuid + 32) = v23;
        *(_OWORD *)(ISInDSByGuid + 48) = v24;
        *(_OWORD *)(ISInDSByGuid + 64) = v25;
        *(_OWORD *)(ISInDSByGuid + 80) = v13;
      }
      v18 = *(_QWORD *)(ISInDSByGuid + 56) + 56LL;
      v19 = *(_QWORD *)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)ISInDSByGuid = v19;
      *(_QWORD *)(ISInDSByGuid + 8) = v18;
      *(_QWORD *)(v19 + 8) = ISInDSByGuid;
      *(_QWORD *)v18 = ISInDSByGuid;
      if ( v16 >= 0 )
      {
        if ( *((_QWORD *)&v13 + 1) )
          ExFreePoolWithTag(*((PVOID *)&v13 + 1), 0);
        *a5 = ISInDSByGuid;
        v5 = 2;
      }
    }
    WmipUnreferenceEntry(&WmipISChunkInfo, ISInDSByGuid);
    if ( v12 )
      WmipUnreferenceEntry(&WmipISChunkInfo, v12);
  }
  else
  {
    return WmipUpdateAddGuid(a1, a2, a3, a4, a5);
  }
  return v5;
}
