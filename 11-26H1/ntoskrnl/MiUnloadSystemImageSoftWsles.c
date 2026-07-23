/*
 * XREFs of MiUnloadSystemImageSoftWsles @ 0x140714A74
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char *MiUnloadSystemImageSoftWsles()
{
  char *AnyMultiplexedVm; // rax
  size_t v1; // rdx
  __int64 v2; // r9
  unsigned __int64 v3; // r9
  bool v4; // zf
  char *result; // rax
  char *v6; // r9
  size_t v7; // r8

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v3 = ((v2 << 25 >> 16) & 0xFFFFFFFFF000uLL) >> 12;
  v4 = (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) == 0;
  result = (char *)(qword_140E37DB0 + 0x8000000000LL);
  if ( !v4 )
    result = (char *)qword_140E37DB0;
  v6 = &result[v3];
  if ( v1 )
  {
    v7 = v1;
    LOBYTE(v1) = 10;
    return (char *)memset_0(v6, v1, v7);
  }
  return result;
}
