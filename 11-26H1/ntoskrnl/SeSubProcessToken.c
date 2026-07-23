/*
 * XREFs of SeSubProcessToken @ 0x140B84D74
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SepSetTrustLevelForProcessToken @ 0x1404052FC (SepSetTrustLevelForProcessToken.c)
 *     SepDeleteAccessState @ 0x14040CC90 (SepDeleteAccessState.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14047F35C (SeTokenGetNoChildProcessRestricted.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063EA80 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409D3A08 (EtwTimLogProhibitChildProcessCreation.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x140A88A44 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 *     RtlQueryElevationFlags @ 0x140AADFA0 (RtlQueryElevationFlags.c)
 *     SepSetProcessUniqueAttribute @ 0x140AB7A4C (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenBnoIsolation @ 0x140ADE5CC (SepSetTokenBnoIsolation.c)
 *     SepAddTokenOriginClaim @ 0x140B2A2F4 (SepAddTokenOriginClaim.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140B71BB8 (SepSetTokenAllApplicationPackagesPolicy.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _RTL_BALANCED_NODE *a8,
        int a9,
        __int64 a10,
        _KLOCK_ENTRY_LOCK_STATE a11)
{
  char AvailableEntryBitmap; // bl
  char v15; // si
  unsigned int v16; // r14d
  ULONG_PTR v17; // rax
  void *v18; // rbx
  int inserted; // ebx
  char v20; // r14
  __int64 v21; // rax
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  PVOID v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  __int64 v28; // r9
  int v29; // r14d
  unsigned __int8 *v30; // rcx
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 v32; // r8
  char *LockState; // rcx
  __int64 v35; // [rsp+28h] [rbp-D8h]
  bool v36; // [rsp+41h] [rbp-BFh] BYREF
  char v37[6]; // [rsp+42h] [rbp-BEh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_ENTRIES v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v41; // [rsp+C8h] [rbp-38h]
  __int128 v42; // [rsp+D8h] [rbp-28h]
  struct _ACCESS_STATE v43; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v44[28]; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int8 *p_EntryCount; // [rsp+280h] [rbp+180h]
  __int64 Flink; // [rsp+288h] [rbp+188h]
  __int64 v48; // [rsp+290h] [rbp+190h]
  int v49; // [rsp+298h] [rbp+198h]
  int v50; // [rsp+29Ch] [rbp+19Ch]

  AvailableEntryBitmap = a4;
  v39.Entries[0].TreeNode.Children[1] = a8;
  Object = 0LL;
  UserData.Reserved = 0;
  v39.Entries[0].TreeNode.ParentValue = (unsigned __int64)a3;
  *(_DWORD *)&v39.AvailableEntryBitmap = a4;
  v39.Entries[0].LockState = a11;
  memset(&v39.Entries[0].40, 0, 44);
  memset_0(&v43, 0, sizeof(v43));
  memset_0(v44, 0, sizeof(v44));
  *a3 = 0LL;
  v36 = 0;
  LOWORD(v39.Thread) = 0;
  *(_WORD *)a11.LockState = 0;
  *(_BYTE *)(*(_QWORD *)&a11.0 + 2LL) = 0;
  v15 = 0;
  *(_QWORD *)&v42 = 0LL;
  *(_OWORD *)v40 = 0LL;
  DWORD2(v42) = 0;
  v41 = 0LL;
  v37[0] = 0;
  WORD1(v39.Thread) = 0;
  v39.Entries[0].TreeNode.Children[0] = 0LL;
  SeTokenGetNoChildProcessRestricted(a2, &v36, (bool *)&v39.Thread + 1, (bool *)&v39);
  if ( v36 || LOBYTE(v39.Thread) )
  {
    v16 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      *(_DWORD *)&v39.EntryCount = 0;
      HIDWORD(v39.Thread) = 0;
      v17 = PsReferenceEffectiveToken(
              (__int64)KeGetCurrentThread(),
              0x74726853u,
              &v39.EntryCount,
              &v39,
              (int *)&v39.Thread + 1,
              0LL);
      v18 = (void *)v17;
      if ( *(_DWORD *)&v39.EntryCount == 2 && SHIDWORD(v39.Thread) < 2
        || (v16 = SeTokenIsNoChildProcessRestrictionEnforced(v17) ? 0xC000049D : 0, *(_DWORD *)&v39.EntryCount != 1) )
      {
        if ( v18 )
          ObfDereferenceObjectWithTag(v18, 0x74726853u);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
          (ULONG_PTR)v18,
          0x74726853u);
      }
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v16;
    if ( ((*(_DWORD *)(a1 + 1532) & 1) == 0 || *(_QWORD *)(a1 + 1600))
      && inserted < 0
      && (!BYTE1(v39.Thread) || !*(_DWORD *)(a6 + 12)) )
    {
      EtwTimLogProhibitChildProcessCreation(
        v36 + 1,
        *(_QWORD *)(a6 + 16),
        (UNICODE_STRING *)((*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL)),
        (UNICODE_STRING *)((*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL)));
      if ( v36 )
        goto LABEL_18;
    }
    AvailableEntryBitmap = v39.AvailableEntryBitmap;
  }
  if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    HIDWORD(v39.Thread) = 0;
    RtlQueryElevationFlags((PRTL_ELEVATION_FLAGS)&v39.Thread + 1);
    if ( (BYTE4(v39.Thread) & 0x18) == 0x10
      && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 4) != 0
      && (*(_DWORD *)(a2 + 200) & 0x8001000) == 0x8001000
      && (AvailableEntryBitmap & 2) != 0 )
    {
      if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_AP_UIACCESS_REMOVAL_EVENT) )
      {
        v21 = *(_QWORD *)(a6 + 24);
        *(_OWORD *)&v39.Entries[0].LockState.0 = 0LL;
        if ( v21 && *(_WORD *)(v21 + 96) )
          *(_OWORD *)&v39.Entries[0].LockState.0 = *(_OWORD *)(v21 + 96);
        else
          RtlInitUnicodeString((PUNICODE_STRING)v39.Entries, L"Unknown");
        UserData.Ptr = (ULONGLONG)&v39.Thread + 4;
        *(_DWORD *)&v39.EntryCount = v39.Entries[0].LockState.0;
        p_EntryCount = &v39.EntryCount;
        v48 = *(_QWORD *)&v39.Entries[0].EntryFlags;
        v49 = (int)v39.Entries[0].LockState.0;
        HIDWORD(v39.Thread) = 0;
        *(_QWORD *)&UserData.Size = 4LL;
        Flink = 4LL;
        v50 = 0;
        EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_AP_UIACCESS_REMOVAL_EVENT, 0LL, 3u, &UserData);
      }
      return (unsigned int)-1073741790;
    }
  }
  memset((void *)(&v39.Entries[0].CpuPriorityKey + 8), 0, 20);
  LODWORD(v39.Entries[0].OwnerTree.Root) = 48;
  *(_OWORD *)&v39.Entries[0].EntryLock = 0LL;
  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(a6 + 32) )
  {
    v35 = *(_QWORD *)(a6 + 32);
    v40[0] = 48;
    *(_QWORD *)&v40[2] = 0LL;
    DWORD2(v41) = 1536;
    *(_QWORD *)&v41 = 0LL;
    v42 = 0LL;
    inserted = SepCreateAppContainerToken(0LL, &Object, 0xF01FFu, (int)v40, 0, v35);
    if ( inserted < 0 )
      goto LABEL_19;
  }
  else
  {
    inserted = SepDuplicateToken(a2, (int)&v39.Entries[0].40, 0, 1, 0, 0, 1, (char **)&Object);
    if ( inserted < 0 )
    {
LABEL_18:
      Object = 0LL;
LABEL_19:
      v20 = 0;
      goto LABEL_20;
    }
  }
  v24 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v25 = *((_DWORD *)Object + 30);
    if ( v25 != a5 )
    {
      SepDereferenceLowBoxNumberEntry(v25, *((_QWORD *)Object + 135), v22, v23);
      *((_QWORD *)Object + 135) = 0LL;
      SepSetTokenSessionById((__int64)Object, a5, 0, 0LL, 0LL);
      *((_DWORD *)Object + 30) = a5;
      inserted = SepSetTokenLowboxNumber((__int64)Object, *((_QWORD *)Object + 98), v26, v27);
      if ( inserted < 0 )
        goto LABEL_80;
      v24 = Object;
    }
  }
  SepSetTokenSessionById((__int64)v24, a5, 0, 0LL, 0LL);
  *((_DWORD *)Object + 30) = a5;
  *((_DWORD *)Object + 50) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    *((_DWORD *)Object + 50) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      *((_DWORD *)Object + 50) |= 0x100000u;
  }
  inserted = SepSetTokenBnoIsolation((__int64)Object, 0, 0LL, 0, 0LL);
  if ( inserted >= 0 )
  {
    v29 = v39.AvailableEntryBitmap & 2;
    inserted = SepDesktopAppxSubProcessToken(
                 (PERESOURCE *)Object,
                 a1,
                 0LL,
                 v28,
                 *(_DWORD *)(a6 + 4),
                 (_BYTE *)&v39.Thread + 2,
                 (_BYTE *)&v39.Thread + 3);
    if ( inserted >= 0 )
    {
      inserted = SepMandatorySubProcessToken(
                   (_DWORD *)(a2 & -(__int64)(v29 != 0)),
                   (__int64)Object,
                   a1,
                   v39.Entries[0].TreeNode.Children);
      if ( inserted < 0 )
        goto LABEL_19;
      inserted = SepSetTrustLevelForProcessToken((__int64)Object, a1, v37);
      if ( inserted < 0 )
        goto LABEL_72;
      v30 = (unsigned __int8 *)Object;
      if ( (RtlpBootStatHandleLock.UserTime & 3) == 3 )
      {
        inserted = SepSetProcessUniqueAttribute((__int64)Object);
        if ( inserted < 0 )
          goto LABEL_72;
        v30 = (unsigned __int8 *)Object;
      }
      if ( (*((_DWORD *)v30 + 50) & 0x4000) == 0 || (a7 & 1) == 0 )
        goto LABEL_62;
      inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v30, a7);
      if ( inserted >= 0 )
      {
        v30 = (unsigned __int8 *)Object;
LABEL_62:
        if ( v39.Entries[0].TreeNode.Children[1] )
        {
          SepAddTokenOriginClaim(v39.Entries[0].TreeNode.Children[1], a9, (__int64)v30, 0);
          v30 = (unsigned __int8 *)Object;
        }
        if ( !a10 )
        {
LABEL_67:
          if ( !v29 || (v15 = v37[0], v39.Entries[0].TreeNode.Children[0]) )
            v15 = 1;
          if ( v15 )
          {
            p_EntryCount = v30;
            UserData.Ptr = 0LL;
            UserData.Size = 0;
            Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
            SepCreateAccessStateFromSubjectContext(&UserData, &v43, v44, 0, 0LL);
          }
          else
          {
            SeCreateAccessState(&v43, v44, 0LL, 0LL);
          }
          v20 = 1;
          inserted = ObInsertObjectEx((char *)Object, &v43, 0, 0, 0, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
              || (v32 = *(_QWORD *)(a6 + 32)) == 0
              || (inserted = SepAppendAceToTokenObjectAcl(
                               (__int64)Object,
                               983551,
                               *(_WORD **)(*(_QWORD *)(v32 + 8) + 16LL),
                               v31),
                  inserted >= 0) )
            {
              SepFinalizeTokenAcls(Object);
              *((_BYTE *)Object + 204) = v39.AvailableEntryBitmap & 1;
              *(_QWORD *)v39.Entries[0].TreeNode.ParentValue = Object;
              LockState = (char *)v39.Entries[0].LockState.LockState;
              *(_WORD *)(*(_QWORD *)&v39.Entries[0].LockState.0 + 1LL) = WORD1(v39.Thread);
              *LockState = v15;
LABEL_23:
              if ( v15 )
                SepDeleteAccessState((__int64)&v43);
              else
                SeDeleteAccessState((__int64)&v43);
              return (unsigned int)inserted;
            }
          }
          else
          {
            Object = 0LL;
          }
          goto LABEL_20;
        }
        inserted = SepSetTokenBnoIsolation(
                     (__int64)v30,
                     *(_BYTE *)(a10 + 32),
                     (__int128 *)a10,
                     *(_DWORD *)(a10 + 16),
                     *(struct _KLOCK_ENTRIES **)(a10 + 24));
        if ( inserted >= 0 )
        {
          v30 = (unsigned __int8 *)Object;
          goto LABEL_67;
        }
      }
LABEL_72:
      v15 = v37[0];
      v20 = 0;
      goto LABEL_20;
    }
  }
LABEL_80:
  v20 = 0;
LABEL_20:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v20 )
    goto LABEL_23;
  return (unsigned int)inserted;
}
