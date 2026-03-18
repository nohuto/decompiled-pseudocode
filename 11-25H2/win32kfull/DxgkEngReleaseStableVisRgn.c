/*
 * XREFs of DxgkEngReleaseStableVisRgn @ 0x140078130
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007818C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007BD64 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxgkEngReleaseStableVisRgn(Gre::Base *a1)
{
  int v1; // ebx
  __int64 *v2; // rdi

  v1 = (int)a1;
  v2 = (__int64 *)Gre::Base::Globals(a1);
  GreReleaseSemaphoreShared<3,>(v2);
  if ( v1 )
    GreReleaseSemaphoreShared<2,>(v2);
  else
    GreReleaseSemaphoreExclusive<2,>(v2);
  GreReleaseSemaphoreShared<1,>(v2);
  return UserLeaveUserCritSec();
}
