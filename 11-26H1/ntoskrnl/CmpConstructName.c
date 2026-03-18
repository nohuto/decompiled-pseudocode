/*
 * XREFs of CmpConstructName @ 0x1408C53A0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     CmpTraceHiveSaveStart @ 0x140776B8C (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14085905C (CmpIsHiveAlreadyLoaded.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14085B480 (CmpReportAuditVirtualizationEvent.c)
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmRealKCBToVirtualPath @ 0x1408B1418 (CmRealKCBToVirtualPath.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpEtwDumpKcb @ 0x14097C780 (CmpEtwDumpKcb.c)
 *     CmVirtualKCBToRealPath @ 0x140AF49A0 (CmVirtualKCBToRealPath.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     CmpDumpKeyBodyList @ 0x140B22594 (CmpDumpKeyBodyList.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C182C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408D8510 (CmpConstructNameFromKeyNodes.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v4; // al
  int v5; // esi
  char v6; // r14
  struct _PRIVILEGE_SET *Pool; // rbx
  __int64 v8; // rax
  __int16 j; // ax
  PPRIVILEGE_SET v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v2 = 0LL;
  WORD1(v16) = -1;
  v18 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v4 = CmpAcquireShutdownRundown(a1, a2);
  v5 = *(__int16 *)(a1 + 66);
  v6 = v4;
  Pool = 0LL;
  if ( v5 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
  {
    LOWORD(v16) = v5;
    Privileges[1] = Pool;
    v8 = *(__int16 *)(a1 + 66);
    WORD1(v16) = v8;
    if ( (_WORD)v8 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v8) = v8 - 1 )
      {
        v15 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v8 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v8 - 2) = v15;
        }
        else
        {
          Privileges[(__int16)v8 - 1] = v15;
          Pool = Privileges[1];
        }
        i = *(_QWORD *)(i + 24);
      }
    }
    else
    {
      Privileges[v8 - 1] = (PPRIVILEGE_SET)a1;
      Pool = Privileges[1];
    }
    if ( v6 && (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
    {
      for ( j = WORD1(v16); j >= 0; --j )
      {
        v10 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Pool + j - 2) : Privileges[j - 1];
        if ( HIWORD(v10[3].Control) && BYTE1(v10[3].Control) == 1 )
          break;
        if ( v10[2].PrivilegeCount != -1 )
        {
          if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
          {
            v11 = CmpConstructNameFromKeyNodes(&v16, &v18);
            Pool = Privileges[1];
            goto LABEL_15;
          }
          break;
        }
      }
    }
    v11 = CmpConstructNameFromKcbNameBlocks(a1, &v18);
LABEL_15:
    if ( v11 >= 0 )
      v2 = v18;
  }
  else
  {
    Pool = Privileges[1];
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v6 )
    CmpReleaseShutdownRundown(v12);
  return v2;
}
