/*
 * XREFs of MiInitializeInPageSupportForGetExtents @ 0x14052EC9C
 * Callers:
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
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
