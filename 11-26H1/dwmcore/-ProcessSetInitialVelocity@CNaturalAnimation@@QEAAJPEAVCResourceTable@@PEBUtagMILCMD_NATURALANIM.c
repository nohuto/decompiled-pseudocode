/*
 * XREFs of ?ProcessSetInitialVelocity@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETINITIALVELOCITY@@@Z @ 0x18021E954
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimation::ProcessSetInitialVelocity(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETINITIALVELOCITY *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  __int64 result; // rax

  v3 = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 79) = *((_DWORD *)a3 + 2);
  result = 0LL;
  *((_DWORD *)this + 80) = v3;
  *((_DWORD *)this + 81) = v4;
  return result;
}
