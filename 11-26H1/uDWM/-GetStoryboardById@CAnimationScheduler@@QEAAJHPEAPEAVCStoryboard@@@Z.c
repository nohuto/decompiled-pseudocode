/*
 * XREFs of ?GetStoryboardById@CAnimationScheduler@@QEAAJHPEAPEAVCStoryboard@@@Z @ 0x18009A240
 * Callers:
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800C4844 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationScheduler::GetStoryboardById(
        CAnimationScheduler *this,
        __int64 a2,
        struct CStoryboard **a3)
{
  unsigned int v4; // r10d
  __int64 i; // r9
  struct CStoryboard *v6; // rcx

  v4 = -2147467259;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v6 = *(struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( *((_DWORD *)v6 + 18) == 16 && *((_DWORD *)v6 + 6) != 4 )
    {
      *a3 = v6;
      CBaseObject::AddRef(v6);
      return 0;
    }
  }
  return v4;
}
