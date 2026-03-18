/*
 * XREFs of NtGdiSetBitmapDimension @ 0x1401F41E0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapDimension @ 0x1401F4250 (GreSetBitmapDimension.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiSetBitmapDimension(HSURF a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned int v5; // ebx
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  Src = 0LL;
  if ( a1 )
  {
    v5 = GreSetBitmapDimension(a1);
    if ( v5 && a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a4, &Src, 8uLL);
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
