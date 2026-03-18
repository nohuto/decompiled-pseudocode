/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801A825C
 * Callers:
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1801A81CC (--1CRedirectedGDISurface@@MEAA@XZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18022DED0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x18022E0F0 (--_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 *a2)
{
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  Buffer = *a2;
  v3 = 0LL;
  if ( !RtlDeleteElementGenericTable(a1, &Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
