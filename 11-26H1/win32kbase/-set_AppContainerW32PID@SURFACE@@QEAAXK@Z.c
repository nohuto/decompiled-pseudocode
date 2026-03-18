/*
 * XREFs of ?set_AppContainerW32PID@SURFACE@@QEAAXK@Z @ 0x1401BBF80
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall SURFACE::set_AppContainerW32PID(SURFACE *this, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  HSEMAPHORE v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(W32GetSessionState(this) + 88);
  v9 = (HSEMAPHORE)(*v4 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v5, v9);
  v6 = HmgPentryFromPobj((__int64)v4);
  if ( a2 )
    *(_BYTE *)(v6 + 15) |= 0x80u;
  else
    *(_BYTE *)(v6 + 15) &= ~0x80u;
  *((_DWORD *)this + 160) = a2;
  SEMOBJ<20>::vUnlock(&v9, v7, v8);
}
