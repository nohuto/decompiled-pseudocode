/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18002F650
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180027FB8 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002F890 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002FA60 (-HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        int a4,
        int *a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // r8
  int v16; // eax
  char *v17; // r14
  DWORD v18; // esi
  _QWORD *Value; // rbx
  __int64 *v20; // rax
  __int64 v21; // r8
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PSID Sid; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  __int64 v27; // [rsp+40h] [rbp-C0h]
  wchar_t *Source; // [rsp+48h] [rbp-B8h]
  wchar_t Destination[232]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[68]; // [rsp+220h] [rbp+120h] BYREF
  int v31; // [rsp+264h] [rbp+164h]
  int v32; // [rsp+268h] [rbp+168h]
  __int64 v33; // [rsp+270h] [rbp+170h]

  v8 = a1;
  Sid = a3;
  Source = a2;
  v26 = a1;
  if ( a8 <= 1 && a7 )
  {
    v11 = a7;
    v27 = a7;
    do
    {
      if ( a8 )
      {
        P = 0LL;
        RmpAcquireGlobalLock();
        LOBYTE(v15) = 2;
        v16 = RmpActivityHostFindByHostId(*(_QWORD *)(v8 + 120), *a6, v15, &P);
        v17 = (char *)P;
        if ( v16 >= 0 )
        {
          v18 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            Value = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
            *Value |= 2uLL;
            ++Value[2];
          }
          CempLockAcquireExclusive((__int64)(v17 + 56));
          HampHostCompleteQuiesce((struct _RM_HAM_ACTIVITY_HOST *)(v17 + 56));
          if ( HampLockTrackerId != -1 )
          {
            v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v21 = *v20;
            if ( (*v20 & 2) == 0 )
              NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
            if ( v20[2]-- == 1 )
              *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *((_DWORD *)v17 + 16) = 0;
          RtlReleaseSRWLockExclusive(v17 + 56);
          v11 = v27;
        }
        RmpReleaseGlobalLock();
        if ( v17 )
          RmpObjectRelease(v17);
        v8 = v26;
      }
      else
      {
        v12 = *a6;
        v13 = *a5;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, Source);
        memset_0(v30, 0, sizeof(v30));
        v14 = RtlLengthSid(Sid);
        memcpy_0(v30, Sid, v14);
        v31 = a4;
        v32 = v13;
        v33 = v12;
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (ExecutionModel::ResourceManager *)(v8 - 8),
          (struct _RM_PSM_HOST_INFO *)Destination);
      }
      ++a6;
      ++a5;
      v27 = --v11;
    }
    while ( v11 );
  }
}
