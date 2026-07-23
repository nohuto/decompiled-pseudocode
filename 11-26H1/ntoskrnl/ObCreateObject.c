/*
 * XREFs of ObCreateObject @ 0x14090EB60
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     KiAllocatePrcbThread @ 0x1405EECFC (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x1406D3AF0 (ExCreateDpcEvent.c)
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140CFEA3C (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObject(
        unsigned __int8 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 v11; // r12
  _GENERAL_LOOKASIDE *P; // r14
  _DWORD *v14; // r13
  __int64 v15; // rdi
  int Information; // ebx
  __int64 v17; // rbx
  _QWORD *ClientToken; // rbx
  unsigned int v19; // r14d
  char v20; // al
  unsigned __int8 v21; // r12
  __int64 PrimaryToken; // rsi
  _QWORD **v23; // rcx
  void *v24; // r15
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v27; // rtt
  _SLIST_ENTRY *v28; // r8
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  void *v31; // rcx
  struct _KPRCB *v32; // rdx
  _GENERAL_LOOKASIDE *v33; // rcx
  PSE_EXPORTS v35; // r13
  int v36; // ecx
  int v37; // eax
  __int64 v38; // r8
  struct _KLOCK_ENTRIES *v39; // r9
  __int64 v40; // rdi
  int v41; // r11d
  __int64 *v42; // r9
  __int64 v43; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 *v46; // rdx
  __int64 v47; // r9
  _UNKNOWN **v48; // r8
  _DWORD *v49; // rax
  _GENERAL_LOOKASIDE *L; // r14
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-61h] BYREF
  _DWORD *v53; // [rsp+68h] [rbp-41h]
  __int64 v54; // [rsp+70h] [rbp-39h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD *v56; // [rsp+88h] [rbp-21h]
  unsigned int v57[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v58; // [rsp+98h] [rbp-11h] BYREF
  int v59; // [rsp+A0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v56 = a9;
  v11 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = a2;
  v53 = a2;
  *(_OWORD *)ListEntry = 0LL;
  v54 = 0LL;
  ++P->TotalAllocates;
  v15 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v15 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (++L->AllocateMisses, (v15 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
  {
    *(_DWORD *)v15 = CurrentPrcb->Number;
  }
  if ( v15 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, v11, a3, ListEntry, v15, 0);
    if ( Information < 0 )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->PPLookasideList[4].P;
      ++v33->TotalFrees;
      if ( LOWORD(v33->ListHead.Alignment) >= v33->Depth )
      {
        ++v33->FreeMisses;
        v33 = v32->PPLookasideList[4].L;
        ++v33->TotalFrees;
        if ( LOWORD(v33->ListHead.Alignment) >= v33->Depth )
        {
LABEL_49:
          ++v33->FreeMisses;
          guard_dispatch_icall_no_overrides(v15, (__int64)v32);
          return (unsigned int)Information;
        }
      }
LABEL_33:
      RtlpInterlockedPushEntrySList(&v33->ListHead, (PSLIST_ENTRY)v15);
      return (unsigned int)Information;
    }
    if ( (*(_DWORD *)v15 & v14[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)v15 & 0x10) == 0 )
    {
LABEL_39:
      v36 = a7;
      if ( !a7 )
        v36 = v14[26];
      v37 = a8;
      if ( !a8 )
        v37 = v14[27];
      *(_DWORD *)(v15 + 24) = v37;
      *(_DWORD *)(v15 + 20) = v36;
      Information = ObpAllocateObject(v15, v11, (_DWORD)v14, (unsigned int)ListEntry, a6, (__int64)&v54, 0LL);
      if ( Information >= 0 )
      {
        v40 = v54;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v54, 1, v38, v39);
          ObpPushStackInfo(v40, 1, 0x746C6644u);
        }
        *v56 = v40 + 48;
        return (unsigned int)Information;
      }
LABEL_24:
      v28 = ListEntry[1];
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->PPLookasideList[5].P;
          ++v30->TotalFrees;
          if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
            || (++v30->FreeMisses,
                v30 = v29->PPLookasideList[5].L,
                ++v30->TotalFrees,
                LOWORD(v30->ListHead.Alignment) < v30->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v30->ListHead, v28);
          }
          else
          {
            ++v30->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v28, (__int64)v29);
          }
        }
        else
        {
          ExFreePoolWithTag(ListEntry[1], 0);
        }
      }
      v31 = *(void **)(v15 + 32);
      if ( v31 )
      {
        if ( *(_BYTE *)(v15 + 16) <= 1u )
          ExFreePoolWithTag(v31, 0);
        *(_QWORD *)(v15 + 32) = 0LL;
      }
      v32 = KeGetCurrentPrcb();
      v33 = v32->PPLookasideList[4].P;
      ++v33->TotalFrees;
      if ( LOWORD(v33->ListHead.Alignment) >= v33->Depth )
      {
        ++v33->FreeMisses;
        v33 = v32->PPLookasideList[4].L;
        ++v33->TotalFrees;
        if ( LOWORD(v33->ListHead.Alignment) >= v33->Depth )
          goto LABEL_49;
      }
      goto LABEL_33;
    }
    v17 = *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v58 = v17;
    ClientToken = SubjectContext.ClientToken;
    v19 = 1;
    v57[0] = 1;
    v57[1] = 1;
    v59 = 0;
    if ( !a1 )
    {
      PrimaryToken = (__int64)SubjectContext.PrimaryToken;
      v21 = 1;
LABEL_14:
      if ( SeTokenLeakTracking )
      {
        if ( PrimaryToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(PrimaryToken + 1144) + 284LL));
          PrimaryToken = (__int64)SubjectContext.PrimaryToken;
          if ( SubjectContext.PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
          ClientToken = SubjectContext.ClientToken;
        }
        if ( ClientToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
          if ( SubjectContext.ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
          PrimaryToken = (__int64)SubjectContext.PrimaryToken;
        }
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&Process[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
      do
      {
        if ( (PrimaryToken ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)PrimaryToken, 0x75536553u);
          goto LABEL_20;
        }
        v27 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&Process[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v27 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(PrimaryToken - 48, -1, 0x75536553u);
LABEL_20:
      SubjectContext.PrimaryToken = 0LL;
      if ( SubjectContext.ClientToken )
        ObfDereferenceObjectWithTag(SubjectContext.ClientToken, 0x75536553u);
      SubjectContext.ClientToken = 0LL;
      if ( !v21 )
      {
        Information = -1073741727;
        goto LABEL_24;
      }
      v11 = a4;
      goto LABEL_39;
    }
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v21 = 0;
LABEL_11:
        PrimaryToken = (__int64)SubjectContext.PrimaryToken;
        v23 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
          v23 = (_QWORD **)ClientToken;
        v24 = (void *)*v23[19];
        if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v24) )
        {
          v35 = SeExports;
          if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v24) && !RtlEqualSid(v35->SeLocalServiceSid, v24) )
            goto LABEL_37;
          v41 = 0;
          if ( v19 )
          {
            v42 = &v58;
            v43 = v19;
            do
            {
              Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
              Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
              while ( *(_DWORD *)v42 != LODWORD(Flink->Flink) || *((_DWORD *)v42 + 1) != HIDWORD(Blink->Flink->Flink) )
              {
                Flink = Blink->Blink;
                Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
                if ( !Flink )
                  goto LABEL_61;
              }
              ++v41;
LABEL_61:
              v42 = (__int64 *)((char *)v42 + 12);
              --v43;
            }
            while ( v43 );
            v46 = &v58;
            v47 = v19;
            do
            {
              v48 = &SepServicesFilterPrivileges;
              v49 = SepServicesFilterPrivileges;
              while ( *(_DWORD *)v46 != *v49 || *((_DWORD *)v46 + 1) != *((_DWORD *)*v48 + 1) )
              {
                v49 = v48[1];
                ++v48;
                if ( !v49 )
                  goto LABEL_66;
              }
              ++v41;
LABEL_66:
              v46 = (__int64 *)((char *)v46 + 12);
              --v47;
            }
            while ( v47 );
            if ( v41 != v19 )
            {
LABEL_37:
              SepAdtPrivilegedServiceAuditAlarm(
                (__int64)&SubjectContext,
                &SeSubsystemName,
                0LL,
                (__int64)ClientToken,
                PrimaryToken,
                v57,
                v21);
              PrimaryToken = (__int64)SubjectContext.PrimaryToken;
              ClientToken = SubjectContext.ClientToken;
            }
          }
          v14 = v53;
        }
        goto LABEL_14;
      }
    }
    else
    {
      ClientToken = SubjectContext.PrimaryToken;
    }
    v20 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v58, 1u, 1, a1);
    ClientToken = SubjectContext.ClientToken;
    v21 = v20;
    v19 = v57[0];
    goto LABEL_11;
  }
  return 3221225626LL;
}
