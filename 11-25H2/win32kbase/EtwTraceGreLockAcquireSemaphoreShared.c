/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x140045A00
 * Callers:
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140043C18 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140045A94 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400465D0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14015E824 (McTemplateK0pz_EtwWriteTransfer.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r8d
  bool v7; // zf

  result = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    v7 = gbLockEtw == 0;
  }
  else
  {
    result = W32GetSessionState(v5);
    v5 = *(_QWORD *)(result + 88);
    v7 = *(_DWORD *)(v5 + 16) == 0;
  }
  if ( !v7 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    return McTemplateK0pz_EtwWriteTransfer(v5, (unsigned int)&LockAcquireShared, v6, a2, a1);
  return result;
}
