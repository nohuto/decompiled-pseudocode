/*
 * XREFs of FsRtlGetIoAtEof @ 0x140204A60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 */

__int64 __fastcall FsRtlGetIoAtEof(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
    *a6 = 1;
    return 0LL;
  }
  else
  {
    v7 = a3 + a4;
    if ( a3 < 0 )
      v7 = a3;
    if ( *(_QWORD *)a1 )
    {
      if ( a5 )
      {
        *a6 = FsRtlpWaitForIoAtEof(a1, a2, v7);
        return 0LL;
      }
      else
      {
        return 3221225556LL;
      }
    }
    else
    {
      *(_QWORD *)a1 = CurrentThread;
      *(_WORD *)(a1 + 38) = 1;
      *a6 = 1;
      return 0LL;
    }
  }
}
