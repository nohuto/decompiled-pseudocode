/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18005B3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // r15
  ULONG v11; // eax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  int v16; // edi
  __int64 v17; // r9
  int v18; // r8d
  DWORD v19; // esi
  _QWORD *Value; // rdi
  __int64 *v21; // rax
  __int64 v22; // r8
  unsigned int v24; // edi
  __int64 v26; // rsi
  wchar_t Destination[232]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE Buf1[68]; // [rsp+200h] [rbp+100h] BYREF
  int v29; // [rsp+244h] [rbp+144h]
  unsigned int v30; // [rsp+248h] [rbp+148h]
  unsigned __int64 v31; // [rsp+250h] [rbp+150h]

  v10 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset_0(Buf1, 0, sizeof(Buf1));
  v11 = RtlLengthSid(a3);
  memcpy_0(Buf1, a3, v11);
  v30 = a5;
  v31 = a6;
  v29 = a4;
  RmpAcquireGlobalLock();
  v12 = *((_QWORD *)this + 15);
  v13 = 0LL;
  v15 = utl::hash<_RM_PSM_HOST_INFO>::operator()(v14, (unsigned __int64)Destination);
  v16 = -1073741275;
  RtlAcquireSRWLockShared(v12 + 32);
LABEL_2:
  v17 = v15 & (-1LL << (*(_BYTE *)(v12 + 3356) & 0x1F));
  if ( v13 )
    goto LABEL_5;
  v18 = *(_DWORD *)(v12 + 3356) >> 5;
  if ( v18 )
  {
    v13 = *(_QWORD *)(v12 + 3360)
        + 8LL
        * ((v18 - 1) & (HIBYTE(v17)
                      - 877075889
                      + 442596621 * (unsigned __int8)v17
                      + 37
                      * (BYTE6(v17)
                       + 37
                       * (BYTE5(v17)
                        + 37 * (BYTE4(v17) + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (unsigned int)BYTE1(v17))))))));
LABEL_5:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v17 == ((-1LL << (*(_BYTE *)(v12 + 3356) & 0x1F)) & *(_QWORD *)(v13 + 8)) )
      {
        if ( !v13 )
          break;
        v26 = v13 - 1392;
        if ( !_wcsicmp(Destination, (const wchar_t *)(v13 - 1392 + 80))
          && !memcmp_0(Buf1, (const void *)(v26 + 544), 0x58uLL) )
        {
          v16 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 + 16)) <= 1 )
            __fastfail(0xEu);
          v10 = v13 - 1392;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(v12 + 32);
  if ( v16 < 0 )
  {
    v24 = v16 | 0x10000000;
  }
  else
  {
    v19 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    CempLockAcquireExclusive(v10 + 56);
    *(_QWORD *)(v10 + 720) |= 0x20000000000000uLL;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v10 + 56), 0);
    if ( HampLockTrackerId != -1 )
    {
      v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v22 = *v21;
      if ( (*v21 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v21[2]-- == 1 )
        *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v10 + 64) = 0;
    RtlReleaseSRWLockExclusive(v10 + 56);
    v24 = 0;
  }
  RmpReleaseGlobalLock();
  if ( v10 )
    RmpObjectRelease((char *)v10);
  return v24;
}
