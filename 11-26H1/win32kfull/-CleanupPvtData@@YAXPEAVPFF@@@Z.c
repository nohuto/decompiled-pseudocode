/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x140329890
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall CleanupPvtData(struct PFF *a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned int CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 i; // rcx
  HSEMAPHORE v7; // [rsp+38h] [rbp+10h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  SEMOBJ<17>::SEMOBJ<17>(&v7, *(_QWORD *)(SessionState + 96) + 4864LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v5 = *((_QWORD *)a1 + 19);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8) & 4) != 0 && *(_DWORD *)(v5 + 12) == CurrentThreadId )
    {
      i = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *(_QWORD *)(v5 + 16);
LABEL_12:
      Win32FreePool((void *)i);
    }
    else
    {
      for ( i = *(_QWORD *)(v5 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_DWORD *)(i + 8) & 4) != 0 && *(_DWORD *)(i + 12) == CurrentThreadId )
        {
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(i + 16);
          goto LABEL_12;
        }
        v5 = i;
      }
    }
  }
  SEMOBJ<17>::vUnlock(&v7);
}
