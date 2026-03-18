/*
 * XREFs of ObpPushRefDerefInfoNoLock @ 0x1407702BC
 * Callers:
 *     ObpPushRefDerefInfo @ 0x1407701CC (ObpPushRefDerefInfo.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 * Callees:
 *     RtlStackDbStackAdd @ 0x140443078 (RtlStackDbStackAdd.c)
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ObpObjectRefInfoAddTrace @ 0x1407C4E94 (ObpObjectRefInfoAddTrace.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB6310 (ObpObjectRefsByStackAddTrace.c)
 */

__int64 __fastcall ObpPushRefDerefInfoNoLock(__int64 a1, unsigned __int16 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  _QWORD *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rbx

  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0xF3) != 0 )
  {
    v9 = RtlStackDbStackAdd(a1, (struct _KLOCK_ENTRIES *)a4, *(_DWORD *)(a4 + 128));
    if ( (ObpTraceFlags & 0x80u) != 0 )
      ObpObjectRefsByStackAddTrace(a1, a2, a5, v9);
    else
      ObpObjectRefInfoAddTrace(a1, a3, a2, a5, (__int64)v9);
    v10 = 10 * (LODWORD(stru_140F12D20.Padding[4]) + 10);
    if ( v10 > 0xC350 )
      v10 = 50000;
    result = LOWORD(ObpWorkItemFreeList.Alignment);
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < v10 )
    {
      v11 = 100LL;
      do
      {
        result = ObpTraceAllocateMemory(192LL);
        if ( result )
          result = (__int64)RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, (PSLIST_ENTRY)result);
        --v11;
      }
      while ( v11 );
    }
  }
  return result;
}
