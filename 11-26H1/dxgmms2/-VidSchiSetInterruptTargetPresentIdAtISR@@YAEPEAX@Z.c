/*
 * XREFs of ?VidSchiSetInterruptTargetPresentIdAtISR@@YAEPEAX@Z @ 0x14003E590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiSetInterruptTargetPresentIdAtISR(_DWORD *a1)
{
  a1[6] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[67])(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 3160LL),
            a1 + 2);
  return 1;
}
