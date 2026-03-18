/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401D1F78
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x140085594 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1498 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1401D2170 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     FreeObject @ 0x14014C950 (FreeObject.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  if ( a1 == *(struct HOBJ__ **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 2240LL) )
    return a2 != 1;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v4;
    }
    v5 = HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v5 = HmgRemoveObject((__int64)a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v5 )
    goto LABEL_8;
  FreeObject(v5, 9u);
  return 1;
}
