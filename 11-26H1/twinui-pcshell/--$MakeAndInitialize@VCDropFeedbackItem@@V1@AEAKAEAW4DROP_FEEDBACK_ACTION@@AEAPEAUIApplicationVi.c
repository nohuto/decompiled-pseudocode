/*
 * XREFs of ??$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@AEAPEBU5@AEANAEAW4DROP_FEEDBACK_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackItem@@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@5AEANAEAW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180546548
 * Callers:
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1805469D8 (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDropFeedbackItem@@QEAA@XZ @ 0x180546728 (--0CDropFeedbackItem@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDropFeedbackItem@@QEAAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180547510 (-RuntimeClassInitialize@CDropFeedbackItem@@QEAAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDropFeedbackItem,CDropFeedbackItem,unsigned long &,enum DROP_FEEDBACK_ACTION &,IApplicationView * &,enum DROP_FEEDBACK_TYPE &,tagRECT const * &,tagRECT const * &,double &,enum DROP_FEEDBACK_FLAGS &>(
        CDropFeedbackItem **a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        int *a9)
{
  void *v13; // rax
  int v14; // ebx
  CDropFeedbackItem *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r8
  int v19; // [rsp+40h] [rbp-38h]
  void *v20; // [rsp+50h] [rbp-28h] BYREF
  CDropFeedbackItem *v21; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v13;
  if ( v13 )
  {
    v15 = CDropFeedbackItem::CDropFeedbackItem((CDropFeedbackItem *)v13);
    v16 = *a4;
    v17 = *a3;
    v21 = v15;
    v19 = *a9;
    v20 = 0LL;
    v14 = CDropFeedbackItem::RuntimeClassInitialize(v15, *a2, v17, v16, *a5, *a6, *a7, *a8, v19);
    if ( v14 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v21);
      *a1 = v15;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
      v14 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
    }
  }
  else
  {
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v20);
  return (unsigned int)v14;
}
