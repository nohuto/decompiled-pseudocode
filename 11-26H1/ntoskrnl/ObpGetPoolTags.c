/*
 * XREFs of ObpGetPoolTags @ 0x14077ED58
 * Callers:
 *     ObQueryRefTraceInformationEx @ 0x1407C72AC (ObQueryRefTraceInformationEx.c)
 *     ObQueryRefTraceInformation @ 0x140B618D0 (ObQueryRefTraceInformation.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 */

__int64 __fastcall ObpGetPoolTags(__int64 a1)
{
  int UserAffinity_high; // edx
  unsigned __int16 v3; // dx
  unsigned __int64 Memory; // rdx
  unsigned int v6; // eax
  struct _LIST_ENTRY *Flink; // r8
  _WORD *v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int16 Flink_low; // ax

  UserAffinity_high = HIDWORD(ObpStackTraceLock.UserAffinity);
  *(_OWORD *)a1 = 0LL;
  if ( UserAffinity_high )
  {
    v3 = 10 * UserAffinity_high;
    *(_WORD *)a1 = v3;
    v3 += 2;
    *(_WORD *)(a1 + 2) = v3;
    Memory = ObpTraceAllocateMemory(v3);
    if ( !Memory )
      return 3221225495LL;
    v6 = HIDWORD(ObpStackTraceLock.UserAffinity);
    *(_QWORD *)(a1 + 8) = Memory;
    if ( v6 )
    {
      Flink = ObpStackTraceLock.Timer.Header.WaitListHead.Flink;
      v8 = (_WORD *)(Memory + 4);
      v9 = v6;
      do
      {
        v10 = (unsigned int)Flink->Flink;
        Flink_low = (unsigned __int8)LODWORD(Flink->Flink);
        v8[2] = 59;
        *(v8 - 2) = Flink_low;
        Flink = (struct _LIST_ENTRY *)((char *)Flink + 4);
        *(v8 - 1) = BYTE1(v10);
        *v8 = BYTE2(v10);
        v8[1] = HIBYTE(v10);
        v8 += 5;
        --v9;
      }
      while ( v9 );
    }
  }
  return 0LL;
}
