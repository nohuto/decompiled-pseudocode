/*
 * XREFs of ?Register@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@@Z @ 0x18053D260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1805469D8 (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 */

__int64 __fastcall CDropFeedbackList::Register(_QWORD *a1, unsigned int a2)
{
  int Instance; // esi
  __int64 v5; // rbx
  void *v6; // r8
  __int64 v7; // rdx
  __int64 *v8; // rdx
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  Instance = CDropFeedbackItem_CreateInstance(a2, 0LL, 0LL);
  if ( Instance >= 0 )
  {
    v5 = v11;
    v10 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v10);
    v7 = a1[3];
    Instance = 0;
    if ( v7 != a1[5]
      || (Instance = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (__int64)(a1 + 2),
                       v7 + 1,
                       v6),
          Instance >= 0) )
    {
      v8 = (__int64 *)(a1[2] + 8 * a1[3]++);
      if ( v8 )
      {
        *v8 = 0LL;
        if ( v8 != &v10 )
        {
          *v8 = v5;
          v10 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  return (unsigned int)Instance;
}
