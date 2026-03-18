/*
 * XREFs of NtTraceEvent @ 0x140411E40
 * Callers:
 *     DifNtTraceEventWrapper @ 0x14068F980 (DifNtTraceEventWrapper.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwTraceEvent @ 0x140216BB0 (EtwTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     EtwpCloseLogger @ 0x140218150 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1402181E4 (EtwpOpenLogger.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EtwTraceRaw @ 0x140516B78 (EtwTraceRaw.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     EtwpSetMark @ 0x140775508 (EtwpSetMark.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140939130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateEnableMask @ 0x140A6F8F4 (EtwpUpdateEnableMask.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 */

__int64 __fastcall NtTraceEvent(void *Src, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  char PreviousMode; // r14
  int v9; // eax
  volatile void *ULong64FromUser; // rax
  int ULongFromUser; // eax
  unsigned __int16 v12; // ax
  int v13; // eax
  __int64 v14; // r13
  char UCharFromUser; // al
  NTSTATUS v16; // edi
  unsigned __int16 *v17; // r15
  __int64 v18; // r10
  __int64 *v19; // r8
  unsigned int v20; // r12d
  PVOID v21; // rax
  int v22; // edx
  int v23; // edx
  __int64 v24; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v26; // eax
  unsigned int v27; // edi
  int v29; // edi
  unsigned __int16 v30; // si
  char *v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  struct _LIST_ENTRY *v34; // r13
  int v35; // edx
  __int64 v36; // r15
  int v37; // r12d
  int v38; // edi
  int v40; // r9d
  __int64 v41; // r8
  __int64 v42; // r8
  struct _LIST_ENTRY *v43; // r12
  __int64 Blink_low; // rcx
  char v45; // r15
  volatile void *v46; // rax
  int v47; // eax
  int v48; // eax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  _QWORD *v51; // r13
  struct _KLOCK_ENTRIES *v52; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v54; // rax
  volatile unsigned __int8 *v55; // rdx
  unsigned int v56; // r9d
  AutoBoost *v57; // rcx
  signed __int64 v58; // rax
  signed __int64 v59; // rdx
  __int64 v60; // rtt
  unsigned int v61; // r12d
  struct _KLOCK_ENTRIES *v62; // r9
  struct _KTHREAD *v63; // rax
  AutoBoost *v64; // rax
  volatile unsigned __int8 *v65; // rdx
  int v66; // r8d
  unsigned int v67; // r9d
  AutoBoost *v68; // rcx
  signed __int64 v69; // rax
  signed __int64 v70; // rdx
  __int64 v71; // rtt
  __int64 v72; // rax
  int v73; // r9d
  int v74; // ecx
  char *v75; // rax
  int v76; // edx
  int v77; // edx
  int v78; // [rsp+80h] [rbp-108h] BYREF
  volatile void *Address; // [rsp+88h] [rbp-100h]
  int v80; // [rsp+90h] [rbp-F8h]
  volatile void *v81; // [rsp+98h] [rbp-F0h] BYREF
  __int64 *v82; // [rsp+A0h] [rbp-E8h]
  int v83; // [rsp+A8h] [rbp-E0h]
  __int16 UShortFromUser; // [rsp+ACh] [rbp-DCh]
  unsigned __int16 v85; // [rsp+B0h] [rbp-D8h]
  __int64 v86; // [rsp+B8h] [rbp-D0h]
  __int64 v87; // [rsp+C0h] [rbp-C8h]
  int v88; // [rsp+C8h] [rbp-C0h]
  int v89; // [rsp+CCh] [rbp-BCh]
  int v90; // [rsp+D0h] [rbp-B8h]
  int v91; // [rsp+D4h] [rbp-B4h]
  int v92; // [rsp+D8h] [rbp-B0h]
  int v93; // [rsp+DCh] [rbp-ACh]
  int v94; // [rsp+E0h] [rbp-A8h]
  __int64 v95; // [rsp+E8h] [rbp-A0h]
  volatile void *v96; // [rsp+F0h] [rbp-98h]
  __int64 v97; // [rsp+F8h] [rbp-90h]
  __int64 v98; // [rsp+100h] [rbp-88h]
  volatile void *v99; // [rsp+108h] [rbp-80h]
  PVOID Object[2]; // [rsp+110h] [rbp-78h] BYREF
  __int128 v101; // [rsp+120h] [rbp-68h] BYREF
  __int128 v102; // [rsp+130h] [rbp-58h]

  v4 = (__int64)a4;
  v5 = a3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = a2 & 0xFF00;
  switch ( v9 )
  {
    case 1024:
      Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
      v82 = (__int64 *)Flink;
      v26 = (unsigned __int16)Src;
      v27 = 0;
      if ( (_WORD)v26 != 0xFFFF )
        v27 = v26;
      if ( v27 < LODWORD(Flink[1].Flink) )
      {
        if ( (unsigned int)v5 > 0xFFDF )
          return 3221225621LL;
        if ( PreviousMode == 1 )
        {
          ProbeForRead((volatile void *)v4, v5 + 32, 4u);
          v98 = v4 + 32;
          UShortFromUser = RtlReadUShortFromUser(v4 + 6);
          Object[0] = (PVOID)(v4 + 32);
          Object[1] = (PVOID)(unsigned int)v5;
          EtwpLogSystemEventUnsafe(
            (_DWORD)v82,
            (unsigned int)Object,
            (unsigned int)KeGetCurrentThread(),
            v27,
            1,
            UShortFromUser,
            a2 & 0xC00F00FF | 0x3100,
            1);
          return 0;
        }
        return 3221225659LL;
      }
      return 3221225485LL;
    case 768:
      if ( PreviousMode )
      {
        ProbeForRead(a4, 0x78uLL, 4u);
        ULong64FromUser = (volatile void *)RtlReadULong64FromUser(v4 + 88);
      }
      else
      {
        ULong64FromUser = (volatile void *)a4[11];
      }
      Address = ULong64FromUser;
      v99 = ULong64FromUser;
      if ( PreviousMode )
        ULongFromUser = RtlReadULongFromUser(v4 + 84);
      else
        ULongFromUser = *(_DWORD *)(v4 + 84);
      v78 = ULongFromUser;
      v92 = ULongFromUser;
      if ( PreviousMode )
        v12 = RtlReadUShortFromUser(v4 + 82);
      else
        v12 = *(_WORD *)(v4 + 82);
      v87 = v12;
      if ( PreviousMode )
        v13 = RtlReadULongFromUser(v4 + 112);
      else
        v13 = *(_DWORD *)(v4 + 112);
      v80 = v13;
      v93 = v13;
      if ( PreviousMode )
      {
        RtlReadULong64FromUser(v4 + 48);
        RtlReadUCharFromUser(v4 + 44);
      }
      v14 = 0LL;
      v95 = 0LL;
      if ( PreviousMode )
        UCharFromUser = RtlReadUCharFromUser(v4 + 80);
      else
        UCharFromUser = *(_BYTE *)(v4 + 80);
      if ( UCharFromUser )
      {
        v14 = v4 + 96;
        v95 = v4 + 96;
      }
      Object[0] = 0LL;
      v16 = ObReferenceObjectByHandle(Src, 0x800u, EtwpRegistrationObjectType, 1, Object, 0LL);
      if ( v16 >= 0 )
      {
        v81 = 0LL;
        v17 = (unsigned __int16 *)Object[0];
        v18 = *((_QWORD *)Object[0] + 4);
        v86 = v18;
        v19 = (__int64 *)*((_QWORD *)Object[0] + 5);
        v82 = v19;
        v20 = (unsigned int)a2 >> 31;
        v101 = 0LL;
        v102 = 0LL;
        v21 = (PVOID)((*((_QWORD *)Object[0] + 14) + 28LL) & -(__int64)(*((_QWORD *)Object[0] + 14) != 0LL));
        Object[0] = v21;
        v22 = v17[50];
        if ( (_WORD)v22 )
        {
          v16 = EtwpWriteUserEvent(
                  v18,
                  v22,
                  (unsigned __int16)v20,
                  v87,
                  v80,
                  v4,
                  v14,
                  v78,
                  (__int64)Address,
                  (__int64)&v101,
                  0LL,
                  v17[49],
                  (__int64)v21,
                  (__int64)&v81,
                  PreviousMode);
          v21 = Object[0];
          LODWORD(v18) = v86;
          v19 = v82;
        }
        v23 = v17[51];
        if ( (_WORD)v23 )
          v16 = EtwpWriteUserEvent(
                  v18,
                  v23,
                  (unsigned __int16)v20,
                  v87,
                  v80,
                  v4,
                  v14,
                  v78,
                  (__int64)Address,
                  (__int64)&v101,
                  (__int64)v19,
                  v17[49],
                  (__int64)v21,
                  (__int64)&v81,
                  PreviousMode);
        v24 = v86;
        if ( *(_QWORD *)(v86 + 656) )
        {
          v101 = 0LL;
          v102 = 0LL;
          v76 = v17[52];
          if ( (_WORD)v76 )
          {
            v16 = EtwpWriteUserEvent(
                    *(_QWORD *)(v86 + 656),
                    v76,
                    (unsigned __int16)v20,
                    0,
                    v80,
                    v4,
                    v14,
                    v78,
                    (__int64)Address,
                    (__int64)&v101,
                    0LL,
                    v17[49],
                    (__int64)Object[0],
                    (__int64)&v81,
                    PreviousMode);
            v24 = v86;
          }
          v77 = v17[53];
          if ( (_WORD)v77 )
            v16 = EtwpWriteUserEvent(
                    *(_QWORD *)(v24 + 656),
                    v77,
                    (unsigned __int16)v20,
                    0,
                    v80,
                    v4,
                    v14,
                    v78,
                    (__int64)Address,
                    (__int64)&v101,
                    v82[82],
                    v17[49],
                    (__int64)Object[0],
                    (__int64)&v81,
                    PreviousMode);
        }
        ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      }
      return (unsigned int)v16;
    case 512:
      v82 = (__int64 *)Src;
      v81 = 0LL;
      if ( a3 == 40 )
      {
        if ( PreviousMode == 1 )
        {
          Address = a4;
          ProbeForRead(a4, a3, 4u);
          v29 = RtlReadULongFromUser((char *)Address + 24);
          v83 = v29;
          v30 = RtlReadUShortFromUser((char *)Address + 4);
          v85 = v30;
          v31 = (char *)Address + 32;
          if ( a2 >= 0 )
          {
            RtlCopyFromUser(&v81, v31, 8uLL);
          }
          else
          {
            RtlCopyFromUser(&v81, v31, 4uLL);
            v29 |= 0x80u;
            v83 = v29;
          }
          v32 = RtlReadULongFromUser((char *)Address + 28);
          v33 = v32;
          if ( v32 <= 0x10000 )
          {
            ProbeForRead(v81, v32, 1u);
            HIDWORD(v82) = v33;
            return EtwpTraceMessageVa((__int64)v82, v29 | 0x40u, (_DWORD *)Address + 2, v30, (__int64)v81, 1u);
          }
          v16 = -1073741811;
          v94 = -1073741811;
          return (unsigned int)v16;
        }
        return 3221225659LL;
      }
      return 3221225485LL;
    case 1280:
      v34 = PsGetCurrentServerSiloGlobals()[52].Flink;
      if ( LODWORD(v34[271].Blink) != v35 )
        return 3221225506LL;
      ProbeForRead((volatile void *)v4, 0x78uLL, 4u);
      if ( PreviousMode )
        v36 = RtlReadULong64FromUser(v4 + 88);
      else
        v36 = *(_QWORD *)(v4 + 88);
      v97 = v36;
      if ( PreviousMode )
        v37 = RtlReadULongFromUser(v4 + 84);
      else
        v37 = *(_DWORD *)(v4 + 84);
      v90 = v37;
      if ( PreviousMode )
        v38 = RtlReadULongFromUser(v4 + 112);
      else
        v38 = *(_DWORD *)(v4 + 112);
      v91 = v38;
      if ( PreviousMode )
      {
        RtlReadULong64FromUser(v4 + 48);
        RtlReadUCharFromUser(v4 + 44);
      }
      return (unsigned int)EtwpWriteUserEvent(
                             (int)v34 + 24,
                             LOWORD(v34[271].Flink),
                             0,
                             0,
                             v38,
                             v4,
                             0LL,
                             v37,
                             v36,
                             0LL,
                             0LL,
                             0,
                             0LL,
                             0LL,
                             PreviousMode);
    case 256:
      v40 = ((a2 >> 31) & 0xFFF60000) - 1072431104;
      v41 = 48LL;
      return (unsigned int)EtwTraceEvent((unsigned __int16)Src, (_WORD *)v4, v41, v40, PreviousMode);
    case 1536:
      LOBYTE(v78) = 0;
      v43 = PsGetCurrentServerSiloGlobals()[52].Flink;
      Blink_low = (unsigned __int16)Src;
      LODWORD(Address) = (unsigned __int16)Src;
      v45 = 1;
      if ( (((_WORD)Src + 1) & 0xFFFE) == 0 )
      {
        Blink_low = LOBYTE(v43[281].Blink);
        LODWORD(Address) = LOBYTE(v43[281].Blink);
      }
      if ( (unsigned int)Blink_low < LODWORD(v43[1].Flink)
        && (LOBYTE(v42) = PreviousMode, v72 = EtwpOpenLogger(Blink_low, (__int64)v43, v42, (char *)&v78), v74 = v72, v72) )
      {
        if ( (*(_DWORD *)(v72 + 12) & 0x2000000) != 0 )
        {
          v75 = (char *)&v43[2 * *(unsigned __int8 *)(v72 + 818) + 284].Blink + 4;
          if ( !v75 || (*((_DWORD *)v75 + 1) & 0x28) == 0 )
            v45 = 0;
          LOBYTE(v73) = v45;
          v16 = EtwpSetMark(v74, v4, v5, v73, PreviousMode);
        }
        else
        {
          v16 = -1073741811;
        }
        EtwpCloseLogger((unsigned int)Address, (__int64)v43, v78);
      }
      else
      {
        return (unsigned int)-1073741816;
      }
      return (unsigned int)v16;
  }
  if ( v9 != 1792 )
  {
    if ( v9 != 2048 )
    {
      if ( v9 != 2304 )
        return (unsigned int)-1073741811;
      if ( a2 != 2304 || !a3 || !a4 )
        return 3221225485LL;
      LOBYTE(a4) = PreviousMode;
      return (unsigned int)EtwTraceRaw(Src, v4, a3, a4);
    }
    v40 = ((a2 >> 31) & 0xFFF60000) - 1072365568;
    v41 = 72LL;
    return (unsigned int)EtwTraceEvent((unsigned __int16)Src, (_WORD *)v4, v41, v40, PreviousMode);
  }
  *(_OWORD *)Object = 0LL;
  if ( !Src )
    return 3221225485LL;
  ProbeForRead(a4, 0x78uLL, 4u);
  ProbeForRead(Src, 0x10uLL, 4u);
  if ( PreviousMode )
    v46 = (volatile void *)RtlReadULong64FromUser(v4 + 88);
  else
    v46 = *(volatile void **)(v4 + 88);
  v81 = v46;
  v96 = v46;
  if ( PreviousMode )
    v47 = RtlReadULongFromUser(v4 + 84);
  else
    v47 = *(_DWORD *)(v4 + 84);
  v80 = v47;
  v88 = v47;
  if ( PreviousMode )
    v48 = RtlReadULongFromUser(v4 + 112);
  else
    v48 = *(_DWORD *)(v4 + 112);
  LODWORD(Address) = v48;
  v89 = v48;
  if ( PreviousMode )
  {
    RtlReadULong64FromUser(v4 + 48);
    RtlReadUCharFromUser(v4 + 44);
    RtlCopyFromUser(Object, Src, 0x10uLL);
  }
  else
  {
    RtlCopyVolatileMemory(Object, Src, 0x10uLL);
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[52].Flink, Object, 0LL);
  v51 = (_QWORD *)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v16 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      if ( v16 >= 0 )
      {
        LOWORD(v78) = 0;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v54 = (AutoBoost *)KeAbPreAcquire((__int64)(v51 + 83), 0LL, 0LL, v52);
        v57 = v54;
        v82 = (__int64 *)v54;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v51 + 166, 0LL) )
        {
          ExfAcquirePushLockExclusiveEx(v51 + 83, v54, (__int64)(v51 + 83));
          v57 = (AutoBoost *)v82;
        }
        if ( v57 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v55) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v57 + 33), v55, 1u, v56);
          }
          else
          {
            *((_BYTE *)v57 + 10) = 1;
          }
        }
        v51[84] = KeGetCurrentThread();
        LOBYTE(v56) = 1;
        EtwpUpdateEnableMask((_DWORD)v51, 0, 0, v56, (__int64)&v78);
        v51[84] = 0LL;
        _m_prefetchw(v51 + 83);
        v58 = v51[83];
        v59 = v58 - 16;
        if ( (v58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v59 = 0LL;
        if ( (v58 & 2) != 0 || (v60 = v51[83], v60 != _InterlockedCompareExchange64(v51 + 83, v59, v58)) )
          ExfReleasePushLock(v51 + 83);
        KeAbPostRelease((unsigned __int64)(v51 + 83));
        KeLeaveCriticalRegion();
        v61 = (unsigned int)a2 >> 31;
        v16 = EtwpWriteUserEvent(
                (_DWORD)v51,
                (unsigned __int16)v78,
                (unsigned __int16)v61,
                0,
                (_DWORD)Address,
                v4,
                0LL,
                v80,
                (__int64)v81,
                0LL,
                0LL,
                0,
                0LL,
                0LL,
                PreviousMode);
        if ( v51[82] )
        {
          LOWORD(v78) = 0;
          v63 = KeGetCurrentThread();
          --v63->KernelApcDisable;
          v64 = (AutoBoost *)KeAbPreAcquire((__int64)(v51 + 83), 0LL, 0LL, v62);
          v68 = v64;
          v82 = (__int64 *)v64;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v51 + 166, 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(v51 + 83, v64, (__int64)(v51 + 83));
            v68 = (AutoBoost *)v82;
          }
          if ( v68 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
            {
              LOBYTE(v65) = 2;
              AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v68 + 33), v65, 1u, v67);
            }
            else
            {
              *((_BYTE *)v68 + 10) = 1;
            }
          }
          v51[84] = KeGetCurrentThread();
          LOBYTE(v67) = 1;
          LOBYTE(v66) = 1;
          EtwpUpdateEnableMask(v51[82], 0, v66, v67, (__int64)&v78);
          v51[84] = 0LL;
          _m_prefetchw(v51 + 83);
          v69 = v51[83];
          v70 = v69 - 16;
          if ( (v69 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v70 = 0LL;
          if ( (v69 & 2) != 0 || (v71 = v51[83], v71 != _InterlockedCompareExchange64(v51 + 83, v70, v69)) )
            ExfReleasePushLock(v51 + 83);
          KeAbPostRelease((unsigned __int64)(v51 + 83));
          KeLeaveCriticalRegion();
          v16 = EtwpWriteUserEvent(
                  v51[82],
                  (unsigned __int16)v78,
                  (unsigned __int16)v61,
                  0,
                  (_DWORD)Address,
                  v4,
                  0LL,
                  v80,
                  (__int64)v81,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  PreviousMode);
        }
      }
      EtwpUnreferenceGuidEntry((ULONG_PTR)v51);
      return (unsigned int)v16;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return 3221226242LL;
}
