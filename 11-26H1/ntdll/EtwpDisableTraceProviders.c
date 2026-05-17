/*
 * XREFs of EtwpDisableTraceProviders @ 0x1800E8BDC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x18007840C (EtwpStopLoggerInstance.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x180050820 (EtwpGetNextRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  __int64 i; // rcx
  char v7; // di
  __int64 j; // rcx
  __int128 v9; // xmm0
  _DWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v11; // [rsp+48h] [rbp-60h]
  int v12; // [rsp+68h] [rbp-40h]
  __int16 v13; // [rsp+6Eh] [rbp-3Ah]
  int v14; // [rsp+90h] [rbp-18h]

  memset_thunk_772440563353939046(v10, 0, 0x78uLL);
  v3 = 0LL;
  v10[0] = 3;
  v10[1] = 120;
  v10[6] = -1;
  v12 = 0;
  v14 = 0;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v3, v2);
    v5 = result;
    if ( !result )
      return result;
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      v2 = 3 * i;
      if ( *(_BYTE *)(result + 24 * i + 140) && *(_BYTE *)(result + 24 * i + 142) == (_BYTE)a1 )
      {
        if ( result + 8 * (v2 + 15) )
        {
          v7 = 0;
          if ( *(_DWORD *)(result + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int64 *)(result + 64), v2);
            v7 = 1;
            *(_DWORD *)(v5 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
          {
            v2 = 3 * j;
            if ( *(_BYTE *)(v5 + 24 * j + 140) && *(_BYTE *)(v5 + 24 * j + 142) == (_BYTE)a1 )
            {
              if ( v5 + 8 * (v2 + 15) )
              {
                v9 = *(_OWORD *)(v5 + 32);
                v12 = 0;
                v13 = a1 | 0x8000;
                v11 = v9;
                EtwpUpdateEnableInfoAndCallback(v5, (__int64)v10);
              }
              break;
            }
          }
          if ( v7 )
          {
            *(_DWORD *)(v5 + 80) = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 64));
          }
        }
        break;
      }
    }
    v3 = v5;
  }
}
