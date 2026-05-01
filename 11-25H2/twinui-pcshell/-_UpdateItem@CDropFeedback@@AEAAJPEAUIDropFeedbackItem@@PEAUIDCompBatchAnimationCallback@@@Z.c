/*
 * XREFs of ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18051CB54
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18051C2D0 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x18051C4EC (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::_UpdateItem(
        CDropFeedback *this,
        struct IDropFeedbackItem *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  int v5; // eax
  int Item; // r12d
  bool v7; // si
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct IDropFeedbackItem *v12; // rbx
  int v13; // r15d
  int v14; // r14d
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rax
  double v18; // xmm0_8
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  unsigned int i; // esi
  __int64 v23; // rdi
  int (__fastcall *v24)(__int64, _QWORD, GUID *, struct IDCompBatchAnimationCallback **); // rbx
  struct IDCompBatchAnimationCallback *v26; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-48h] BYREF
  struct IDropFeedbackItem *v28; // [rsp+40h] [rbp-40h] BYREF
  RECT rc; // [rsp+48h] [rbp-38h] BYREF
  RECT rc2; // [rsp+58h] [rbp-28h] BYREF

  v28 = 0LL;
  v26 = a3;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
  v5 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
  Item = CDropFeedback::_FindItem(this, v5, &v28);
  if ( Item < 0 )
    goto LABEL_25;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 96LL))(a2);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        v16 = *(_QWORD *)a2;
        rc = 0LL;
        (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(v16 + 120))(a2, &rc);
        v12 = v28;
        rc2 = 0LL;
        (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v28 + 120LL))(v28, &rc2);
        if ( IsRectEmpty(&rc) || EqualRect(&rc, &rc2) )
          goto LABEL_25;
        (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v12 + 128LL))(v12, &rc);
        goto LABEL_18;
      }
      if ( v10 != 1 )
        goto LABEL_25;
    }
  }
  v11 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 104LL))(a2);
  v12 = v28;
  v13 = v11;
  v14 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v28 + 104LL))(v28);
  v15 = v14 & 0x1E000 | v13;
  if ( v15 != v14 )
  {
    (*(void (__fastcall **)(struct IDropFeedbackItem *, _QWORD))(*(_QWORD *)v12 + 112LL))(v12, v15);
    v7 = ((v15 ^ v14) & 0xFF9FEECF) != 0;
  }
  v17 = *(_QWORD *)a2;
  rc = 0LL;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(v17 + 120))(a2, &rc);
  rc2 = 0LL;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v12 + 120LL))(v12, &rc2);
  if ( !IsRectEmpty(&rc) && !EqualRect(&rc, &rc2) )
  {
    (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v12 + 128LL))(v12, &rc);
    v7 = 1;
  }
  v18 = (*(double (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 144LL))(a2);
  if ( v18 == (*(double (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v12 + 144LL))(v12) )
  {
    if ( !v7 )
      goto LABEL_25;
  }
  else
  {
    (*(void (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v12 + 136LL))(v12);
  }
LABEL_18:
  Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDCompBatchAnimationCallback *))(*(_QWORD *)v12 + 160LL))(
           v12,
           v26);
  if ( ((*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 104LL))(a2) & 8) != 0 )
  {
    v19 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
    v20 = *((_QWORD *)this + 16);
    v21 = v19;
    v27 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v27);
    for ( i = 0; i < v27; ++i )
    {
      v23 = *((_QWORD *)this + 16);
      v26 = 0LL;
      v24 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IDCompBatchAnimationCallback **))(*(_QWORD *)v23 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v26);
      if ( v24(v23, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v26) >= 0
        && (*(unsigned int (__fastcall **)(struct IDCompBatchAnimationCallback *))(*(_QWORD *)v26 + 80LL))(v26) == v21 )
      {
        (*(void (__fastcall **)(struct IDCompBatchAnimationCallback *))(*(_QWORD *)v26 + 184LL))(v26);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), i);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v26);
        break;
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v26);
    }
  }
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
  return (unsigned int)Item;
}
