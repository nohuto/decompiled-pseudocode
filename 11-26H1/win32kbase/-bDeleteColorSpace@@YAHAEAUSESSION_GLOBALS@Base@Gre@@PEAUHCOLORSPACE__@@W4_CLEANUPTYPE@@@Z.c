/*
 * XREFs of ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1401F2770 (NtGdiDeleteColorSpace.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1401FA98C (-vCleanupLCSPs@@YAXK@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 */

__int64 __fastcall bDeleteColorSpace(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  void *v5; // rax

  v3 = 0;
  if ( a2 == *(_QWORD *)(a1 + 2328) )
    return a3 != 1;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v3;
    }
    v5 = (void *)HmgRemoveObjectImpl((unsigned int *)a1, a2, 0, 1, 1, 9, 0LL);
  }
  else
  {
    v5 = HmgRemoveObject((struct Gre::Base::SESSION_GLOBALS *)a1, a2, 0, 0, 1, 9, 0LL);
  }
  if ( !v5 )
    goto LABEL_8;
  FreeObject((void **)a1, v5, 9u);
  return 1;
}
