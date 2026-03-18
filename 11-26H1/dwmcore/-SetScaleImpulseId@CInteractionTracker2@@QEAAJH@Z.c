/*
 * XREFs of ?SetScaleImpulseId@CInteractionTracker2@@QEAAJH@Z @ 0x18021D558
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetScaleImpulseId(CInteractionTracker2 *this, int a2)
{
  char v2; // al
  char v3; // al
  __int64 result; // rax

  v2 = *((_BYTE *)this + 831);
  if ( a2 )
  {
    v3 = v2 | 4;
  }
  else
  {
    *((_QWORD *)this + 111) = 0LL;
    a2 = 0;
    *((_DWORD *)this + 221) = 0;
    v3 = v2 & 0xFB;
  }
  *((_BYTE *)this + 831) = v3;
  result = 0LL;
  *((_DWORD *)this + 224) = a2;
  return result;
}
