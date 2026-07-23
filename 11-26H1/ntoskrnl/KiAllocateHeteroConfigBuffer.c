/*
 * XREFs of KiAllocateHeteroConfigBuffer @ 0x140BF951C
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     KeGetThreadWorkloadClassCount @ 0x14050EDE8 (KeGetThreadWorkloadClassCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 KiAllocateHeteroConfigBuffer()
{
  __int64 ThreadWorkloadClassCount; // rbx
  USHORT MaximumGroupCount; // r13
  __int64 Pool2; // rax
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // [rsp+60h] [rbp+8h]
  __int64 Size; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+70h] [rbp+18h]

  ThreadWorkloadClassCount = (unsigned int)KeGetThreadWorkloadClassCount();
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v11 = ThreadWorkloadClassCount;
  Size = 8LL * MaximumGroupCount;
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = 0;
  v13 = Pool2;
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 28) = ThreadWorkloadClassCount;
    v5 = 496 * (int)ThreadWorkloadClassCount + 32 + Pool2;
    if ( (_DWORD)ThreadWorkloadClassCount )
    {
      v6 = (__int64 *)(Pool2 + 32);
      do
      {
        v7 = 62LL;
        do
        {
          v8 = v5;
          v9 = v5;
          v5 += Size + 8;
          *(_WORD *)v8 = 1;
          *(_WORD *)(v8 + 2) = MaximumGroupCount;
          *(_DWORD *)(v8 + 4) = 0;
          memset_0((void *)(v8 + 8), 0, Size);
          *v6++ = v9;
          --v7;
        }
        while ( v7 );
        --v11;
      }
      while ( v11 );
      v4 = v13;
    }
    KiHeteroConfig = v4;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
