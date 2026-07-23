/*
 * XREFs of WheapCreatePerProcessorInfo @ 0x140CEE428
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 WheapCreatePerProcessorInfo()
{
  unsigned int v0; // esi
  unsigned int v1; // ebx
  ULONG_PTR Pool2; // rdi
  __int64 Prcb; // rax

  v0 = KeNumberProcessors_0;
  v1 = 0;
  Pool2 = ExAllocatePool2(64LL, 24LL * (unsigned int)KeNumberProcessors_0, 0x61656857u);
  if ( !Pool2 )
  {
    ++*(_DWORD *)&WheapConfigTableLock.ApcStateFill[24];
    *(_DWORD *)&WheapConfigTableLock.ApcStateFill[28] |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  if ( v0 )
  {
    do
    {
      Prcb = KeGetPrcb(v1++);
      *(_QWORD *)(Prcb + 35808) = Pool2;
      Pool2 += 24LL;
    }
    while ( v1 < v0 );
  }
  return 0LL;
}
