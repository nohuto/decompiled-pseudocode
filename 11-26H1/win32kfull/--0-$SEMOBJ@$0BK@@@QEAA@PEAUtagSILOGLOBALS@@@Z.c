/*
 * XREFs of ??0?$SEMOBJ@$0BK@@@QEAA@PEAUtagSILOGLOBALS@@@Z @ 0x14031CB50
 * Callers:
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031CE4C (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031D1F8 (-UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BK@@@YAXXZ @ 0x140296284 (--$GrepAcquireLockValidate@$0BK@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<26>::SEMOBJ<26>(HSEMAPHORE *a1, HSEMAPHORE *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<26>();
  return a1;
}
