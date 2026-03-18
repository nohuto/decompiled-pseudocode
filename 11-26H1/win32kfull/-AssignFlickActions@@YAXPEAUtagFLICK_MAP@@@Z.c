/*
 * XREFs of ?AssignFlickActions@@YAXPEAUtagFLICK_MAP@@@Z @ 0x14013ED78
 * Callers:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x14013EB3C (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AssignFlickActions(struct tagFLICK_MAP *a1, __int64 a2)
{
  _OWORD *UserSessionState; // rax

  UserSessionState = (_OWORD *)W32GetUserSessionState(a1, a2);
  *(_OWORD *)a1 = UserSessionState[1142];
  *((_OWORD *)a1 + 1) = *(_OWORD *)((char *)UserSessionState + 18296);
  *((_OWORD *)a1 + 2) = UserSessionState[1145];
  *((_OWORD *)a1 + 3) = *(_OWORD *)((char *)UserSessionState + 18344);
  *((_OWORD *)a1 + 4) = UserSessionState[1148];
  *((_OWORD *)a1 + 5) = *(_OWORD *)((char *)UserSessionState + 18392);
  *((_OWORD *)a1 + 6) = UserSessionState[1151];
  *((_OWORD *)a1 + 7) = *(_OWORD *)((char *)UserSessionState + 18440);
}
