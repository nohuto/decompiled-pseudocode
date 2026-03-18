/*
 * XREFs of ??0MLOCKOBJ@@QEAA@XZ @ 0x140127ED0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

MLOCKOBJ *__fastcall MLOCKOBJ::MLOCKOBJ(MLOCKOBJ *this)
{
  __int64 *v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rbx
  MLOCKOBJ *result; // rax

  v2 = *(__int64 **)(W32GetSessionState(this) + 88);
  v5 = *v2;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v3, (_DWORD)v2, v4, v5 + 1512, 0, (__int64)L"Hmgr");
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v3, (HSEMAPHORE)(v5 + 1512));
  result = this;
  *(_DWORD *)this = 1;
  return result;
}
