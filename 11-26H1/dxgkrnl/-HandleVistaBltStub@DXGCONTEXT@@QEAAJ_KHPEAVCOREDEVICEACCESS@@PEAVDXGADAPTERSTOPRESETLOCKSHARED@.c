/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x14029AD60 (DxgkRender.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x14003C470 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x14003D504 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x14003EB68 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140041E4C (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403C98A8 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403C9A7C (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        int a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v8; // r15
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned int *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // ebx
  const char *v20; // rdx
  int v21; // esi
  unsigned int *v22; // rsi
  struct DXGCONTEXT **v23; // r12
  unsigned int v25; // eax
  unsigned int v26; // esi
  DXGDEVICE *v27; // rcx
  int v28; // r12d
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  int v30; // eax
  int v31; // edx
  struct _LOOKASIDE_LIST_EX *Global; // rax
  struct _D3DKMT_PRESENT *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  RECT v37; // xmm0
  unsigned int v38; // eax
  struct DXGCONTEXT **v39; // rbx
  struct DXGPROCESS *Current; // rax
  struct _LOOKASIDE_LIST_EX *v41; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v42; // rsi
  const char *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v47; // r8
  __int64 v48; // r12
  unsigned int *v49; // rsi
  unsigned int v50; // [rsp+50h] [rbp-B0h]
  unsigned int v51; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v52; // [rsp+58h] [rbp-A8h] BYREF
  void *v53; // [rsp+60h] [rbp-A0h]
  unsigned int v54; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTERSTOPRESETLOCKSHARED *v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+80h] [rbp-80h]
  HWND v59; // [rsp+88h] [rbp-78h]
  void *v60; // [rsp+90h] [rbp-70h] BYREF
  struct DXGCONTEXT **v61; // [rsp+98h] [rbp-68h]
  struct VIDSCH_SUBMIT_DATA_BASE *v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int128 v70; // [rsp+108h] [rbp+8h] BYREF
  RECT v71; // [rsp+118h] [rbp+18h] BYREF
  __int128 v72; // [rsp+128h] [rbp+28h] BYREF

  v8 = a6;
  *(_QWORD *)&v71.left = a2;
  v57 = a5;
  v11 = 0;
  v61 = a8;
  v58 = a3;
  if ( a2 >= 0 )
    return (unsigned int)v11;
  v60 = 0LL;
  v12 = HIDWORD(a2);
  v62[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
  LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
  v13 = *((_QWORD *)this + 2);
  v14 = 0;
  v70 = 0LL;
  v56 = 0LL;
  v15 = 0LL;
  v72 = 0LL;
  v16 = *(_QWORD *)(v13 + 1896);
  v69 = v16;
  v59 = (HWND)v12;
  v52 = 0;
  v50 = 0;
  v54 = 0;
  v53 = 0LL;
  v55 = 0;
  v51 = 0;
  v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12) + 11);
  if ( !v17 )
    return 3221225485LL;
  if ( v16 )
    v18 = v16;
  else
    v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v65 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
  v63 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = v18;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v57);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
  v19 = CWin32kLocks::Lock((CWin32kLocks *)&v63, v59, 1, 1, 0);
  if ( v19 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, void **))(v17 + 248))(v63, &v60);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v63, &v70)
      && (*(unsigned int (__fastcall **)(HWND, __int128 *))(v17 + 376))(v59, &v72) )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v17 + 328))(v63, &v56);
      v31 = v19;
      if ( !v30 )
        v31 = -1073741811;
      v19 = v31;
    }
    else
    {
      v19 = -1073741811;
    }
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)&v63);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v57);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
  if ( v21 >= 0 )
  {
    if ( v19 < 0 )
    {
      v11 = 0;
      v22 = 0LL;
      goto LABEL_16;
    }
    if ( !a6 )
    {
      v22 = 0LL;
LABEL_10:
      v23 = v61;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v62[0],
              (struct COREDEVICEACCESS *)a4,
              &v52,
              a6,
              v61,
              v22,
              &v55);
      if ( v11 >= 0 )
      {
        if ( v60
          && ((int)DXGCONTEXT::OpenResourceFromSharedHandle(
                     this,
                     v60,
                     (struct COREDEVICEACCESS *)a4,
                     &v54,
                     a6,
                     v23,
                     v15,
                     &v51) < 0
            ? (v25 = 0)
            : (v25 = v54),
              (v50 = v25) != 0) )
        {
          if ( !a6 )
          {
            v26 = v51;
            if ( v51 > 1 )
            {
              v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 420LL) == 4318 )
              {
                v28 = v58;
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v27, v58);
                if ( VistaBltStubInfo )
                {
                  if ( v28 )
                  {
                    *(_QWORD *)VistaBltStubInfo = *(_QWORD *)&v71.left;
                    *((_DWORD *)VistaBltStubInfo + 2) = v26 - 1;
                    *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
                  }
                  else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
                  {
                    *(_QWORD *)VistaBltStubInfo = 0LL;
                    *((_DWORD *)VistaBltStubInfo + 3) = 0;
                  }
                }
              }
            }
            goto LABEL_13;
          }
        }
        else if ( !a6 )
        {
          goto LABEL_13;
        }
        if ( v55 <= 1 && v51 <= 1 )
        {
          v8 = 0LL;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
          v15 = 0LL;
          v53 = 0LL;
        }
