/*
 * XREFs of ?SetPositionImpulseId@CInteractionTracker2@@QEAAJH@Z @ 0x18021E244
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetPositionImpulseId(CInteractionTracker2 *this, int a2)
{
  char v2; // al
  char v3; // al
  __int64 result; // rax

  v2 = *((_BYTE *)this + 831);
  if ( a2 )
  {
    v3 = v2 | 8;
  }
  else
  {
    a2 = 0;
    *(_QWORD *)((char *)this + 836) = 0LL;
    v3 = v2 & 0xF7;
  }
  *((_BYTE *)this + 831) = v3;
  result = 0LL;
  *((_DWORD *)this + 211) = a2;
  return result;
}
