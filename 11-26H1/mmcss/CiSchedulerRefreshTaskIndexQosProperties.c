/*
 * XREFs of CiSchedulerRefreshTaskIndexQosProperties @ 0x140002DE0
 * Callers:
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 *     CiSchedulerProcessDeadlines @ 0x140002280 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1400025B0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerSetMultimediaMode @ 0x140002700 (CiSchedulerSetMultimediaMode.c)
 *     CiSchedulerTaskIndexYield @ 0x1400028B0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSleep @ 0x1400031C0 (CiSchedulerSleep.c)
 *     CiTaskIndexDereference @ 0x140003BB0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x140003000 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogThreadBuffering @ 0x140003050 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSchedulerRefreshTaskIndexQosProperties(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // esi
  unsigned int v5; // edi
  char v6; // r14
  _QWORD *v7; // rsi

  result = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 184) & 4;
  v4 = *(_DWORD *)(a1 + 192);
  if ( (result & 1) != 0 )
  {
    if ( (result & 0x20) != 0 )
    {
      v5 = 2;
      goto LABEL_5;
    }
    if ( (result & 0x10) == 0 && (result & 2) != 0 )
    {
      v5 = 1;
      v6 = 1;
      goto LABEL_6;
    }
  }
  v5 = 3;
LABEL_5:
  v6 = 0;
LABEL_6:
  if ( !v3 && v6 )
  {
    ++CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = result | 4;
    result = CiSystemUpdateMediaBufferingState();
  }
  if ( v5 != v4 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    for ( *(_DWORD *)(a1 + 192) = v5; v7 != (_QWORD *)(a1 + 32); v7 = (_QWORD *)*v7 )
    {
      if ( byte_14000A0F0 )
        CiLogThreadBuffering(v7 - 10, v5 == 1);
      result = KeUpdateThreadTag(v7[2], v5);
    }
  }
  if ( v3 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 184) &= ~4u;
      --CiTotalTasksBuffering;
      return CiSystemUpdateMediaBufferingState();
    }
  }
  return result;
}
