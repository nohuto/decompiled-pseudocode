/*
 * XREFs of MiIssueDllInitializeCall @ 0x14087B6CC
 * Callers:
 *     MmCallDllInitialize @ 0x14087B8BC (MmCallDllInitialize.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140479300 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     RtlFailFast2 @ 0x1405376C0 (RtlFailFast2.c)
 *     DifDllInitializeWrapper @ 0x1406C3E14 (DifDllInitializeWrapper.c)
 *     MiFormDllRegistryPath @ 0x14087B470 (MiFormDllRegistryPath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x140C2682C (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140C2E2FC (VfDriverInitSuccess.c)
 */

__int64 __fastcall MiIssueDllInitializeCall(__int64 a1, __int64 (__fastcall *a2)(UNICODE_STRING *))
{
  __int64 result; // rax
  PVOID v5; // rdi
  unsigned int inited; // esi
  int v7; // eax
  int v8; // ebx
  UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  BaseOfImage = 0LL;
  v9 = 0LL;
  result = MiFormDllRegistryPath(a1, &v9);
  if ( (int)result >= 0 )
  {
    RtlPcToFileHeader(*(PVOID *)(a1 + 48), &BaseOfImage);
    v5 = *(PVOID *)(a1 + 48);
    if ( BaseOfImage != v5 )
      RtlFailFast2(0xAu);
    inited = VfDriverInitStarting();
    if ( (unsigned int)VfIsVerifierEnabled() )
      v7 = DifDllInitializeWrapper((__int64)&v9, (__int64)v5, (__int64)a2);
    else
      v7 = a2(&v9);
    v8 = v7;
    ExFreePoolWithTag(v9.Buffer, 0);
    if ( v8 >= 0 && !stru_140E2D2D0.SchedulerApcFill3[8] )
      VfDriverInitSuccess(inited);
    return (unsigned int)v8;
  }
  return result;
}
