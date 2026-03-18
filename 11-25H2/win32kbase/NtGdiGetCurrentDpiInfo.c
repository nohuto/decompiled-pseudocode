/*
 * XREFs of NtGdiGetCurrentDpiInfo @ 0x14008A100
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfo @ 0x14008A19C (DrvGetCurrentDpiInfo.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfo(__int64 a1, void *a2)
{
  int CurrentDpiInfo; // ebx
  _BYTE Src[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(Src, 0, sizeof(Src));
  CurrentDpiInfo = DrvGetCurrentDpiInfo(a1, Src);
  if ( CurrentDpiInfo >= 0 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, Src, 0x60uLL);
  }
  return (unsigned int)CurrentDpiInfo;
}
