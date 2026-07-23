/*
 * XREFs of EtwKernelMemoryRundown @ 0x14082D960
 * Callers:
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 */

__int64 EtwKernelMemoryRundown()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int64 v3; // rcx
  _OWORD v4[2]; // [rsp+38h] [rbp-30h] BYREF

  result = EtwpHostSiloState;
  memset(v4, 0, sizeof(v4));
  v1 = *(_DWORD *)(EtwpHostSiloState + 4520);
  DWORD1(v4[0]) = 8;
  while ( _BitScanForward((unsigned int *)&v3, v1) )
  {
    v1 &= v1 - 1;
    result = EtwpHostSiloState + 32LL * (unsigned int)v3 + 4556;
    if ( result )
    {
      result = *(unsigned int *)(result + 20);
      if ( (result & 1) != 0 )
        result = EtwpKernelTraceRundown(
                   (unsigned int)v4,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v3 + 4504),
                   0,
                   0LL,
                   0);
    }
  }
  return result;
}
