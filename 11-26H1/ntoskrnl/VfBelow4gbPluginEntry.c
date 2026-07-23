/*
 * XREFs of VfBelow4gbPluginEntry @ 0x14064B390
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 VfBelow4gbPluginEntry()
{
  __int64 v1; // [rsp+20h] [rbp-E0h] BYREF
  int v2; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v3)(); // [rsp+30h] [rbp-D0h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  const char *v5; // [rsp+40h] [rbp-C0h]
  int v6; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v7)(); // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  const char *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  const char *v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v15)(); // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  const char *v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v19)(); // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  const char *v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  const char *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v27)(); // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]

  v2 = 238;
  v4 = 0LL;
  v3 = Below4gb_MmAllocateContiguousMemory_Entry;
  v5 = "MmAllocateContiguousMemorySpecifyCache";
  v7 = Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry;
  v9 = "MmAllocateContiguousMemorySpecifyCacheNode";
  v11 = Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry;
  v13 = "MmAllocateContiguousNodeMemory";
  v15 = Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry;
  v17 = "MmAllocatePagesForMdl";
  v19 = Below4gb_MmAllocatePagesForMdl_Entry;
  v21 = "MmAllocatePagesForMdlEx";
  v23 = Below4gb_MmAllocatePagesForMdlEx_Entry;
  v25 = "MmAllocateNodePagesForMdlEx";
  v27 = Below4gb_MmAllocateNodePagesForMdlEx_Entry;
  v6 = 236;
  v8 = 0LL;
  v10 = 235;
  v12 = 0LL;
  v14 = 234;
  v16 = 0LL;
  v18 = 230;
  v20 = 0LL;
  v22 = 229;
  v24 = 0LL;
  v26 = 232;
  v28 = 0LL;
  return DifRegisterPlugin(&v1, 7LL, 26LL, 0LL, "MmAllocateContiguousMemory");
}
