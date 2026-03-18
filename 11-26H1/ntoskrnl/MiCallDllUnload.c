/*
 * XREFs of MiCallDllUnload @ 0x140874FA0
 * Callers:
 *     MiUnloadApproved @ 0x140B3B1D8 (MiUnloadApproved.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14047F990 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     RtlFailFast2 @ 0x140535240 (RtlFailFast2.c)
 *     DifDllUnloadWrapper @ 0x1406C03A8 (DifDllUnloadWrapper.c)
 */

__int64 __fastcall MiCallDllUnload(__int64 a1, __int64 (*a2)(void))
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  RtlPcToFileHeader(*(_QWORD *)(a1 + 48), &v5);
  if ( v5 != *(_QWORD *)(a1 + 48) )
    RtlFailFast2(0xAu);
  if ( (unsigned int)VfIsVerifierEnabled() )
    return DifDllUnloadWrapper((__int64)a2);
  else
    return a2();
}
