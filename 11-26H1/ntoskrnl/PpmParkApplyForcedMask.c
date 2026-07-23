/*
 * XREFs of PpmParkApplyForcedMask @ 0x1407E1804
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B5534 (PpmCheckApplyParkConstraints.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmParkParkingAvailable @ 0x140AEBCBC (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v10; // rcx
  unsigned int v11; // r15d
  char v12; // cl
  unsigned __int16 v13; // si
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v22[33]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v24[33]; // [rsp+150h] [rbp+48h] BYREF

  memset_0(v22, 0, 0x100uLL);
  v4 = 0;
  v20 = 0LL;
  memset_0(v24, 0, 0x100uLL);
  v5 = *((unsigned __int16 *)a1 + 4);
  v6 = *a1;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v7, v8);
  if ( (unsigned __int16)v5 > 0x20u || *((_WORD *)a1 + 5) || *((_WORD *)a1 + 6) || *((_WORD *)a1 + 7) )
    goto LABEL_7;
  if ( a2 )
  {
    if ( (~v6 & *a2) != 0 )
      goto LABEL_7;
  }
  else
  {
    a2 = &v20;
  }
  v21 = 2097153LL;
  memset_0(v22, 0, 0x100uLL);
  v23 = 2097153LL;
  memset_0(v24, 0, 0x100uLL);
  if ( (unsigned __int16)v21 <= (unsigned __int16)v5 )
  {
    if ( WORD1(v21) <= (unsigned __int16)v5 )
      goto LABEL_14;
    LOWORD(v21) = v5 + 1;
  }
  v22[v5] |= v6;
LABEL_14:
  v10 = *a2;
  if ( (unsigned __int16)v23 > (unsigned __int16)v5 )
  {
LABEL_17:
    v24[v5] |= v10;
    goto LABEL_18;
  }
  if ( WORD1(v23) > (unsigned __int16)v5 )
  {
    LOWORD(v23) = v5 + 1;
    goto LABEL_17;
  }
LABEL_18:
  v11 = PpmParkNumNodes;
  v12 = 0;
  v13 = 0;
  if ( PpmParkNumNodes )
  {
    do
    {
      v14 = PpmParkNodes;
      v15 = 1264LL * v13;
      v16 = v15 + PpmParkNodes;
      if ( (unsigned __int16)v5 < *(_WORD *)(v15 + PpmParkNodes + 16) && *(_QWORD *)(v16 + 8 * v5 + 24) )
      {
        RtlAndAffinityEx((unsigned __int16 *)(v16 + 16), (unsigned __int16 *)&v21, v15 + PpmParkNodes + 280);
        RtlAndAffinityEx((unsigned __int16 *)(v16 + 16), (unsigned __int16 *)&v23, v15 + v14 + 808);
        v12 = 1;
        *(_BYTE *)(v15 + v14 + 1152) |= 1u;
      }
      ++v13;
    }
    while ( v13 < v11 );
    if ( v12 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable(v17);
      PpmCheckApplyParkConstraints();
      PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v18, v19);
      goto LABEL_8;
    }
  }
LABEL_7:
  v4 = -1073741811;
LABEL_8:
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return v4;
}
