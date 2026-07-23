/*
 * XREFs of MiInitializeInPageSupportForGetExtents @ 0x1405311BC
 * Callers:
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeInPageSupportForGetExtents(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a4 )
    *(_QWORD *)(a1 + 232) = *a4;
  *(_QWORD *)(a1 + 192) = a2;
  *(_DWORD *)(a1 + 184) = 4096;
  *(_QWORD *)(a1 + 240) = a3;
  result = *(_DWORD *)(a1 + 188) | 1u;
  *(_DWORD *)(a1 + 188) = result;
  return result;
}
