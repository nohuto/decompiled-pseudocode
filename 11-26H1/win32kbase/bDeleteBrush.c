/*
 * XREFs of bDeleteBrush @ 0x140054210
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14019BAFC (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 * Callees:
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     bPEBCacheHandle @ 0x1400549F0 (bPEBCacheHandle.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400B6D54 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1401A02C8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  int v3; // edi
  ULONG_PTR v5; // rbx
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // r14
  unsigned int *v11; // rdi
  __int64 v12; // rcx
  int v13; // edi
  int v14; // ecx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  char *v19; // rcx
  int IsEnabledNoReportingNoInline; // eax
  HSURF v21; // rdx
  int v22; // r8d
  volatile signed __int32 *v23; // rcx
  int v24; // r8d
  __int64 v25; // [rsp+48h] [rbp-A0h]
  void **v26; // [rsp+58h] [rbp-90h] BYREF
  int v27; // [rsp+60h] [rbp-88h]
  __int16 v28; // [rsp+64h] [rbp-84h]
  unsigned int *v29; // [rsp+68h] [rbp-80h]
  unsigned int *v30; // [rsp+78h] [rbp-70h]
  _DWORD *v31; // [rsp+90h] [rbp-58h]
  unsigned int *v32; // [rsp+98h] [rbp-50h]
  _DWORD *v33; // [rsp+A0h] [rbp-48h]
  __int64 v34; // [rsp+A8h] [rbp-40h]
  unsigned int v37; // [rsp+108h] [rbp+20h]

  v3 = a3;
  v5 = 0LL;
  v37 = 1;
  v6 = 1;
  v25 = 0LL;
  v10 = *(unsigned int **)(W32GetSessionState(a1) + 88);
  v32 = v10;
  if ( !a2 )
  {
    v26 = 0LL;
    v27 = 0;
    v28 = 0;
    v29 = v10;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v26, a1, 0x10u);
    if ( v27 )
    {
      v11 = v29;
      v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v29 + 1) + 96LL))(
              *((_QWORD *)v29 + 1),
              *(unsigned int *)v26);
      v33 = (_DWORD *)GreDecodeUserModePointer(v26[2]);
      v25 = (__int64)v33;
      v31 = v33;
      v12 = *((_QWORD *)v11 + 1);
      v13 = (int)v26;
      if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 96LL))(v12, *(unsigned int *)v26)
                     + 8) )
      {
        **(_DWORD **)(v34 + 48) = 2;
        v14 = 1;
        v6 = 0;
        HIBYTE(v28) = 1;
      }
      else if ( v33 )
      {
        v14 = 1;
        if ( (*v33 & 1) != 0 )
        {
          v6 = 0;
        }
        else
        {
          v17 = *(_DWORD *)(v34 + 40) & 0x400;
          if ( (*(_DWORD *)(v34 + 40) & 0x10) != 0
            && (!v17 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
            && (unsigned int)bPEBCacheHandle(v17 != 0, (_DWORD)v33, v13, (unsigned int)&v26, 0LL) )
          {
            v6 = 0;
          }
          v14 = v6;
        }
      }
      else
      {
        v14 = 1;
      }
      if ( v14 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
      v3 = a3;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v26);
  }
  if ( v6 )
  {
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_16;
      v18 = HmgRemoveObjectImpl(v10, (unsigned int)a1, 0, 1, 1, 16, 0LL);
    }
    else
    {
      v18 = (__int64)HmgRemoveObject((struct Gre::Base::SESSION_GLOBALS *)v10, (unsigned int)a1, 0, 0, 0, 16, 0LL);
    }
    v5 = v18;
LABEL_16:
    if ( v5 )
    {
      v16 = *(_DWORD *)(v5 + 40);
      if ( (v16 & 0x400) != 0 )
      {
        v19 = *(char **)(v5 + 152);
        if ( v19 )
        {
          if ( (v16 & 0x4000) == 0 )
            GreDeleteFastMutex(v19, v7, v8, v9);
        }
      }
      if ( *(_QWORD *)(v5 + 24) )
      {
        IsEnabledNoReportingNoInline = Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline();
        v21 = *(HSURF *)(v5 + 24);
        if ( IsEnabledNoReportingNoInline )
        {
          SURFREF::SURFREF((SURFREF *)&v26, v21, (struct Gre::Base::SESSION_GLOBALS *)v10);
          *(_QWORD *)(v5 + 24) = 0LL;
          if ( v30 )
          {
            HmgDecrementShareReferenceCount((__int64)v10, v30);
            SURFREF::bDeleteSurface((SURFREF *)&v26, (struct Gre::Base::SESSION_GLOBALS *)v10, 0);
          }
          SURFREF::~SURFREF((SURFREF *)&v26);
        }
        else
        {
          bDeleteSurface((struct Gre::Base::SESSION_GLOBALS *)v10, v21);
        }
      }
      if ( *(_DWORD *)(v5 + 100) != -1 )
      {
        v22 = *(_DWORD *)(v5 + 40);
        if ( v22 >= 0 )
        {
          v23 = *(volatile signed __int32 **)(v5 + 120);
          v24 = v22 & 0x40000000;
          if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v23, v24 != 0);
          *(_QWORD *)(v5 + 120) = 0LL;
        }
      }
      if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
        BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
      if ( *(_QWORD *)(v5 + 136) )
        ReleaseReferenceCountedObjectHandle(0LL);
      FreeBrushMemory(v5);
      if ( !a2 && v25 )
        HmgFreeObjectAttr(v25);
    }
    else
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v26, (HBRUSH)a1);
      if ( !v26 || ((_DWORD)v26[5] & 0x200) == 0 )
        v37 = 0;
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v26);
    }
  }
  return v37;
}
