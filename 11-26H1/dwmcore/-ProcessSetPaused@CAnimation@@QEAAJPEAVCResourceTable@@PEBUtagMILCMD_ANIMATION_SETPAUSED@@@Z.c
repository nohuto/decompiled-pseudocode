/*
 * XREFs of ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x1801C348C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

__int64 __fastcall CAnimation::ProcessSetPaused(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 FrameTargetTime; // rax
  bool v6; // zf

  FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
  if ( FrameTargetTime < (unsigned __int64)this[17] )
    goto LABEL_7;
  if ( *((_BYTE *)this + 296) )
  {
    v6 = *((_BYTE *)a3 + 8) == 0;
    if ( *((_BYTE *)a3 + 8) )
      goto LABEL_4;
    this[25] = (CComposition *)FrameTargetTime;
LABEL_7:
    v6 = *((_BYTE *)a3 + 8) == 0;
    goto LABEL_4;
  }
  v6 = *((_BYTE *)a3 + 8) == 0;
  if ( *((_BYTE *)a3 + 8) )
  {
    this[24] = (CComposition *)((char *)this[24] + FrameTargetTime - (_QWORD)this[25]);
    goto LABEL_7;
  }
LABEL_4:
  *((_BYTE *)this + 296) = !v6;
  return 0LL;
}
