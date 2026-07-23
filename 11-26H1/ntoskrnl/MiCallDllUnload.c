/*
 * XREFs of MiCallDllUnload @ 0x14087B384
 * Callers:
 *     MiUnloadApproved @ 0x140B3D458 (MiUnloadApproved.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140479300 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     RtlFailFast2 @ 0x1405376C0 (RtlFailFast2.c)
 *     DifDllUnloadWrapper @ 0x1406C3F88 (DifDllUnloadWrapper.c)
 */

__int64 __fastcall MiCallDllUnload(__int64 a1, __int64 (*a2)(void))
{
  PVOID BaseOfImage; // [rsp+30h] [rbp+8h] BYREF

  BaseOfImage = 0LL;
  RtlPcToFileHeader(*(PVOID *)(a1 + 48), &BaseOfImage);
  if ( BaseOfImage != *(PVOID *)(a1 + 48) )
    RtlFailFast2(0xAu);
  if ( (unsigned int)VfIsVerifierEnabled() )
    return DifDllUnloadWrapper((__int64)a2);
  else
    return a2();
}
