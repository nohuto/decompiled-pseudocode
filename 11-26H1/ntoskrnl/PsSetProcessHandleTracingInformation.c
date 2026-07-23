/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x14077DFB0
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x140C3F250 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x1406CF91C (ExDisableHandleTracing.c)
 *     ExEnableHandleTracing @ 0x14077C508 (ExEnableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  unsigned int v8; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v8 = 0;
  if ( v4 )
  {
    if ( a2 )
      v8 = ExEnableHandleTracing(v4, *(_DWORD *)(a2 + 4), *(_DWORD *)a2);
    else
      ExDisableHandleTracing(v4, v5, v6, v7);
    ExReleaseRundownProtection_0(a1 + 61);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v8;
}
