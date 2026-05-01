/*
 * XREFs of ?SetZOrder@CDropFeedback@@UEAAJKPEAK_N@Z @ 0x18053EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x18053F2C0 (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::SetZOrder(CDropFeedback *this, unsigned int a2, unsigned int *a3, char a4)
{
  struct IDropFeedbackItem *v5; // rbx
  int Item; // edi
  __int64 v10; // r8
  struct IDropFeedbackItem *v12[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IDropFeedbackItem *v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v12);
  Item = CDropFeedback::_FindItem((CDropFeedback *)((char *)this - 24), a2, v12);
  if ( Item >= 0 )
  {
    v13 = 0LL;
    if ( a3 )
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
      Item = CDropFeedback::_FindItem((CDropFeedback *)((char *)this - 24), *a3, &v13);
      if ( Item < 0 )
      {
LABEL_6:
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
        goto LABEL_7;
      }
      v5 = v13;
    }
    LOBYTE(v10) = a4;
    Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDropFeedbackItem *, __int64))(*(_QWORD *)v12[0] + 168LL))(
             v12[0],
             v5,
             v10);
    goto LABEL_6;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v12);
  return (unsigned int)Item;
}
