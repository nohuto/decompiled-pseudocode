/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2@@YAEPEAX@Z @ 0x1400542A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2(_DWORD *a1)
{
  a1[530] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[61])(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 3160LL),
              a1 + 2);
  return 1;
}
