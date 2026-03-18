/*
 * XREFs of W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x1402169F8
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402169D0 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x14027B37C (W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x14027B4E0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 */

int __fastcall W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ecx
  int v8; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v10; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) || W32GetSessionState(v6, v5) )
      return DeviceCDROMNotifyWorker(
               *(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION **)a2,
               *(struct _CDROM_NOTIFY **)(a2 + 8));
    else
      return -1073741811;
  }
  else
  {
    v8 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v10 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v8 = W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(ReferencedSessionProcessWithTag);
      ObfDereferenceObjectWithTag(v10, 0x47727355u);
    }
    return v8;
  }
}
