/*
 * XREFs of ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x140049C10
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036240 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

bool __fastcall VidSchiSignalRuntimeFenceForCompletedFlipEntry(
        __int64 a1,
        __int64 a2,
        int a3,
        struct HwQueueStagingList *a4)
{
  unsigned int v7; // r10d
  unsigned int v8; // eax
  bool v9; // zf
  unsigned int v10; // r10d
  char v11; // dl
  char v12; // cl
  int v13; // eax
  bool result; // al
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  unsigned int *v21; // [rsp+58h] [rbp-28h]
  unsigned int v22; // [rsp+60h] [rbp-20h]
  unsigned int v23; // [rsp+64h] [rbp-1Ch]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]
  struct _VIDSCH_SYNC_OBJECT *v27; // [rsp+B0h] [rbp+30h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v28; // [rsp+B8h] [rbp+38h] BYREF

  v21 = *(unsigned int **)(a2 + 1192);
  v20 = a1;
  v7 = *v21;
  v8 = *v21 & 0x3FF;
  v9 = *(_BYTE *)(a1 + 164) == 0;
  v22 = v8;
  if ( v9 )
    v10 = 0;
  else
    v10 = (v7 >> 10) & 0x3FF;
  v23 = v10;
  v9 = !_BitScanForward(&v8, v8);
  v11 = -1;
  LODWORD(v27) = 0;
  v12 = -1;
  v24 = 0;
  if ( !v9 )
    v12 = v8;
  LODWORD(v27) = 0;
  v25 = v12;
  v9 = !_BitScanForward((unsigned int *)&v13, v10);
  if ( !v9 )
    v11 = v13;
  v26 = v11;
  result = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v20);
  if ( !result )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(a2 + 1192);
      v17 = v15 * ((8 * *(_DWORD *)(v16 + 8) + 231) & 0xFFFFFFF8);
      if ( *(_QWORD *)(v17 + v16 + 216) )
      {
        v28 = *(struct _VIDSCH_SYNC_OBJECT **)(v15 * ((8 * *(_DWORD *)(v16 + 8) + 231) & 0xFFFFFFF8) + v16 + 216);
        v27 = *(struct _VIDSCH_SYNC_OBJECT **)(v17 + v16 + 224);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v28, 0, (const unsigned __int64 *)&v27, 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)(v17 + v16 + 216), v27);
          WdLogGlobalForLineNumber = 23604;
          DxgkLogInternalTriageEvent(v18, 0x40000LL);
        }
      }
      if ( *(_QWORD *)(v17 + v16 + 232) && a3 )
      {
        v27 = *(struct _VIDSCH_SYNC_OBJECT **)(v17 + v16 + 232);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v27, 0, (const unsigned __int64 *)(v17 + v16 + 240), 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)(v17 + v16 + 232), *(_QWORD *)(v17 + v16 + 240));
          WdLogGlobalForLineNumber = 23627;
          DxgkLogInternalTriageEvent(v19, 0x40000LL);
        }
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v20);
      result = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v20);
      if ( result )
        break;
      v15 = v24;
    }
  }
  return result;
}
