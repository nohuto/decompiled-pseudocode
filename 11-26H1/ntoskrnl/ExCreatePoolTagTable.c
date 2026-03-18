/*
 * XREFs of ExCreatePoolTagTable @ 0x140837808
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  void *v5; // rbx

  v2 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x333333333333332LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(80 * (PoolTrackTableSize + 1), a2, 0LL, 0LL);
  v5 = IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, 80 * PoolTrackTableSize);
    *((_QWORD *)&stru_140EFEF90.CurrentRunTime + v2) = v5;
  }
  return v5;
}
