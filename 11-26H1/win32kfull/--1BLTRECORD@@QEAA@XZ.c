/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1400AB9A0
 * Callers:
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdi
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  Gre::Base *v7; // rcx
  int v8; // eax

  v3 = *((_DWORD *)this + 49);
  if ( (v3 & 0x20007) != 0 )
  {
    if ( (v3 & 0x20000) != 0 )
    {
      v5 = *((_QWORD *)this + 8);
      if ( v5 )
      {
        v6 = Gre::Base::Globals(this);
        DEC_SHARE_REF_CNT(v6, v5);
        v3 = *((_DWORD *)this + 49);
      }
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( (v3 & 2) != 0 )
    {
      v7 = (Gre::Base *)*((_QWORD *)this + 9);
      if ( v7 )
      {
        v8 = *((_DWORD *)v7 + 9);
        if ( v8 >= 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v7) + 8
                                                                                  * *(int *)(*((_QWORD *)this + 9) + 36LL)
                                                                                  + 1100);
        }
        else if ( v8 == -1 )
        {
          FreeThreadBufferWithTag(v7, a2, a3);
        }
      }
    }
    if ( (*((_DWORD *)this + 49) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 88));
  }
}
