/*
 * XREFs of ?SetRequestedDeltaPositionId@CInteractionTracker2@@QEAAJH@Z @ 0x18021D378
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetRequestedDeltaPositionId(CInteractionTracker2 *this, int a2)
{
  char v2; // al
  char v3; // al
  __int64 result; // rax

  v2 = *((_BYTE *)this + 831);
  if ( a2 )
  {
    v3 = v2 | 1;
  }
  else
  {
    *((_QWORD *)this + 106) = 0LL;
    a2 = 0;
    *((_DWORD *)this + 214) = 0;
    v3 = v2 & 0xFE;
  }
  *((_BYTE *)this + 831) = v3;
  result = 0LL;
  *((_DWORD *)this + 215) = a2;
  return result;
}
