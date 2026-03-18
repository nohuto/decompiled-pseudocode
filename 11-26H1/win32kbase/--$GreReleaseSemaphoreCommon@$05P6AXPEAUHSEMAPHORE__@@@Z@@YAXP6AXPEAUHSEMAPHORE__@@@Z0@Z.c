/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14013B2A8
 * Callers:
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(int a1, struct _ERESOURCE *a2, int a3)
{
  struct _GRETHREAD *v4; // rax

  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, (_DWORD)a2, (__int64)L"Sprite");
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 14))-- == 1 )
      *(_QWORD *)v4 &= ~0x40uLL;
  }
  GreReleaseSemaphoreSharedInternal(a2);
}
