/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x140263948
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1403387C0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::OnHostReady(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rsi
  __int64 i; // rdi
  struct PFF *j; // rcx
  void **v9; // rax
  void **v10; // rbp
  struct _KEVENT *v11; // rcx
  HSEMAPHORE v12; // [rsp+40h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  v3 = *(_QWORD *)(SessionState + 96) + 4872LL;
  if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(SessionState + 96) + 24224LL)) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 24290LL) || *(_QWORD *)(v3 + 19312) != 1LL )
    {
      SEMOBJ<17>::SEMOBJ<17>(&v12, v3);
      v6 = *(_QWORD *)(v3 + 15544);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
      {
        for ( j = *(struct PFF **)(v6 + 8 * i + 40); ; j = (struct PFF *)v10[1] )
        {
          v9 = (void **)SkipInvalidPff(j);
          v10 = v9;
          if ( !v9 )
            break;
          UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(0LL, v9[11], v9);
        }
      }
      v11 = *(struct _KEVENT **)(v3 + 19352);
      *(_BYTE *)(v3 + 19418) = 1;
      KeSetEvent(v11, 0, 0);
      KeSetEvent(*(PRKEVENT *)(v3 + 19360), 0, 0);
      SEMOBJ<17>::vUnlock(&v12);
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(v3 + 19368), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(v3 + 19360), Executive, 0, 0, 0LL);
    }
  }
}
