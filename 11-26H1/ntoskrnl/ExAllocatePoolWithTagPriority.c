/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14045ECF0
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140C35CD0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140C3F770 (VerifierPortExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int32 v12; // edx
  __int64 v13; // r10
  int v14; // ecx
  __int32 v15; // ebx
  ULONG v16; // r11d
  PVOID result; // rax
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v7 = 256LL;
  v18 = 0LL;
  if ( (PoolType & 1) == 0 )
  {
    v7 = 128LL;
    if ( (PoolType & 0x200) != 0 )
      v7 = 64LL;
  }
  if ( PoolType < NonPagedPool )
    v7 = 64LL;
  v8 = v7 | 4;
  if ( (PoolType & 0x20) == 0 )
    v8 = v7;
  v9 = v8 | 2;
  if ( (PoolType & 0x400) != 0 )
    v9 = v8;
  if ( (PoolType & 0xDE) != 0 )
  {
    v10 = v9 | 8;
    if ( (PoolType & 4) == 0 )
      v10 = v9;
    v11 = v10 | 0x200;
    if ( (PoolType & 0x80u) == 0 )
      v11 = v10;
    v9 = v11 | 0x400;
    if ( (PoolType & 0x40) == 0 )
      v9 = v11;
    if ( (PoolType & 0x10) != 0 )
      v9 |= 0x20uLL;
  }
  v12 = Priority & 0xFFFFFFF6;
  if ( (Priority & 8) == 0 )
    v12 = Priority;
  v13 = v9 | 0x100000000LL;
  v14 = v12;
  if ( (Priority & 8) == 0 )
    v13 = v9;
  if ( v12 && v12 != 16 && v12 != 32 )
    v14 = 0;
  v15 = PoolType & 2;
  if ( v15 )
    v14 = 32;
  v16 = Tag & 0x7FFFFFFF;
  DWORD2(v18) = v14;
  if ( !v16 )
    v16 = 811884866;
  *(_QWORD *)&v18 = v18 & 0xFFFFFFFFFFFFFF00uLL | 1;
  result = (PVOID)ExAllocatePool3(v13, NumberOfBytes, v16, &v18, 1);
  if ( !result )
  {
    if ( v15 )
      KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  }
  return result;
}
