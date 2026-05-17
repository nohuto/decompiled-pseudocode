/*
 * XREFs of RtlCreateMemoryBlockLookaside @ 0x180075B80
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180122340 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180075D90 (RtlInitializeSListHead.c)
 *     RtlCreateMemoryZone @ 0x180075DC0 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180112BE0 (RtlDestroyMemoryZone.c)
 *     RtlAllocateMemoryZone @ 0x18016E140 (RtlAllocateMemoryZone.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateMemoryBlockLookaside(
        union _SLIST_HEADER **a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned __int64 i; // rax
  __int64 v10; // r13
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  int v13; // ebp
  union _SLIST_HEADER *v14; // r14
  unsigned __int64 v15; // rax
  union _SLIST_HEADER *v16; // rsi
  char v17; // cl
  char v18; // cl
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v20 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  *a1 = 0LL;
  if ( a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 || a5 < a4 || a5 > 0x8000000000000000uLL )
    return 3221225485LL;
  if ( ((a4 - 1) & a4) != 0 )
  {
    v18 = 0;
    do
    {
      ++v18;
      v5 >>= 1;
    }
    while ( v5 );
    v5 = 1LL << v18;
  }
  if ( ((a5 - 1) & a5) != 0 )
  {
    v17 = 0;
    do
    {
      ++v17;
      v7 >>= 1;
    }
    while ( v7 );
    v7 = 1LL << v17;
  }
  v8 = 1;
  if ( a3 < v7 )
    a3 = v7;
  v21 = (a3 + 48 * (a3 / v7) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  for ( i = v5; i < v7; ++v8 )
    i *= 2LL;
  v10 = 32LL * v8;
  result = RtlCreateMemoryZone(&v22, (v10 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0LL);
  if ( (int)result >= 0 )
  {
    v12 = v22;
    v13 = RtlAllocateMemoryZone(v22, v10 + 64, &v19);
    if ( v13 < 0
      || (v14 = (union _SLIST_HEADER *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
          v13 = RtlCreateMemoryZone(&v20, v21, 0LL),
          v13 < 0) )
    {
      RtlDestroyMemoryZone(v12);
      return (unsigned int)v13;
    }
    else
    {
      memset_thunk_772440563353939046(v14, 0, v10 + 48);
      v15 = v20;
      v14->Alignment = 0LL;
      v14->Region = v12;
      v16 = v14 + 3;
      v14[1].Alignment = v15;
      v14[1].Region = v5;
      v14[2].Alignment = v7;
      *((_DWORD *)&v14[2].HeaderX64 + 2) = v8;
      while ( 1 )
      {
        RtlInitializeSListHead(v16);
        v16[1].Alignment = v5;
        v16[1].Region = (unsigned __int64)v14;
        if ( v5 == v7 )
          break;
        v5 *= 2LL;
        v16 += 2;
      }
      *a1 = v14;
      return 0LL;
    }
  }
  return result;
}
