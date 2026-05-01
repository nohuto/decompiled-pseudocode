/*
 * XREFs of ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x1800383C0
 * Callers:
 *     PsmHamGetPackageDebugMode @ 0x180037190 (PsmHamGetPackageDebugMode.c)
 * Callees:
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180038C60 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180038C80 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038D00 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall HamSrvPackageGetDebugMode(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  const wchar_t *v4; // r12
  unsigned __int64 v5; // rsi
  DWORD v8; // ebx
  _WORD *v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  _WORD *v12; // rax
  unsigned __int64 v13; // r15
  void *v14; // rdi
  __int64 v15; // r13
  unsigned __int64 v16; // rsi
  int v17; // r14d
  int v18; // eax
  unsigned __int64 v19; // rax
  bool v20; // di
  DWORD v21; // ebx
  int v22; // eax
  bool v23; // zf
  int v24; // eax
  unsigned __int64 v26; // rdi
  int v27; // r14d
  int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  DWORD v31; // esi
  _QWORD *Value; // rdi
  __int64 *v33; // rax
  __int64 v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  int v37; // r15d
  int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rsi
  signed __int64 v41; // rax
  bool v42; // cc
  signed __int64 v43; // rax
  bool v44; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-CCh]
  unsigned int v46; // [rsp+38h] [rbp-C8h] BYREF
  const unsigned __int16 *v47; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v49; // [rsp+58h] [rbp-A8h]
  _OWORD TlsValue[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-20h]
  _BYTE v52[132]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE DestinationSid[68]; // [rsp+174h] [rbp+74h] BYREF
  int v54; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v56; // [rsp+1D0h] [rbp+D0h]
  int v57; // [rsp+1D8h] [rbp+D8h]
  int v58; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v60; // [rsp+1F0h] [rbp+F0h]
  int v61; // [rsp+1F8h] [rbp+F8h]
  int v62; // [rsp+1FCh] [rbp+FCh]
  const wchar_t *v63; // [rsp+200h] [rbp+100h]
  int v64; // [rsp+208h] [rbp+108h]
  int v65; // [rsp+20Ch] [rbp+10Ch]
  int *v66; // [rsp+210h] [rbp+110h]
  __int64 v67; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v68; // [rsp+220h] [rbp+120h]
  int v69; // [rsp+228h] [rbp+128h]
  int v70; // [rsp+22Ch] [rbp+12Ch]
  bool *v71; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]

  v4 = a2;
  v5 = a4;
  v47 = a2;
  v46 = a4;
  v49 = a3;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    v55.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    v55.Size = *(unsigned __int16 *)off_1800E12B8;
    v56 = &unk_1800CE4ED;
    v55.Reserved = 2;
    v57 = 24;
    v58 = 1;
    v45 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &v55);
  }
  v8 = HampLockTrackerId;
  v51 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v8, TlsValue);
  }
  memset_0(v52, 0, 0xCCuLL);
  v9 = v52;
  v10 = 65LL;
  do
  {
    if ( v10 == -2147483581 )
      break;
    v11 = *(_WORD *)((char *)v9 + (char *)v4 - v52);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v10;
  }
  while ( v10 );
  v12 = v9 - 1;
  if ( v10 )
    v12 = v9;
  *v12 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v13 = (unsigned __int64)a1 + 392;
  v54 = v5;
  v14 = (void *)v5;
  RtlAcquireSRWLockShared(v13 + 16);
  v15 = -1LL;
  v16 = *(_QWORD *)v13;
  v17 = *(_BYTE *)(v13 + 8) & 1;
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
  {
    if ( !v16 )
    {
LABEL_18:
      RtlReleaseSRWLockShared(v13 + 16);
LABEL_19:
      v20 = 0;
      goto LABEL_20;
    }
    v16 ^= v13;
  }
  if ( !v16 )
    goto LABEL_18;
  while ( 1 )
  {
    v18 = HampSessionCompareById(v14, (void *)v16);
    if ( v18 >= 0 )
      break;
    v19 = *(_QWORD *)v16;
    if ( v17 && v19 )
    {
      v16 ^= v19;
      goto LABEL_17;
    }
LABEL_16:
    v16 = v19;
LABEL_17:
    if ( !v16 )
      goto LABEL_18;
  }
  if ( v18 > 0 )
  {
    v19 = *(_QWORD *)(v16 + 8);
    if ( v17 && v19 )
    {
      v16 ^= v19;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(v16 + 24) )
    goto LABEL_18;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v13 + 16);
  RtlAcquireSRWLockShared(v16 + 56);
  v26 = *(_QWORD *)(v16 + 40);
  v27 = *(_BYTE *)(v16 + 48) & 1;
  if ( (*(_BYTE *)(v16 + 48) & 1) != 0 )
  {
    if ( v26 )
    {
      v26 ^= v16 + 40;
      goto LABEL_39;
    }
    goto LABEL_45;
  }
LABEL_39:
  if ( !v26 )
    goto LABEL_45;
  while ( 1 )
  {
    v28 = HampUserCompareByIdentity(DestinationSid, (void *)v26);
    if ( v28 >= 0 )
      break;
    v29 = *(_QWORD *)v26;
    if ( v27 && v29 )
    {
      v26 ^= v29;
      goto LABEL_44;
    }
LABEL_43:
    v26 = v29;
LABEL_44:
    if ( !v26 )
      goto LABEL_45;
  }
  if ( v28 > 0 )
  {
    v29 = *(_QWORD *)(v26 + 8);
    if ( v27 && v29 )
    {
      v26 ^= v29;
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  if ( !*(_QWORD *)(v26 + 24) )
  {
LABEL_45:
    RtlReleaseSRWLockShared(v16 + 56);
    v26 = 0LL;
    v30 = 0LL;
    goto LABEL_46;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v16 + 56);
  RtlAcquireSRWLockShared(v26 + 56);
  v30 = *(_QWORD *)(v26 + 40);
  v37 = *(_BYTE *)(v26 + 48) & 1;
  if ( (*(_BYTE *)(v26 + 48) & 1) != 0 )
  {
    if ( v30 )
    {
      v30 ^= v26 + 40;
      goto LABEL_68;
    }
    goto LABEL_74;
  }
LABEL_68:
  if ( !v30 )
    goto LABEL_74;
  while ( 1 )
  {
    v38 = HampPkgCompareByIdentity(v52, (void *)v30);
    if ( v38 >= 0 )
      break;
    v39 = *(_QWORD *)v30;
    if ( v37 && v39 )
    {
      v30 ^= v39;
      goto LABEL_73;
    }
LABEL_72:
    v30 = v39;
LABEL_73:
    if ( !v30 )
      goto LABEL_74;
  }
  if ( v38 > 0 )
  {
    v39 = *(_QWORD *)(v30 + 8);
    if ( v37 && v39 )
    {
      v30 ^= v39;
      goto LABEL_73;
    }
    goto LABEL_72;
  }
  if ( !*(_QWORD *)(v30 + 24) )
  {
LABEL_74:
    RtlReleaseSRWLockShared(v26 + 56);
    v4 = v47;
    v30 = 0LL;
    goto LABEL_46;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v30 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v26 + 56);
  v4 = v47;
LABEL_46:
  CemRcObjectDereference(v16);
  if ( v26 )
    CemRcObjectDereference(v26);
  if ( !v30 )
    goto LABEL_19;
  v31 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v31) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v30 + 304);
  v20 = (*(_DWORD *)(v30 + 340) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v33 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v34 = *v33;
    if ( (*v33 & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v23 = v33[7]-- == 1;
    if ( v23 )
      *v33 = v34 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v30 + 304);
  _m_prefetchw((const void *)(v30 + 24));
  v35 = *(_QWORD *)(v30 + 24);
  while ( v35 - 1 > 0 )
  {
    v36 = v35;
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 24), v35 - 1, v35);
    if ( v36 == v35 )
      goto LABEL_20;
  }
  if ( v35 != 1 )
    __fastfail(0xEu);
  v40 = *(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( *(_QWORD *)(v30 + 16) == -1LL )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v30 + 24)) <= -1 )
      __fastfail(0xEu);
    (*(void (__fastcall **)(unsigned __int64))(v40 + 24))(v30);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v40 + 16);
    v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 24), 0xFFFFFFFFFFFFFFFFuLL);
    v42 = v41 <= 1;
    v43 = v41 - 1;
    if ( v42 )
    {
      if ( v43 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v40 + 16);
      (*(void (__fastcall **)(unsigned __int64))(v40 + 24))(v30);
    }
    else
    {
      RtlReleaseSRWLockExclusive(v40 + 16);
    }
  }
LABEL_20:
  v21 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v21, 0LL);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v71 = &v44;
    v44 = v20;
    v72 = 1LL;
    v22 = v49[1];
    v68 = v49;
    v70 = 0;
    v67 = 4LL;
    v69 = 4 * v22 + 8;
    v66 = (int *)&v46;
    if ( v4 )
    {
      do
        v23 = v4[++v15] == 0;
      while ( !v23 );
      v24 = 2 * v15 + 2;
    }
    else
    {
      v4 = &word_1800BBB1C;
      v24 = 2;
    }
    v64 = v24;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v65 = 0;
    v63 = v4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v60 = &unk_1800CDFEE;
    UserData.Reserved = 2;
    v61 = 72;
    v62 = 1;
    v45 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return v20;
}
