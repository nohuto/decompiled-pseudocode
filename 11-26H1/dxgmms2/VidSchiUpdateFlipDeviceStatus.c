/*
 * XREFs of VidSchiUpdateFlipDeviceStatus @ 0x14001FC88
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x14001FF9C (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiProcessFlipPendingContextList @ 0x140020700 (VidSchiProcessFlipPendingContextList.c)
 */

__int64 __fastcall VidSchiUpdateFlipDeviceStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // esi
  _QWORD *v5; // rbx
  int updated; // eax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v5 = *(_QWORD **)(v2 + 80);
  while ( v5 != (_QWORD *)(v2 + 80) )
  {
    updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v5 - 3));
    v5 = (_QWORD *)*v5;
    v3 |= updated;
  }
  return v3 | (unsigned int)VidSchiProcessFlipPendingContextList(a1, *(_QWORD *)(v2 + 40));
}
