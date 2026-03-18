/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x140077F90
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x14009CDEC (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  Gre::Base *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v3 = *((_DWORD *)this + 49);
  if ( (v3 & 0x20007) != 0 )
  {
    if ( (v3 & 0x20000) != 0 )
    {
      v7 = *((_QWORD *)this + 8);
      if ( v7 )
      {
        DEC_SHARE_REF_CNT(v7);
        v3 = *((_DWORD *)this + 49);
      }
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( (v3 & 2) != 0 )
    {
      v5 = (Gre::Base *)*((_QWORD *)this + 9);
      if ( v5 )
      {
        v6 = *((_DWORD *)v5 + 9);
        if ( v6 >= 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v5) + 8
                                                                                  * *(int *)(*((_QWORD *)this + 9) + 36LL)
                                                                                  + 1072);
        }
        else if ( v6 == -1 )
        {
          FreeThreadBufferWithTag(v5, a2, a3);
        }
      }
    }
    if ( (*((_DWORD *)this + 49) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 88));
  }
}
