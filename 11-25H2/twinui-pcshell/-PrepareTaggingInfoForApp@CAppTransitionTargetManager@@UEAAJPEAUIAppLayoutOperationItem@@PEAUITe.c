/*
 * XREFs of ?PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804D2C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CAppTransitionTarget_CreateInstance @ 0x1804D43AC (CAppTransitionTarget_CreateInstance.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionTargetManager::PrepareTaggingInfoForApp(
        CAppTransitionTargetManager *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  struct IUnknownVtbl *lpVtbl; // rbx
  void *v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // rax
  int v21; // [rsp+20h] [rbp-20h]
  __int64 v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown punk; // [rsp+70h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 104) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v9 = *((_DWORD *)this + 23);
  v10 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 96LL))(a2) - 7;
  if ( !v10 || (unsigned int)(v10 - 1) < 2 || !v9 || (v11 = v9 - 1) == 0 || (unsigned int)(v11 - 1) <= 1 )
  {
    punk.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
    v12 = CAppTransitionTarget_CreateInstance(*((IUnknown **)this + 3), v21, &punk);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = (unsigned int)v12;
      v15 = 61LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
        (const char *)v14);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
      return (unsigned int)v13;
    }
    v16 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))punk.lpVtbl->QueryInterface
           + 3))(
            punk.lpVtbl,
            a2,
            a3,
            a4);
    v13 = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 63LL;
      goto LABEL_19;
    }
    lpVtbl = punk.lpVtbl;
    v22[0] = (__int64)punk.lpVtbl;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v22);
    v19 = *((_QWORD *)this + 6);
    v13 = 0;
    if ( v19 != *((_QWORD *)this + 8)
      || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 40,
                  v19 + 1,
                  v18),
          v13 >= 0) )
    {
      v20 = (__int64 *)(*((_QWORD *)this + 5) + 8 * (*((_QWORD *)this + 6))++);
      if ( v20 )
      {
        *v20 = 0LL;
        if ( v20 != v22 )
        {
          v22[0] = 0LL;
          *v20 = (__int64)lpVtbl;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v22);
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 65LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
  }
  return 0LL;
}
