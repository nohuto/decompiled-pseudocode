/*
 * XREFs of ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180016420
 * Callers:
 *     ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016040 (-DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::DoHitTest(CVisual *this, const struct tagPOINT *a2, struct CVisual **a3, unsigned int *a4)
{
  struct CVisual *v4; // rax
  unsigned int v5; // r10d
  LONG x; // edx
  LONG y; // edx

  v4 = 0LL;
  v5 = 0;
  if ( !*((_QWORD *)this + 3) || (*((_BYTE *)this + 36) & 4) != 0 && *((_DWORD *)this + 32) != -1 )
  {
    x = a2->x;
    if ( x >= 0 && x < *((_DWORD *)this + 18) )
    {
      y = a2->y;
      if ( y >= 0 && y < *((_DWORD *)this + 19) )
      {
        v5 = *((_DWORD *)this + 32);
        v4 = this;
      }
    }
  }
  *a3 = v4;
  *a4 = v5;
  return v4 != 0LL;
}
