/*
 * XREFs of xxxProcessTSFEvent @ 0x1400CADAC
 * Callers:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x14005F9D0 (xxxFlushDeferredWindowEvents.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyNotify @ 0x1400CA3C0 (DestroyNotify.c)
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1400CAE54 (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x140289620 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 */

void __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  struct tagTHREADINFO *v7; // rax
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r9

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  v7 = PtiCurrent(v5, v4);
  v8 = *((_DWORD *)a1 + 7);
  if ( v8 != 2147483408 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 7) - 2147483409) < 2 )
      v6 = 2;
    else
      v6 = 0;
  }
  *((_QWORD *)a1 + 8) = v7;
  v9 = TSFRangeFromEvent(v8, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 488) + 24LL) & (v6 | v9) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  DestroyNotify(a1, v10);
}
