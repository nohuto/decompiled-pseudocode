/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x14016EF30
 * Callers:
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x14020E8D4 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdHostLifeTimeManager::GetSessionTextStackStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _KEVENT *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LONG StateEvent; // eax
  unsigned int v9; // ecx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v4 = *(struct _KEVENT **)(v3 + 24208);
  if ( !v4 || !*(_QWORD *)(v3 + 24216) )
    return 3221225701LL;
  if ( !KeReadStateEvent(v4) || !*(_BYTE *)(*(_QWORD *)(W32GetSessionState(v6, v5, v7) + 96) + 24274LL) )
    return 259LL;
  StateEvent = KeReadStateEvent(*(PRKEVENT *)(v3 + 24216));
  v9 = 259;
  if ( StateEvent )
    return 0;
  return v9;
}
