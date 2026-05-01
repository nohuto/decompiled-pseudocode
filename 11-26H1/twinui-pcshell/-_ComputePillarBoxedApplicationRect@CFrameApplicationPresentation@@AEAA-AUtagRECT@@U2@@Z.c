/*
 * XREFs of ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x180305F60
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180041B80 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(
        CFrameApplicationPresentation *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  struct tagRECT *result; // rax
  LONG v10; // ecx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( (int)GetScaleFactorForWindow(**((_QWORD **)this + 14), &v11) >= 0 )
  {
    v6 = a3->right - a3->left;
    v7 = (int)(float)((float)(320 * v11) / 100.0);
    v8 = (int)(float)((float)(v11 << 10) / 100.0);
    if ( v6 > v7 )
    {
      if ( a3->bottom - a3->top < v8 )
      {
        if ( v6 >= v8 )
          goto LABEL_5;
      }
      else if ( v6 >= (int)(float)((float)(768 * v11) / 100.0) )
      {
        goto LABEL_5;
      }
      *((_BYTE *)this + 54) = 1;
      v10 = (v6 - v7) >> 1;
      a3->left = v10;
      a3->right = v10 + v7;
      goto LABEL_6;
    }
LABEL_5:
    *((_BYTE *)this + 54) = 0;
  }
LABEL_6:
  result = retstr;
  *retstr = *a3;
  return result;
}
