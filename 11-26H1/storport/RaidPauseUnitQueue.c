/*
 * XREFs of RaidPauseUnitQueue @ 0x1400292F0
 * Callers:
 *     StorPortPauseDevice @ 0x140028C40 (StorPortPauseDevice.c)
 *     RaUnitRequestPowerUp @ 0x140034934 (RaUnitRequestPowerUp.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUpForPLDR @ 0x14007F2EC (RaUnitRequestPowerUpForPLDR.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidPauseDeviceQueue @ 0x140029448 (RaidPauseDeviceQueue.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPauseUnitQueue(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  int v4; // eax
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  KIRQL v14; // al
  __int64 v15; // rcx
  KIRQL v16; // di
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int16 v21; // cx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h]
  __int64 v27; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  RaidPauseDeviceQueue(a1 + 720);
  v24 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    v15 = *(_QWORD *)(a1 + 32);
    v16 = v14;
    ++*(_DWORD *)(v15 + 84);
    DWORD2(v24) = 2;
    if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(
                         v15,
                         v17,
                         v18,
                         v19,
                         0x3800000038LL,
                         *((_QWORD *)&v24 + 1),
                         v25) )
    {
      v20 = *(_QWORD *)(a1 + 24);
      WORD4(v26) = 1;
      HIDWORD(v26) = 4;
      v21 = *(_WORD *)(v20 + 56);
      LOWORD(v27) = *(_WORD *)(a1 + 104);
      BYTE2(v27) = *(_BYTE *)(a1 + 106);
      WORD5(v26) = v21;
    }
    v22 = *(_DWORD **)(a1 + 24);
    if ( *v22 == 1094997074 )
    {
      v23 = v22 + 94;
    }
    else if ( *v22 == 1314275652 )
    {
      v23 = v22 + 42;
    }
    else
    {
      v23 = 0LL;
    }
    RaCallMiniportUnitControl(v23, 31LL, &v24);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v16);
  }
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 56);
  else
    v3 = -1;
  v4 = *(_DWORD *)(a1 + 104);
  v5 = (unsigned __int8)v4 | (v3 << 8);
  v6 = BYTE2(v4);
  result = qword_140172448;
  v8 = v6 | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (v5 << 8)) << 8);
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(int *)(a1 + 744);
    if ( v9 )
    {
      if ( *(_DWORD *)v9 != 1314275652 )
      {
        v11 = *(_DWORD *)(v9 + 4996);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v9 + 5000);
          if ( v12 )
          {
            v13 = 6LL * (_InterlockedIncrement((volatile signed __int32 *)(v9 + 4992)) % v11);
            *(_DWORD *)(v12 + 8 * v13) = 4;
            *(_QWORD *)(v12 + 8 * v13 + 40) = MEMORY[0xFFFFF78000000014];
            result = v8;
            *(_QWORD *)(v12 + 8 * v13 + 16) = v8;
            *(_QWORD *)(v12 + 8 * v13 + 8) = retaddr;
            *(_QWORD *)(v12 + 8 * v13 + 24) = v10;
            *(_QWORD *)(v12 + 8 * v13 + 32) = 0LL;
          }
        }
      }
    }
  }
  return result;
}
