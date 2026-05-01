/*
 * XREFs of ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x18052CA30
 * Callers:
 *     ?BeginDragFromPlaceMode@WindowArrangementView@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180528770 (-BeginDragFromPlaceMode@WindowArrangementView@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052A690 (-OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     ?OnPointerUpdate@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052A710 (-OnPointerUpdate@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_::Run @ 0x18052AE70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97__-_--Run.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052B51C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18052C250 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowArrangementView::UpdateView(__int64 a1, _QWORD *a2, char a3)
{
  int updated; // edi
  __int64 v7; // rdx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12[6]; // [rsp+20h] [rbp-58h] BYREF
  int v13[6]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 315) )
  {
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v13);
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(*(_QWORD *)(a1 + 96), a2);
    if ( updated < 0 )
    {
      v7 = 1212LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v12);
    if ( (a3 & 1) == 0 )
    {
      v9 = v12[0];
      if ( v13[0] != v12[0] )
      {
        v10 = *(_QWORD *)(a1 + 80);
        if ( v10 )
        {
          if ( v12[0] == 5 )
          {
            v11 = 3LL;
          }
          else if ( v12[0] == 6 )
          {
            v11 = 2LL;
          }
          else
          {
            v11 = *(_QWORD *)(a1 + 104) != 0LL ? 6 : 0;
          }
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 80LL))(v10, v11);
          v9 = v12[0];
        }
        updated = WindowArrangementView::UpdateDropFeedback(a1, v9, v13[0]);
        if ( updated < 0 )
        {
          v7 = 1223LL;
          goto LABEL_4;
        }
        if ( v12[0] <= 1 )
          *(_BYTE *)(a1 + 312) = 1;
      }
    }
  }
  *(_QWORD *)(a1 + 144) = *a2;
  return 0LL;
}
