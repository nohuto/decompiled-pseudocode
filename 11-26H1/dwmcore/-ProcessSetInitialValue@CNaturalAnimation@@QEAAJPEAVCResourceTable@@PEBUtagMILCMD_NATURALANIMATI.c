/*
 * XREFs of ?ProcessSetInitialValue@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETINITIALVALUE@@@Z @ 0x18021E51C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimation::ProcessSetInitialValue(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETINITIALVALUE *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  __int64 result; // rax

  v3 = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 2);
  result = 0LL;
  *((_DWORD *)this + 71) = v3;
  *((_DWORD *)this + 72) = v4;
  *((_BYTE *)this + 532) |= 0x10u;
  return result;
}
