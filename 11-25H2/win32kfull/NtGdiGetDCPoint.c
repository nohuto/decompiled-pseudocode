/*
 * XREFs of NtGdiGetDCPoint @ 0x140197A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetDCPoint(HDC a1, unsigned int a2, void *a3)
{
  unsigned int DCPoint; // ebx
  struct _POINTL Src; // [rsp+48h] [rbp+20h] BYREF

  Src = 0LL;
  DCPoint = GreGetDCPoint(a1, a2, &Src);
  if ( DCPoint )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a3, &Src, 8uLL);
  }
  return DCPoint;
}
