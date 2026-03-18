/*
 * XREFs of MiFinalizeLagePageImageMapping @ 0x140774C90
 * Callers:
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyToUserFromUser @ 0x14077F2E8 (RtlCopyToUserFromUser.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 */

__int64 __fastcall MiFinalizeLagePageImageMapping(int a1, __int64 a2, void *a3, int a4, __int64 a5, int a6, int a7)
{
  int v9; // edi
  void *Src; // [rsp+40h] [rbp-18h] BYREF

  Src = 0LL;
  v9 = MiMapViewOfImageSection(a1, a2, (unsigned int)&Src, a4, a5, a6, a7, 4);
  if ( v9 >= 0 )
    RtlCopyToUserFromUser(a3, Src, *(_QWORD *)(a2 + 24));
  if ( Src )
    MiUnmapViewOfSection(*(_QWORD *)(a2 + 88), Src, 0LL, 0LL);
  return (unsigned int)v9;
}
