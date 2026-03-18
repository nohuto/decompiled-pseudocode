/*
 * XREFs of Simulator_NotifyTablesAreLoaded @ 0x1400DC53C
 * Callers:
 *     ACPIInitializeDDBs @ 0x1400D7B14 (ACPIInitializeDDBs.c)
 * Callees:
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     Simulator_AllocAndInitTestData @ 0x14005168C (Simulator_AllocAndInitTestData.c)
 *     Simulator_TestNotify @ 0x14006CD54 (Simulator_TestNotify.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 Simulator_NotifyTablesAreLoaded()
{
  __int64 v0; // rbx
  __int64 *v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rax
  _DWORD *inited; // rax
  void *v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( !(unsigned int)CreateNameSpaceObject((_QWORD *)gpheapGlobal, (__int64)"MSLT", 0LL, 0LL, &v9, 0) )
  {
    v0 = v9;
    if ( v9 )
    {
      *(_WORD *)(v9 + 66) = 8;
      *(_DWORD *)(v0 + 88) = 222;
      v1 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, 0xDEu);
      *(_QWORD *)(v0 + 96) = v1;
      if ( v1 )
      {
        memset(v1, 0, *(unsigned int *)(v0 + 88));
        *(_BYTE *)(*(_QWORD *)(v0 + 96) + 193LL) |= 1u;
        v2 = *(_QWORD *)(v0 + 96);
        *(_DWORD *)(v2 + 194) = 220158884;
        *(_DWORD *)(v2 + 198) = 1414351187;
        *(_DWORD *)(v2 + 202) = 1397558528;
        *(_DWORD *)(v2 + 206) = 1744852038;
        *(_DWORD *)(v2 + 210) = 218127373;
        *(_WORD *)(v2 + 214) = 2560;
        *(_BYTE *)(v2 + 216) = 0;
      }
    }
  }
  v9 = 0LL;
  if ( !(unsigned int)CreateNameSpaceObject((_QWORD *)gpheapGlobal, (__int64)"MSUT", 0LL, 0LL, &v9, 0) )
  {
    v3 = v9;
    if ( v9 )
    {
      *(_WORD *)(v9 + 66) = 8;
      *(_DWORD *)(v3 + 88) = 202;
      v4 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, 0xCAu);
      *(_QWORD *)(v3 + 96) = v4;
      if ( v4 )
      {
        memset(v4, 0, *(unsigned int *)(v3 + 88));
        *(_BYTE *)(*(_QWORD *)(v3 + 96) + 193LL) |= 1u;
        v5 = *(_QWORD *)(v3 + 96);
        *(_WORD *)(v5 + 194) = 10843;
        *(_BYTE *)(v5 + 196) = 104;
      }
    }
  }
  inited = Simulator_AllocAndInitTestData();
  v7 = inited;
  if ( !inited )
    return 3221225626LL;
  *inited = 1;
  inited[1] = 5;
  inited[2] = 1;
  *((_QWORD *)inited + 2) = gpnsNameSpaceRoot;
  Simulator_TestNotify(inited);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
