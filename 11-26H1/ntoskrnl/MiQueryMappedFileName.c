/*
 * XREFs of MiQueryMappedFileName @ 0x1409FE7DC
 * Callers:
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiQueryUpdateBytesWritten @ 0x1409202CC (MiQueryUpdateBytesWritten.c)
 *     MiQueryDetach @ 0x140920308 (MiQueryDetach.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 */

__int64 __fastcall MiQueryMappedFileName(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rcx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // esi
  char v8; // [rsp+20h] [rbp-18h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  MiQueryDetach(a1);
  v2 = *(void **)(a1 + 144);
  if ( !v2 )
    return 3221225793LL;
  if ( v2 == (void *)1 )
    return 3221225624LL;
  v3 = *(void **)(a1 + 144);
  if ( *(_QWORD *)(a1 + 16) > 0xFFFFFFFFuLL )
  {
    ObfDereferenceObjectWithTag(v3, 0x63536D4Du);
    return 3221225715LL;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 8);
    v8 = *(_BYTE *)(a1 + 32);
    v9 = 0;
    v6 = ObQueryNameStringMode((char *)v3, v5, v4, &v9, v8);
    ObfDereferenceObjectWithTag(v2, 0x63536D4Du);
    if ( *(_QWORD *)(a1 + 24) )
      MiQueryUpdateBytesWritten(a1, v9);
    return v6;
  }
}
