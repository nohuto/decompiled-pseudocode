/*
 * XREFs of EtwpDisableTraceProviders @ 0x1800E7DEC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x180066C2C (EtwpStopLoggerInstance.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x18003ADA0 (EtwpGetNextRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  _RTL_SRWLOCK *v2; // rcx
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  __int64 i; // rcx
  char v6; // di
  __int64 j; // rcx
  __int128 v8; // xmm0
  _DWORD v9[10]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v10; // [rsp+48h] [rbp-60h]
  int v11; // [rsp+68h] [rbp-40h]
  __int16 v12; // [rsp+6Eh] [rbp-3Ah]
  int v13; // [rsp+90h] [rbp-18h]

  memset_thunk_772440563353939046(v9, 0, 0x78uLL);
  v2 = 0LL;
  v9[0] = 3;
  v9[1] = 120;
  v9[6] = -1;
  v11 = 0;
  v13 = 0;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v2);
    v4 = result;
    if ( !result )
      return result;
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(result + 24 * i + 140) && *(_BYTE *)(result + 24 * i + 142) == (_BYTE)a1 )
      {
        if ( result + 8 * (3 * i + 15) )
        {
          v6 = 0;
          if ( *(_DWORD *)(result + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(result + 64));
            v6 = 1;
            *(_DWORD *)(v4 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
          {
            if ( *(_BYTE *)(v4 + 24 * j + 140) && *(_BYTE *)(v4 + 24 * j + 142) == (_BYTE)a1 )
            {
              if ( v4 + 8 * (3 * j + 15) )
              {
                v8 = *(_OWORD *)(v4 + 32);
                v11 = 0;
                v12 = a1 | 0x8000;
                v10 = v8;
                EtwpUpdateEnableInfoAndCallback(v4, (__int64)v9);
              }
              break;
            }
          }
          if ( v6 )
          {
            *(_DWORD *)(v4 + 80) = 0;
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 64));
          }
        }
        break;
      }
    }
    v2 = (_RTL_SRWLOCK *)v4;
  }
}
