/*
 * XREFs of SLUpdateLicenseDataInternal @ 0x14083F9C8
 * Callers:
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 *     ExUpdateLicenseData @ 0x140B435F0 (ExUpdateLicenseData.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     ExpGetLicenseTamperState @ 0x1406D11AC (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x1406D1300 (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x1406D1524 (ExpSetLicenseTamperState.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ntoskrnl_24 @ 0x14083E510 (ntoskrnl_24.c)
 *     sub_14083ECD0 @ 0x14083ECD0 (sub_14083ECD0.c)
 *     sub_14083F1BC @ 0x14083F1BC (sub_14083F1BC.c)
 *     sub_14083F2FC @ 0x14083F2FC (sub_14083F2FC.c)
 *     SLSendPolicyChangeNotifications @ 0x14083F9A0 (SLSendPolicyChangeNotifications.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     ntoskrnl_20 @ 0x140A83F40 (ntoskrnl_20.c)
 *     ExpReducedLicenseData @ 0x140B47EB0 (ExpReducedLicenseData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLUpdateLicenseDataInternal(__int64 a1, unsigned int a2, unsigned int *a3)
{
  struct _KLOCK_ENTRIES *v4; // r9
  bool v6; // di
  int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  signed int v10; // esi
  char v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rdx
  LegacyAutoBoost *v14; // rdi
  bool v15; // r13
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  SIZE_T v18; // rdi
  struct _KTHREAD *v19; // rax
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rdi
  bool v23; // si
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int updated; // ecx
  __int64 v27; // r9
  PVOID v28; // r13
  unsigned int *v29; // r13
  _DWORD *v30; // rcx
  struct _KTHREAD *v31; // rax
  LegacyAutoBoost *v32; // rdi
  signed __int64 v33; // r8
  signed __int64 v34; // rdx
  size_t v35; // r12
  void *Pool2; // rcx
  ULONG_PTR v37; // r12
  struct _KTHREAD *v38; // rax
  AutoBoost *v39; // rax
  void *v40; // rdx
  AutoBoost *v41; // r13
  unsigned int v42; // r13d
  char v43; // r12
  struct _KTHREAD *v44; // rax
  void *v45; // rdx
  LegacyAutoBoost *v46; // rdi
  unsigned int v47; // r12d
  _QWORD *v48; // rdi
  int v49; // eax
  __int64 v50; // r9
  __int64 v51; // rdx
  unsigned int v52; // r13d
  struct _KTHREAD *v53; // rax
  struct _KLOCK_ENTRIES *v54; // r9
  AutoBoost *v55; // rax
  void *v56; // rdx
  AutoBoost *v57; // rdi
  __int64 v58; // r10
  ULONG_PTR v59; // rdi
  unsigned int v60; // ecx
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  unsigned __int64 CurrentServerSilo; // rax
  char v64; // al
  char v65; // r13
  __int64 v66; // rdx
  __int64 v67; // r8
  PVOID v68; // rax
  struct _KTHREAD *v69; // rax
  AutoBoost *v70; // rax
  void *v71; // rdx
  AutoBoost *v72; // rdi
  bool v74; // [rsp+44h] [rbp-144h]
  ULONG_PTR ViewSize; // [rsp+48h] [rbp-140h] BYREF
  bool v76; // [rsp+50h] [rbp-138h]
  size_t NumOfElements; // [rsp+54h] [rbp-134h] BYREF
  void *Base; // [rsp+60h] [rbp-128h]
  bool v79; // [rsp+68h] [rbp-120h]
  unsigned int v80; // [rsp+6Ch] [rbp-11Ch]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  void *Source2; // [rsp+78h] [rbp-110h]
  int v83; // [rsp+80h] [rbp-108h]
  int v84; // [rsp+84h] [rbp-104h] BYREF
  __int128 v85; // [rsp+88h] [rbp-100h] BYREF
  __int128 v86; // [rsp+98h] [rbp-F0h]
  __int128 v87; // [rsp+A8h] [rbp-E0h]
  PVOID v88; // [rsp+B8h] [rbp-D0h]
  BOOL v89; // [rsp+C0h] [rbp-C8h]
  LARGE_INTEGER MaximumSize; // [rsp+C8h] [rbp-C0h] BYREF
  HANDLE SectionHandle; // [rsp+D0h] [rbp-B8h] BYREF
  PVOID MappedBase; // [rsp+D8h] [rbp-B0h] BYREF
  PVOID v93; // [rsp+E0h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+E8h] [rbp-A0h]
  __int128 v95; // [rsp+F0h] [rbp-98h] BYREF
  __int128 v96; // [rsp+100h] [rbp-88h]
  __int128 v97; // [rsp+110h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp-68h] BYREF
  char v99; // [rsp+1A0h] [rbp+18h]

  v4 = (struct _KLOCK_ENTRIES *)a2;
  LOBYTE(v89) = 0;
  v6 = 0;
  v99 = 0;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  MappedBase = 0LL;
  BugCheckParameter1 = 0LL;
  Object = 0LL;
  v93 = 0LL;
  NumOfElements = 0LL;
  Base = 0LL;
  v84 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  if ( a3 && a2 - 25 <= 0x13FE7 && ((unsigned __int8)a3 & 3) == 0 )
  {
    v7 = *a3;
    if ( *a3 > 0x14000 || (v8 = a3[1], (unsigned int)v8 > 0x14000) || (v9 = a3[2], v9 > 0x14000) )
    {
      v10 = -1073741760;
      goto LABEL_9;
    }
    Source2 = (char *)a3 + v8 + 20;
    if ( ((unsigned __int8)Source2 & 3) == 0 && (_DWORD)v8 + v9 + 20 == v7 )
    {
      v11 = 1;
      if ( v7 != (_DWORD)v4 || a3[4] != 1 )
      {
        v10 = -1073741811;
        goto LABEL_79;
      }
      v10 = 0;
      *(_BYTE *)(a1 + 46856) = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v14, (struct _KTHREAD *)(a1 + 46840));
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v13);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      v88 = *(PVOID *)a1;
      v74 = v88 == 0LL;
      v79 = v88 == 0LL;
      if ( (unsigned __int8)ExpReducedLicenseData() )
      {
        if ( !v88 )
        {
          v10 = -1073741823;
LABEL_22:
          v15 = v89;
          goto LABEL_36;
        }
      }
      else if ( !v88 && (a3[3] & 1) != 0 )
      {
        v10 = -1073741811;
        goto LABEL_22;
      }
      v15 = 0;
      v76 = 0;
      if ( !v88 )
      {
        v16 = *(_DWORD **)(a1 + 46832);
        if ( v16 )
        {
          if ( !*(_BYTE *)(a1 + 46992) && *a3 == *v16 )
          {
            v17 = a3[1];
            if ( v17 == v16[1]
              && a3[2] == v16[2]
              && a3[3] == v16[3]
              && a3[4] == v16[4]
              && RtlCompareMemory(v16 + 5, a3 + 5, v17) == v17 )
            {
              v18 = a3[2];
              v15 = RtlCompareMemory(
                      (const void *)(*(unsigned int *)(*(_QWORD *)(a1 + 46832) + 4LL) + *(_QWORD *)(a1 + 46832) + 20LL),
                      Source2,
                      v18) == v18;
              v76 = v15;
            }
          }
        }
      }
LABEL_36:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
      KeAbPostRelease(a1 + 46840);
      KeLeaveCriticalRegion();
      if ( v10 < 0 )
        goto LABEL_78;
      if ( v15 )
      {
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        v20 = (AutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v4);
        v22 = v20;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v20, a1 + 46840);
        if ( v22 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v22, v21);
          else
            *((_BYTE *)v22 + 10) = 1;
        }
        ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
        v23 = HIDWORD(NumOfElements) != 0;
        v24 = *(unsigned int *)(a1 + 46824);
        HIDWORD(v85) = 0;
        *(_DWORD *)((char *)&v87 + 9) = 0;
        *(_WORD *)((char *)&v87 + 13) = 0;
        HIBYTE(v87) = 0;
        if ( !(_DWORD)v24 || a1 != -24 )
        {
          *(_QWORD *)&v85 = 0LL;
          v86 = 0uLL;
          DWORD2(v85) = 0;
          *(_QWORD *)&v87 = 10800LL;
          BYTE8(v87) = 1;
          updated = ExpLicUpdateChecksum((__int64)(a3 + 5), v24, &v85);
          if ( !updated )
          {
            if ( (_DWORD)v25 )
            {
              updated = (unsigned __int64)(16 * v25) > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( (unsigned __int64)(16 * v25) <= 0xFFFFFFFF )
                updated = ExpLicUpdateChecksum(v27, 0xFFFFFFFFLL, &v85);
            }
          }
          if ( updated )
          {
            *(_QWORD *)&v85 = 0LL;
            DWORD2(v85) = 4;
          }
          v95 = v85;
          v96 = v86;
          v97 = v87;
          ntoskrnl_20(a1, &v95, 7LL, 1LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
        KeAbPostRelease(a1 + 46840);
        KeLeaveCriticalRegion();
        if ( v23 )
          SLSendPolicyChangeNotifications(a1);
        v10 = 0x40000000;
        goto LABEL_78;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 544;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      MaximumSize.QuadPart = *a3;
      v10 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v10 >= 0 )
      {
        Object = 0LL;
        v10 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
        v28 = Object;
        ZwClose(SectionHandle);
        if ( v10 >= 0 )
        {
          ViewSize = 0LL;
          v10 = MmMapViewInSessionSpace(v28, &MappedBase, &ViewSize);
          if ( v10 < 0 )
          {
            v37 = (ULONG_PTR)MappedBase;
            v6 = v74;
            goto LABEL_80;
          }
          v29 = (unsigned int *)MappedBase;
          ViewSize = (ULONG_PTR)MappedBase;
          *(_OWORD *)MappedBase = *(_OWORD *)a3;
          v29[4] = a3[4];
          memmove(v29 + 5, a3 + 5, a3[1]);
          memmove((char *)v29 + a3[1] + 20, Source2, a3[2]);
          v30 = (unsigned int *)((char *)v29 + v29[1] + 20);
          if ( v29[2] != 4 || !v30 || *v30 != 69 )
          {
            v10 = -1073741761;
            goto LABEL_78;
          }
          v10 = sub_14083F1BC((__int64)v29, 1, 0LL, 0, (unsigned int *)&NumOfElements);
          if ( v10 == -1073741789 )
          {
            v31 = KeGetCurrentThread();
            --v31->KernelApcDisable;
            v32 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v4);
            v33 = 17LL;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
            {
              ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v32, (struct _KTHREAD *)(a1 + 46840));
              v33 = 17LL;
            }
            v34 = 0LL;
            if ( v32 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v32, 0LL);
              else
                *((_BYTE *)v32 + 10) = 1;
            }
            v35 = (unsigned int)NumOfElements;
            v10 = (unsigned int)NumOfElements > 0xB6D ? 0xC000000D : 0;
            if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), v34, v33) )
              ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
            KeAbPostRelease(a1 + 46840);
            KeLeaveCriticalRegion();
            if ( v10 < 0 )
              goto LABEL_78;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            Base = Pool2;
            if ( !Pool2 )
            {
              v10 = -1073741801;
              goto LABEL_78;
            }
            v10 = sub_14083F1BC((__int64)v29, 0, Pool2, v35, 0LL);
            v42 = 0;
            if ( v10 >= 0 )
              qsort(Base, v35, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_14083ECD0);
          }
          else
          {
            v42 = 0;
          }
          if ( v10 < 0 )
          {
            if ( v10 == -1073741762 )
              v10 = -1073741811;
            goto LABEL_78;
          }
          v43 = 0;
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          v46 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v46, (struct _KTHREAD *)(a1 + 46840));
          if ( v46 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v46, v45);
            else
              *((_BYTE *)v46 + 10) = 1;
          }
          if ( v88 )
          {
LABEL_108:
            v52 = NumOfElements;
          }
          else
          {
            v47 = 0;
            v80 = 0;
            v83 = 0;
            while ( v47 < (unsigned int)NumOfElements && v42 < *(_DWORD *)(a1 + 46824) )
            {
              v48 = (char *)Base + 16 * v47;
              v49 = sub_14083ECD0(v48, (_QWORD *)(a1 + 16LL * v42 + 24));
              v50 = v48[1];
              v51 = *(_QWORD *)(a1 + 16 * (v42 + 2LL));
              if ( v49 >= 0 )
              {
                if ( v49 <= 0 )
                {
                  if ( (*(_DWORD *)(v50 + 8) & 2) != 0
                    && (*(_WORD *)(v50 + 6) != *(_WORD *)(v51 + 6)
                     || memcmp(
                          (const void *)(v50 + 16 + *(unsigned __int16 *)(v50 + 2)),
                          (const void *)(*(unsigned __int16 *)(v51 + 2) + 16LL + v51),
                          *(unsigned __int16 *)(v51 + 6))) )
                  {
LABEL_107:
                    v43 = 1;
                    goto LABEL_108;
                  }
                  v80 = ++v47;
                }
                v83 = ++v42;
              }
              else
              {
                if ( (*(_DWORD *)(v50 + 8) & 2) != 0 )
                  goto LABEL_107;
                v80 = ++v47;
              }
            }
            v52 = NumOfElements;
            while ( v47 < (unsigned int)NumOfElements )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Base + 2 * v47 + 1) + 8LL) & 2) != 0 )
              {
                v43 = 1;
                goto LABEL_122;
              }
              v80 = ++v47;
            }
            v43 = 0;
          }
LABEL_122:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
          KeAbPostRelease(a1 + 46840);
          KeLeaveCriticalRegion();
          PsReferenceSiloContext(Object);
          v53 = KeGetCurrentThread();
          --v53->KernelApcDisable;
          v55 = (AutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v54);
          v57 = v55;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v55, a1 + 46840);
          v58 = 0LL;
          if ( v57 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v57, v56);
            else
              *((_BYTE *)v57 + 10) = 1;
          }
          HIDWORD(v85) = v58;
          *(_DWORD *)((char *)&v87 + 9) = v58;
          *(_WORD *)((char *)&v87 + 13) = v58;
          HIBYTE(v87) = v58;
          v59 = ViewSize;
          if ( ViewSize && (!v52 || Base) )
          {
            *(_QWORD *)&v85 = v58;
            *(_QWORD *)&v86 = v58;
            DWORD2(v85) = v58;
            *((_QWORD *)&v86 + 1) = v58;
            *(_QWORD *)&v87 = 10800LL;
            BYTE8(v87) = 1;
            v60 = ExpLicUpdateChecksum(ViewSize + 20, (__int64)v56, &v85);
            if ( !v60 )
            {
              if ( v52 )
              {
                v62 = 16LL * v52;
                v60 = v62 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v62 <= 0xFFFFFFFF )
                  v60 = ExpLicUpdateChecksum(v61, 0xFFFFFFFFLL, &v85);
              }
            }
            if ( v60 )
            {
              *(_QWORD *)&v85 = v58;
              DWORD2(v85) = 4;
            }
            v95 = v85;
            v96 = v86;
            v97 = v87;
            v10 = v58;
          }
          else
          {
            v10 = -1073741811;
          }
          if ( v10 < 0 )
            goto LABEL_153;
          ntoskrnl_20(a1, &v95, 7LL, 1LL);
          v93 = *(PVOID *)(a1 + 16);
          BugCheckParameter1 = *(_QWORD *)(a1 + 46832);
          *(_QWORD *)(a1 + 16) = Object;
          *(_QWORD *)(a1 + 46832) = v59;
          ViewSize = 0LL;
          CurrentServerSilo = PsGetCurrentServerSilo();
          if ( !PsIsHostSilo(CurrentServerSilo) && *(_QWORD *)a1 )
            ExFreePoolWithTag(*(PVOID *)a1, 0x69534C53u);
          *(_QWORD *)a1 = 0LL;
          v99 = *(_BYTE *)(a1 + 46992);
          *(_BYTE *)(a1 + 46992) = 0;
          memset_0((void *)(a1 + 24), 0, 16LL * *(unsigned int *)(a1 + 46824));
          *(_DWORD *)(a1 + 46824) = 0;
          if ( Base )
          {
            memmove((void *)(a1 + 24), Base, 16LL * v52);
            *(_DWORD *)(a1 + 46824) = v52;
          }
          *(_BYTE *)(a1 + 46828) = 1;
          ExpGetLicenseTamperState(a1, &v84);
          v64 = v74;
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1) != 0 )
            v64 = 1;
          v74 = v64;
          ExpSetLicenseTamperState(a1, 2 * (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1));
          ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
          LOBYTE(v58) = 0;
          if ( v84 == HIDWORD(NumOfElements) || v84 && HIDWORD(NumOfElements) )
LABEL_153:
            v65 = v58;
          else
            v65 = 1;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
          KeAbPostRelease(a1 + 46840);
          KeLeaveCriticalRegion();
          if ( v10 < 0 )
            goto LABEL_78;
          v68 = v88;
          if ( !v88 )
          {
            v10 = sub_14083F2FC(a1, v66, v67, v4);
            if ( v10 < 0 )
              goto LABEL_78;
            v68 = v88;
          }
          if ( v65 || !v68 )
            SLSendPolicyChangeNotifications(a1);
          v10 = 0;
          if ( v43 == 1 )
            v10 = 263;
        }
      }
LABEL_78:
      v6 = v74;
      goto LABEL_79;
    }
  }
  v10 = -1073741811;
LABEL_9:
  v11 = 1;
LABEL_79:
  v37 = ViewSize;
LABEL_80:
  if ( v99 && !*(_BYTE *)(a1 + 46992) )
    ntoskrnl_24(&KernelLicensingCacheCorruptionFixed);
  if ( v6 )
  {
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    v39 = (AutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v4);
    v41 = v39;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v39, a1 + 46840);
    if ( v41 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v41, v40);
      else
        *((_BYTE *)v41 + 10) = 1;
    }
    v95 = 0LL;
    v96 = 0LL;
    v97 = 0LL;
    ntoskrnl_20(a1, &v95, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v93 )
    ObfDereferenceObject(v93);
  if ( v37 )
    MiRemoveFromSystemSpace(v37);
  if ( BugCheckParameter1 )
    MiRemoveFromSystemSpace(BugCheckParameter1);
  if ( Base )
    ExFreePoolWithTag(Base, 0);
  if ( v10 == -1073741811 || (unsigned int)(v10 + 1073741761) <= 1 )
  {
    v69 = KeGetCurrentThread();
    --v69->KernelApcDisable;
    v70 = (AutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v4);
    v72 = v70;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v70, a1 + 46840);
    if ( v72 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v72, v71);
      else
        *((_BYTE *)v72 + 10) = 1;
    }
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    if ( HIDWORD(NumOfElements) )
      v11 = 0;
    else
      ExpSetLicenseTamperState(a1, 5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
    if ( v11 )
      SLSendPolicyChangeNotifications(a1);
  }
  return (unsigned int)v10;
}
