/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x1800975B0
 * Callers:
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x18008D3D4 (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x18008F2B8 (SdbpOpenDatabaseInMemory.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v5; // rbx
  __m128i *v8; // rax
  SIZE_T v9; // rcx
  PVOID Heap; // rbp
  __int64 result; // rax
  _DWORD *v12; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v3 = *a1;
  v4 = 0;
  v5 = 0LL;
  LODWORD(v13) = 0;
  if ( !g_ExpandCallback )
  {
    AslLogCallPrintf(1LL, "SdbpOpenCompressedDatabase", 175LL, "No expand callback method set. Cannot expand ZDB file.");
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v3 + 20) >= 0x14u )
  {
    v8 = *(__m128i **)(v3 + 8);
    v9 = v8[1].m128i_u32[0];
    if ( v8->m128i_i32[2] == 1717724282 )
    {
      if ( _mm_cvtsi128_si32(_mm_srli_si128(*v8, 12)) == g_ExpectedAlgorithm )
      {
        LODWORD(v13) = v8[1].m128i_i32[0];
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
        if ( Heap )
        {
          if ( (unsigned int)((__int64 (__fastcall *)(PVOID, __int64 *, __int64, _QWORD))g_ExpandCallback)(
                               Heap,
                               &v13,
                               *(_QWORD *)(v3 + 8) + 20LL,
                               (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
          {
            v12 = SdbpOpenDatabaseInMemory((__int64)Heap, v13, a3);
            v5 = (__int64)v12;
            if ( v12 )
            {
              v12[6] |= 0xCu;
              v4 = 1;
              LODWORD(v13) = 0;
              goto LABEL_16;
            }
          }
          else
          {
            AslLogCallPrintf(1LL, "SdbpOpenCompressedDatabase", 221LL, "Expand callback failed to expand SDB");
          }
          AslFree(NtCurrentPeb()->ProcessHeap, Heap);
          LODWORD(v13) = 0;
          if ( v5 )
          {
            SdbCloseDatabaseRead(v5);
            v5 = 0LL;
          }
        }
        else
        {
          AslLogCallPrintf(
            1LL,
            "SdbpOpenCompressedDatabase",
            211LL,
            "SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory");
        }
      }
      else
      {
        AslLogCallPrintf(
          1LL,
          "SdbpOpenCompressedDatabase",
          192LL,
          "SDB compression algorithm does not match callback algorithm.");
      }
    }
    else
    {
      AslLogCallPrintf(1LL, "SdbpOpenCompressedDatabase", 187LL, "SDB is not compressed");
    }
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbpOpenCompressedDatabase", 180LL, "SDB file too small to be valid");
  }
LABEL_16:
  SdbCloseDatabaseRead(*a1);
  result = v4;
  *a1 = v5;
  return result;
}
