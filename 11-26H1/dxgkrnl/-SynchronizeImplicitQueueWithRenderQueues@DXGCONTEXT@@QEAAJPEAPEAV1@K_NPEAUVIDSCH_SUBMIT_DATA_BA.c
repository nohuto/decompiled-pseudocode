/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630
 * Callers:
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1401F43B0 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403358AC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VidSchSubmitWaitToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140045D90 (-VidSchSubmitWaitToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x140306898 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        char a4,
        struct VIDSCH_SUBMIT_DATA_BASE *a5,
        struct DXGK_PRESENT_PARAMS *a6,
        bool a7)
{
  __int64 v7; // r13
  struct DXGCONTEXT **v8; // r9
  char v10; // r15
  __int64 v11; // r14
  unsigned int v12; // esi
  DXGCONTEXT *v13; // rcx
  DXGCONTEXT *v14; // rax
  _QWORD *Pool2; // rdi
  unsigned int v16; // r9d
  char *v17; // r8
  char *i; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  DXGFASTMUTEX *v24; // rcx
  int v25; // r14d
  struct VIDSCH_SUBMIT_DATA_BASE *v26; // rax
  struct DXGK_PRESENT_PARAMS *v27; // r8
  struct _VIDSCH_SYNC_OBJECT *v28; // rdx
  char *v30; // r15
  char *k; // rsi
  char *v32; // rdi
  _QWORD *v33; // r15
  _QWORD **v34; // rdi
  _QWORD *m; // rsi
  _QWORD *v36; // r13
  _QWORD *v37; // rax
  struct _VIDSCH_SYNC_OBJECT *v38; // rax
  _QWORD *v39; // r9
  char *v40; // rax
  struct _VIDSCH_SYNC_OBJECT *v41; // rax
  char *v42; // r8
  __int64 v43; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v45; // rax
  int SyncObject; // eax
  unsigned int v47; // edi
  DXGCONTEXT **v48; // r9
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // r11
  _QWORD *v52; // r10
  _QWORD **v53; // r8
  _QWORD *j; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  char v59; // [rsp+80h] [rbp-88h]
  DXGFASTMUTEX *v60; // [rsp+88h] [rbp-80h] BYREF
  char v61; // [rsp+90h] [rbp-78h]
  _BYTE v62[16]; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h]
  _BYTE v64[64]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v65; // [rsp+F0h] [rbp-18h]
  _QWORD v66[16]; // [rsp+F8h] [rbp-10h] BYREF
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+188h] [rbp+80h] BYREF
  struct DXGCONTEXT **v68; // [rsp+190h] [rbp+88h]
  char v69; // [rsp+1A0h] [rbp+98h]

  v69 = a4;
  v68 = a2;
  v7 = a3;
  v8 = a2;
  v10 = 0;
  v11 = 0LL;
  if ( a6 )
  {
    v43 = *((_QWORD *)a6 + 188);
    if ( v43 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 5104LL) & 1) != 0
        && !*((_DWORD *)a6 + 23) )
      {
        v10 = 1;
        v11 = *(_QWORD *)(*(_QWORD *)v43 + 48LL);
      }
    }
  }
  if ( *((_QWORD *)this + 30) )
  {
LABEL_3:
    ++*((_QWORD *)this + 31);
    v12 = 0;
    v13 = (DXGCONTEXT *)*((_QWORD *)this + 50);
    a6 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)this + 31);
    while ( 1 )
    {
      v14 = 0LL;
      if ( v13 != (DXGCONTEXT *)((char *)this + 400) )
        v14 = v13;
      if ( !v14 )
        break;
      v13 = *(DXGCONTEXT **)v13;
      ++v12;
    }
    if ( (unsigned int)(v7 + 1) > 1 )
    {
      v48 = v8 + 1;
      do
      {
        v12 += DXGCONTEXT::GetRenderHwQueueCount(*v48);
        v48 = (DXGCONTEXT **)(v49 + 8);
      }
      while ( v50 != 1 );
    }
    P = 0LL;
    Pool2 = 0LL;
    v65 = 0;
    if ( v12 > 8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v12 < 8 )
      {
LABEL_13:
        if ( !Pool2 )
          return 3221225495LL;
        v16 = 0;
        if ( v10 && v11 )
        {
          *Pool2 = v11;
          v12 = 1;
        }
        else
        {
          v17 = (char *)this + 400;
          for ( i = (char *)*((_QWORD *)this + 50); ; i = *(char **)i )
          {
            v19 = 0LL;
            if ( i != v17 )
              v19 = i;
            if ( !v19 )
              break;
            v20 = v16;
            v21 = i;
            if ( i == v17 )
              v21 = 0LL;
            ++v16;
            Pool2[v20] = *((_QWORD *)v21 + 6);
          }
          if ( (unsigned int)(v7 + 1) > 1 )
          {
            v51 = v7;
            v52 = v68 + 1;
            do
            {
              v53 = (_QWORD **)(*v52 + 400LL);
              for ( j = *v53; ; j = (_QWORD *)*j )
              {
                v55 = 0LL;
                if ( j != v53 )
                  v55 = j;
                if ( !v55 )
                  break;
                v56 = v16;
                v57 = j;
                if ( j == v53 )
                  v57 = 0LL;
                ++v16;
                Pool2[v56] = v57[6];
              }
              ++v52;
              --v51;
            }
            while ( v51 );
          }
        }
        v22 = *(_QWORD *)(*((_QWORD *)this + 30) + 32LL);
        v23 = v22 == -32;
        v24 = (DXGFASTMUTEX *)(v22 + 32);
        v61 = 0;
        v60 = v24;
        if ( v23 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 628;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
          v24 = v60;
        }
        if ( DXGFASTMUTEX::IsOwner(v24) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 635;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v60);
        VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 30));
        v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, struct DXGK_PRESENT_PARAMS **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 672LL))(
                v12,
                Pool2,
                1LL,
                &VidSchSyncObject,
                0,
                &a6);
        if ( v25 >= 0 )
        {
          v26 = a5;
          v27 = a6;
          v28 = VidSchSyncObject;
          if ( a5 )
          {
            *((_QWORD *)a5 + 66) = VidSchSyncObject;
            *((_QWORD *)v26 + 67) = v27;
          }
          if ( v69 )
          {
            v25 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, struct DXGK_PRESENT_PARAMS *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 656LL))(
                    *((_QWORD *)this + 36),
                    v28,
                    v27);
          }
          else
          {
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v60);
            v30 = (char *)this + 400;
            for ( k = (char *)*((_QWORD *)this + 50); ; k = *(char **)k )
            {
              v32 = 0LL;
              if ( k != v30 )
                v32 = k;
              if ( !v32 )
                break;
              v40 = k;
              if ( k == v30 )
                v40 = 0LL;
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&v58,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v40 + 10) + 32LL) + 32LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v58);
              v41 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)v32 + 10));
              v42 = k;
              if ( k == v30 )
                v42 = 0LL;
              v25 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                                                                                            + 656LL))(
                      *((_QWORD *)this + 36),
                      v41,
                      *((_QWORD *)v42 + 11));
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v58);
            }
            if ( (unsigned int)(v7 + 1) > 1 )
            {
              v33 = v68 + 1;
              v58 = v7;
              do
              {
                v34 = (_QWORD **)(*v33 + 400LL);
                for ( m = *v34; ; m = (_QWORD *)*m )
                {
                  v36 = 0LL;
                  if ( m != v34 )
                    v36 = m;
                  if ( !v36 )
                    break;
                  v37 = m;
                  if ( m == v34 )
                    v37 = 0LL;
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)v62,
                    (struct DXGFASTMUTEX *const)(*(_QWORD *)(v37[10] + 32LL) + 32LL),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v62);
                  v38 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject((DXGDEVICESYNCOBJECT *)v36[10]);
                  v39 = m;
                  if ( m == v34 )
                    v39 = 0LL;
                  v25 = VIDSCH_EXPORT::VidSchSubmitWaitToHwQueue(
                          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                          *((struct VIDSCH_HW_QUEUE **)this + 36),
                          v38,
                          v39[11]);
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v62);
                }
                ++v33;
                --v58;
              }
              while ( v58 );
            }
          }
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v60);
        if ( P != v64 && P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v25;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v12, 1265072196LL);
      P = Pool2;
    }
    else
    {
      Pool2 = v64;
      P = v64;
      if ( v12 )
      {
        memset(v64, 0, 8LL * v12);
        Pool2 = P;
      }
    }
    v65 = v12;
    goto LABEL_13;
  }
  memset(v66, 0, 0x50uLL);
  HIDWORD(v66[0]) |= 0x80u;
  LODWORD(v66[0]) = 5;
  *((_QWORD *)this + 31) = 0LL;
  v66[1] = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v58, Global, 1);
  if ( !a7 )
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v58);
  v45 = DXGGLOBAL::GetGlobal();
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 v45,
                 *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                 *((_QWORD *)this + 2),
                 (unsigned int)(1 << *((_DWORD *)this + 97)),
                 v66,
                 17,
                 0,
                 0LL,
                 0LL,
                 (char *)this + 240,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
  v47 = SyncObject;
  if ( SyncObject >= 0 )
  {
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v58);
    v8 = v68;
    goto LABEL_3;
  }
  WdLogSingleEntry2(3LL, this, SyncObject);
  WdLogGlobalForLineNumber = 2848;
  if ( v59 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v58);
  return v47;
}
