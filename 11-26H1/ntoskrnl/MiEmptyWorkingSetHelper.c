/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x14029B748
 * Callers:
 *     MiUpdateOldPteWorker @ 0x14029B8EC (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiWalkVaCheckCommon @ 0x14035F710 (MiWalkVaCheckCommon.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  BOOL v12; // r9d
  ULONG *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v7 = 0xFFFFF68000000000uLL;
  PteShadow = *(_QWORD *)a2;
  v10 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  v16 = PteShadow;
  v11 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v12 = v10 < v7 || v10 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v4, a2, 48 * (unsigned int)(PteShadow >> 12), v12, (__int64)&v16)
    || (unsigned __int16)*(_DWORD *)(v11 + 32) > 1u && (*(_DWORD *)(v4 + 184) & 0xF) != 0 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(v4 + 184) & 0xF) == 1 )
    v13 = &MiSystemPartition;
  else
    v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 174));
  if ( v13[4539] )
    MI_WSLE_LOG_ACCESS(v4, a2);
  MiInsertTbFlushEntry(a3, v10, 1LL);
  v14 = *(unsigned int *)(a3 + 12);
  if ( *(_DWORD *)(a3 + 28) == (_DWORD)v14 )
    MiFreeWsleList(v4, v14, a3, a4);
  return 1LL;
}
