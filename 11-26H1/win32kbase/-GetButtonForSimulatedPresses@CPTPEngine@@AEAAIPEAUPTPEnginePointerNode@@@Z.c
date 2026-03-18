/*
 * XREFs of ?GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z @ 0x140189E90
 * Callers:
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B1764 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4 (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::GetButtonForSimulatedPresses(CPTPEngine *this, struct PTPEnginePointerNode *a2)
{
  int v2; // r11d
  unsigned __int64 *v3; // r9
  unsigned int v4; // r8d
  CPTPEngine *v5; // r10

  v2 = *((_DWORD *)this + 768);
  v3 = (unsigned __int64 *)((char *)a2 + 40);
  v4 = 0;
  v5 = this;
  if ( (v2 & 0x10000000) != 0 && PtInRect((_DWORD *)this + 31, *v3) )
  {
    return 8;
  }
  else if ( (v2 & 0x8000000) != 0 && PtInRect((_DWORD *)v5 + 27, *v3) )
  {
    return 2;
  }
  return v4;
}
