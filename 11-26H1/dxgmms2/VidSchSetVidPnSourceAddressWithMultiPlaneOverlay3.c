/*
 * XREFs of VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x14011E870
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x14003C510 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x140115FCC (VidSchiEnsureHwFlipQueueLog.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  int v3; // esi
  __int64 v5; // r14
  void (__fastcall *v7)(_QWORD); // rax
  __int64 i; // rbp
  void (__fastcall *v9)(_QWORD); // rax

  v3 = 0;
  v5 = *((_QWORD *)a1 + a2->VidPnSourceId + 431);
  if ( *(_DWORD *)(v5 + 44488) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 413);
    if ( v7 )
      v7(*((_QWORD *)a1 + 421));
  }
  if ( !*((_BYTE *)a1 + 67) )
    goto LABEL_3;
  for ( i = 0LL; (unsigned int)i < a2->PlaneCount; i = (unsigned int)(i + 1) )
  {
    v3 = VidSchiEnsureHwFlipQueueLog(a1, a2->VidPnSourceId, a2->ppPlanes[i]->LayerIndex);
    if ( v3 < 0 )
      break;
  }
  if ( !*(_QWORD *)&a2[1].VidPnSourceId )
    *(LARGE_INTEGER *)&a2[1].VidPnSourceId = KeQueryPerformanceCounter(0LL);
  if ( v3 >= 0 )
LABEL_3:
    v3 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
           *(ADAPTER_DISPLAY **)(*((_QWORD *)a1 + 2) + 3160LL),
           a2);
  if ( *(_DWORD *)(v5 + 44488) != -1 )
  {
    v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 415);
    if ( v9 )
      v9(*((_QWORD *)a1 + 421));
  }
  return (unsigned int)v3;
}
