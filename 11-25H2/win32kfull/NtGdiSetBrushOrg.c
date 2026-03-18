/*
 * XREFs of NtGdiSetBrushOrg @ 0x140055A10
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBrushOrg @ 0x140055A78 (GreSetBrushOrg.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiSetBrushOrg(HDC a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned int v5; // edi
  _QWORD Src[3]; // [rsp+20h] [rbp-18h] BYREF

  Src[0] = 0LL;
  v5 = GreSetBrushOrg(a1);
  if ( v5 && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a4, Src, 8uLL);
  }
  return v5;
}
