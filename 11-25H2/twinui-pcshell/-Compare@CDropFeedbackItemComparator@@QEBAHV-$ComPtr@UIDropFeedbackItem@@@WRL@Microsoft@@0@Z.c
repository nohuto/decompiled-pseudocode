/*
 * XREFs of ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x18051A12C
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x180519C84 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 *     ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x180519D6C (--$_MergeThem@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItemComparator::Compare(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v6; // rcx
  int v7; // edi
  int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v3 = *a2;
  v10 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 120LL))(v3, &v10);
  v6 = *a3;
  v11 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 120LL))(v6, &v11);
  v7 = (DWORD2(v10) - (int)v10) / 2 + v10;
  v8 = (DWORD2(v11) - (int)v11) / 2 + v11;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a3);
  return (unsigned int)(v7 - v8);
}
