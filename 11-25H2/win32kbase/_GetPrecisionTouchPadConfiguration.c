/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsLegacyTouchPad @ 0x140124C78 (IsLegacyTouchPad.c)
 *     UpdateTPCurrentActiveState @ 0x14012F2E0 (UpdateTPCurrentActiveState.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x1401462A4 (TryUpdatePTPConfigFromRegistry.c)
 *     Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F18 (Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F6C (Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(unsigned int *a1)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct W32_PUSH_LOCK *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 i; // rbp
  int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  int v35; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int128 v37; // xmm0
  bool v38; // zf
  unsigned int v39; // eax
  int v40; // ecx

  v2 = 1;
  if ( (unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = 3;
  }
  else if ( (unsigned int)Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = 2;
  }
  if ( a1 && *a1 > v2 )
    return 0LL;
  TryUpdatePTPConfigFromRegistry();
  UserSessionState = W32GetUserSessionState(v5, v4);
  v7 = UserSessionState + 16768;
  *(_DWORD *)(UserSessionState + 16772) = 0;
  *(_DWORD *)(UserSessionState + 16780) &= 0xFFFFFFFC;
  v10 = W32GetUserSessionState(v9, v8);
  *(_DWORD *)(v7 + 12) = (8 * *(_DWORD *)(v10 + 328)) & 0xFFFFFF9F ^ (*(_DWORD *)(v7 + 12) ^ (8 * *(_DWORD *)(v10 + 328))) & 0xFFFFFF97;
  if ( (unsigned int)Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(v7 + 44) &= 0xFFFFFFF8;
  if ( (unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(v7 + 48) |= 1u;
  v13 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 16840) + 1232LL);
  W32AcquirePushLockSharedEx(v13, 0);
  for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (unsigned int)IsLegacyTouchPad(i) )
    {
      *(_DWORD *)(v7 + 12) |= 2u;
    }
    else if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 7 )
    {
      v17 = *(_DWORD *)(v7 + 12) | 1;
      *(_DWORD *)(v7 + 12) = v17;
      v18 = *(_DWORD *)(v7 + 4);
      if ( v18 <= *(_DWORD *)(*(_QWORD *)(i + 456) + 776LL) - 1 )
        v18 = *(_DWORD *)(*(_QWORD *)(i + 456) + 776LL) - 1;
      *(_DWORD *)(v7 + 4) = v18;
      if ( (*(_DWORD *)(i + 184) & 0x400) != 0 )
      {
        v17 |= 0x20u;
        *(_DWORD *)(v7 + 12) = v17;
      }
      if ( (*(_DWORD *)(i + 184) & 0x800) != 0 )
        *(_DWORD *)(v7 + 12) = v17 | 0x40;
      if ( (unsigned int)Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (*(_DWORD *)(i + 184) & 0x1000) != 0 )
          *(_DWORD *)(v7 + 44) |= 1u;
        if ( (*(_DWORD *)(i + 184) & 0x2000) != 0 )
          *(_DWORD *)(v7 + 44) |= 2u;
        if ( (*(_DWORD *)(i + 184) & 0x4000) != 0 )
          *(_DWORD *)(v7 + 44) |= 4u;
      }
      if ( (unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline()
        && !*(_DWORD *)(*(_QWORD *)(i + 456) + 272LL) )
      {
        *(_DWORD *)(v7 + 48) &= ~1u;
      }
    }
  }
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( (unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(v7 + 12) & 1) == 0 )
  {
    *(_DWORD *)(v7 + 48) &= ~1u;
  }
  UpdateTPCurrentActiveState();
  if ( a1 )
  {
    if ( !*a1 )
    {
      a1[1] = *(_DWORD *)(v7 + 8);
      v19 = (*(int *)(v7 + 12) >> 3) ^ (a1[3] ^ (*(int *)(v7 + 12) >> 3)) & 0xFFFFFFFE;
      a1[3] = v19;
      v20 = (8 * *(_DWORD *)(v7 + 12)) ^ ((8 * *(_DWORD *)(v7 + 12)) ^ v19) & 0xFFFFFFEF;
      a1[3] = v20;
      v21 = (32 * *(_DWORD *)(v7 + 16)) ^ ((32 * *(_DWORD *)(v7 + 16)) ^ v20) & 0xFFFFFFBF;
      a1[3] = v21;
      v22 = (*(int *)(v7 + 12) >> 1) ^ (a1[5] ^ (*(int *)(v7 + 12) >> 1)) & 0xFFFFFFF7;
      a1[5] = v22;
      v23 = (4 * *(_DWORD *)(v7 + 12)) ^ ((4 * *(_DWORD *)(v7 + 12)) ^ v22) & 0xFFFFFFEF;
      a1[5] = v23;
      v21 &= 0xFFFFFFD9;
      v24 = v23 & 0xFFFFFFDF | (*(_DWORD *)(v7 + 4) >= 4u ? 0x20 : 0);
      a1[5] = v24;
      v25 = (4 * *(_DWORD *)(v7 + 12)) ^ ((4 * *(_DWORD *)(v7 + 12)) ^ v24) & 0xFFFFFF7F;
      a1[5] = v25;
      v26 = *(_DWORD *)(v7 + 12) << 19;
      a1[3] = v21;
      a1[5] = v26 ^ (v26 ^ v25) & 0xFDFFFFFF;
      a1[2] = *(_DWORD *)(v7 + 20);
      a1[4] = *(_DWORD *)(v7 + 24);
      *((_BYTE *)a1 + 21) = *(_BYTE *)(v7 + 28);
      *((_BYTE *)a1 + 22) = *(_BYTE *)(v7 + 32);
      v27 = *(_DWORD *)(v7 + 16) ^ (a1[5] ^ *(_DWORD *)(v7 + 16)) & 0xFFFFFFFE;
      a1[5] = v27;
      v28 = (*(_DWORD *)(v7 + 16) << 23) ^ ((*(_DWORD *)(v7 + 16) << 23) ^ v27) & 0xFEFFFFFF;
      a1[5] = v28;
      v29 = (*(_DWORD *)(v7 + 16) << 7) ^ ((*(_DWORD *)(v7 + 16) << 7) ^ v21) & 0xFFFFFDFF;
      a1[3] = v29;
      v30 = (*(int *)(v7 + 16) >> 1) ^ ((*(int *)(v7 + 16) >> 1) ^ v28) & 0xFFFFFFFB;
      a1[5] = v30;
      v31 = (*(_DWORD *)(v7 + 16) << 6) ^ ((*(_DWORD *)(v7 + 16) << 6) ^ v29) & 0xFFFFFBFF;
      a1[3] = v31;
      v32 = (*(int *)(v7 + 16) >> 4) ^ ((*(int *)(v7 + 16) >> 4) ^ v30) & 0xFFFFFFFD;
      a1[5] = v32;
      a1[5] = *(_DWORD *)(v7 + 16) ^ (*(_DWORD *)(v7 + 16) ^ v32) & 0xFFFFFFBF;
      v33 = *(_DWORD *)(v7 + 16) ^ (*(_DWORD *)(v7 + 16) ^ v31) & 0xFFFFFF7F;
      a1[3] = v33;
      v34 = *(_DWORD *)(v7 + 16) ^ (*(_DWORD *)(v7 + 16) ^ v33) & 0xFFFFFEFF;
      a1[3] = v34;
      a1[3] = (*(int *)(v7 + 16) >> 6) ^ ((*(int *)(v7 + 16) >> 6) ^ v34) & 0xFFFFFFF7;
      if ( *(_DWORD *)(v7 + 20) == 4 )
      {
        v35 = *(_DWORD *)(v7 + 12);
        if ( (v35 & 2) != 0 && (v35 & 1) == 0 )
          a1[2] = 3;
      }
      return 1LL;
    }
    if ( (unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline() )
    {
      v39 = *a1;
      *(_OWORD *)a1 = *(_OWORD *)v7;
      *((_OWORD *)a1 + 1) = *(_OWORD *)(v7 + 16);
      if ( v39 != 1 )
      {
        *((_OWORD *)a1 + 2) = *(_OWORD *)(v7 + 32);
        if ( v39 == 2 )
          *a1 = 2;
        else
          a1[12] = *(_DWORD *)(v7 + 48);
LABEL_54:
        if ( *(_DWORD *)(v7 + 20) == 4 )
        {
          v40 = *(_DWORD *)(v7 + 12);
          if ( (v40 & 2) != 0 && (v40 & 1) == 0 )
            a1[5] = 3;
        }
        return 1LL;
      }
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline();
      v37 = *(_OWORD *)v7;
      if ( !IsEnabledDeviceUsageNoInline )
      {
        *(_OWORD *)a1 = v37;
        *((_OWORD *)a1 + 1) = *(_OWORD *)(v7 + 16);
        *((_QWORD *)a1 + 4) = *(_QWORD *)(v7 + 32);
        a1[10] = *(_DWORD *)(v7 + 40);
        goto LABEL_54;
      }
      v38 = *a1 == 1;
      *(_OWORD *)a1 = v37;
      *((_OWORD *)a1 + 1) = *(_OWORD *)(v7 + 16);
      if ( !v38 )
      {
        *((_OWORD *)a1 + 2) = *(_OWORD *)(v7 + 32);
        goto LABEL_54;
      }
    }
    *((_QWORD *)a1 + 4) = *(_QWORD *)(v7 + 32);
    a1[10] = *(_DWORD *)(v7 + 40);
    *a1 = 1;
    goto LABEL_54;
  }
  return 1LL;
}
