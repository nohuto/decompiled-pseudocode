/*
 * XREFs of ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z @ 0x18021D080
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CAnimation::ProcessClearTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_CLEARTIMEEVENTS *a3)
{
  char *v4; // rcx
  __int64 result; // rax

  v4 = (char *)this + 152;
  *((_DWORD *)v4 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v4, 0x10u);
  result = 0LL;
  *((_DWORD *)this + 52) = 0;
  return result;
}
