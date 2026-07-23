/*
 * XREFs of VfPoolCommitCachingPluginEntry @ 0x140C49ED0
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     ExConfigurePoolCommitCaching @ 0x1406D6740 (ExConfigurePoolCommitCaching.c)
 */

__int64 VfPoolCommitCachingPluginEntry()
{
  __int64 v0; // rdx
  int v1; // ebx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v5[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v5[1] = VfPoolCommitCachingPluginUnload;
  v1 = DifRegisterPlugin(0LL, 0, 0x36u, (__int64)v5);
  if ( v1 >= 0 )
    ExConfigurePoolCommitCaching(1, v0, v2, v3);
  return (unsigned int)v1;
}
