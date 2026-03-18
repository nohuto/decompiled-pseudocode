/*
 * XREFs of HUBMISC_CheckIfDeviceProgrammingWasLost @ 0x14002E54C
 * Callers:
 *     HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x140020640 (HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_CheckIfDeviceProgrammingWasLost(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 i; // rcx
  _QWORD *v7; // rcx

  if ( (*(_DWORD *)(a1 + 1644) & 0x20) != 0 )
  {
    v1 = 4089;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFDF);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFEFFFFF);
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      _InterlockedOr((volatile signed __int32 *)(v2 + 32), 0x80u);
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 16);
      v5 = *v4 - 8LL;
      if ( v4 != (_QWORD *)*v4 )
      {
        do
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 24); i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)(v5 + 80 * i + 48) == 4 )
              *(_DWORD *)(v5 + 80 * i + 48) = 6;
          }
          v7 = *(_QWORD **)(v5 + 8);
          v5 = (__int64)(v7 - 1);
        }
        while ( v4 != v7 );
      }
    }
  }
  else
  {
    return 4061;
  }
  return v1;
}
