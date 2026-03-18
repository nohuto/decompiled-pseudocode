/*
 * XREFs of ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1402D4CD0
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMultiByteSizeFromUnicodeString(__int64 a1, ULONG *a2)
{
  ULONG v2; // r8d
  unsigned int v4; // edi
  unsigned int v5; // edx

  v2 = *(_DWORD *)a1;
  v4 = 0;
  *a2 = 0;
  RtlUnicodeToMultiByteSize(a2, *(PCWCH *)(a1 + 8), v2);
  v5 = *a2 + 2;
  if ( v5 < *a2 )
  {
    *a2 = -1;
    return 0LL;
  }
  else
  {
    *a2 = v5;
    LOBYTE(v4) = v5 < 0x7FFFFFFF;
    return v4;
  }
}
