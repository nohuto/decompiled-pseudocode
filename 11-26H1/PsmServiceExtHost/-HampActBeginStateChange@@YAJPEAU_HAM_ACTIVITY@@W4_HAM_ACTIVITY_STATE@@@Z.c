/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180012A20
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180016FA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000A6C0 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x1800172C0 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001B400 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *Value; // rbx
  struct _HAM_DEPENDENCY_GROUP *v7; // rbx
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  struct _HAM_DEPENDENCY_GROUP *v12; // rbx
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // esi
  char v17; // [rsp+30h] [rbp-69h] BYREF
  char v18; // [rsp+31h] [rbp-68h] BYREF
  char v19; // [rsp+32h] [rbp-67h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-65h]
  _BYTE v21[12]; // [rsp+38h] [rbp-61h] BYREF
  int v22; // [rsp+44h] [rbp-55h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v25; // [rsp+70h] [rbp-29h]
  int v26; // [rsp+78h] [rbp-21h]
  int v27; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v28; // [rsp+80h] [rbp-19h]
  __int64 v29; // [rsp+88h] [rbp-11h]
  char *v30; // [rsp+90h] [rbp-9h]
  __int64 v31; // [rsp+98h] [rbp-1h]
  char *v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  char *v34; // [rsp+B0h] [rbp+17h]
  __int64 v35; // [rsp+B8h] [rbp+1Fh]

  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = a2;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v7 = HampHostCheckWaitEnterDependencyStateChange((struct _RM_HAM_ACTIVITY_HOST *)v4);
  else
    v7 = 0LL;
  if ( (*(_BYTE *)(a1 + 552) & 1) != 0 )
  {
    v14 = -1073740682;
  }
  else
  {
    v8 = *(unsigned __int8 *)(a1 + 562);
    *(_DWORD *)v21 = 12;
    *(_QWORD *)&v21[4] = 2LL;
    v22 = 14;
    v9 = *(_DWORD *)&v21[4 * v5 - 4];
    if ( _bittest(&v9, v8) )
    {
      if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
      {
        v17 = *(_BYTE *)(a1 + 563);
        *(_QWORD *)v21 = *(_QWORD *)(a1 + 40);
        v18 = v8;
        v34 = &v17;
        v32 = &v18;
        v30 = &v19;
        v28 = v21;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800E12B8;
        v19 = v5;
        v35 = 1LL;
        v33 = 1LL;
        v31 = 1LL;
        v29 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 8LL;
        UserData.Size = *(unsigned __int16 *)off_1800E12B8;
        v25 = &unk_1800CFD37;
        UserData.Reserved = 2;
        v26 = 66;
        v27 = 1;
        v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
      v10 = *(_DWORD *)(a1 + 552) | 1;
      *(_BYTE *)(a1 + 562) = v5;
      *(_DWORD *)(a1 + 552) = v10;
      if ( v8 == 4 )
        goto LABEL_13;
      v15 = v8 - 1;
      if ( !v15 )
        goto LABEL_13;
      v16 = v15 - 1;
      if ( !v16 )
      {
        HampActSetPendState(a1, 6u);
        goto LABEL_14;
      }
      if ( v16 == 1 )
LABEL_13:
        *(_DWORD *)(a1 + 552) = v10 & 0xFFFFFFDF;
LABEL_14:
      if ( v7 )
      {
        *(_DWORD *)(a1 + 552) |= 2u;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 80);
        v12 = *(struct _HAM_DEPENDENCY_GROUP **)(v11 + 704);
        if ( v12 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 552) & 2) == 0 )
        {
          HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v11 + 704));
          *(_DWORD *)(a1 + 552) ^= ((unsigned __int8)*(_DWORD *)(a1 + 552) ^ (unsigned __int8)(2
                                                                                             * HampDepGroupTryEnterStateChange(
                                                                                                 v12,
                                                                                                 (unsigned __int64 *)(*(_QWORD *)(a1 + 80) + 624LL)))) & 2;
          HampDepGroupReleaseLockExclusive(v12);
        }
      }
      return 0LL;
    }
    v14 = -1073700861;
  }
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v4);
  if ( v7 )
    HampDepGroupRunStateChangeWorker(v7);
  return v14;
}
