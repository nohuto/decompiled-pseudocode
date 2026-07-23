/*
 * XREFs of MiCommitPageTablesSetBits @ 0x140998A2C
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 * Callees:
 *     RtlAreBitsClearEx @ 0x14041EDB0 (RtlAreBitsClearEx.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 */

char __fastcall MiCommitPageTablesSetBits(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  _KPROCESS *Process; // r10
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  CurrentThread = KeGetCurrentThread();
  v5 = (struct _KTHREAD *)*(unsigned int *)(a1 + 4);
  v6 = a2 >> 21;
  v8 = a3 >> 21;
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  v10 = (__int64)&Process[2].ActiveProcessors[3].StaticBitmap[12];
  v16 = v10;
  if ( (int)v5 > 0 )
  {
    CurrentThread = v5;
    do
    {
      v6 >>= 9;
      v8 >>= 9;
      CurrentThread = (struct _KTHREAD *)((char *)CurrentThread - 1);
    }
    while ( CurrentThread );
  }
  while ( (int)v5 < 3 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = v6;
    v14 = v10 + 16LL * (unsigned int)(2 - (_DWORD)v5);
    if ( v6 <= v8 )
    {
      do
      {
        LOBYTE(CurrentThread) = _bittest64(*(const signed __int64 **)(v14 + 624), v13);
        if ( !(_BYTE)CurrentThread )
        {
          ++v11;
          if ( a4 )
          {
            LOBYTE(CurrentThread) = v13 & 7;
            *(_BYTE *)((v13 >> 3) + *(_QWORD *)(v14 + 624)) |= 1 << (v13 & 7);
          }
          else
          {
            *(_DWORD *)a1 = 1;
            LODWORD(CurrentThread) = MmGetMinWsPagePriority();
            if ( !(_DWORD)CurrentThread && (v13 == v6 || (v13 & 7) == 0) )
            {
              LOBYTE(CurrentThread) = RtlAreBitsClearEx(
                                        (unsigned __int64 *)(v14 + 616),
                                        v13 & 0xFFFFFFFFFFFFFFF8uLL,
                                        8uLL);
              a4 = v17;
              if ( (_BYTE)CurrentThread )
                ++v12;
            }
          }
        }
        ++v13;
      }
      while ( v13 <= v8 );
      v10 = v16;
      if ( v11 )
        goto LABEL_10;
    }
    CurrentThread = *(struct _KTHREAD **)(v10 + 704);
    if ( CurrentThread )
LABEL_10:
      *(_QWORD *)(a1 + 8) += v11;
    *(_QWORD *)(a1 + 16) += v12;
    v6 >>= 9;
    v8 >>= 9;
    LODWORD(v5) = (_DWORD)v5 + 1;
  }
  return (char)CurrentThread;
}
