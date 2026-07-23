/*
 * XREFs of sub_140CAEA00 @ 0x140CAEA00
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     PsQueryThreadStartAddress @ 0x14040CC40 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_140CAEA00(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2528)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    PsReferenceSiloContext(a2);
    *(_QWORD *)(a3 + 2528) = a2;
  }
  return 0LL;
}
