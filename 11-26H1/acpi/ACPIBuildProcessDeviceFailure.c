/*
 * XREFs of ACPIBuildProcessDeviceFailure @ 0x1400582C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x140029560 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_LLqss @ 0x140035D8C (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  const char *v2; // rax
  int v3; // r10d
  char v5; // cl
  const char *v6; // r8
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-38h]

  v1 = Entry[5];
  v2 = byte_140075A82;
  v3 = *((_DWORD *)Entry + 12);
  v5 = 0;
  v6 = byte_140075A82;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      (__int64)v6,
      0x1Au,
      v9,
      *((_DWORD *)Entry + 8),
      v3,
      v5,
      v2,
      v6);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  return ACPIBuildProcessGenericComplete(Entry);
}
