/*
 * XREFs of sub_140022AC0 @ 0x140022AC0
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 * Callees:
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140022AC0(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  char *v5; // rdx
  union _SLIST_HEADER *v6; // rbx
  union _SLIST_HEADER *v7; // rsi
  PSLIST_ENTRY v8; // r14
  bool v9; // zf
  PSLIST_ENTRY v10; // rbp
  struct _SLIST_ENTRY *Next; // rax
  __int64 v12; // rbx
  PSLIST_ENTRY v13; // rbx
  __int64 v14; // rdx
  IRP *v15; // rcx

  if ( (*(_BYTE *)(a1 + 4660) & 1) != 0 )
  {
    v3 = *a2;
    if ( (unsigned int)v3 < dword_140168668 )
    {
      v4 = *((unsigned __int8 *)a2 + 2);
      if ( v4 < *((_DWORD *)qword_140168520 + v3) )
      {
        v5 = (char *)P + 128 * (unsigned __int64)(v4 + ((_DWORD)v3 << 6));
        _InterlockedExchange((volatile __int32 *)v5 + 24, 1);
        v6 = (union _SLIST_HEADER *)(v5 + 64);
        v7 = (union _SLIST_HEADER *)(v5 + 80);
        if ( FirstEntrySList((PSLIST_HEADER)v5 + 4) )
        {
          v8 = ExpInterlockedFlushSList(v6);
          while ( v8 )
          {
            v9 = (BYTE1(v8[-1].Next) & 1) == 0;
            v10 = v8 - 2;
            v8 = v8->Next;
            if ( !v9 )
            {
              v12 = *((_QWORD *)&v10[13].Next + 1);
              sub_140021110(v12, *((unsigned int *)&v10[46].Next + 3), 0LL);
              _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v12 + 4960) + 80LL));
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v12 + 4960) + 96LL));
              BYTE1(v10[1].Next) &= ~1u;
            }
            Next = v10[41].Next;
            if ( Next == (struct _SLIST_ENTRY *)sub_140022EC0 )
              sub_140022EC0(v10);
            else
              ((void (__fastcall *)(PSLIST_ENTRY))Next)(v10);
          }
        }
        if ( FirstEntrySList(v7) )
        {
          v13 = ExpInterlockedFlushSList(v7);
          while ( v13 )
          {
            v14 = *((_QWORD *)&v13[3].Next + 1);
            v15 = (IRP *)&v13[-8];
            v13 = v13->Next;
            sub_140010CA0(v15, *(_DWORD *)(v14 + 24));
          }
        }
        _InterlockedExchange(
          (volatile __int32 *)P + 2048 * (unsigned __int64)*a2 + 32 * *((unsigned __int8 *)a2 + 2) + 24,
          0);
      }
    }
  }
}
