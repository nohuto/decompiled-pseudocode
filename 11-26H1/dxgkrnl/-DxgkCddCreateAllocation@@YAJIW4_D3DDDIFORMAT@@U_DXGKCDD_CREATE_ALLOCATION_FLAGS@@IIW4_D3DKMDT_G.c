/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1403BAD80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403BB70C (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        int a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  __int64 v17; // rdi
  __int64 v18; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  struct DXGDEVICE *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rdx
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // r15d
  unsigned int v30; // ebx
  int v31; // ebx
  int StandardAllocation; // ebx
  int v33; // eax
  unsigned __int64 v34; // rdx
  ADAPTER_RENDER **v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  ADAPTER_RENDER **v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  ADAPTER_RENDER **v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  ADAPTER_RENDER **v50; // rcx
  __int64 CurrentProcess; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h]
  char v56; // [rsp+60h] [rbp-A0h]
  _DWORD *v57; // [rsp+68h] [rbp-98h]
  struct DXGDEVICE *v58; // [rsp+70h] [rbp-90h] BYREF
  struct DXGDEVICE *v59; // [rsp+78h] [rbp-88h] BYREF
  char v60; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  _QWORD *v65; // [rsp+A8h] [rbp-58h]
  char v66[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h]
  char v68; // [rsp+C0h] [rbp-40h]
  _QWORD v69[54]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v70; // [rsp+280h] [rbp+180h] BYREF
  int v71; // [rsp+288h] [rbp+188h]
  int v72; // [rsp+28Ch] [rbp+18Ch]
  _DWORD v73[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v74; // [rsp+2A0h] [rbp+1A0h]
  char v75[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v76[8]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v77; // [rsp+2C0h] [rbp+1C0h]
  __int64 v78; // [rsp+2C8h] [rbp+1C8h]
  char v79; // [rsp+2D0h] [rbp+1D0h]
  __int64 v80; // [rsp+2D8h] [rbp+1D8h]
  _BYTE v81[64]; // [rsp+2F8h] [rbp+1F8h] BYREF
  struct DXGDEVICE *v82; // [rsp+338h] [rbp+238h]
  char v83; // [rsp+340h] [rbp+240h]

  v63 = a7;
  v64 = a8;
  v62 = a9;
  v57 = a11;
  v70 = a12;
  v65 = a13;
  v61 = a4;
  v17 = (unsigned int)a1;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v18);
  v21 = (__int64)Current;
  if ( Current )
  {
    v59 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v17, Current, &v59);
    v22 = v59;
    if ( v59 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v59, v59);
      v23 = *((_QWORD *)v22 + 2);
      v68 = 0;
      v67 = *(_QWORD *)(v23 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
      v24 = *(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL);
      v78 = v24;
      v79 = 0;
      v80 = 0LL;
      if ( v24 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
        v77 = -1LL;
      }
      COREACCESS::COREACCESS((COREACCESS *)v81, *(struct DXGADAPTER *const *)(*((_QWORD *)v22 + 2) + 16LL));
      v82 = v22;
      v83 = 0;
      v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75, 0LL);
      v27 = v25;
      if ( v25 >= 0 )
      {
        memset(v69, 0, 424);
        v69[39] = v62;
        LODWORD(v69[40]) = a10;
        v28 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 2492LL);
        if ( (v28 & 4) == 0 && ((v28 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
        {
          if ( a6 == 1 )
            goto LABEL_26;
          if ( a6 != 2 )
          {
            if ( a6 != 3 && a6 != 6 )
              goto LABEL_27;
LABEL_26:
            LODWORD(v69[0]) |= 2u;
            v70 = (_DWORD *)__PAIR64__(a5, a4);
            v29 = a5;
            v69[3] = &v70;
            v72 = 0;
            v71 = a2;
            LODWORD(v69[2]) = 2;
            StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                                   v22,
                                   (struct _D3DKM_CREATESTANDARDALLOCATION *)v69,
                                   (struct COREDEVICEACCESS *)v75);
            if ( StandardAllocation >= 0 )
            {
LABEL_27:
              if ( !LODWORD(v69[1]) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1179;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL != CreateStandardAlloc.hResource",
                  1179LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *v57 = HIDWORD(v69[6]);
              COREACCESS::~COREACCESS((COREACCESS *)v81, v26);
              COREACCESS::~COREACCESS((COREACCESS *)v76, v34);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
              if ( v60 )
              {
                ExReleaseResourceLite(*((PERESOURCE *)v59 + 17));
                KeLeaveCriticalRegion();
              }
              v35 = (ADAPTER_RENDER **)v58;
              if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(v35[2], (struct DXGDEVICE *)v35);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
              if ( v56 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
              }
              return 0LL;
            }
            goto LABEL_40;
          }
          LODWORD(v69[0]) |= 2u;
          v70 = (_DWORD *)__PAIR64__(a5, a4);
          v29 = a5;
          v69[3] = &v70;
          v72 = 0;
          v71 = a2;
          LODWORD(v69[2]) = 2;
          StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                                 v22,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v69,
                                 (struct COREDEVICEACCESS *)v75);
          if ( StandardAllocation >= 0 )
          {
            v47 = v72;
            if ( !v72 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1162;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"0 != StagingSurfaceData.Pitch",
                1162LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v47 = v72;
            }
LABEL_62:
            *a14 = v47;
            goto LABEL_27;
          }
LABEL_40:
          WdLogSingleEntry4(3LL, StandardAllocation, v22, v61, v29);
          WdLogGlobalForLineNumber = 1173;
          COREACCESS::~COREACCESS((COREACCESS *)v81, v38);
          COREACCESS::~COREACCESS((COREACCESS *)v76, v39);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
          if ( v60 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v59 + 17));
            KeLeaveCriticalRegion();
          }
          v40 = (ADAPTER_RENDER **)v58;
          if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(v40[2], (struct DXGDEVICE *)v40);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
          if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit);
          return (unsigned int)StandardAllocation;
        }
        v73[0] = a4;
        v29 = a5;
        v69[3] = v73;
        v30 = v69[0] & 0xFFFFFFE7 | (8 * (a3 & 3));
        v74 = 0LL;
        v73[1] = a5;
        v73[2] = a2;
        v73[3] = a6;
        LODWORD(v69[2]) = 4;
        LODWORD(v69[0]) = v30;
        switch ( a6 )
        {
          case 1:
            goto LABEL_15;
          case 2:
            v31 = v30 | 2;
            break;
          case 5:
            v31 = v30 | 4;
            v69[4] = v63;
            v69[5] = v64;
            break;
          case 6:
LABEL_15:
            v31 = v30 | 1;
            break;
          default:
            if ( (unsigned int)(a6 - 7) > 1 )
            {
LABEL_17:
              StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                                     v22,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v69,
                                     (struct COREDEVICEACCESS *)v75);
              if ( StandardAllocation < 0 )
                goto LABEL_40;
              if ( a6 != 1 )
              {
                if ( a6 == 2 || a6 == 5 )
                {
                  v47 = HIDWORD(v74);
                  if ( !HIDWORD(v74) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 1121;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"0 != GdiSurfaceData.Pitch",
                      1121LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v47 = HIDWORD(v74);
                  }
                  goto LABEL_62;
                }
                if ( a6 != 6 )
                {
                  if ( a6 == 7 )
                    goto LABEL_23;
                  if ( a6 != 8 )
                    goto LABEL_27;
                }
                *v65 = v69[41];
                v46 = HIDWORD(v74);
                if ( !HIDWORD(v74) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 1109;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"0 != GdiSurfaceData.Pitch",
                    1109LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v46 = HIDWORD(v74);
                }
                *a14 = v46;
              }
LABEL_23:
              v33 = HIDWORD(v69[1]);
              if ( !HIDWORD(v69[1]) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1116;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL != CreateStandardAlloc.hGlobalShare",
                  1116LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v33 = HIDWORD(v69[1]);
              }
              *v70 = v33;
              goto LABEL_27;
            }
            v31 = v30 | 0x21;
            break;
        }
        LODWORD(v69[0]) = v31;
        goto LABEL_17;
      }
      WdLogSingleEntry3(4LL, v25, v22, v21);
      WdLogGlobalForLineNumber = 1046;
      COREACCESS::~COREACCESS((COREACCESS *)v81, v48);
      COREACCESS::~COREACCESS((COREACCESS *)v76, v49);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
      if ( v60 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v59 + 17));
        KeLeaveCriticalRegion();
      }
      v50 = (ADAPTER_RENDER **)v58;
      if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v50[2], (struct DXGDEVICE *)v50);
    }
    else
    {
      v42 = v17;
      v43 = v17;
      v27 = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v42, v21);
      WdLogGlobalForLineNumber = 1028;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v43,
        v21,
        0LL,
        0LL);
      v44 = (ADAPTER_RENDER **)v58;
      if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v44[2], (struct DXGDEVICE *)v44);
    }
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v20);
    v27 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1019;
    v53 = PsGetCurrentProcess(v52);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v53,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit);
  return v27;
}
