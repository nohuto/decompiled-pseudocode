/*
 * XREFs of ?AddItem@CDropFeedbackList@@UEAAJPEAUIDropFeedbackItem@@@Z @ 0x180519F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CDropFeedbackList::AddItem(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  _QWORD *v2; // rbx
  void *v4; // r8
  __int64 v5; // rdx
  int v6; // edi
  __int64 *v7; // r8
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)((char *)this + 16);
  v9[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v9);
  v5 = v2[1];
  v6 = 0;
  if ( v5 != v2[3]
    || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)v2,
               v5 + 1,
               v4),
        v6 >= 0) )
  {
    v7 = (__int64 *)(*v2 + 8 * v2[1]++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != v9 )
      {
        v9[0] = 0LL;
        *v7 = (__int64)a2;
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v9);
  return (unsigned int)v6;
}
