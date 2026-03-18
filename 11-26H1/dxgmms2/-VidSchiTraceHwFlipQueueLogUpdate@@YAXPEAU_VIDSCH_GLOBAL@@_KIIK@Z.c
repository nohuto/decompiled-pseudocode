/*
 * XREFs of ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x1400405EC
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     McTemplateK0pqqqqXR4XR4_EtwWriteTransfer @ 0x140040760 (McTemplateK0pqqqqXR4XR4_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiTraceHwFlipQueueLogUpdate(
        struct _VIDSCH_GLOBAL *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v8; // rsi
  int v9; // r8d
  __int64 v10; // r11
  __int64 v11; // rdi
  __int64 v12; // r10
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  int v16; // edx
  __int64 v17; // rdx
  _QWORD v18[64]; // [rsp+50h] [rbp-438h] BYREF
  _QWORD v19[64]; // [rsp+250h] [rbp-238h] BYREF

  v5 = a3;
  v8 = a4;
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  v10 = *((_QWORD *)a1 + v5 + 431);
  v11 = 0LL;
  v12 = 304 * v8;
  v13 = *(_DWORD *)(v10 + 304 * v8 + 372);
  v14 = (a5 + 1) % v13;
  v15 = (v13 + *(_DWORD *)(v10 + 304 * v8 + 376) - 1) % v13 + 1;
  while ( 1 )
  {
    v16 = v15 % v13;
    if ( v14 == v15 % v13 )
      break;
    v17 = *(_QWORD *)(v10 + v12 + 448);
    v9 = 2 * v14;
    v19[v11] = *(_QWORD *)(v17 + 16LL * v14);
    v18[v11] = *(_QWORD *)(v17 + 16LL * v14 + 8);
    v13 = *(_DWORD *)(v10 + v12 + 372);
    v11 = (unsigned int)(v11 + 1);
    v14 = (v14 + 1) % v13;
  }
  if ( a2 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 7091;
  }
  if ( (byte_14008A204 & 0x20) != 0 )
    McTemplateK0pqqqqXR4XR4_EtwWriteTransfer(
      v13,
      v16,
      v9,
      *((_QWORD *)a1 + 2),
      v5,
      v8,
      a2,
      v11,
      (__int64)v19,
      (__int64)v18);
}
