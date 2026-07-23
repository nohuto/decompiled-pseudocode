/*
 * XREFs of NtQueryObject @ 0x140921430
 * Callers:
 *     DifNtQueryObjectWrapper @ 0x140688580 (DifNtQueryObjectWrapper.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A3ADA0 (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14041A930 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x140923260 (ObQueryTypeInfo.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  ULONG HandleAttributes; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v10; // r8d
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  __int64 *v14; // r15
  ACCESS_MASK GrantedAccess; // r11d
  _QWORD *v16; // r8
  __int64 v17; // r10
  __int32 v18; // r14d
  NTSTATUS NameStringMode; // eax
  PULONG v20; // rcx
  __int32 v21; // r14d
  _QWORD *v22; // rax
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  PVOID v25; // r10
  __int64 v26; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v28; // rbx
  LegacyAutoBoost *v29; // r14
  signed __int64 v30; // rdx
  _QWORD *v31; // r14
  AutoBoost *v32; // rcx
  int v33; // eax
  __int32 v34; // r14d
  char v35; // al
  _BYTE *v36; // r14
  char v37; // bl
  void *v38; // rax
  struct _KLOCK_ENTRIES *v39; // r9
  struct _OBJECT_HANDLE_INFORMATION v40; // r12
  int v41; // r14d
  void *v42; // rsi
  __int64 v43; // r12
  struct _KTHREAD *v44; // rax
  signed __int64 *v45; // rbx
  AutoBoost *v46; // rcx
  signed __int64 v47; // rdx
  __int64 v48; // r12
  void *v49; // rcx
  signed __int64 v50; // rax
  NTSTATUS v51; // ebx
  __int64 v52; // r8
  int v53; // edx
  unsigned int i; // ecx
  char *v55; // rax
  unsigned int v56; // r14d
  __int64 v57; // rcx
  NTSTATUS v58; // eax
  int Object; // [rsp+20h] [rbp-158h]
  unsigned int v60; // [rsp+58h] [rbp-120h] BYREF
  AutoBoost *v61; // [rsp+60h] [rbp-118h]
  KPROCESSOR_MODE v62; // [rsp+6Ah] [rbp-10Eh]
  void *v63; // [rsp+70h] [rbp-108h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v65; // [rsp+80h] [rbp-F8h]
  __int64 *v66; // [rsp+88h] [rbp-F0h]
  PVOID v67; // [rsp+90h] [rbp-E8h] BYREF
  NTSTATUS v68; // [rsp+98h] [rbp-E0h]
  ACCESS_MASK v69; // [rsp+9Ch] [rbp-DCh]
  int v70; // [rsp+A0h] [rbp-D8h]
  int v71; // [rsp+A4h] [rbp-D4h]
  PULONG v72; // [rsp+A8h] [rbp-D0h]
  int v73; // [rsp+BCh] [rbp-BCh]
  PULONG v74; // [rsp+D0h] [rbp-A8h]
  __int64 v75; // [rsp+D8h] [rbp-A0h]
  __int128 Src; // [rsp+100h] [rbp-78h] BYREF
  __int128 v77; // [rsp+110h] [rbp-68h]
  __int128 v78; // [rsp+120h] [rbp-58h]
  __int64 v79; // [rsp+130h] [rbp-48h]

  LODWORD(v61) = ObjectInformationLength;
  v63 = ObjectInformation;
  v72 = ReturnLength;
  v74 = ReturnLength;
  HandleAttributes = 0;
  HandleInformation = 0LL;
  Src = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v71 = 0;
  v70 = 0;
  v60 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v62 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 4;
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
      v10 = 1;
    ProbeForWrite(ObjectInformation, ObjectInformationLength, v10);
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    GrantedAccess = 0;
    v69 = 0;
    v14 = 0LL;
    v66 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v75 = 0LL;
    v13 = 0;
    v68 = 0;
  }
  else
  {
    v67 = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, &v67, &HandleInformation);
    v13 = result;
    v68 = result;
    v14 = (__int64 *)v67;
    v66 = (__int64 *)v67;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v69 = HandleInformation.GrantedAccess;
    v16 = (char *)v67 - 48;
    v17 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v67 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v67 - 48) >> 8)];
    v75 = v17;
    HandleAttributes = HandleInformation.HandleAttributes;
  }
  v67 = v16;
  if ( ObjectInformationClass == ObjectBasicInformation )
  {
    if ( (_DWORD)v61 == 56 )
    {
      LODWORD(Src) = HandleAttributes;
      if ( (*((_BYTE *)v16 + 27) & 0x10) != 0 )
      {
        HandleAttributes |= 0x10u;
        LODWORD(Src) = HandleAttributes;
      }
      if ( (*((_BYTE *)v16 + 27) & 8) != 0 )
        LODWORD(Src) = HandleAttributes | 0x20;
      DWORD1(Src) = GrantedAccess;
      DWORD2(Src) = v16[1];
      HIDWORD(Src) = *v16;
      v22 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v16);
      if ( v22 )
        *(_QWORD *)&v77 = *v22;
      else
        *(_QWORD *)&v77 = 0LL;
      if ( v25 == ObpSymbolicLinkObjectType )
        v26 = *v14;
      else
        v26 = 0LL;
      v79 = v26;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v28 = (signed __int64 *)(v23 + 16);
      v29 = (LegacyAutoBoost *)KeAbPreAcquire(v23 + 16, 0LL, 0LL, v24);
      v30 = 17LL;
      if ( _InterlockedCompareExchange64(v28, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v28, 0, v29, (struct _KTHREAD *)v28);
        v30 = 17LL;
      }
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v29, (void *)0x11);
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      v31 = v67;
      if ( (*((_BYTE *)v67 + 26) & 2) != 0 )
        v32 = (AutoBoost *)((char *)v67 - ObpInfoMaskToOffset[*((_BYTE *)v67 + 26) & 3]);
      else
        v32 = 0LL;
      v61 = v32;
      if ( v32 && (v38 = *(void **)v32, (HandleInformation = (struct _OBJECT_HANDLE_INFORMATION)v38) != 0LL) )
      {
        PsReferenceSiloContext(v38);
        if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v28);
        KeAbPostRelease((unsigned __int64)v28);
        KeLeaveCriticalRegion();
        v40 = HandleInformation;
        v41 = *((unsigned __int16 *)v61 + 4) + 2;
        while ( 1 )
        {
          v42 = (void *)v40;
          v43 = *(_QWORD *)&v40 - 48LL;
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          v45 = (signed __int64 *)(v43 + 16);
          v46 = (AutoBoost *)KeAbPreAcquire(v43 + 16, 0LL, 0LL, v39);
          v61 = v46;
          v47 = 17LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 16), 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx((signed __int64 *)(v43 + 16), 0, v46, (struct _KTHREAD *)(v43 + 16));
            v46 = v61;
            v47 = 17LL;
          }
          if ( v46 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v46, (void *)0x11);
            else
              *((_BYTE *)v46 + 10) = 1;
          }
          v48 = (*(_BYTE *)(v43 + 26) & 2) != 0 ? v43 - ObpInfoMaskToOffset[*(_BYTE *)(v43 + 26) & 3] : 0LL;
          if ( !v48 )
            break;
          v49 = *(void **)v48;
          if ( !*(_QWORD *)v48 )
            break;
          v41 += *(unsigned __int16 *)(v48 + 8) + 2;
          v40 = *(struct _OBJECT_HANDLE_INFORMATION *)v48;
          HandleInformation = (struct _OBJECT_HANDLE_INFORMATION)v49;
          PsReferenceSiloContext(v49);
          if ( _InterlockedCompareExchange64(v45, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v45);
          KeAbPostRelease((unsigned __int64)v45);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v42);
        }
        LODWORD(v61) = v41;
        v50 = _InterlockedCompareExchange64(v45, 0LL, v47);
        v13 = v68;
        v14 = v66;
        PreviousMode = v62;
        v31 = v67;
        if ( v47 != v50 )
          ExfReleasePushLockShared(v45);
        KeAbPostRelease((unsigned __int64)v45);
        KeLeaveCriticalRegion();
        if ( HandleInformation )
          ObfDereferenceObject(*(PVOID *)&HandleInformation);
        v33 = (_DWORD)v61 + 18;
      }
      else
      {
        if ( v30 != _InterlockedCompareExchange64(v28, 0LL, v30) )
          ExfReleasePushLockShared(v28);
        KeAbPostRelease((unsigned __int64)v28);
        KeLeaveCriticalRegion();
        v33 = 0;
      }
      DWORD1(v78) = v33;
      DWORD2(v78) = *(unsigned __int16 *)(v75 + 16) + 106;
      if ( (v69 & 0x20000) != 0 && v31[5] )
      {
        v70 = 15;
        guard_dispatch_icall_no_overrides((__int64)v14, 1LL);
      }
      HIDWORD(v78) = v71;
      if ( PreviousMode )
        RtlCopyToUser(v63, &Src, 0x38uLL);
      else
        RtlCopyVolatileMemory(v63, &Src, 0x38uLL);
      v60 = 56;
      v20 = v72;
      goto LABEL_13;
    }
    v51 = -1073741820;
    goto LABEL_81;
  }
  v18 = ObjectInformationClass - 1;
  if ( !v18 )
  {
    NameStringMode = ObQueryNameStringMode((_DWORD)v14, (_DWORD)v63, (_DWORD)v61, (unsigned int)&v60, PreviousMode);
LABEL_12:
    v13 = NameStringMode;
    v20 = v72;
    goto LABEL_13;
  }
  v21 = v18 - 1;
  if ( !v21 )
  {
    LOBYTE(Object) = PreviousMode;
    NameStringMode = ObQueryTypeInfo(v17, v63, (unsigned int)v61, &v60, Object);
    goto LABEL_12;
  }
  v34 = v21 - 1;
  if ( v34 )
  {
    if ( v34 == 1 )
    {
      v60 = 2;
      if ( (unsigned int)v61 < 2 )
      {
        v13 = -1073741820;
      }
      else
      {
        v35 = (HandleAttributes & 2) != 0;
        v36 = v63;
        if ( PreviousMode )
          RtlWriteUCharToUser(v63, v35);
        else
          *(_BYTE *)v63 = v35;
        v37 = HandleAttributes & 1;
        if ( PreviousMode )
          RtlWriteUCharToUser(v36 + 1, v37);
        else
          v36[1] = v37;
      }
      v20 = v72;
      goto LABEL_13;
    }
    v51 = -1073741821;
LABEL_81:
    ObfDereferenceObject(v14);
    return v51;
  }
  v60 = 8;
  v52 = (unsigned int)v61;
  if ( (unsigned int)v61 < 4 )
  {
    v13 = -1073741820;
  }
  else
  {
    v53 = 0;
    v73 = 0;
    for ( i = 0; ; ++i )
    {
      v65 = i;
      if ( i >= 0x100 || !*((_QWORD *)&ObpStackTraceLock.ForegroundLossTime + i) )
        break;
      v73 = ++v53;
    }
    if ( PreviousMode )
    {
      RtlWriteULongToUser(v63, v53);
      v52 = (unsigned int)v61;
      v55 = (char *)v63;
    }
    else
    {
      v55 = (char *)v63;
      *(_DWORD *)v63 = v53;
    }
    v56 = 0;
    v65 = 0;
    while ( v56 < 0x100 )
    {
      v57 = *((_QWORD *)&ObpStackTraceLock.ForegroundLossTime + v56);
      if ( !v57 )
        break;
      LOBYTE(Object) = PreviousMode;
      v58 = ObQueryTypeInfo(v57, &v55[v60], v52, &v60, Object);
      v13 = v58;
      if ( (int)(v58 + 0x80000000) >= 0 && v58 != -1073741820 )
        break;
      v65 = ++v56;
      v52 = (unsigned int)v61;
      v55 = (char *)v63;
    }
  }
  v20 = v72;
LABEL_13:
  if ( v20 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(v20, v60);
    else
      *v20 = v60;
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  return v13;
}
