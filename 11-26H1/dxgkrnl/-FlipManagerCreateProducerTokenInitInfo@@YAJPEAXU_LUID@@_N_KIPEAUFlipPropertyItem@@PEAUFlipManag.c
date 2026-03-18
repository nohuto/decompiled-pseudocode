/*
 * XREFs of ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140023FB0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x14001949C (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x14001BE90 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ??$FindProperty@UBatchSyncInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUBatchSyncInfo@@@Z @ 0x140055820 (--$FindProperty@UBatchSyncInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUBatchSyncInfo@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerCreateProducerTokenInitInfo(
        void *a1,
        struct _LUID a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        struct FlipManagerTokenInitInfo *a7)
{
  _QWORD *v8; // rdi
  struct CFlipPresentUpdate *v9; // r15
  FlipManagerTokenIFlipInfo *v10; // r12
  _QWORD *v11; // r13
  int v12; // esi
  __int64 v13; // r8
  CFlipPropertySetBase *v14; // r14
  int v15; // eax
  __int64 Win32kImportTable; // rax
  bool v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  CFlipPropertySetBase *v21; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v22; // [rsp+60h] [rbp-20h] BYREF
  struct CFlipPresentUpdate *v23; // [rsp+68h] [rbp-18h] BYREF
  struct FlipManagerTokenIFlipInfo *v24; // [rsp+70h] [rbp-10h] BYREF
  char v26; // [rsp+D0h] [rbp+50h]

  v26 = a3;
  v8 = 0LL;
  Object = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v11 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v18 = 0;
  v12 = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, a6, a3, &v21);
  if ( v12 >= 0 )
  {
    v14 = v21;
    if ( v21 )
    {
      CFlipPropertySetBase::FindProperty<BatchSyncInfo>(v21, &v22);
      v11 = v22;
      if ( v22 )
      {
        if ( *v22 )
        {
          if ( a4 )
          {
            v12 = -1073741811;
            goto LABEL_23;
          }
          v19 = *v22;
        }
      }
    }
    v15 = FlipManagerObject::ResolveHandle(a1, 2u, v13, (struct FlipManagerObject **)&Object);
    v8 = Object;
    v12 = v15;
    if ( v15 >= 0 )
    {
      if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40)) >= 0 )
      {
        v18 = v8[10] == 1LL;
        CPushLock::ReleaseLock((CPushLock *)(v8 + 5));
      }
      v12 = CPushLock::AcquireLockExclusive((CPushLock *)(v8 + 5));
      if ( v12 >= 0 )
      {
        v12 = CFlipManager::CreatePresentUpdateForProducer((CFlipManager *)(v8 + 4), v26, a4, v19 != 0, v14, &v23, &v24);
        CPushLock::ReleaseLock((CPushLock *)(v8 + 5));
        v9 = v23;
        v10 = v24;
      }
      if ( v12 >= 0 )
      {
        *((_QWORD *)a7 + 3) = *((_QWORD *)v9 + 8);
        v12 = ObReferenceObjectByPointer(v8, 3u, g_pDxgkCompositionObjectType, 0);
        if ( v12 >= 0 )
        {
          if ( v19 )
          {
            Win32kImportTable = DxgkGetWin32kImportTable();
            (*(void (__fastcall **)(__int64, struct _LUID))(Win32kImportTable + 56))(v19, a2);
          }
          *((_BYTE *)a7 + 16) = v18;
          *((_QWORD *)a7 + 1) = v8;
          *((_QWORD *)a7 + 4) = a4;
          *((_QWORD *)v9 + 1) = v8;
          v8 = 0LL;
          *(_QWORD *)a7 = v9;
          v9 = 0LL;
          if ( v11 )
            *((_QWORD *)a7 + 6) = *v11;
          *((_QWORD *)a7 + 5) = v10;
          v10 = 0LL;
        }
      }
      if ( v10 )
        FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v10);
      if ( v9 )
        (*(void (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
LABEL_23:
  if ( v21 )
    CFlipPropertySetBase::Release(v21);
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v12;
}
