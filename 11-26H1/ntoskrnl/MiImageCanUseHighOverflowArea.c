/*
 * XREFs of MiImageCanUseHighOverflowArea @ 0x140B49BF0
 * Callers:
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 *     MiSelectOverflowDllBase @ 0x140B49A0C (MiSelectOverflowDllBase.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageCanUseHighOverflowArea(__int64 a1, __int64 a2)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 44LL) & 0x20) != 0 && (unsigned __int64)(a2 - 0x80000000LL) <= 0x7FFFFFFF;
}
