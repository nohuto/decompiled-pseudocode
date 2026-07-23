/*
 * XREFs of BgpConsoleDrawCursor @ 0x140C56278
 * Callers:
 *     BgpConsoleSetCursor @ 0x140C56890 (BgpConsoleSetCursor.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleDrawCursor()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int16 v3; // r11
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  unsigned __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v0 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 19);
  if ( v0 )
  {
    v5 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 4);
    v6 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 3);
    if ( v0 >= 0x22 )
    {
      v3 = 9604;
      if ( v0 >= 0x43 )
        v3 = 9608;
    }
    else
    {
      v3 = 95;
    }
  }
  else
  {
    v1 = *((unsigned int *)WheapPfaLock.SchedulerApc.NormalContext + 18);
    v2 = 25LL * *((unsigned int *)WheapPfaLock.SchedulerApc.NormalContext + 17);
    v3 = *((_WORD *)WheapPfaLock.SchedulerApc.NormalContext + 6 * v1 + 6 * v2 + 44);
    v4 = 3 * (v1 + v2);
    v5 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + v4 + 21);
    v6 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + v4 + 20);
  }
  return BgpDisplayCharacterEx(
           v3,
           *((__int64 **)WheapPfaLock.SchedulerApc.NormalContext + 5),
           *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 15)
         + *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 17)
         * *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 12),
           *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 16)
         + *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 18)
         * *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 13),
           v5,
           v6,
           &v10,
           &v9,
           v8);
}
