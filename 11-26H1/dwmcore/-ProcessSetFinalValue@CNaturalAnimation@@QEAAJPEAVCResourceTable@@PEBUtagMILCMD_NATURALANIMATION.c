/*
 * XREFs of ?ProcessSetFinalValue@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETFINALVALUE@@@Z @ 0x18021E470
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimation::ProcessSetFinalValue(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETFINALVALUE *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  __int64 result; // rax

  v3 = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 2);
  result = 0LL;
  *((_DWORD *)this + 77) = v3;
  *((_DWORD *)this + 78) = v4;
  *((_BYTE *)this + 532) |= 0x20u;
  return result;
}
