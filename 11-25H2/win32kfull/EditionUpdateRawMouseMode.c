/*
 * XREFs of EditionUpdateRawMouseMode @ 0x140121E10
 * Callers:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     DestroyThreadHidObjects @ 0x14011C130 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14011E5B0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     TransferWakeBit @ 0x140120600 (TransferWakeBit.c)
 *     UnlockCaptureWindow @ 0x140120F50 (UnlockCaptureWindow.c)
 *     LockCaptureWindow @ 0x140121D68 (LockCaptureWindow.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1402787E8 (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateRawMouseMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax

  result = W32GetUserSessionState(a1, a2);
  if ( a1 == *(_QWORD *)(result + 18888) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 16);
    else
      v6 = *(_QWORD *)(a1 + 96);
    if ( !v6
      || (v4 = *(_QWORD *)(v6 + 464)) == 0
      || !*(_QWORD *)(v4 + 824)
      || (v5 ? (v8 = *(_QWORD *)(v5 + 16)) : (v8 = *(_QWORD *)(a1 + 96)),
          v7 = 1,
          v6 = *(_QWORD *)(*(_QWORD *)(v8 + 464) + 824LL),
          (*(_DWORD *)(v6 + 100) & 1) == 0) )
    {
      v7 = 0;
    }
    result = W32GetUserSessionState(v6, v4);
    *(_DWORD *)(result + 16316) = v7;
  }
  return result;
}
