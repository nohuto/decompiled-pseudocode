/*
 * XREFs of ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026C18
 * Callers:
 *     ?RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026830 (-RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18002685C (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800291F8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18002C870 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?HampHostTerminateWatchdog@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180079420 (-HampHostTerminateWatchdog@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180027234 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostCheckQueueDelete(struct _RM_ACTIVITY_HOST *a1)
{
  DWORD v1; // esi
  char *v2; // rbx
  _QWORD *Value; // rdi
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int64 *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]

  v1 = HampLockTrackerId;
  v2 = (char *)a1 + 56;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  *((_DWORD *)v2 + 2) = GetCurrentThreadId();
  if ( RmpActivityHostCanDelete(a1) )
  {
    if ( (unsigned int)dword_1800E12B0 > 4
      && (qword_1800E12C0 & 0x40) != 0
      && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    {
      v8 = *((_QWORD *)a1 + 4);
      v15 = 8LL;
      v14 = &v8;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v11 = &unk_1800D1EEB;
      UserData.Reserved = 2;
      v12 = 28;
      v13 = 1;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v2, 1);
  }
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v5[2]-- == 1 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
}
