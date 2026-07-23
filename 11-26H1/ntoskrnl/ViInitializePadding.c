/*
 * XREFs of ViInitializePadding @ 0x140C2D6D0
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140C2DD00 (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ViTagBuffer @ 0x140C2E050 (ViTagBuffer.c)
 */

void *__fastcall ViInitializePadding(void *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // si
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v9; // r8

  HIBYTE(v4) = 0;
  v5 = a2;
  v6 = a4;
  if ( !a4 )
    return memset_0(a1, 15, a2);
  memset_0(a1, 15, a3 - (_QWORD)a1);
  memset_0((void *)(a3 + v6), 15, (size_t)a1 + (unsigned int)v5 - (a3 + v6));
  LOBYTE(v4) = (unsigned __int64)a1 + 8 <= a3;
  v9 = v4;
  LOWORD(v9) = v4 | 2;
  if ( a3 + v6 - (unsigned __int64)a1 + 8 > v5 )
    LOWORD(v9) = v4;
  return (void *)ViTagBuffer(a3, (unsigned int)v6, v9);
}
