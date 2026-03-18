/*
 * XREFs of ACPIBuildProcessThermalZoneFailure @ 0x140058FA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x140029560 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_LLqss @ 0x140035D8C (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  const char *v2; // rax
  __int64 v3; // r8
  const char *v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  int v9; // [rsp+20h] [rbp-38h]

  v1 = Entry[5];
  v2 = byte_140075A82;
  v3 = 0LL;
  v5 = byte_140075A82;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v3,
      0x48u,
      v9,
      *((_DWORD *)Entry + 8),
      0,
      v3,
      v2,
      v5);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  if ( *(_QWORD *)(v1 + 616) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFEBFFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 616), 0);
    *(_QWORD *)(v1 + 616) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 608) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFF5FFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 608), 0);
    *(_QWORD *)(v1 + 608) = 0LL;
  }
  v7 = *(void **)(v1 + 200);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  return ACPIBuildProcessGenericComplete(Entry);
}
