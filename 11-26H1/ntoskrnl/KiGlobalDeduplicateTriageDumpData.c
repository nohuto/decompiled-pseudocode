/*
 * XREFs of KiGlobalDeduplicateTriageDumpData @ 0x1405E8520
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405E85B4 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405E7E88 (KiDeduplicateTriageDumpDataArrays.c)
 */

void __fastcall KiGlobalDeduplicateTriageDumpData(_DWORD *a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)KeBugCheckTriageDumpDataArrayListHead;
  if ( KeBugCheckTriageDumpDataArrayListHead && qword_140F26D08 )
  {
    while ( v1 != &KeBugCheckTriageDumpDataArrayListHead )
    {
      KiDeduplicateTriageDumpDataArrays(a1, (__int64)v1);
      v1 = (__int64 *)*v1;
    }
  }
}
