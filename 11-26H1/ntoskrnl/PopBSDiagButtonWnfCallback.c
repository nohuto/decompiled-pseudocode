/*
 * XREFs of PopBSDiagButtonWnfCallback @ 0x140610B50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBSDiagCaptureLiveDump @ 0x140610C1C (PopBSDiagCaptureLiveDump.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopBSDiagButtonWnfCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  int v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+24h] [rbp-34h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]

  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( *a2 == WNF_PO_POWER_BUTTON_STATE )
  {
    v10 = 24;
    if ( (int)ExQueryWnfStateData(a1, &v11, &v12, &v10) >= 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        if ( ((unsigned int)v12 & 0xFFFFFFFE) < 0x1F40 )
          return 0LL;
        PopAcquireRwLockExclusive((unsigned __int64 *)(a6 + 56), v6, v7, v8);
        if ( !*(_BYTE *)(a6 + 72) )
        {
          PopBSDiagCaptureLiveDump(a6, &v12);
          *(_BYTE *)(a6 + 72) = 1;
          return 0LL;
        }
      }
      else
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)(a6 + 56), v6, v7, v8);
        *(_BYTE *)(a6 + 72) = 0;
      }
      PopReleaseRwLock((struct _KTHREAD *)(a6 + 56));
    }
  }
  return 0LL;
}
