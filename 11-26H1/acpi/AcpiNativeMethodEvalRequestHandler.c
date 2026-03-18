/*
 * XREFs of AcpiNativeMethodEvalRequestHandler @ 0x14004D0D0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 *     AcpiCleanupObjDataArguments @ 0x140065D98 (AcpiCleanupObjDataArguments.c)
 *     AcpiDispatchNativeMethodEvalRequest @ 0x140065EB8 (AcpiDispatchNativeMethodEvalRequest.c)
 */

__int64 __fastcall AcpiNativeMethodEvalRequestHandler(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v6 = *(_QWORD *)(v2 + 56);
      if ( !v6 )
        return *(unsigned int *)(v2 + 64);
      if ( *(int *)(v2 + 64) < 0 )
        return *(unsigned int *)(v2 + 64);
      result = AcpiConvertMethodArgumentsToObjData(
                 v6,
                 *(_QWORD *)(v2 + 48),
                 *(unsigned int *)(v2 + 40),
                 *(_QWORD *)(a1 + 16));
      if ( (int)result >= 0 )
        return *(unsigned int *)(v2 + 64);
    }
    else if ( *(_DWORD *)a1 == 2 )
    {
      AcpiCleanupObjDataArguments(*(_QWORD *)(a1 + 16), 1LL);
      v4 = *(void **)(v2 + 32);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x4E706341u);
        *(_QWORD *)(v2 + 32) = 0LL;
      }
      v5 = *(void **)(v2 + 56);
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0x4E706341u);
        *(_QWORD *)(v2 + 56) = 0LL;
      }
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    result = AcpiSetupNativeMethodContext(a1, *(_QWORD *)(a1 + 8));
    if ( (int)result >= 0 )
      return AcpiDispatchNativeMethodEvalRequest(v2, *(_QWORD *)(a1 + 16));
    else
      *(_DWORD *)(v2 + 64) = result;
  }
  return result;
}
