/*
 * XREFs of RtlApplyFunctionOverrideFixupsToImage @ 0x14080F814
 * Callers:
 *     MiApplyFunctionOverrideToBootDriver @ 0x140D05BF4 (MiApplyFunctionOverrideToBootDriver.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052CEF4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlInitializeSystemOverrideDelta @ 0x14099C1D4 (RtlInitializeSystemOverrideDelta.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x1409A0274 (RtlDoesRequireFunctionOverrideFixups.c)
 *     RtlApplyFunctionOverrideFixups @ 0x1409A02CC (RtlApplyFunctionOverrideFixups.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10 (RtlCreateFunctionOverrideFixupInfo.c)
 */

__int64 __fastcall RtlApplyFunctionOverrideFixupsToImage(
        PVOID BaseOfImage,
        ULONG64 Size,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebp
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  int FunctionOverrideFixupInfo; // eax
  __int64 v11; // rdi
  unsigned int i; // ebx
  PIMAGE_NT_HEADERS v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = Size;
  v15 = 0LL;
  v16 = 0;
  v14 = 0LL;
  v8 = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &v14);
  if ( v8 >= 0 )
  {
    v9 = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, v6, &v16);
    v8 = v9;
    if ( v9 == -1073741637 )
      return 0;
    if ( v9 < 0 )
      return (unsigned int)v8;
    FunctionOverrideFixupInfo = RtlCreateFunctionOverrideFixupInfo(
                                  (_DWORD)BaseOfImage,
                                  v6,
                                  v16,
                                  (int)BaseOfImage + v16,
                                  v14->OptionalHeader.SizeOfHeaders,
                                  a3,
                                  (__int64)&v15,
                                  a5);
    v11 = v15;
    v8 = FunctionOverrideFixupInfo;
    if ( FunctionOverrideFixupInfo >= 0 )
    {
      if ( !v15 )
        return 0;
      RtlInitializeSystemOverrideDelta(v15, (_DWORD)BaseOfImage, v6, 0, 0);
      for ( i = *(_DWORD *)(v11 + 32); i <= *(_DWORD *)(v11 + 36); ++i )
      {
        if ( (unsigned __int8)RtlDoesRequireFunctionOverrideFixups(v11, i) )
          RtlApplyFunctionOverrideFixups(v11, i, (_DWORD)BaseOfImage + (i << 12), 0, 1);
      }
      v8 = 0;
    }
    if ( v11 )
      SddlpFree(v11);
  }
  return (unsigned int)v8;
}
