/*
 * XREFs of EtwTraceMemoryAcg @ 0x14047F4E4
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x140ABDF28 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceMemoryAcg(int a1)
{
  struct _LIST_ENTRY *Flink; // rcx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  if ( stru_140F03830.SavedApcState.ApcListHead[1].Flink )
  {
    Flink = stru_140F03830.SavedApcState.ApcListHead[1].Flink[2].Flink;
    if ( LODWORD(Flink[6].Flink) )
    {
      result = (NTSTATUS)Flink[7].Flink;
      if ( (result & 0x100) != 0 )
      {
        Blink = Flink[7].Blink;
        result = (unsigned __int16)Blink & 0x100;
        if ( (struct _LIST_ENTRY *)((unsigned __int16)Blink & 0x100) == Blink )
          goto LABEL_10;
      }
    }
    if ( HIWORD(stru_140F03830.SavedApcState.ApcListHead[1].Flink[6].Flink) )
    {
      v3 = stru_140F03830.SavedApcState.ApcListHead[1].Flink[2].Blink;
      if ( LODWORD(v3[6].Flink) )
      {
        result = (NTSTATUS)v3[7].Flink;
        if ( (result & 0x100) != 0 )
        {
          v4 = v3[7].Blink;
          result = (unsigned __int16)v4 & 0x100;
          if ( (struct _LIST_ENTRY *)((unsigned __int16)v4 & 0x100) == v4 )
          {
LABEL_10:
            UserData.Ptr = (ULONGLONG)&v7;
            *(_QWORD *)&UserData.Size = 4LL;
            return EtwWriteEx(
                     (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
                     &KERNEL_MEM_EVENT_ACG,
                     0LL,
                     1u,
                     0LL,
                     0LL,
                     1u,
                     &UserData);
          }
        }
      }
    }
  }
  return result;
}
