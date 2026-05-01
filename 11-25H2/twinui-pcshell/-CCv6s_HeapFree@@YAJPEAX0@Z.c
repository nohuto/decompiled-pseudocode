/*
 * XREFs of ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x18065DA54
 * Callers:
 *     Str_SetPtrW @ 0x18065DA90 (Str_SetPtrW.c)
 *     _DSA_MergeSort @ 0x18065DDE4 (_DSA_MergeSort.c)
 *     DSA_DeleteAllItems @ 0x18065E040 (DSA_DeleteAllItems.c)
 *     DSA_Destroy @ 0x18065E098 (DSA_Destroy.c)
 *     DPA_Destroy @ 0x1806A43B0 (DPA_Destroy.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CCv6s_HeapFree(void *a1, void *a2)
{
  BOOL v2; // eax
  unsigned int v3; // ecx

  v2 = HeapFree(a1, 0, a2);
  v3 = 0;
  if ( !v2 )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
