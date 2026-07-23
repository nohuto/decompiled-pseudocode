/*
 * XREFs of MiFinalizeLagePageImageMapping @ 0x140777C90
 * Callers:
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyToUserFromUser @ 0x140781DE8 (RtlCopyToUserFromUser.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
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
