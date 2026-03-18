/*
 * XREFs of ?AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z @ 0x140049C68
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFrame::AddTokenToFrame(CCompositionFrame *this, struct CToken *a2)
{
  char *v2; // rcx
  char *v3; // rdx
  char **v4; // rax

  v2 = (char *)this + 248;
  v3 = (char *)a2 + 8;
  v4 = (char **)*((_QWORD *)v2 + 1);
  if ( *v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)v3 = v2;
  *((_QWORD *)v3 + 1) = v4;
  *v4 = v3;
  *((_QWORD *)v2 + 1) = v3;
}
