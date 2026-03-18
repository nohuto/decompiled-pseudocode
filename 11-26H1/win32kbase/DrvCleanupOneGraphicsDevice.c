/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x14002CB60
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14002AA74 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14002CC1C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1401F654C (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     bSetDeviceSessionUsage @ 0x14016E200 (bSetDeviceSessionUsage.c)
 */

__int64 __fastcall DrvCleanupOneGraphicsDevice(PVOID Buffer)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)Buffer + 22);
  if ( v2 )
    GreDeleteFastMutex(v2);
  v3 = (void *)*((_QWORD *)Buffer + 24);
  if ( v3 )
    GreDeleteFastMutex(v3);
  v4 = (void *)*((_QWORD *)Buffer + 26);
  if ( v4 )
    GreDeleteFastMutex(v4);
  v5 = (void *)*((_QWORD *)Buffer + 25);
  if ( v5 )
    GreDeleteFastMutex(v5);
  if ( *((_QWORD *)Buffer + 28) )
  {
    if ( (*((_DWORD *)Buffer + 41) & 2) != 0 )
      bSetDeviceSessionUsage(Buffer, 0LL);
    ObfDereferenceObject(*((PVOID *)Buffer + 28));
  }
  v6 = (void *)*((_QWORD *)Buffer + 33);
  if ( v6 )
  {
    GreDeleteFastMutex(v6);
    *((_QWORD *)Buffer + 33) = 0LL;
  }
  return GreDeleteFastMutex(Buffer);
}
