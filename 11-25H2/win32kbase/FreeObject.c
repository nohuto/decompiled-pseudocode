/*
 * XREFs of FreeObject @ 0x14014C950
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x14014C7D0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 *     EngDeleteDriverObj @ 0x1401D0A50 (EngDeleteDriverObj.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401D1F78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     FreeObjectFast @ 0x1401C54CC (FreeObjectFast.c)
 */

__int64 __fastcall FreeObject(__int64 a1, unsigned int a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return FreeObjectFast(*(_QWORD *)(SessionState + 88), a1, a2);
}
