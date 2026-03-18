/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1402916D4
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x14034D830 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::OnHostReady(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rsi
  unsigned int i; // edi
  struct _KEVENT *v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  HSEMAPHORE v10; // [rsp+48h] [rbp+10h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  v3 = *(_QWORD *)(SessionState + 96) + 4864LL;
  if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(SessionState + 96) + 24208LL)) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 24274LL) || *(_QWORD *)(v3 + 19304) != 1LL )
    {
      SEMOBJ<17>::SEMOBJ<17>(&v10, v3);
      v6 = *(_QWORD *)(v3 + 15528);
      for ( i = 0; i < *(_DWORD *)(v6 + 24); ++i )
      {
        PFT::PffBucket(v6, (PffIterator *)&v9, i);
        while ( v9 )
        {
          UmfdHostLifeTimeManager::QueueTryResurrectPffApc(*(_QWORD *)(v9 + 88));
          PffIterator::operator++(&v9);
        }
      }
      SEMOBJ<17>::vUnlock(&v10);
      v8 = *(struct _KEVENT **)(v3 + 19344);
      *(_BYTE *)(v3 + 19410) = 1;
      KeSetEvent(v8, 0, 0);
      KeSetEvent(*(PRKEVENT *)(v3 + 19352), 0, 0);
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(v3 + 19360), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(v3 + 19352), Executive, 0, 0, 0LL);
    }
  }
}
