/*
 * XREFs of PsDeleteVsmEnclave @ 0x140804538
 * Callers:
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferenceVsmEnclave @ 0x140AB8F4C (PsDereferenceVsmEnclave.c)
 */

__int64 __fastcall PsDeleteVsmEnclave(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v6; // rbx
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  __int64 v10; // r10
  _QWORD *i; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h]

  if ( !*((_BYTE *)a2 + 76) )
  {
    v6 = (unsigned __int64 *)(a1 + 1624);
    v7 = (AutoBoost *)KeAbPreAcquire(a1 + 1624, 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    v10 = *(_QWORD *)(a1 + 1608);
    v13 = a2[1] & (-1LL << (*(_DWORD *)(v10 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(v10 + 8)
                       + 8LL
                       * (((*(_DWORD *)(v10 + 4) >> 5) - 1) & (HIBYTE(v13)
                                                             + 37
                                                             * (BYTE6(v13)
                                                              + 37
                                                              * (BYTE5(v13)
                                                               + 37
                                                               * (BYTE4(v13)
                                                                + 37
                                                                * (BYTE3(v13)
                                                                 + 374026047
                                                                 + 37
                                                                 * (BYTE2(v13)
                                                                  + 37
                                                                  * (BYTE1(v13) + 37
                                                                                * (unsigned int)(unsigned __int8)v13)))))))));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)v10;
        *a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
  }
  return PsDereferenceVsmEnclave(a2);
}
