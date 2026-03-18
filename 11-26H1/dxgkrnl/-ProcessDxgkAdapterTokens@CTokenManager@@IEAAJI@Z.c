/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001FA50 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x14001DF28 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1400206F4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14003A2D0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x14003B290 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x14003B37C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x14003C7C8 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x14003D298 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x14003E920 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402C4DC0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r15
  unsigned int v3; // r13d
  unsigned int v4; // r12d
  int v6; // edi
  __int64 v7; // r15
  int PresentHistoryInternal; // eax
  _BYTE *v9; // r15
  int v10; // edx
  unsigned int v11; // r13d
  int v12; // r12d
  unsigned int v13; // ecx
  int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 Pool2; // rax
  __int64 v19; // r12
  PVOID v20; // rcx
  unsigned __int64 v21; // rax
  PVOID v22; // rcx
  char *i; // rax
  HANDLE CurrentThreadId; // rax
  char *v25; // r8
  bool v26; // r8
  int v27; // r13d
  _QWORD *v28; // rax
  _QWORD *v29; // r12
  __int64 v30; // rcx
  void *v31; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  void *v38; // rcx
  int v39; // eax
  _DWORD *v40; // r12
  void *v41; // rax
  _QWORD *v42; // r13
  int v43; // eax
  void *v44; // rcx
  CTokenManager **v45; // rdx
  CTokenManager *v46; // rax
  CompositionSurfaceObject *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 Win32kImportTable; // rax
  int v53; // eax
  struct FlipManagerTokenObject *v54; // rdx
  _QWORD *v55; // rcx
  char v56; // r13
  __int64 v57; // rdx
  _QWORD *v58; // rax
  CompositionSurfaceObject *v59; // rcx
  void *v60; // rcx
  __int64 v61; // r12
  __int64 v62; // rax
  char v63; // [rsp+30h] [rbp-D0h]
  bool v64; // [rsp+31h] [rbp-CFh] BYREF
  char v65; // [rsp+32h] [rbp-CEh]
  int v66; // [rsp+34h] [rbp-CCh]
  unsigned int v67; // [rsp+38h] [rbp-C8h]
  char v68; // [rsp+3Ch] [rbp-C4h]
  int v69; // [rsp+40h] [rbp-C0h]
  LONG PreviousState; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+4Ch] [rbp-B4h]
  PVOID v73; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+60h] [rbp-A0h]
  PVOID v76; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  HANDLE v78; // [rsp+78h] [rbp-88h]
  void *v79; // [rsp+80h] [rbp-80h]
  PVOID v80; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v81[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v82; // [rsp+98h] [rbp-68h]
  _BYTE *v83; // [rsp+A0h] [rbp-60h]
  __int64 v84; // [rsp+A8h] [rbp-58h]
  __int64 v85; // [rsp+B0h] [rbp-50h]
  _QWORD *v86; // [rsp+B8h] [rbp-48h]
  HANDLE Handle; // [rsp+C0h] [rbp-40h]
  _BYTE Src[2048]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  v71 = a2;
  v3 = 640;
  v63 = 1;
  v72 = 640;
  v4 = a2;
  do
  {
    v6 = 0;
    ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
    *((_QWORD *)this + 12) = KeGetCurrentThread();
    if ( *((_QWORD *)this + 23) )
      goto LABEL_3;
    v33 = (_QWORD *)((char *)this + 160);
    v34 = (_QWORD *)*((_QWORD *)this + 20);
    if ( v34 == (_QWORD *)((char *)this + 160) )
    {
      v6 = CLegacyTokenBuffer::Create((struct CLegacyTokenBuffer **)this + 23);
LABEL_3:
      if ( v6 < 0 )
        goto LABEL_47;
      goto LABEL_4;
    }
    if ( (_QWORD *)v34[1] != v33 || (v35 = *v34, *(_QWORD **)(*v34 + 8LL) != v34) )
LABEL_69:
      __fastfail(3u);
    *v33 = v35;
    *(_QWORD *)(v35 + 8) = v33;
    --*((_DWORD *)this + 44);
    *((_QWORD *)this + 23) = v34;
LABEL_4:
    v7 = *((_QWORD *)this + 23);
    v6 = 0;
    if ( v3 > *(_DWORD *)(v7 + 2104) )
      v6 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 23));
    v79 = *(void **)(v7 + 2096);
    if ( v6 < 0 )
      goto LABEL_46;
    v81[1] = *(_DWORD *)(v7 + 2104);
    v82 = 0LL;
    v84 = 0LL;
    v83 = Src;
    v81[0] = v4;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal(v81);
    v6 = PresentHistoryInternal;
    switch ( PresentHistoryInternal )
    {
      case 0:
        v63 = 0;
LABEL_9:
        v9 = Src;
        v10 = 0;
        v66 = 0;
        v11 = 0;
        v74 = 0;
        v12 = 0;
        v69 = 0;
        v13 = 0;
        v67 = 0;
        if ( (_DWORD)v84 )
        {
          while ( 1 )
          {
            v14 = *(_DWORD *)v9;
            if ( *(_DWORD *)v9 == 7 )
            {
              v41 = (void *)*((_QWORD *)v9 + 2);
              v78 = v41;
              if ( !v41 )
                goto LABEL_42;
              v73 = 0LL;
              if ( ObReferenceObjectByHandle(v41, 2u, g_pDxgkCompositionObjectType, 1, &v73, 0LL) < 0 )
                goto LABEL_79;
              v42 = v73;
              v43 = (***((__int64 (__fastcall ****)(_QWORD))v73 + 2))(*((_QWORD *)v73 + 2));
              v44 = v42;
              if ( v43 == 2 )
              {
                if ( (int)CompositionTokenObject::MarkCompleted((CompositionTokenObject *)v42) >= 0 )
                {
                  v45 = (CTokenManager **)*((_QWORD *)this + 34);
                  v46 = (CTokenManager *)(v42 + 6);
                  if ( *v45 != (CTokenManager *)((char *)this + 264) )
                    goto LABEL_69;
                  *(_QWORD *)v46 = (char *)this + 264;
                  v42[7] = v45;
                  *v45 = v46;
                  *((_QWORD *)this + 34) = v46;
                  v51 = v42[15];
                  if ( v51 )
                  {
                    Win32kImportTable = DxgkGetWin32kImportTable();
                    (*(void (__fastcall **)(__int64))(Win32kImportTable + 64))(v51);
                  }
                  goto LABEL_79;
                }
                v44 = v42;
              }
              ObfDereferenceObject(v44);
LABEL_79:
              NtClose(v78);
              v10 = v66;
              goto LABEL_41;
            }
            if ( v14 == 8 )
            {
              v48 = DxgkGetWin32kImportTable();
              (*(void (**)(void))(v48 + 456))();
              v49 = DxgkGetWin32kImportTable();
              (*(void (__fastcall **)(_QWORD))(v49 + 32))(*((_QWORD *)v9 + 2));
              v50 = DxgkGetWin32kImportTable();
              (*(void (**)(void))(v50 + 496))();
              v10 = v66;
              goto LABEL_41;
            }
            if ( v14 != 2 )
              break;
            if ( (*((_DWORD *)v9 + 15) & 0x2000) == 0 || (*((_DWORD *)v9 + 15) & 0xC000) != 0x4000 )
            {
              v37 = *((_QWORD *)v9 + 1);
              v80 = 0LL;
              v75 = v37;
              v38 = (void *)*((_QWORD *)v9 + 8);
              v68 = 0;
              Handle = v38;
              if ( ObReferenceObjectByHandle(v38, 2u, g_pDxgkCompositionObjectType, 1, &v80, 0LL) >= 0 )
              {
                v76 = v80;
                if ( (***((unsigned int (__fastcall ****)(_QWORD))v80 + 2))(*((_QWORD *)v80 + 2)) != 1 )
                {
                  ObfDereferenceObject(v76);
                  v10 = v66;
                  goto LABEL_41;
                }
                v39 = *((_DWORD *)v9 + 15);
                v40 = v76;
                PreviousState = v39 & 0x2000;
                v65 = 1;
                v78 = 0LL;
                v86 = 0LL;
                Object = v76;
                if ( (v39 & 0x42000) == 0x2000 )
                {
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v40 + 12, 0LL);
                  v15 = v40[40] == 0;
                  Object = v40;
                  if ( !v15 )
                  {
                    v16 = v40 + 36;
                    v17 = (_QWORD *)*((_QWORD *)v40 + 18);
                    Object = v40;
                    while ( v17 != v16 )
                    {
                      if ( *(v17 - 1) == v75 )
                      {
                        v65 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64))(*(v17 - 3) + 200LL))(
                                v17 - 3,
                                v16,
                                v75);
                        goto LABEL_21;
                      }
                      v17 = (_QWORD *)*v17;
                    }
                  }
                  v65 = 0;
LABEL_21:
                  CPushLock::ReleaseLock((CPushLock *)(v40 + 12));
                }
                Pool2 = ExAllocatePool2(256LL, 616LL, 1869892948LL);
                v19 = Pool2;
                if ( Pool2 )
                {
                  *(_DWORD *)(Pool2 + 24) = 6;
                  *(_QWORD *)(Pool2 + 32) = 0LL;
                  *(_DWORD *)(Pool2 + 40) = 0;
                  *(_WORD *)(Pool2 + 64) = 0;
                  *(_QWORD *)(Pool2 + 96) = 0LL;
                  *(_DWORD *)(Pool2 + 68) = 0;
                  v20 = v76;
                  *(_QWORD *)Pool2 = &CToken::`vftable';
                  v21 = v75;
                  *(_QWORD *)(v19 + 48) = v20;
                  v22 = Object;
                  *(_QWORD *)(v19 + 56) = v21;
                  ObReferenceObjectByPointer(v22, 3u, g_pDxgkCompositionObjectType, 0);
                  *(_DWORD *)(v19 + 581) = 256;
                  *(_QWORD *)v19 = &CFlipToken::`vftable';
                  *(_QWORD *)(v19 + 104) = 0LL;
                  *(_QWORD *)(v19 + 112) = 0LL;
                  *(_DWORD *)(v19 + 577) = 0;
                  *(_QWORD *)(v19 + 592) = 0LL;
                  *(_QWORD *)(v19 + 600) = 0LL;
                  v73 = *(PVOID *)(v19 + 48);
                  v85 = *(_QWORD *)(v19 + 56);
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx((char *)v73 + 48, 0LL);
                  v64 = 0;
                  if ( *((_DWORD *)v73 + 40) )
                  {
                    for ( i = (char *)*((_QWORD *)v73 + 18); i != (char *)v73 + 144; i = *(char **)i )
                    {
                      if ( *((_QWORD *)i - 1) == v85 )
                      {
                        v64 = i[17];
                        break;
                      }
                    }
                  }
                  CurrentThreadId = PsGetCurrentThreadId();
                  v25 = (char *)v73;
                  if ( CurrentThreadId == *((HANDLE *)v73 + 7) )
                  {
                    *((_QWORD *)v73 + 7) = 0LL;
                    ExReleasePushLockExclusiveEx(v25 + 48, 0LL);
                  }
                  else
                  {
                    ExReleasePushLockSharedEx((char *)v73 + 48, 0LL);
                  }
                  KeLeaveCriticalRegion();
                  v26 = v65;
                  *(_BYTE *)(v19 + 576) = !v64;
                  *(_QWORD *)(v19 + 164) = 0LL;
                  *(_QWORD *)(v19 + 172) = 0LL;
                  *(_QWORD *)(v19 + 180) = 0LL;
                  *(_QWORD *)(v19 + 188) = 0LL;
                  *(_QWORD *)(v19 + 204) = 1065353216LL;
                  *(_DWORD *)(v19 + 212) = 0;
                  *(_QWORD *)(v19 + 216) = 1065353216LL;
                  *(_DWORD *)(v19 + 224) = 0;
                  *(_QWORD *)(v19 + 136) = 0LL;
                  *(_QWORD *)(v19 + 144) = 0LL;
                  v27 = CFlipToken::InitializeCompleted(
                          (CFlipToken *)v19,
                          (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v9 + 16),
                          v26);
                  if ( v27 < 0 )
                  {
                    (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1LL);
                    v28 = v86;
                  }
                  else
                  {
                    v28 = (_QWORD *)v19;
                  }
                  if ( v27 >= 0 )
                  {
                    v29 = v28;
                    goto LABEL_34;
                  }
                }
                else
                {
                  v27 = -1073741801;
                }
                v47 = (CompositionSurfaceObject *)v76;
                CompositionSurfaceObject::SignalGpuFence((CompositionSurfaceObject *)v76, v75, *((_QWORD *)v9 + 2), 1);
                if ( *((_QWORD *)v9 + 6) )
                  CompositionSurfaceObject::SignalPresentLimitSemaphore(v47, v75);
                v29 = v78;
LABEL_34:
                if ( v27 < 0 )
                  v29 = 0LL;
                if ( !PreviousState )
                  ObCloseHandle(Handle, 1);
                ObfDereferenceObject(Object);
                if ( v27 >= 0 )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v29 + 144LL))(v29)
                    || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v29 + 152LL))(v29) )
                  {
                    if ( CTokenManager::AddTokenToQueue(this, (struct CToken *)v29) < 0 )
                    {
                      (*(void (__fastcall **)(_QWORD *))(*v29 + 56LL))(v29);
                      (*(void (__fastcall **)(_QWORD *, __int64))*v29)(v29, 1LL);
                      goto LABEL_39;
                    }
                    v56 = v68;
                  }
                  else
                  {
                    v55 = (_QWORD *)((char *)this + 328);
                    v56 = 1;
                    v57 = *((_QWORD *)this + 41);
                    v58 = v29 + 1;
                    if ( *(CTokenManager **)(v57 + 8) != (CTokenManager *)((char *)this + 328) )
                      goto LABEL_69;
                    *v58 = v57;
                    v29[2] = v55;
                    *(_QWORD *)(v57 + 8) = v58;
                    *v55 = v58;
                  }
                  v59 = (CompositionSurfaceObject *)v29[6];
                  if ( v59 && CompositionSurfaceObject::StartCompositionEarly(v59, v75) )
                  {
                    v60 = (void *)*((_QWORD *)this + 9);
                    PreviousState = 0;
                    ZwSetEvent(v60, &PreviousState);
                  }
                  v61 = *((_QWORD *)v9 + 11);
                  if ( v61 )
                  {
                    v62 = DxgkGetWin32kImportTable();
                    (*(void (__fastcall **)(__int64))(v62 + 64))(v61);
                  }
                  v12 = v69;
                  if ( v56 )
                  {
                    v10 = v66;
                    v12 = ++v69;
                    goto LABEL_41;
                  }
                }
                else
                {
LABEL_39:
                  v12 = v69;
                }
              }
