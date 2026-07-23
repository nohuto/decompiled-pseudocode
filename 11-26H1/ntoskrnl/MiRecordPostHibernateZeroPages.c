/*
 * XREFs of MiRecordPostHibernateZeroPages @ 0x140C07280
 * Callers:
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     HvlQueryBootZeroMemory @ 0x140723384 (HvlQueryBootZeroMemory.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 */

void __fastcall MiRecordPostHibernateZeroPages(__int64 a1)
{
  int i; // ebx
  void *v3; // rcx
  size_t v4; // rdi
  void *v5; // rcx
  __int64 v6; // rcx
  size_t v7; // rbx
  size_t v8; // rdi
  size_t NumOfElements; // [rsp+38h] [rbp+10h] BYREF

  for ( i = 0; i < 2; ++i )
    MiActOnMirrorBitmap((unsigned int)i, 1LL, 2LL);
  if ( (stru_140E366D8.WaitRegister.Flags & 8) != 0 )
  {
    v3 = *(void **)(a1 + 48);
    NumOfElements = *(_QWORD *)(a1 + 56);
    if ( (int)HvlQueryBootZeroMemory(v3, (__int64 *)&NumOfElements) >= 0 )
    {
      v4 = NumOfElements;
      if ( NumOfElements )
      {
        v5 = *(void **)(a1 + 48);
        *(_DWORD *)(a1 + 64) |= 8u;
        qsort(v5, v4, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiHibernateZeroMemoryRangesSort);
        v7 = *(_QWORD *)(a1 + 48);
        v8 = v7 + 16 * v4;
        while ( v7 < v8 )
        {
          MiAddPostHibernateZeroPagesToBitmap(v6, *(_QWORD *)v7, *(_QWORD *)(v7 + 8));
          v7 += 16LL;
        }
      }
    }
  }
}
