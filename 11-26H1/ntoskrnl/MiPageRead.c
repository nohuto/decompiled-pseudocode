/*
 * XREFs of MiPageRead @ 0x14026B708
 * Callers:
 *     MiPfExecuteReadList @ 0x140A51868 (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x140A577D8 (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a5, a6, a7);
}
