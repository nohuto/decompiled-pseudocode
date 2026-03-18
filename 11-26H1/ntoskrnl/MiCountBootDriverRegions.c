/*
 * XREFs of MiCountBootDriverRegions @ 0x140CF9584
 * Callers:
 *     MiInitializeDynamicVa @ 0x140CF97E4 (MiInitializeDynamicVa.c)
 * Callees:
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 MiCountBootDriverRegions()
{
  _DWORD v1[10]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v2; // [rsp+48h] [rbp-A0h]
  __int64 v3; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v4)(__int64, __int64 *, int); // [rsp+C8h] [rbp-20h]
  __int64 *v5; // [rsp+D8h] [rbp-10h]
  __int64 v6; // [rsp+F0h] [rbp+8h] BYREF

  memset_0(v1, 0, 0xC0uLL);
  v5 = &v6;
  v2 = qword_140E37C80;
  v6 = 0LL;
  v3 = qword_140E37C88 - 1 + qword_140E37C80;
  v1[0] = 70400;
  v4 = MiCountBootDriverRegionPtes;
  MiWalkPageTables((__int64)v1);
  return v6;
}
