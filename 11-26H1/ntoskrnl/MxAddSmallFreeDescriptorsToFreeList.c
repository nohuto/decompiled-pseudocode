/*
 * XREFs of MxAddSmallFreeDescriptorsToFreeList @ 0x140CFB240
 * Callers:
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MxCreateFreePages @ 0x140CFC028 (MxCreateFreePages.c)
 */

__int64 __fastcall MxAddSmallFreeDescriptorsToFreeList(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 *v3; // rbp
  __int64 v4; // r15
  LARGE_INTEGER v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r14
  __int64 FreePages; // rax
  LARGE_INTEGER v9; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = &MxBootState[250 * a1];
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v5.QuadPart = 10000000 * v5.QuadPart / PerformanceFrequency.QuadPart;
  v6 = v3 + 2;
  v7 = 2LL;
  do
  {
    do
    {
      if ( (_QWORD *)*v6 == v6 )
        break;
      ++v4;
      FreePages = MxCreateFreePages(v3, *v6, *(_QWORD *)(*v6 + 40LL));
      v2 += FreePages;
    }
    while ( FreePages );
    v6 += 4;
    --v7;
  }
  while ( v7 );
  PerformanceFrequency.QuadPart = 0LL;
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v9.QuadPart = 10000000 * v9.QuadPart / PerformanceFrequency.QuadPart;
  if ( v9.QuadPart < (unsigned __int64)v5.QuadPart )
    v9 = v5;
  result = 32 * v1;
  *(LARGE_INTEGER *)((char *)&MxDescriptorTimings + result) = v5;
  *(_QWORD *)((char *)&MxDescriptorTimings + result + 8) = v9.QuadPart - v5.QuadPart;
  *(_QWORD *)((char *)&MxDescriptorTimings + result + 16) = v4;
  *(_QWORD *)((char *)&MxDescriptorTimings + result + 24) = v2;
  return result;
}
