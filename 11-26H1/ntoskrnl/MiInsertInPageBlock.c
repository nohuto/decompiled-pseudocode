/*
 * XREFs of MiInsertInPageBlock @ 0x14031C624
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1406F76AC (MiInitializePageFaultResources.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertInPageBlock(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  union _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~*((_DWORD *)&ListEntry[11].Next + 3) >> 8) & 1;
  if ( (unsigned __int64)ListEntry >= *((_QWORD *)&MiState + v2 + 4933)
    && (unsigned __int64)ListEntry < *((_QWORD *)&MiState + v2 + 4935) )
  {
    v3 = (union _SLIST_HEADER *)((char *)&unk_140E35F80 + 16 * v2);
    goto LABEL_5;
  }
  if ( (unsigned int)*((_WORD *)&MiState + 8 * v2 + 19696) < *((unsigned __int8 *)&MiState + v2 + 39456) )
  {
    v3 = (union _SLIST_HEADER *)(&MiState + 4 * v2 + 9848);
LABEL_5:
    RtlpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  return 0LL;
}
