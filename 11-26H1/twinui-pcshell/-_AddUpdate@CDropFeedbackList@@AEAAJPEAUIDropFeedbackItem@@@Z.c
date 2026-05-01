/*
 * XREFs of ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x18053D68C
 * Callers:
 *     ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x18053CDC0 (-Close@CDropFeedbackList@@UEAAJK@Z.c)
 *     ?DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18053CF50 (-DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z @ 0x18053D000 (-DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z @ 0x18053D0D0 (-Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18053D4F0 (-Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18053D5D0 (-Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackList::_AddUpdate(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  unsigned __int64 v2; // r12
  __int64 *v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 i; // rbp
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 *v14; // rdx
  __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF
  struct IDropFeedbackItem *v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = (__int64 *)((char *)this + 16);
  v4 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v2 )
    {
      v16[0] = (__int64)a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v16);
      v12 = v3[1];
      v13 = 0;
      if ( v12 != v3[3]
        || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v3,
                    v12 + 1,
                    0LL),
            v13 >= 0) )
      {
        v14 = (__int64 *)(*v3 + 8 * v3[1]++);
        if ( v14 )
        {
          *v14 = 0LL;
          if ( v14 != v16 )
          {
            *v14 = (__int64)a2;
            v16[0] = 0LL;
          }
        }
      }
      v4 = v13;
      v11 = v16;
      goto LABEL_14;
    }
    v3 = (__int64 *)((char *)this + 16);
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8) == 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v3 + 8 * i) + 80LL))(*(_QWORD *)(*v3 + 8 * i));
      if ( v9 == (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2) )
        break;
    }
  }
  v10 = *v3;
  if ( *(struct IDropFeedbackItem **)(*v3 + 8 * i) == a2 )
    return v4;
  v17 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v17);
  v11 = (__int64 *)&v17;
  v17 = *(struct IDropFeedbackItem **)(v10 + 8 * i);
  *(_QWORD *)(v10 + 8 * i) = a2;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v11);
  return v4;
}
