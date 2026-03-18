/*
 * XREFs of VidSchiExecuteMmIoFlipAtISR @ 0x14002BD00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x14002BDA0 (VidSchiUpdateCurrentIsrFrameTime.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

char __fastcall VidSchiExecuteMmIoFlipAtISR(_QWORD *a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx

  v1 = (unsigned int *)(a1 + 1);
  *((_DWORD *)a1 + 530) = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[32])(
                            *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 3160LL),
                            a1 + 1);
  if ( (a1[70] & 2) != 0 )
  {
    VidSchiUpdateCurrentIsrFrameTime(*a1, *(_QWORD *)(*a1 + 8LL * *v1 + 3448), 0LL);
    v3 = *v1;
    v4 = *a1;
    a1[267] = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v3 + 3448) + 44304LL);
    a1[266] = *(_QWORD *)(*(_QWORD *)(v4 + 8 * v3 + 3448) + 44312LL);
  }
  return 1;
}
