/*
 * XREFs of GreValidateVisrgn @ 0x1400149E8
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0CF@@@YAXXZ @ 0x140015030 (--$GrepAcquireLockValidate@$0CF@@@YAXXZ.c)
 *     ?ReleaseLock@GrePushLock@@QEBAXXZ @ 0x1400150BC (-ReleaseLock@GrePushLock@@QEBAXXZ.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401388B8 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall GreValidateVisrgn(__int64 a1, int a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // di
  DC *v10; // rax
  DC *v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  DC *v15; // r15
  struct _GRETHREAD *v16; // rax
  struct _GRETHREAD *v17; // rbx
  __int64 v18; // rdx
  DC *v19; // rsi
  _DWORD *v20; // r14
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // r8d
  int v31; // r10d
  int v32; // edx
  int v33; // ebx
  bool v34; // zf
  __int64 SessionState; // rax
  struct _GRETHREAD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int128 v39; // kr00_16
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r11
  bool v42; // cc
  int v43; // edi
  int v44; // edx
  LONG v45; // ecx
  LONG v46; // ebx
  __int64 v47; // rcx
  int v48; // edi
  LONG v49; // eax
  __int64 v50; // rax
  HSURF v51; // rdx
  int v52; // r8d
  unsigned __int64 i; // rcx
  int v54; // eax
  struct _RECTL v55; // [rsp+20h] [rbp-79h] BYREF
  __int64 v56; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v57; // [rsp+38h] [rbp-61h]
  __int64 *v58; // [rsp+40h] [rbp-59h]
  __int64 (__fastcall *v59)(); // [rsp+48h] [rbp-51h]
  __int64 v60; // [rsp+50h] [rbp-49h]
  DC *v61; // [rsp+60h] [rbp-39h] BYREF
  int v62; // [rsp+68h] [rbp-31h]
  __int64 v63; // [rsp+70h] [rbp-29h]
  __int64 v64; // [rsp+78h] [rbp-21h]
  __int128 v65; // [rsp+80h] [rbp-19h] BYREF
  __int128 v66; // [rsp+90h] [rbp-9h]
  __int64 v67; // [rsp+A0h] [rbp+7h]
  char v68; // [rsp+A8h] [rbp+Fh]
  struct _RECTL v69; // [rsp+B0h] [rbp+17h] BYREF

  v63 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v64 = 0LL;
  v61 = 0LL;
  v62 = 0;
  v65 = 0LL;
  v66 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v7 = (v6 + 8) & -(__int64)(v6 != 0);
  *(_QWORD *)&v66 = &v61;
  *((_QWORD *)&v66 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  if ( v7 )
  {
    v8 = *(_QWORD *)(((v6 + 8) & -(__int64)(v6 != 0)) + 0x58);
    if ( *(_QWORD *)(v8 + 8) != v7 + 88 )
      goto LABEL_5;
    *(_QWORD *)&v65 = *(_QWORD *)(v7 + 88);
    *((_QWORD *)&v65 + 1) = v7 + 88;
    *(_QWORD *)(v8 + 8) = &v65;
    *(_QWORD *)(v7 + 88) = &v65;
  }
  else
  {
    *((_QWORD *)&v65 + 1) = &v65;
    *(_QWORD *)&v65 = &v65;
  }
  v9 = 1;
  LOBYTE(v5) = 1;
  v10 = (DC *)HmgShareLock(v63, a1, v5, 1LL);
  v61 = v10;
  v11 = v10;
  if ( v10 )
  {
    v12 = *((_DWORD *)v10 + 9);
    v13 = v12 & 0xFFEFFFFF;
    v14 = v12 | 0x100000;
    if ( !a2 )
      v14 = v13;
    *((_DWORD *)v11 + 9) = v14;
    v15 = v61;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v15 + 1112, 0LL);
    GrepAcquireLockValidate<37>();
    v16 = GreGetCurrentThreadCrossSessionCheck();
    v17 = v16;
    if ( v16 )
    {
      v18 = *(_QWORD *)v16;
      if ( (*(_QWORD *)v16 & 0xFFFFFFC000000000uLL) != 0 && (v18 & 0x4000000000LL) == 0 )
      {
        v52 = 38;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v54 = i;
          if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v18) == 0 )
            v54 = v52;
          v52 = v54;
        }
        if ( v54 > 38 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v18, (unsigned int)v54);
      }
      *(_QWORD *)v17 |= 0x4000000000uLL;
    }
    v19 = v61;
    v20 = (_DWORD *)*((_QWORD *)v61 + 142);
    if ( (*((_DWORD *)v61 + 9) & 0x100000) == 0 )
      goto LABEL_32;
    v21 = *((_QWORD *)v61 + 6);
    if ( !v21 || !v20 )
      goto LABEL_32;
    v56 = 0LL;
    v57 = 0LL;
    v22 = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( v22 )
      v23 = *v22;
    else
      v23 = 0LL;
    v24 = (v23 + 8) & -(__int64)(v23 != 0);
    v58 = &v56;
    v59 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
    if ( v24 )
    {
      v25 = *(_QWORD *)(((v23 + 8) & -(__int64)(v23 != 0)) + 0x58);
      if ( *(_QWORD *)(v25 + 8) != v24 + 88 )
        goto LABEL_5;
      v56 = *(_QWORD *)(v24 + 88);
      v57 = (__int64 *)(v24 + 88);
      *(_QWORD *)(v25 + 8) = &v56;
      *(_QWORD *)(v24 + 88) = &v56;
    }
    else
    {
      v57 = &v56;
      v56 = (__int64)&v56;
    }
    v34 = (*((_DWORD *)v19 + 9) & 0x40000) == 0;
    v26 = 0LL;
    v60 = 0LL;
    if ( v34 )
    {
      v27 = *((_QWORD *)v19 + 62);
    }
    else
    {
      v51 = (HSURF)*((_QWORD *)v19 + 268);
      if ( v51 )
      {
        SURFREF::vLock((SURFREF *)&v56, v51);
        v26 = v60;
        v27 = v60;
        v28 = v60;
        goto LABEL_24;
      }
      v27 = *(_QWORD *)(v21 + 2544);
    }
    v28 = 0LL;
LABEL_24:
    if ( !v27 )
    {
      v34 = v28 == 0;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(v21 + 40) & 0x20000) != 0 && *(int *)(v27 + 112) < 0
      || (v29 = *((_DWORD *)v19 + 9), v30 = v20[13], v31 = v20[14], v32 = v20[15], v33 = v20[16], (v29 & 0x1000) != 0)
      && (v29 & 0x4000) == 0
      || v31 == v33
      || v30 == v32
      || v30 == 0x7FFFFFFF && v33 == 0x80000000 && v31 == 0x7FFFFFFF && v32 == 0x80000000 )
    {
LABEL_28:
      v34 = v26 == 0;
LABEL_29:
      if ( !v34 )
      {
        SessionState = W32GetSessionState(v27);
        HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v60);
      }
      PopThreadGuardedObject(&v56);
      goto LABEL_32;
    }
    v40 = *(_QWORD *)(((*(_DWORD *)(v27 + 116) & 0x800) != 0 ? 0x264 : 0) + v27 + 56);
    v41 = HIDWORD(v40);
    v42 = v30 <= v32;
    if ( v30 < v32 )
    {
      if ( v31 < v33 && v30 >= 0 && (int)v40 >= v32 && v31 >= 0 && SHIDWORD(v40) >= v33 )
        goto LABEL_28;
      v42 = v30 <= v32;
    }
    if ( !v42 )
    {
      v55.left = v20[15];
      v55.right = v30;
    }
    v43 = v32;
    if ( v42 )
    {
      v43 = v30;
      v30 = v32;
    }
    if ( v31 > v33 )
    {
      v55.top = v33;
      v55.bottom = v31;
    }
    v44 = v33;
    v45 = v43;
    if ( v31 <= v33 )
    {
      v44 = v31;
      v31 = v33;
    }
    v46 = v44;
    if ( v43 < 0 )
      v45 = 0;
    v55.left = v45;
    v47 = 0LL;
    if ( v43 >= 0 )
      v47 = (unsigned int)v43;
    v48 = 0;
    if ( v44 >= 0 )
      v48 = v44;
    else
      v46 = 0;
    v55.top = v46;
    if ( (int)v40 < v30 )
      v30 = v40;
    v49 = v31;
    v55.right = v30;
    if ( (int)v41 >= v31 )
      LODWORD(v41) = v31;
    else
      v49 = v41;
    v55.bottom = v49;
    if ( v30 < (int)v47 )
    {
      v55.left = v30;
    }
    else
    {
      if ( (int)v41 < v48 )
        v46 = v41;
      v55.top = v46;
    }
    v69 = v55;
    if ( v26 )
    {
      v50 = W32GetSessionState(v47);
      HmgDecrementShareReferenceCount(*(_QWORD *)(v50 + 88), v60);
    }
    PopThreadGuardedObject(&v56);
    v9 = 0;
LABEL_32:
    v36 = GreGetCurrentThreadCrossSessionCheck();
    if ( v36 )
      *(_QWORD *)v36 &= ~0x4000000000uLL;
    GrePushLock::ReleaseLock((DC *)((char *)v15 + 1112));
    if ( !v9 )
    {
      DC::AcquireDcVisRgnExclusive(v61);
      v37 = *((_QWORD *)v61 + 142);
      *(_QWORD *)&v55.left = v37;
      if ( v37 )
        RGNOBJ::vSet((RGNOBJ *)&v55, &v69);
      if ( v68 )
        GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v67 + 1112));
    }
    if ( v61 )
    {
      v38 = W32GetSessionState(v37);
      HmgDecrementShareReferenceCount(*(_QWORD *)(v38 + 88), v61);
      v61 = 0LL;
    }
    v39 = v65;
    if ( *(__int128 **)(v65 + 8) == &v65 && **((__int128 ***)&v65 + 1) == &v65 )
    {
      **((_QWORD **)&v65 + 1) = v65;
      *(_QWORD *)(v39 + 8) = *((_QWORD *)&v39 + 1);
      return;
    }
LABEL_5:
    __fastfail(3u);
  }
  DCOBJA::~DCOBJA((DCOBJA *)&v61);
}