LABEL_13:
        CVidSchSubmitData::CVidSchSubmitData(
          (CVidSchSubmitData *)v62,
          *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
          1);
        v14 = v52;
        if ( v62[0] )
        {
          LODWORD(v70) = v56 + v70;
          DWORD1(v70) += HIDWORD(v56);
          DWORD2(v70) += v56;
          HIDWORD(v70) += HIDWORD(v56);
          v71.left = v70 - v72;
          v71.top = DWORD1(v70) - DWORD1(v72);
          v71.right = DWORD2(v70) - v72;
          v71.bottom = HIDWORD(v70) - DWORD1(v72);
          Global = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
          v33 = (struct _D3DKMT_PRESENT *)ExAllocateFromLookasideListEx(Global + 12);
          if ( v33 )
          {
            v34 = v69;
            if ( !v69 )
              v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
            v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
            v68 = v34;
            v63 = 0LL;
            v64 = 0LL;
            v65 = v35;
            v66 = 0LL;
            v67 = 0LL;
            memset(v33, 0, 0x5F8uLL);
            v36 = *(unsigned int *)(*((_QWORD *)this + 2) + 468LL);
            v33->hDevice = v36;
            v33->hDevice = *((_DWORD *)this + 6);
            v33->hWindow = v59;
            v33->hDestination = v50;
            v33->VidPnSourceId = 0;
            v33->hSource = v14;
            v37 = v71;
            v33->pSrcSubRects = &v71;
            v38 = v33->Flags.Value & 0xFFFFEFFF;
            v33->SubRectCnt = 1;
            *(_QWORD *)&v33->PresentCount = 0LL;
            v33->Flags.Value = v38 | 0x10081;
            v33->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
            v33->SrcRect = v37;
            v33->PresentHistoryToken.Token.Flip.hLogicalSurface = (ULONG64)v60;
            v33->PresentHistoryToken.Token.Flip.dxgContext = 0LL;
            v33->BroadcastContextCount = v8;
            if ( (_DWORD)v8 )
            {
              v36 = (__int64)a7;
              v47 = (unsigned int)v8;
              do
              {
                *(_DWORD *)((char *)v33 - (char *)a7 + v36 + 96) = *(_DWORD *)v36;
                v36 += 4LL;
                --v47;
              }
              while ( v47 );
            }
            v39 = v61;
            v33->BroadcastSrcAllocation = (D3DKMT_HANDLE *)v53;
            *(_QWORD *)&v33[1].hDevice = v39;
            v33->BroadcastDstAllocation = v15;
            LOBYTE(v33[1].VidPnSourceId) = 1;
            Current = DXGPROCESS::GetCurrent(v36);
            DXGCONTEXT::CopyPresentArgs(this, v33, Current);
            v11 = DXGCONTEXT::Present(
                    this,
                    v33,
                    (struct COREDEVICEACCESS *)a4,
                    v57,
                    (struct CWin32kLocks *)&v63,
                    v39,
                    v62[0]);
            v41 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
            ExFreeToLookasideListEx(v41 + 12, v33);
            if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
            v42 = v57;
            if ( *((_BYTE *)v57 + 16) )
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v57);
            CWin32kLocks::~CWin32kLocks((CWin32kLocks *)&v63);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v42);
            if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
            {
              v11 = -1073741130;
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v43);
            }
            goto LABEL_15;
          }
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 6565;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for present parameters.",
            6565LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v11 = -1073741801;
LABEL_15:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v62);
        v22 = (unsigned int *)v53;
        goto LABEL_16;
      }
      v14 = v52;
LABEL_16:
      if ( v14 )
        DXGCONTEXT::DestroyAllocation(this, v14, (struct COREDEVICEACCESS *)a4);
      if ( v50 )
        DXGCONTEXT::DestroyAllocation(this, v50, (struct COREDEVICEACCESS *)a4);
      if ( !v22 )
        goto LABEL_21;
      if ( !(_DWORD)v8 )
      {
LABEL_77:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
LABEL_21:
        if ( v15 )
        {
          if ( (_DWORD)v8 )
          {
            v49 = v15;
            do
            {
              if ( *v49 )
                DXGCONTEXT::DestroyAllocation(this, *v49, (struct COREDEVICEACCESS *)a4);
              ++v49;
              --v8;
            }
            while ( v8 );
          }
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
        }
        return (unsigned int)v11;
      }
LABEL_72:
      v48 = (unsigned int)v8;
      do
      {
        if ( *v22 )
          DXGCONTEXT::DestroyAllocation(this, *v22, (struct COREDEVICEACCESS *)a4);
        ++v22;
        --v48;
      }
      while ( v48 );
      v22 = (unsigned int *)v53;
      goto LABEL_77;
    }
    v44 = 4LL * a6;
    if ( !is_mul_ok(a6, 4uLL) )
      v44 = -1LL;
    v53 = (void *)operator new[](v44, 0x4B677844u, 256LL);
    v22 = (unsigned int *)v53;
    if ( v53 )
    {
      v45 = 4LL * a6;
      if ( !is_mul_ok(a6, 4uLL) )
        v45 = -1LL;
      v15 = (unsigned int *)operator new[](v45, 0x4B677844u, 256LL);
      if ( !v15 )
      {
        v11 = -1073741670;
        goto LABEL_72;
      }
      goto LABEL_10;
    }
    return (unsigned int)-1073741670;
  }
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v20);
  return (unsigned int)v21;
}
