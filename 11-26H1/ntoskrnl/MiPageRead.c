/*
 * XREFs of MiPageRead @ 0x14026AC78
 * Callers:
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x140A64D58 (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
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
