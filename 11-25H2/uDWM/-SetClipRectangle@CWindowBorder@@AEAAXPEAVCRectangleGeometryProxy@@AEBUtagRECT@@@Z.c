/*
 * XREFs of ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x18000A8F4
 * Callers:
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x18000A84C (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18003C544 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 * Callees:
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18003F3F4 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 */

void __fastcall CWindowBorder::SetClipRectangle(
        CWindowBorder *this,
        struct CRectangleGeometryProxy *a2,
        const struct tagRECT *a3)
{
  float v3; // xmm5_4
  float v4; // [rsp+28h] [rbp-50h]
  bool v5; // [rsp+68h] [rbp-10h]

  v3 = 0.0;
  if ( *((float *)this + 74) > 0.0 )
    v3 = (float)((*((_DWORD *)this + 69) + 48) / 96);
  v4 = (float)((float)((float)*((int *)this + 69) * *((float *)this + 68)) / 96.0) - v3;
  CRectangleGeometryProxy::SetRectangle(
    a2,
    (float)a3->left + v3,
    (float)a3->top + v3,
    (float)a3->right - v3,
    (float)a3->bottom - v3,
    v4,
    v4,
    v4,
    v4,
    v4,
    v4,
    v4,
    v4,
    v5);
}
