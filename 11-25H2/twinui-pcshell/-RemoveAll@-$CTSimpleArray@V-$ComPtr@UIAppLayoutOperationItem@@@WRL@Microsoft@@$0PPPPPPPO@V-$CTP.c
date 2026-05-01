/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1804D32E0
 * Callers:
 *     ??1CAppTransitionTargetManager@@UEAA@XZ @ 0x1804D24E4 (--1CAppTransitionTargetManager@@UEAA@XZ.c)
 *     ?Reset@CAppTransitionTargetManager@@UEAAXXZ @ 0x1804D3350 (-Reset@CAppTransitionTargetManager@@UEAAXXZ.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1804F1BD0 (--1CAppLayoutOperation@@QEAA@XZ.c)
 *     ??1CDropFeedbackList@@UEAA@XZ @ 0x180519EB0 (--1CDropFeedbackList@@UEAA@XZ.c)
 *     ?Cleanup@CDropFeedbackList@@UEAAJXZ @ 0x18051A050 (-Cleanup@CDropFeedbackList@@UEAAJXZ.c)
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18069CFD0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18069D908 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * i));
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
