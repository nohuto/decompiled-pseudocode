/*
 * XREFs of ??1?$CAutoHandle@PEAUHWND__@@@@QEAA@XZ @ 0x1802CCA20
 * Callers:
 *     _CMultitaskingViewFrame::CreateFrame_::_1_::dtor$1 @ 0x1806C947C (_CMultitaskingViewFrame--CreateFrame_--_1_--dtor$1.c)
 *     _GhostDivider::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806CB964 (_GhostDivider--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HWND__ *>::~CAutoHandle<HWND__ *>(HWND *a1)
{
  HWND v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DestroyWindow(v1);
  return (int)v1;
}
