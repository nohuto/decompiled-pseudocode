/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1408F238C
 * Callers:
 *     ObInitServerSilo @ 0x1407C5350 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x140855630 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140C5EF38 (CmObReferenceObjectByName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x14041C210 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F7DB0 (ObpFreeObjectNameBuffer.c)
 *     ObpAdjustAccessMask @ 0x140902950 (ObpAdjustAccessMask.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PVOID *a7)
{
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v20; // r9
  PVOID v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  PVOID Object; // [rsp+78h] [rbp-31h] BYREF
  __int128 v30; // [rsp+80h] [rbp-29h] BYREF
  __int128 v31; // [rsp+90h] [rbp-19h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-9h]
  __int128 v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+C0h] [rbp+17h]
  int AccessState; // [rsp+F8h] [rbp+4Fh] BYREF

  Object = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v15 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[8].L,
        ++L->TotalAllocates,
        (v15 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (++L->AllocateMisses, (v15 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
  {
    *(_DWORD *)v15 = CurrentPrcb->Number;
  }
  if ( !v15 )
    return 3221225626LL;
  v16 = a5;
  LOBYTE(v13) = a5;
  LOBYTE(v14) = a5;
  AccessState = ObpCaptureObjectCreateInformation(v14, v13, a1, &v30, v15 + 160, 1);
  if ( AccessState >= 0 )
  {
    if ( !a2 )
    {
      AccessState = SeCreateAccessState(v15, v15 + 224, a3, a4 + 76);
      if ( AccessState < 0 )
      {
LABEL_18:
        if ( a2 == v15 )
          SeDeleteAccessState(a2);
        v24 = *(_QWORD *)(v15 + 192);
        if ( v24 )
        {
          LOBYTE(v17) = *(_BYTE *)(v15 + 176);
          LOBYTE(v18) = 1;
          SeReleaseSecurityDescriptor(v24, v17, v18);
          *(_QWORD *)(v15 + 192) = 0LL;
        }
        if ( *((_QWORD *)&v30 + 1) )
          ObpFreeObjectNameBuffer(&v30);
        goto LABEL_24;
      }
      a2 = v15;
    }
    AccessState = ObpAdjustAccessMask(a2);
    if ( AccessState >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      AccessState = ObpLookupObjectName(
                      *(_QWORD *)(v15 + 168),
                      v16,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      a2,
                      v15 + 448,
                      0LL,
                      (__int64)&Object);
      if ( AccessState >= 0 )
      {
        ObpReleaseLookupContext(v15 + 448);
        v21 = Object;
        v22 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v23 = ObTypeIndexTable[v22];
        if ( (*(_DWORD *)(v23 + 72) & *(_DWORD *)(v15 + 160)) != 0 )
        {
          ObfDereferenceObject(Object);
          AccessState = -1073741811;
        }
        else
        {
          if ( SepLearningModeTokenCount )
          {
            *(_QWORD *)&v32 = v23 + 16;
            *((_QWORD *)&v32 + 1) = &v30;
            *(_QWORD *)&v33 = *(_QWORD *)(v15 + 168);
            SeSetLearningModeObjectInformation((__int64)&v31);
            v21 = Object;
          }
          LOBYTE(v20) = v16;
          if ( (unsigned __int8)ObpCheckObjectReference(v21, a2, v22, v20, &AccessState) )
            *a7 = Object;
          else
            ObfDereferenceObject(Object);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_18;
  }
LABEL_24:
  v25 = KeGetCurrentPrcb();
  v26 = v25->PPLookasideList[8].P;
  ++v26->TotalFrees;
  if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
    || (++v26->FreeMisses,
        v26 = v25->PPLookasideList[8].L,
        ++v26->TotalFrees,
        LOWORD(v26->ListHead.Alignment) < v26->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v26->ListHead, (PSLIST_ENTRY)v15);
  }
  else
  {
    ++v26->FreeMisses;
    guard_dispatch_icall_no_overrides(v15, (__int64)v25);
  }
  return (unsigned int)AccessState;
}
