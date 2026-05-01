/*
 * XREFs of ?SetRect@CDropFeedbackItem@@UEAAXPEBUtagRECT@@@Z @ 0x180547640
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeAppVisualAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@0@Z @ 0x18067F820 (-ComputeAppVisualAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@0@Z.c)
 */

void __fastcall CDropFeedbackItem::SetRect(CDropFeedbackItem *this, const struct tagRECT *a2)
{
  char *v2; // rdi
  bool v4; // zf
  int v5; // r8d

  v2 = (char *)this + 76;
  CopyRect((LPRECT)((char *)this + 76), a2);
  v4 = *((_DWORD *)this + 17) == 0;
  *(_OWORD *)((char *)this + 124) = *(_OWORD *)v2;
  if ( v4 && *((_DWORD *)v2 + 2) - *(_DWORD *)v2 != *((_DWORD *)this + 29) - *((_DWORD *)this + 27) )
  {
    if ( (unsigned int)ImmersiveApplicationLayout::ComputeAppVisualAlignment((char *)this + 108, v2) == 2 )
      *((_DWORD *)this + 33) = v5 + *((_DWORD *)this + 31);
    else
      *((_DWORD *)this + 31) = *((_DWORD *)this + 33) - v5;
  }
}
