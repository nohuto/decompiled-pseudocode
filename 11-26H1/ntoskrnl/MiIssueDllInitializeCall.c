/*
 * XREFs of MiIssueDllInitializeCall @ 0x1408752E8
 * Callers:
 *     MmCallDllInitialize @ 0x1408754D8 (MmCallDllInitialize.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14047F990 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     RtlFailFast2 @ 0x140535240 (RtlFailFast2.c)
 *     DifDllInitializeWrapper @ 0x1406C0234 (DifDllInitializeWrapper.c)
 *     MiFormDllRegistryPath @ 0x14087508C (MiFormDllRegistryPath.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x140C20820 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140C282F0 (VfDriverInitSuccess.c)
 */

__int64 __fastcall MiIssueDllInitializeCall(__int64 a1, __int64 (__fastcall *a2)(UNICODE_STRING *))
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned int inited; // esi
  int v7; // eax
  int v8; // ebx
  UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  result = MiFormDllRegistryPath(a1, &v9);
  if ( (int)result >= 0 )
  {
    RtlPcToFileHeader(*(_QWORD *)(a1 + 48), &v10);
    v5 = *(_QWORD *)(a1 + 48);
    if ( v10 != v5 )
      RtlFailFast2(0xAu);
    inited = VfDriverInitStarting();
    if ( (unsigned int)VfIsVerifierEnabled() )
      v7 = DifDllInitializeWrapper((__int64)&v9, v5, (__int64)a2);
    else
      v7 = a2(&v9);
    v8 = v7;
    ExFreePoolWithTag(v9.Buffer, 0);
    if ( v8 >= 0 && !stru_140E2D150.SchedulerApcFill3[8] )
      VfDriverInitSuccess(inited);
    return (unsigned int)v8;
  }
  return result;
}
