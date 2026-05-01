/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180088E44
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x180080FF0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18005ACCC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18005E050 (-RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@.c)
 *     ??4?$CComPtr@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAPEAUIResourceSetCallback@ExecutionModel@@PEAU23@@Z @ 0x18005E810 (--4-$CComPtr@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAPEAUIResourceSetCallback@ExecutionM.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAPEAV12@@Z @ 0x1800891B4 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int64 a6,
        struct ExecutionModel::ResourceSet **a7)
{
  int v10; // eax
  struct ExecutionModel::ResourceSet *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  char *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  int v17; // eax
  _QWORD *v18; // r9
  _QWORD *v19; // r10
  _QWORD *v20; // r8
  int v21; // ecx
  _QWORD *v22; // r10
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct ExecutionModel::ResourceSet *v26; // [rsp+40h] [rbp+8h] BYREF

  v26 = 0LL;
  v10 = ExecutionModel::ResourceSet::ResourceSetFactory(a6, a1, (struct _RM_ACTIVITY_HOST *)a4, &v26);
  v11 = v26;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = 2LL;
    v14 = (char *)v26 + 1336;
    v15 = (_OWORD *)a2;
    do
    {
      *(_OWORD *)v14 = *v15;
      *((_OWORD *)v14 + 1) = v15[1];
      *((_OWORD *)v14 + 2) = v15[2];
      *((_OWORD *)v14 + 3) = v15[3];
      *((_OWORD *)v14 + 4) = v15[4];
      *((_OWORD *)v14 + 5) = v15[5];
      *((_OWORD *)v14 + 6) = v15[6];
      v14 += 128;
      v16 = v15[7];
      v15 += 8;
      *((_OWORD *)v14 - 1) = v16;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v14 = *v15;
    *((_OWORD *)v14 + 1) = v15[1];
    *((_OWORD *)v14 + 2) = v15[2];
    *((_OWORD *)v14 + 3) = v15[3];
    *((_OWORD *)v14 + 4) = v15[4];
    *((_OWORD *)v14 + 5) = v15[5];
    *((_OWORD *)v14 + 6) = v15[6];
    *((_QWORD *)v14 + 14) = *((_QWORD *)v15 + 14);
    *((_DWORD *)v11 + 322) = *(_DWORD *)(a2 + 8);
    v17 = a5;
    *((_DWORD *)v11 + 2) = 0;
    *((_DWORD *)v11 + 8) = v17;
    *((_DWORD *)v11 + 320) = 1;
    ATL::CComPtr<ExecutionModel::IResourceSetCallback>::operator=((_QWORD *)v11 + 214, a3);
    *(_OWORD *)((char *)v11 + 72) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)((char *)v11 + 88) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)((char *)v11 + 104) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)((char *)v11 + 120) = *(_OWORD *)(a2 + 128);
    *((_QWORD *)v11 + 17) = *(_QWORD *)(a2 + 144);
    RmpActivityHostAddResourceSet((__int64)v11, 0);
    v18 = (_QWORD *)*((_QWORD *)v11 + 164);
    v19 = (_QWORD *)(*(_QWORD *)(a4 + 48) + 488LL);
    v20 = (_QWORD *)*v19;
    if ( (_QWORD *)*v19 != v19 )
    {
      v21 = *(_DWORD *)(v18[6] + 1288LL);
      do
      {
        if ( (int)RmpEmPriorityCompare(v21, *(_DWORD *)(*(v20 - 1) + 1288LL)) > 0 )
          break;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v22 );
    }
    v23 = (_QWORD *)v20[1];
    v24 = v18 + 7;
    if ( (_QWORD *)*v23 != v20 )
      __fastfail(3u);
    *v24 = v20;
    v18[8] = v23;
    *v23 = v24;
    v20[1] = v24;
    if ( (*(_BYTE *)(a2 + 42) & 0x20) != 0 && (*(_WORD *)(a2 + 16) & 0x100) == 0 )
      *((_DWORD *)v11 + 333) |= 8u;
    *a7 = v11;
    v11 = 0LL;
    v12 = 0;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v12;
}
