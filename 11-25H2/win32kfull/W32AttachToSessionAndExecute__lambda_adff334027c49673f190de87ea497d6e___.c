/*
 * XREFs of W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14023E8E8
 * Callers:
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x14027B730 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14027B430 (W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 *     ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x14027B758 (-DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v8; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v10; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) || W32GetSessionState(v6, v5) )
      return DeviceClassCDROMNotifyWorker(*(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION **)(a2 + 8));
    else
      return 3221225485LL;
  }
  else
  {
    v8 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v10 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v8 = W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e_(ReferencedSessionProcessWithTag);
      ObfDereferenceObjectWithTag(v10, 0x47727355u);
    }
    return v8;
  }
}
