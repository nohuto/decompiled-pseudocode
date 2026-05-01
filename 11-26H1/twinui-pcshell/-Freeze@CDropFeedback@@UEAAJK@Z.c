/*
 * XREFs of ?Freeze@CDropFeedback@@UEAAJK@Z @ 0x18053DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x18053F2C0 (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::Freeze(CDropFeedback *this, unsigned int a2)
{
  int Item; // ebx
  struct IDropFeedbackItem *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v6);
  Item = CDropFeedback::_FindItem((CDropFeedback *)((char *)this - 24), a2, &v6);
  if ( Item >= 0 )
    Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v6 + 176LL))(v6);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Item;
}
