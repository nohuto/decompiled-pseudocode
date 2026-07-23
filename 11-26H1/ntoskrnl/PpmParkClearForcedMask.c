/*
 * XREFs of PpmParkClearForcedMask @ 0x1407E1A18
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B5534 (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x140AEBCBC (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v4; // dx
  unsigned int v5; // ebx
  unsigned int v6; // r11d
  char v7; // r10
  unsigned __int16 i; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r8d

  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  v4 = *a1;
  if ( *a1 < 0x20u )
  {
    v6 = PpmParkNumNodes;
    v5 = 0;
    v7 = 0;
    for ( i = 0; i < v6; ++i )
    {
      v9 = PpmParkNodes + 1264LL * i;
      if ( v4 < *(_WORD *)(v9 + 16) )
      {
        if ( *(_QWORD *)(v9 + 8LL * v4 + 24) )
        {
          v10 = *(_BYTE *)(v9 + 1152);
          if ( (v10 & 1) != 0 )
          {
            v7 = 1;
            *(_BYTE *)(v9 + 1152) = v10 & 0xFE;
            v4 = *a1;
          }
        }
      }
    }
    if ( v7 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable(v11);
      PpmCheckApplyParkConstraints();
      PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v12, v13);
    }
  }
  else
  {
    v5 = -1073741811;
  }
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return v5;
}
