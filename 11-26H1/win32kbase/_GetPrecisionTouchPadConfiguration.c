/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1401AA660
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     IsLegacyTouchPad @ 0x140161328 (IsLegacyTouchPad.c)
 *     UpdateTPCurrentActiveState @ 0x140163F00 (UpdateTPCurrentActiveState.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x14017C970 (TryUpdatePTPConfigFromRegistry.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401C6258 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(unsigned int *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rdi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rbx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 i; // rbp
  int v22; // eax
  int v23; // edx
  unsigned int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // edx
  int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // edx
  unsigned int v40; // r8d
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // eax
  unsigned int v45; // eax
  int v46; // ecx

  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  if ( a1 && *a1 > 3 )
    return 0LL;
  TryUpdatePTPConfigFromRegistry(v3, v2, v4);
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  *(_DWORD *)(UserSessionState + 16772) &= 0xFFFFFFFC;
  *(_DWORD *)(UserSessionState + 16764) = 0;
  v13 = *(_DWORD *)(UserSessionState + 16772) & 0xFFFFFF97 ^ (8
                                                            * (unsigned __int8)*(_DWORD *)(W32GetUserSessionState(
                                                                                             v11,
                                                                                             v10,
                                                                                             v12)
                                                                                         + 328)) & 8;
  *(_DWORD *)(UserSessionState + 16804) &= 0xFFFFFFF8;
  *(_DWORD *)(UserSessionState + 16772) = v13;
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  *(_DWORD *)(UserSessionState + 16808) |= 1u;
  v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 16832) + 1232LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v17, 0LL);
  for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 16832) + 1240LL); i; i = *(_QWORD *)(i + 56) )
  {
    LOBYTE(v22) = IsLegacyTouchPad(i);
    if ( v22 )
    {
      *(_DWORD *)(UserSessionState + 16772) |= 2u;
    }
    else if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 7 )
    {
      v23 = *(_DWORD *)(UserSessionState + 16772) | 1;
      *(_DWORD *)(UserSessionState + 16772) = v23;
      v24 = *(_DWORD *)(UserSessionState + 16764);
      if ( v24 <= *(_DWORD *)(*(_QWORD *)(i + 456) + 776LL) - 1 )
        v24 = *(_DWORD *)(*(_QWORD *)(i + 456) + 776LL) - 1;
      *(_DWORD *)(UserSessionState + 16764) = v24;
      if ( (*(_DWORD *)(i + 184) & 0x400) != 0 )
      {
        v23 |= 0x20u;
        *(_DWORD *)(UserSessionState + 16772) = v23;
      }
      if ( (*(_DWORD *)(i + 184) & 0x800) != 0 )
        *(_DWORD *)(UserSessionState + 16772) = v23 | 0x40;
      if ( (*(_DWORD *)(i + 184) & 0x1000) != 0 )
        *(_DWORD *)(UserSessionState + 16804) |= 1u;
      if ( (*(_DWORD *)(i + 184) & 0x2000) != 0 )
        *(_DWORD *)(UserSessionState + 16804) |= 2u;
      if ( (*(_DWORD *)(i + 184) & 0x4000) != 0 )
        *(_DWORD *)(UserSessionState + 16804) |= 4u;
      Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
      if ( !*(_DWORD *)(*(_QWORD *)(i + 456) + 272LL) )
        *(_DWORD *)(UserSessionState + 16808) &= ~1u;
    }
  }
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  if ( (*(_DWORD *)(UserSessionState + 16772) & 1) == 0 )
    *(_DWORD *)(UserSessionState + 16808) &= ~1u;
  UpdateTPCurrentActiveState(v26, v25, v27);
  if ( a1 )
  {
    if ( *a1 )
    {
      Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
      v45 = *a1;
      *(_OWORD *)a1 = *(_OWORD *)(UserSessionState + 16760);
      *((_OWORD *)a1 + 1) = *(_OWORD *)(UserSessionState + 16776);
      if ( v45 == 1 )
      {
        *((_QWORD *)a1 + 4) = *(_QWORD *)(UserSessionState + 16792);
        a1[10] = *(_DWORD *)(UserSessionState + 16800);
        *a1 = 1;
      }
      else
      {
        *((_OWORD *)a1 + 2) = *(_OWORD *)(UserSessionState + 16792);
        if ( v45 == 2 )
          *a1 = 2;
        else
          a1[12] = *(_DWORD *)(UserSessionState + 16808);
      }
      if ( *(_DWORD *)(UserSessionState + 16780) == 4 )
      {
        v46 = *(_DWORD *)(UserSessionState + 16772);
        if ( (v46 & 2) != 0 && (v46 & 1) == 0 )
          a1[5] = 3;
      }
    }
    else
    {
      a1[1] = *(_DWORD *)(UserSessionState + 16768);
      v28 = (*(int *)(UserSessionState + 16772) >> 3) ^ (a1[3] ^ (*(int *)(UserSessionState + 16772) >> 3)) & 0xFFFFFFFE;
      a1[3] = v28;
      v29 = (8 * *(_DWORD *)(UserSessionState + 16772)) ^ (v28 ^ (8 * *(_DWORD *)(UserSessionState + 16772))) & 0xFFFFFFEF;
      a1[3] = v29;
      v30 = (32 * *(_DWORD *)(UserSessionState + 16776)) ^ (v29 ^ (32 * *(_DWORD *)(UserSessionState + 16776))) & 0xFFFFFFBF;
      a1[3] = v30;
      v31 = (*(int *)(UserSessionState + 16772) >> 1) ^ (a1[5] ^ (*(int *)(UserSessionState + 16772) >> 1)) & 0xFFFFFFF7;
      a1[5] = v31;
      v32 = (4 * *(_DWORD *)(UserSessionState + 16772)) ^ (v31 ^ (4 * *(_DWORD *)(UserSessionState + 16772))) & 0xFFFFFFEF;
      a1[5] = v32;
      v30 &= 0xFFFFFFD9;
      v33 = v32 & 0xFFFFFFDF | (*(_DWORD *)(UserSessionState + 16764) >= 4u ? 0x20 : 0);
      a1[5] = v33;
      v34 = (4 * *(_DWORD *)(UserSessionState + 16772)) ^ (v33 ^ (4 * *(_DWORD *)(UserSessionState + 16772))) & 0xFFFFFF7F;
      a1[5] = v34;
      v35 = *(_DWORD *)(UserSessionState + 16772);
      a1[3] = v30;
      a1[5] = (v35 << 19) ^ (v34 ^ (v35 << 19)) & 0xFDFFFFFF;
      a1[2] = *(_DWORD *)(UserSessionState + 16780);
      a1[4] = *(_DWORD *)(UserSessionState + 16784);
      *((_BYTE *)a1 + 21) = *(_BYTE *)(UserSessionState + 16788);
      *((_BYTE *)a1 + 22) = *(_BYTE *)(UserSessionState + 16792);
      v36 = *(_DWORD *)(UserSessionState + 16776) ^ (a1[5] ^ *(_DWORD *)(UserSessionState + 16776)) & 0xFFFFFFFE;
      a1[5] = v36;
      v37 = (*(_DWORD *)(UserSessionState + 16776) << 23) ^ ((*(_DWORD *)(UserSessionState + 16776) << 23) ^ v36) & 0xFEFFFFFF;
      a1[5] = v37;
      v38 = (*(_DWORD *)(UserSessionState + 16776) << 7) ^ ((*(_DWORD *)(UserSessionState + 16776) << 7) ^ v30) & 0xFFFFFDFF;
      a1[3] = v38;
      v39 = (*(int *)(UserSessionState + 16776) >> 1) ^ ((*(int *)(UserSessionState + 16776) >> 1) ^ v37) & 0xFFFFFFFB;
      a1[5] = v39;
      v40 = (*(_DWORD *)(UserSessionState + 16776) << 6) ^ ((*(_DWORD *)(UserSessionState + 16776) << 6) ^ v38) & 0xFFFFFBFF;
      a1[3] = v40;
      v41 = (*(int *)(UserSessionState + 16776) >> 4) ^ ((*(int *)(UserSessionState + 16776) >> 4) ^ v39) & 0xFFFFFFFD;
      a1[5] = v41;
      a1[5] = *(_DWORD *)(UserSessionState + 16776) ^ (v41 ^ *(_DWORD *)(UserSessionState + 16776)) & 0xFFFFFFBF;
      v42 = *(_DWORD *)(UserSessionState + 16776) ^ (v40 ^ *(_DWORD *)(UserSessionState + 16776)) & 0xFFFFFF7F;
      a1[3] = v42;
      v43 = *(_DWORD *)(UserSessionState + 16776) ^ (v42 ^ *(_DWORD *)(UserSessionState + 16776)) & 0xFFFFFEFF;
      a1[3] = v43;
      a1[3] = (*(int *)(UserSessionState + 16776) >> 6) ^ ((*(int *)(UserSessionState + 16776) >> 6) ^ v43) & 0xFFFFFFF7;
      if ( *(_DWORD *)(UserSessionState + 16780) == 4 )
      {
        v44 = *(_DWORD *)(UserSessionState + 16772);
        if ( (v44 & 2) != 0 && (v44 & 1) == 0 )
          a1[2] = 3;
      }
    }
  }
  return 1LL;
}
