/*
 * XREFs of ObpCompareNamespaceEntry @ 0x1408EF130
 * Callers:
 *     ObpLookupNamespaceEntry @ 0x1408EF0CC (ObpLookupNamespaceEntry.c)
 * Callees:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8 (RtlEnumerateBoundaryDescriptorEntries.c)
 */

__int64 __fastcall ObpCompareNamespaceEntry(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+44h] [rbp-14h]

  v2 = *(_DWORD *)(a2 + 52);
  v3 = 0;
  v5[2] = 0LL;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 52) != v2 )
    return 0LL;
  v5[0] = a1;
  v5[1] = a2;
  v7 = 0LL;
  v6 = 0;
  if ( (int)RtlEnumerateBoundaryDescriptorEntries(a1 + 48, ObpCompareEntryLevel1, v5) < 0 || v7 < 0 )
    return 0LL;
  LOBYTE(v3) = (_DWORD)v7 == v6;
  return v3;
}
