/*
 * XREFs of ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1401C49AC
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14028C9FC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdGetServerPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 SessionState; // rax

  v3 = (int)a1;
  SessionState = W32GetSessionState(a1, a2, a3);
  if ( (unsigned int)v3 > 3 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(SessionState + 104) + 8 * v3 + 48);
}
