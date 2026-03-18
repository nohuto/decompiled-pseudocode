/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001A90C (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x14001CDA0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140024160 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400241E0 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024A94 (--$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140024B80 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x14002EEB4 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14003FDEC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     SURFACE_Free @ 0x140043FE0 (SURFACE_Free.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400C5370 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     GreGetObjectOwner @ 0x1400C5980 (GreGetObjectOwner.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1400C6660 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400FE8B0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1401065B0 (-bIsDefault@SURFACE@@QEBA_NXZ.c)
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140120C7C (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 *     ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x1401224F0 (-vDeleteDriverRealization@SURFACE@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x14015672C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 *a1, __int64 a2, int a3, int a4)
{
  unsigned int v6; // esi
  PVOID *v7; // rdx
  char *v8; // r15
  void *v9; // r13
  char *v10; // r15
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int16 v13; // r12
  HSEMAPHORE v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  ULONG_PTR v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  bool IsLockOwnedByCurrentThread; // al
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  int (*v24)(void); // rax
  __int64 v25; // rcx
  void *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  void (__fastcall *v30)(__int64 *); // rax
  int v31; // eax
  HSEMAPHORE v32; // rbx
  struct _W32PROCESS *v33; // r8
  __int64 *v34; // rax
  __int64 *v35; // rcx
  __int64 **v36; // rdx
  PVOID v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  int v43; // r14d
  struct _GRETHREAD *v44; // rbx
  PVOID v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // eax
  PVOID v48; // rdx
  int (*v49)(void); // rax
  __int64 v50; // rcx
  PVOID v51; // rbx
  void (__fastcall *v52)(PVOID); // rax
  unsigned int v53; // eax
  int (*v54)(void); // rax
  __int64 v55; // rcx
  void (__fastcall *v56)(__int64); // rax
  int v57; // [rsp+30h] [rbp-D8h]
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-A8h] BYREF
  int v62; // [rsp+68h] [rbp-A0h]
  int v63; // [rsp+6Ch] [rbp-9Ch]
  __int64 v64; // [rsp+70h] [rbp-98h]
  __int64 v65; // [rsp+78h] [rbp-90h] BYREF
  void *v66; // [rsp+80h] [rbp-88h]
  __int64 v67; // [rsp+88h] [rbp-80h]
  __int64 v68; // [rsp+90h] [rbp-78h] BYREF
  void *v69[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v70; // [rsp+A8h] [rbp-60h]
  __int64 v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v74; // [rsp+D8h] [rbp-30h]
  __int128 v75; // [rsp+E8h] [rbp-20h]
  _BYTE v76[16]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v77; // [rsp+108h] [rbp+0h] BYREF
  __int64 v78; // [rsp+118h] [rbp+10h]
  int v79; // [rsp+120h] [rbp+18h]
  __int64 v80; // [rsp+190h] [rbp+88h]
  __int64 v81; // [rsp+198h] [rbp+90h]

  v6 = 1;
  if ( !SURFACE::bIsDefault((SURFACE *)a1) && a1 )
  {
    v7 = (PVOID *)(a1 + 9);
    v66 = 0LL;
    v8 = 0LL;
    v67 = 0LL;
    v9 = 0LL;
    v62 = 0;
    if ( !*((_WORD *)a1 + 50) )
    {
      v10 = (char *)*v7;
      v9 = (void *)a1[28];
      v66 = (void *)a1[24];
      v67 = a1[23];
      v62 = *((_DWORD *)a1 + 54);
      v8 = &v10[-(unsigned __int16)*((_DWORD *)a1 + 53)];
    }
    v11 = *((_OWORD *)a1 + 17);
    v12 = *((_OWORD *)a1 + 18);
    v13 = *((_WORD *)a1 + 51);
    v14 = (HSEMAPHORE)(*(_QWORD *)a2 + 624LL);
    v65 = a1[16];
    v15 = a1[17];
    v73 = v11;
    v72 = v15;
    v16 = *((_OWORD *)a1 + 19);
    BaseAddress = *v7;
    v17 = a1[31];
    v75 = v16;
    RegionSize = v17;
    v18 = *(_OWORD *)(a1 + 73);
    LODWORD(v17) = *((_DWORD *)a1 + 80);
    v74 = v12;
    v63 = v17;
    v19 = *(_OWORD *)(a1 + 75);
    *(_OWORD *)v69 = v18;
    v71 = a1[77];
    v70 = v19;
    IsLockOwnedByCurrentThread = GrepIsLockOwnedByCurrentThread(v14);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)v76,
      !IsLockOwnedByCurrentThread);
    v21 = a1[6];
    v58 = v21;
    if ( !v21 || (a1[14] & 0x400000) == 0 || (*(_DWORD *)(v21 + 40) & 1) == 0 )
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)v76);
    v68 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v77);
    if ( (a1[14] & 0x400000) != 0 && v21 )
    {
      if ( !(unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v58) && (*(_DWORD *)(v21 + 40) & 0x8000) == 0 )
      {
        v68 = **(_QWORD **)(W32GetSessionState(v39) + 88) + 1144LL;
        GreAcquireSemaphore<2,>();
      }
      v81 = 0LL;
      v77 = 0LL;
      v80 = 0LL;
      DEVLOCKOBJ::bPrepareTrgDco((DEVLOCKOBJ *)&v77, 0LL);
      v79 = 1;
      if ( (*(_DWORD *)(v21 + 40) & 1) != 0 )
      {
        v41 = *(_QWORD **)(W32GetSessionState(v40) + 88);
        *(_QWORD *)&v77 = *(_QWORD *)(v21 + 48);
        v78 = v21;
        if ( (_QWORD)v77 == *v41 + 1144LL )
        {
          v79 |= 0x100000u;
          GreAcquireSemaphore<2,>();
        }
        else
        {
          GreAcquireSemaphore<8,PDEVOBJ>(v21);
        }
      }
    }
    v22 = *a1;
    v58 = *a1;
    LODWORD(v64) = GreGetObjectOwner(v58, 5LL);
    LODWORD(v59) = 0;
    if ( !a4 && !HmgRemoveObject((struct Gre::Base::SESSION_GLOBALS *)a2, *(_DWORD *)(a2 + 3112), 5, (__int64)&v59) )
    {
      if ( a3 != 1 || (LOBYTE(v57) = 5, !HmgRemoveObjectImpl(a2, v22, 0LL, 1LL, 1, v57, &v59)) )
      {
        if ( (_DWORD)v59 == 1 )
        {
          if ( !_bittest((const signed __int32 *)a1 + 28, 0xBu) )
          {
            EngSetLastError(0xAAu);
LABEL_66:
            v6 = 0;
            goto LABEL_27;
          }
        }
        else
        {
          if ( !a1[20]
            && !(unsigned int)SURFACE::bStockSurface((SURFACE *)a1)
            && !_bittest((const signed __int32 *)a1 + 28, 0xBu) )
          {
            Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline();
            goto LABEL_66;
          }
          v31 = *((_DWORD *)a1 + 28);
          if ( (v31 & 0x800) != 0 )
          {
            if ( !*((_DWORD *)a1 + 80) )
            {
              *((_DWORD *)a1 + 80) = 1;
              _InterlockedAdd((volatile signed __int32 *)(a2 + 100), 1u);
            }
          }
          else
          {
            *((_DWORD *)a1 + 28) = v31 | 0x1000000;
          }
        }
        HmgDecrementShareReferenceCount(a2, a1);
LABEL_27:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v77);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v68);
        NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)v76);
        return v6;
      }
    }
    if ( v63 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 100));
    if ( (a1[14] & 0x40000) != 0 && a1[70] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v24 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 24) + 2048LL);
    if ( v24 )
    {
      if ( v24() >= 0 )
      {
        v30 = *(void (__fastcall **)(__int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 24) + 2056LL);
        if ( v30 )
          v30(a1);
      }
    }
    SURFACE::vDeleteDriverRealization((SURFACE *)a1);
    if ( v9 )
    {
      if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        MmUnsecureVirtualMemory(v9);
      goto LABEL_22;
    }
    if ( v62 )
    {
      if ( BaseAddress )
      {
        v69[0] = 0LL;
        v69[1] = 0LL;
        v70 = (unsigned __int64)v8;
        LODWORD(v71) = 3;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v69);
      }
      goto LABEL_22;
    }
    v26 = v66;
    if ( v66 )
    {
      if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        MmUnsecureVirtualMemory(v26);
        if ( BaseAddress )
        {
          if ( v67 )
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
          }
          else
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          }
        }
      }
      goto LABEL_21;
    }
    if ( (v13 & 8) == 0 )
    {
      if ( (v13 & 0x800) != 0 )
      {
        v32 = (HSEMAPHORE)(*(_QWORD *)a2 + 936LL);
        GreAcquireSemaphoreInternal(v32);
        GrepAcquireLockValidate<36>();
        v33 = (struct _W32PROCESS *)a1[33];
        if ( v33 )
        {
          v34 = a1 + 66;
          v35 = (__int64 *)a1[66];
          if ( v35 != a1 + 66 )
          {
            if ( (__int64 *)v35[1] != v34 || (v36 = (__int64 **)a1[67], *v36 != v34) )
              __fastfail(3u);
            *v36 = v35;
            v35[1] = (__int64)v36;
          }
          v37 = BaseAddress;
          if ( BaseAddress && RegionSize )
          {
            v53 = GrepW32PidFromW32Process(v33);
            Gre::MapViewOfSectionObj::Unmap(v53, v37);
          }
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v73);
        if ( RegionSize )
          Gre::SectionObj::~SectionObj((Gre::SectionObj *)&RegionSize);
        if ( v32 )
          GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(v38, v32);
      }
      else if ( (v13 & 0x10) != 0 )
      {
        vFreeKernelSection(BaseAddress);
      }
      goto LABEL_21;
    }
    if ( (v13 & 0x80u) == 0 )
    {
      EngTryFreeUserMem(BaseAddress);
LABEL_21:
      v22 = v58;
LABEL_22:
      if ( (*((_DWORD *)a1 + 29) & 0x1000) != 0 )
        GrepCaptureLiveMemoryDump(400LL, 4LL, v22, (unsigned int)v59, (unsigned int)v64, 0);
      SURFACE_Free(a1);
      v28 = v72;
      if ( v72 )
      {
        v54 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27) + 24) + 2096LL);
        if ( v54 )
        {
          if ( v54() >= 0 )
          {
            v56 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v55) + 24) + 2104LL);
            if ( v56 )
              v56(v28);
          }
        }
      }
      if ( v65 )
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v65);
      goto LABEL_27;
    }
    CurrentThread = GreGetCurrentThread();
    v43 = DWORD2(v70);
    v44 = CurrentThread;
    v45 = v69[1];
    *(_QWORD *)&v73 = 0LL;
    if ( DWORD2(v70) )
      v45 = BaseAddress;
    v74 = (unsigned __int64)v45;
    *((_QWORD *)&v73 + 1) = 0LL;
    LODWORD(v75) = 1;
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v73);
    if ( v44 && *((_QWORD *)v44 + 8) )
    {
      v47 = UMPDGetThreadClientPID(v44);
    }
    else
    {
      if ( !(_DWORD)v71 )
      {
        v49 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46) + 24) + 2080LL);
        if ( v49 )
        {
          if ( v49() >= 0 )
          {
            v51 = BaseAddress;
            v52 = *(void (__fastcall **)(PVOID))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v50) + 24) + 2088LL);
            if ( v52 )
              v52(v51);
          }
        }
        goto LABEL_97;
      }
      v47 = HIDWORD(v70);
    }
    v48 = BaseAddress;
    if ( v43 )
      v48 = v69[1];
    Gre::MapViewOfSectionObj::Unmap(v47, v48);
LABEL_97:
    if ( v69[0] )
    {
      RegionSize = (ULONG_PTR)v69[0];
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&RegionSize);
    }
    else
    {
      GrepCaptureLiveMemoryDump(400LL, 68LL, 2LL, 0LL, 0LL, 0);
    }
    goto LABEL_21;
  }
  return v6;
}
