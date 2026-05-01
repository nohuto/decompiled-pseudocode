/*
 * XREFs of ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003B01C
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003A7E0 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18002685C (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180026F0C (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18003C03C (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18003C7E0 (-HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampPkgCommitAppsUsageInfo(struct _HAM_PACKAGE *a1)
{
  struct _HAM_PACKAGE *v1; // r13
  int v2; // r12d
  struct _HAM_APPLICATION *v3; // r15
  unsigned __int64 v4; // rdi
  int v5; // r12d
  ULONGLONG Ptr; // rbx
  ULONGLONG v7; // rsi
  unsigned __int64 v8; // r14
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // r15
  DWORD v10; // r13d
  _QWORD *Value; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // r12
  ULONGLONG v14; // r8
  ULONGLONG v15; // rax
  bool v16; // cc
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  bool v19; // cc
  __int64 *v20; // rax
  __int64 v21; // rdx
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rax
  struct _EVENT_DATA_DESCRIPTOR v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  bool v29; // cc
  bool v30; // cc
  int EventDescriptor; // [rsp+38h] [rbp-D0h]
  int EventDescriptor_4; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B8h]
  struct _HAM_RC_TREE_NODE *First; // [rsp+60h] [rbp-A8h]
  struct _HAM_PACKAGE *v36; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR si128; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-78h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-68h]
  _OWORD String1[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int16 v42; // [rsp+138h] [rbp+30h]
  _OWORD String2[8]; // [rsp+148h] [rbp+40h] BYREF
  __int16 v44; // [rsp+1C8h] [rbp+C0h]

  v1 = a1;
  v36 = a1;
  if ( (unsigned int)dword_1800E12B0 > 5 )
  {
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_QWORD *)&EventDescriptor_8.Id = 0x1050B000000LL;
    EventDescriptor_8.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    *(_QWORD *)&v40 = &unk_1800D05ED;
    UserData.Reserved = 2;
    *((_QWORD *)&v40 + 1) = 0x10000001FLL;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor_8, 0LL, 0LL, 2u, &UserData);
  }
  v2 = 0;
  EventDescriptor = 0;
  memset_0(String1, 0, 0x82uLL);
  si128 = (struct _EVENT_DATA_DESCRIPTOR)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v38 = si128;
  First = HamRcNodeGetFirst(v1, 1);
  v3 = First;
  if ( First )
  {
    while ( 1 )
    {
      EventDescriptor_4 = 130;
      v4 = -1LL;
      PsmGetApplicationNameFromKey((char *)v3 + 96, String2, &EventDescriptor_4);
      if ( _wcsicmp((const wchar_t *)String1, (const wchar_t *)String2) )
      {
        if ( v2 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            (const unsigned __int16 *)String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
        si128 = (struct _EVENT_DATA_DESCRIPTOR)0xFFFFFFFFFFFFFFFFuLL;
        v38 = (struct _EVENT_DATA_DESCRIPTOR)0xFFFFFFFFFFFFFFFFuLL;
        EventDescriptor = 0;
      }
      v5 = 0;
      EventDescriptor_4 = 0;
      Ptr = -1LL;
      v7 = 0LL;
      v8 = 0LL;
      FirstHost = HampAppGetFirstHost(v3);
      if ( FirstHost )
      {
        while ( 1 )
        {
          v10 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            Value = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
            *Value |= 2uLL;
            ++Value[2];
            v5 = EventDescriptor_4;
          }
          RtlAcquireSRWLockExclusive(FirstHost);
          *((_DWORD *)FirstHost + 2) = GetCurrentThreadId();
          v12 = *((_QWORD *)FirstHost + 83) & 0xEFFFFFFFFFFFFFFFuLL;
          EventDescriptor_4 = ((*((_QWORD *)FirstHost + 83) & 0x1000000000000000LL) != 0) | v5;
          *((_QWORD *)FirstHost + 83) = v12 & 0xF7FFFFFFFFFFFFFFuLL;
          v13 = (v12 >> 59) & 1;
          v14 = *((_QWORD *)FirstHost + 128);
          v15 = *((_QWORD *)FirstHost + 127);
          if ( v15 > v14 )
            break;
          if ( Ptr > v7 )
          {
            v16 = Ptr <= v14;
LABEL_20:
            if ( !v16 )
              goto LABEL_21;
            goto LABEL_71;
          }
          if ( v15 > v7 || Ptr > v14 )
          {
LABEL_21:
            if ( (__int64)v15 > (__int64)Ptr )
              Ptr = *((_QWORD *)FirstHost + 127);
            goto LABEL_23;
          }
LABEL_71:
          if ( v15 < Ptr )
            Ptr = *((_QWORD *)FirstHost + 127);
LABEL_23:
          v17 = *((_QWORD *)FirstHost + 130);
          v18 = *((_QWORD *)FirstHost + 129);
          *(_QWORD *)&EventDescriptor_8.Id = Ptr;
          if ( v18 > v17 )
          {
            if ( v4 > v8 )
              goto LABEL_77;
            v19 = v18 <= v8;
            goto LABEL_26;
          }
          if ( v4 > v8 )
          {
            v19 = v4 <= v17;
LABEL_26:
            if ( !v19 )
              goto LABEL_27;
            goto LABEL_77;
          }
          if ( v18 > v8 || v4 > v17 )
          {
LABEL_27:
            if ( (__int64)v18 > (__int64)v4 )
              v4 = v18;
            goto LABEL_29;
          }
LABEL_77:
          if ( v18 < v4 )
            v4 = v18;
LABEL_29:
          *(_QWORD *)&v34 = v4;
          if ( v14 > v7 )
            v7 = v14;
          EventDescriptor_8.Keyword = v7;
          if ( v17 > v8 )
            v8 = v17;
          *((_QWORD *)&v34 + 1) = v8;
          UserData = (struct _EVENT_DATA_DESCRIPTOR)EventDescriptor_8;
          v40 = v34;
          if ( HampLockTrackerId != -1 )
          {
            v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v21 = *v20;
            if ( (*v20 & 2) == 0 )
              NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
            if ( v20[2]-- == 1 )
              *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *((_DWORD *)FirstHost + 2) = 0;
          RtlReleaseSRWLockExclusive(FirstHost);
          if ( (_DWORD)v13 )
            RmHamHostDereference(FirstHost);
          NextHost = HampAppGetNextHost(FirstHost);
          v8 = *((_QWORD *)&v40 + 1);
          FirstHost = NextHost;
          v4 = v40;
          v7 = *(_QWORD *)&UserData.Size;
          Ptr = UserData.Ptr;
          if ( !NextHost )
          {
            v1 = v36;
            goto LABEL_41;
          }
          v5 = EventDescriptor_4;
        }
        if ( Ptr > v7 )
          goto LABEL_71;
        v16 = v15 <= v7;
        goto LABEL_20;
      }
LABEL_41:
      v24 = si128;
      if ( Ptr > v7 )
      {
        if ( si128.Ptr > *(_QWORD *)&si128.Size )
          goto LABEL_44;
        v29 = Ptr <= *(_QWORD *)&si128.Size;
      }
      else
      {
        if ( si128.Ptr > *(_QWORD *)&si128.Size )
        {
          if ( si128.Ptr <= v7 )
            goto LABEL_44;
          goto LABEL_65;
        }
        if ( Ptr > *(_QWORD *)&si128.Size )
          goto LABEL_65;
        v29 = si128.Ptr <= v7;
      }
      if ( v29 )
      {
LABEL_44:
        if ( Ptr < si128.Ptr )
          v24.Ptr = Ptr;
        goto LABEL_46;
      }
LABEL_65:
      if ( (__int64)Ptr > (__int64)si128.Ptr )
        v24.Ptr = Ptr;
LABEL_46:
      v25 = *(_QWORD *)&v38.Size;
      UserData.Ptr = v24.Ptr;
      v26 = v38.Ptr;
      if ( v4 > v8 )
      {
        if ( v38.Ptr > *(_QWORD *)&v38.Size )
          goto LABEL_49;
        v30 = v4 <= *(_QWORD *)&v38.Size;
      }
      else
      {
        if ( v38.Ptr > *(_QWORD *)&v38.Size )
        {
          if ( v38.Ptr > v8 )
            goto LABEL_61;
          goto LABEL_49;
        }
        if ( v4 > *(_QWORD *)&v38.Size )
          goto LABEL_61;
        v30 = v38.Ptr <= v8;
      }
      if ( !v30 )
      {
LABEL_61:
        if ( (__int64)v4 > (__int64)v38.Ptr )
          v26 = v4;
        goto LABEL_51;
      }
LABEL_49:
      if ( v4 < v38.Ptr )
        v26 = v4;
LABEL_51:
      *(_QWORD *)&v40 = v26;
      if ( v7 > *(_QWORD *)&si128.Size )
        *(_QWORD *)&v24.Size = v7;
      *(_QWORD *)&UserData.Size = *(_QWORD *)&v24.Size;
      if ( v8 > *(_QWORD *)&v38.Size )
        v25 = v8;
      v2 = EventDescriptor_4 | EventDescriptor;
      si128 = UserData;
      *((_QWORD *)&v40 + 1) = v25;
      EventDescriptor |= EventDescriptor_4;
      String1[0] = String2[0];
      v38 = (struct _EVENT_DATA_DESCRIPTOR)v40;
      String1[1] = String2[1];
      String1[2] = String2[2];
      String1[3] = String2[3];
      String1[4] = String2[4];
      String1[5] = String2[5];
      String1[6] = String2[6];
      String1[7] = String2[7];
      v42 = v44;
      First = HamRcNodeGetSuccessor(v1, First);
      v3 = First;
      if ( !First )
      {
        if ( v2 )
        {
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            (const unsigned __int16 *)String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
          if ( si128.Ptr != -1LL )
            HampUsageInfoRegistrySaveAppLaunched(v1);
        }
        break;
      }
    }
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_QWORD *)&EventDescriptor_8.Id = 0x2040B000000LL;
    EventDescriptor_8.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    *(_QWORD *)&v40 = &unk_1800D0618;
    UserData.Reserved = 2;
    *((_QWORD *)&v40 + 1) = 0x10000001FLL;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor_8, 0LL, 0LL, 2u, &UserData);
  }
}
