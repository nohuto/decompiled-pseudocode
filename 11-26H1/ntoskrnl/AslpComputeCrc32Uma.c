/*
 * XREFs of AslpComputeCrc32Uma @ 0x14088EBC4
 * Callers:
 *     AslComputeCrc32 @ 0x14088E458 (AslComputeCrc32.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     AslpComputeCrc32Impl @ 0x14088EB88 (AslpComputeCrc32Impl.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslpComputeCrc32Uma(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rcx
  _BYTE *v8; // rdi
  size_t v10; // r8
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax

  v4 = a3;
  v5 = a3;
  v6 = a1;
  if ( a3 >= 0x1000 )
    v4 = 4096LL;
  v8 = (_BYTE *)AslAlloc(a1, v4);
  if ( v8 )
  {
    for ( ; v5; v5 -= v13 )
    {
      v10 = 4096LL;
      if ( v5 < 0x1000 )
        v10 = v5;
      RtlCopyFromUser(v8, a2, v10);
      v11 = 4096;
      if ( v5 < 0x1000 )
        v11 = v5;
      v6 = AslpComputeCrc32Impl(v6, v8, v11);
      v12 = 4096LL;
      if ( v5 < 0x1000 )
        v12 = v5;
      a2 += v12;
      v13 = 4096;
      if ( v5 < 0x1000 )
        v13 = v5;
    }
    AslFree(v7, v8);
    return v6;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"AslpComputeCrc32Uma", 339, (unsigned int)"Out of memory");
    return 0xFFFFFFFFLL;
  }
}
