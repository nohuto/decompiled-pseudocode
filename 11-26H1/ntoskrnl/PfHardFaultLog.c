/*
 * XREFs of PfHardFaultLog @ 0x140390674
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x14038E9A8 (EtwTraceSiloTimedEvent.c)
 */

void __fastcall PfHardFaultLog(_QWORD *a1, unsigned int a2)
{
  _KPROCESS *Process; // rbp
  __int64 Blink; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // dx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  size_t Size; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-50h]
  int v17[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-18h]

  Process = KeGetCurrentThread()->Process;
  if ( !*a1 && !a1[1] )
    goto LABEL_3;
  v9 = a2;
  if ( !a2 )
    goto LABEL_9;
  v9 = a2 - 1;
  if ( a2 == 1 )
  {
    v10 = 626;
    goto LABEL_10;
  }
  if ( a2 == 2 )
    v10 = 627;
  else
LABEL_9:
    v10 = 544;
LABEL_10:
  EtwTraceSiloTimedEvent(Process[3].ActiveGroupsMask.Masks[0], v10, v9, (__int64)(a1 + 4), Size, v16, (__int64)a1);
LABEL_3:
  Blink = (__int64)Process[4].ThreadListHead.Blink;
  _m_prefetchw((const void *)(Blink + 40));
  v6 = *(_QWORD *)(Blink + 40);
  while ( (unsigned __int64)(v6 + 1) > 1 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(Blink + 40), v6 + 1, v6);
    if ( v7 == v6 )
    {
      v8 = *(_QWORD *)(Blink + 32);
      if ( Blink )
      {
        if ( v8 && *(_DWORD *)(v8 + 608) < *(_DWORD *)(v8 + 612) && a1[8] && a2 != 2 )
        {
          LODWORD(Size) = 40;
          v11 = MEMORY[0xFFFFF78000000320];
          v12 = MEMORY[0xFFFFF78000000320] - a1[8];
          a1[8] = v12;
          v13 = (__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink;
          v17[0] = 2 * v12;
          v17[1] = xmmword_140F13528;
          v20 = a1[6];
          v18 = (unsigned int)(a1[4] >> 9);
          v14 = a1[5];
          v21 = v13 & 0x1FFFFFFFFFFFFFFFLL;
          v19 = v14;
          PfLogEvent(v8, 29, v11, v17, Size);
        }
        PsDereferencePartition(Blink);
      }
      return;
    }
  }
  if ( v6 )
    __fastfail(0xEu);
}
