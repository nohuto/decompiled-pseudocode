/*
 * XREFs of ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x18008AF40
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18006FA80 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUD2D_POINTANDSIZE_F@@AEBU2@@Z @ 0x1800CC088 (-AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA-AUD2D_POINTANDSIZE_F@@AEBU2@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow3D::GetSnapThumbnailLocation(
        CTopLevelWindow3D *this,
        struct tagRECT *__return_ptr retstr)
{
  float v3; // xmm1_4
  LONG left; // r8d
  LONG top; // edx
  LONG v6; // r9d
  int v7; // eax
  LONG v8; // ecx

  v3 = *((float *)this + 111);
  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 29) + 48LL);
  if ( v3 != 0.0 )
  {
    left = retstr->left;
    top = retstr->top;
    v6 = left + *((_DWORD *)this + 114);
    v7 = retstr->bottom - top;
    v8 = top + *((_DWORD *)this + 115);
    retstr->left = v6;
    retstr->top = v8;
    retstr->bottom = v8 + (int)(float)((float)v7 * v3);
    retstr->right = v6 + (int)(float)((float)(retstr->right - left) * v3);
  }
  return retstr;
}