LABEL_40:
              v10 = v66;
              goto LABEL_41;
            }
            CTokenManager::CompleteIndependentFlipToken(
              this,
              *((_QWORD *)v9 + 1),
              (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v9 + 16),
              v71);
            v10 = v66;
            v69 = ++v12;
LABEL_41:
            v13 = v67;
LABEL_42:
            ++v13;
            v11 = v74;
            v9 += *((unsigned int *)v9 + 1);
            v67 = v13;
            if ( v13 >= (unsigned int)v84 )
              goto LABEL_43;
          }
          if ( v14 != 9 )
          {
            memmove(v79, v9, *((unsigned int *)v9 + 1));
            v36 = *((unsigned int *)v9 + 1);
            v10 = ++v66;
            v79 = (char *)v79 + v36;
            v74 = v36 + v11;
            goto LABEL_41;
          }
          v53 = *((_DWORD *)v9 + 8);
          v64 = 1;
          if ( (v53 & 4) == 0 )
            goto LABEL_85;
          v54 = (struct FlipManagerTokenObject *)*((_QWORD *)v9 + 2);
          if ( !v54 )
            goto LABEL_84;
          CTokenManager::CompleteFlipManagerToken(this, v54, &v64);
          if ( v64 )
          {
            v13 = v67;
LABEL_84:
            v10 = v66;
LABEL_85:
            v69 = ++v12;
            goto LABEL_42;
          }
          goto LABEL_40;
        }
LABEL_43:
        v30 = *((_QWORD *)this + 23);
        *(_DWORD *)(*(_QWORD *)(v30 + 2088) + 16LL) += v10;
        *(_DWORD *)(*(_QWORD *)(v30 + 2088) + 2068LL) += v11;
        *(_DWORD *)(v30 + 2104) -= v11;
        *(_QWORD *)(v30 + 2096) += v11;
        if ( (_DWORD)v84 != v12 )
        {
          v31 = (void *)*((_QWORD *)this + 8);
          PreviousState = 0;
          ZwSetEvent(v31, &PreviousState);
        }
        v4 = v71;
        v3 = v72;
LABEL_46:
        v2 = v63;
        break;
      case 261:
        goto LABEL_9;
      case -1073741789:
        v2 = v63;
        v3 = 640;
        if ( (unsigned int)v82 > 0x280 )
          v3 = v82;
        v6 = 0;
        v72 = v3;
        break;
      default:
        v2 = 0;
        v63 = 0;
        break;
    }
LABEL_47:
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  }
  while ( v6 >= 0 && v2 );
  return (unsigned int)v6;
}
