/*
 * XREFs of ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x140257214
 * Callers:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     QueueShutdownData @ 0x1401E4924 (QueueShutdownData.c)
 */

__int64 __fastcall xxxDestroyWindow_Prologue(struct tagTHREADINFO **a1, struct tagTHREADINFO *a2, int *a3, bool *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r9

  v8 = 0;
  v10 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  *a3 = v10;
  if ( a2 != a1[2] )
  {
    if ( !(_DWORD)v10 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5);
      return 0LL;
    }
    HMChangeOwnerThread(a1, a2);
  }
  if ( *a3 && (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 0x10000000) == 0 )
  {
    *a4 = 1;
    _InterlockedOr((volatile signed __int32 *)a2 + 132, 0x10000000u);
  }
  v11 = *((_DWORD *)a1 + 95);
  if ( (v11 & 0x400000) != 0 )
  {
    *((_DWORD *)a1 + 95) = v11 & 0xFFBFFFFF;
    QueueShutdownData((__int64)*a1, 0LL);
  }
  if ( *a3 || (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) != 0 )
    return 1LL;
  if ( (**(_DWORD **)(W32GetUserSessionState(v10, v9) + 19872) & 4) != 0 && a1 == *((struct tagTHREADINFO ***)a2 + 103) )
  {
    v12 = 0LL;
LABEL_20:
    xxxCallCtfHook(5LL, 4LL, (__int64)*a1, (__int128 *)v12);
    goto LABEL_21;
  }
  if ( IsTopLevelWindow((__int64)a1) )
  {
    v12 = 1LL;
    goto LABEL_20;
  }
  if ( (*((_DWORD *)a1 + 95) & 0x10000000) != 0 )
  {
    v12 = 0LL;
    if ( *((_DWORD *)a2 + 238) == 1 )
      goto LABEL_20;
  }
LABEL_21:
  if ( ((*((_BYTE *)a2 + 720) | *(_BYTE *)(**((_QWORD **)a2 + 63) + 16LL)) & 0x40) != 0 )
  {
    LOBYTE(v8) = (unsigned int)xxxCallHook(4LL, (__int64)*a1, 0LL, 5) == 0;
    return v8;
  }
  return 1LL;
}
