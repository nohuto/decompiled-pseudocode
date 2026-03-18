/*
 * XREFs of ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z @ 0x1801CABAC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

__int64 __fastcall CAnimation::ProcessSetSeek(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETSEEK *a3)
{
  unsigned __int64 FrameTargetTime; // rax
  CComposition *v6; // rcx

  FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
  v6 = (CComposition *)*((_QWORD *)a3 + 2);
  if ( v6 )
  {
    this[25] = v6;
  }
  else if ( FrameTargetTime >= (unsigned __int64)this[17] )
  {
    this[25] = (CComposition *)FrameTargetTime;
  }
  this[24] = (CComposition *)*((_QWORD *)a3 + 1);
  return 0LL;
}
