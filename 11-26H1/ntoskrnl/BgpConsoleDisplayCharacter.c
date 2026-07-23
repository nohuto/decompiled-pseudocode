/*
 * XREFs of BgpConsoleDisplayCharacter @ 0x140C55E00
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 **NormalContext; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v16[3]; // [rsp+54h] [rbp-24h] BYREF

  v6 = a3;
  v7 = a2;
  BgpFwAcquireLock();
  NormalContext = (__int64 **)WheapPfaLock.SchedulerApc.NormalContext;
  if ( WheapPfaLock.SchedulerApc.NormalContext )
  {
    if ( (*((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 2) & 0x10000) != 0 )
    {
      AnFwFadeCompletion();
      NormalContext = (__int64 **)WheapPfaLock.SchedulerApc.NormalContext;
      *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 2) &= ~0x10000u;
    }
    v11 = v6 + 25 * v7;
    v12 = 3 * v11;
    if ( *((_WORD *)NormalContext + 6 * v11 + 44) == a1
      && *((_DWORD *)NormalContext + 3 * v11 + 20) == a4
      && *((_DWORD *)NormalContext + 3 * v11 + 21) == a5 )
    {
      v10 = 0;
    }
    else
    {
      v10 = BgpDisplayCharacterEx(
              a1,
              NormalContext[5],
              *((_DWORD *)NormalContext + 15) + *((_DWORD *)NormalContext + 12) * (int)v7,
              *((_DWORD *)NormalContext + 16) + *((_DWORD *)NormalContext + 13) * (int)v6,
              a5,
              a4,
              v16,
              &v15,
              v14);
      if ( v10 >= 0 )
      {
        *((_WORD *)NormalContext + 2 * v12 + 44) = a1;
        *((_DWORD *)NormalContext + v12 + 20) = a4;
        *((_DWORD *)NormalContext + v12 + 21) = a5;
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v10;
}
