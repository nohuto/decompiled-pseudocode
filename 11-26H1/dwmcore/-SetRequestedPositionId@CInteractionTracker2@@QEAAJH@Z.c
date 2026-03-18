/*
 * XREFs of ?SetRequestedPositionId@CInteractionTracker2@@QEAAJH@Z @ 0x18021D450
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetRequestedPositionId(CInteractionTracker2 *this, int a2)
{
  char v2; // al
  char v3; // al
  __int64 result; // rax

  v2 = *((_BYTE *)this + 830);
  if ( a2 )
  {
    v3 = v2 | 0x80;
  }
  else
  {
    v3 = v2 & 0x7F;
    *((_QWORD *)this + 108) = 0LL;
    *((_QWORD *)this + 109) = 0LL;
    a2 = 0;
  }
  *((_BYTE *)this + 830) = v3;
  result = 0LL;
  *((_DWORD *)this + 220) = a2;
  return result;
}
