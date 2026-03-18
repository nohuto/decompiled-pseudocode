/*
 * XREFs of ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14002CC1C
 * Callers:
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x14002CDB0 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 * Callees:
 *     DrvCleanupOneGraphicsDevice @ 0x14002CB60 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x14002CC70 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 */

void __fastcall DrvCleanupGraphicsDeviceList(char *Buffer)
{
  char *v1; // rbx
  char *v2; // rdi

  if ( Buffer )
  {
    v1 = Buffer;
    do
    {
      v2 = (char *)*((_QWORD *)v1 + 16);
      if ( (*((_DWORD *)v1 + 40) & 0x800000) != 0 )
        DrvRemoveAdapterLuid(*(struct _LUID *)(v1 + 240));
      DrvCleanupOneGraphicsDevice(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
