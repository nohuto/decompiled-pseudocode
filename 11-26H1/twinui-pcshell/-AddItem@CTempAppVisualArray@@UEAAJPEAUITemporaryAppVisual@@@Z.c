/*
 * XREFs of ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x180545620
 * Callers:
 *     ?AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z @ 0x1805457F0 (-AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180545BE0 (-GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTempAppVisualArray::AddItem(CTempAppVisualArray *this, struct ITemporaryAppVisual *a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(struct ITemporaryAppVisual *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  void *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rdx
  void *v13; // r8
  __int64 v14; // rdx
  __int64 *v15; // rdx
  struct ITemporaryAppVisual *v16; // [rsp+20h] [rbp-10h] BYREF
  struct ITemporaryAppVisual *v17; // [rsp+28h] [rbp-8h] BYREF
  void *v18; // [rsp+58h] [rbp+28h] BYREF
  struct IUnknown *v19; // [rsp+60h] [rbp+30h] BYREF

  v4 = -2147024809;
  v5 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 32LL))(a2);
  switch ( v5 )
  {
    case 1:
    case 2:
      goto LABEL_9;
    case 3:
      goto LABEL_20;
    case 4:
      goto LABEL_9;
    case 5:
      goto LABEL_20;
    case 6:
LABEL_9:
      v6 = *(_QWORD *)a2;
      v19 = 0LL;
      v7 = *(__int64 (__fastcall **)(struct ITemporaryAppVisual *, GUID *, __int64 *))(v6 + 48);
      v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v19);
      v4 = v7(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v8);
      if ( v4 >= 0 )
      {
        v18 = 0LL;
        v4 = -2147024809;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
        if ( (int)CTempAppVisualArray::GetItemForObject(this, v19, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v18) < 0 )
        {
          v17 = a2;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v17);
          v10 = *((_QWORD *)this + 3);
          v4 = 0;
          if ( v10 != *((_QWORD *)this + 5)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (__int64)this + 16,
                       v10 + 1,
                       v9),
                v4 >= 0) )
          {
            v11 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
            if ( v11 )
            {
              *v11 = 0LL;
              if ( v11 != (__int64 *)&v17 )
              {
                *v11 = (__int64)a2;
                v17 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      return (unsigned int)v4;
  }
  if ( v5 != 7 )
  {
    if ( v5 != 8 )
      return (unsigned int)v4;
    goto LABEL_9;
  }
LABEL_20:
  v16 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v16);
  v14 = *((_QWORD *)this + 3);
  v4 = 0;
  if ( v14 != *((_QWORD *)this + 5)
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 16,
               v14 + 1,
               v13),
        v4 >= 0) )
  {
    v15 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
    if ( v15 )
    {
      *v15 = 0LL;
      if ( v15 != (__int64 *)&v16 )
      {
        *v15 = (__int64)a2;
        v16 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v4;
}
