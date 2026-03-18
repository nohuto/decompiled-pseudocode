/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x140177C40
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14000CD34 (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x140010A90 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x1400117B0 (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140095AE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C4560 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C4680 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C63A0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C68D0 (-vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  char *v2; // r14
  char *v3; // rsi
  unsigned int v4; // r15d
  _OWORD *v5; // r12
  struct REGION *v6; // rdi
  int v7; // ecx
  struct REGION *v8; // rax
  __int64 v9; // rax
  HANDLE CurrentThreadId; // rax
  char *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct REGION *v15; // rdx
  struct REGION *v16; // r8
  struct REGION *v17; // r14
  _QWORD *v18; // r12
  int sizeScanAlloc; // eax
  struct REGION_CORE *v20; // rdx
  REGION_CORE *v21; // rcx
  char *pScan; // rbx
  char *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 UserSessionState; // rax
  struct REGION_CORE *v27; // rdx
  char *v28; // rax
  REGION_CORE *v29; // rcx
  BOOL v30; // eax
  _BOOL8 v31; // rcx
  __int64 v32; // rax
  int v33; // edi
  struct REGION *v34; // rbx
  const struct REGION_CORE *v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  ULONG_PTR v39; // rax
  const struct REGION_CORE *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  const struct REGION_CORE *v44; // rdx
  __int64 v45; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  _DWORD *v50; // rbx
  REGION_CORE *v51; // rbx
  __int64 v52; // rcx
  ULONG_PTR v53; // rax
  const struct REGION_CORE *v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  char *v57; // rax
  struct REGION_CORE *v58; // r8
  _DWORD *v59; // rcx
  REGION_CORE *v60; // rcx
  struct REGION_CORE *v61; // rax
  char *v62; // rcx
  __int64 v63; // rax
  char *v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  _QWORD *v68; // r14
  __int64 v69; // r12
  int v70; // eax
  struct REGION_CORE *v71; // rdx
  REGION_CORE *v72; // rcx
  char *v73; // rbx
  char *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  struct REGION_CORE *v78; // rdx
  char *v79; // rax
  __int64 v80; // rax
  struct REGION *v81; // rbx
  __int64 v82; // rcx
  struct Gre::Base::SESSION_GLOBALS *p_DeviceContext; // rdx
  struct REGION *v84; // [rsp+30h] [rbp-49h] BYREF
  void *v85; // [rsp+38h] [rbp-41h] BYREF
  char *v86; // [rsp+40h] [rbp-39h] BYREF
  struct REGION *v87; // [rsp+48h] [rbp-31h] BYREF
  struct REGION *v88; // [rsp+50h] [rbp-29h] BYREF
  struct REGION_CORE *v89; // [rsp+58h] [rbp-21h] BYREF
  struct REGION *Region; // [rsp+60h] [rbp-19h] BYREF
  __int64 v91; // [rsp+68h] [rbp-11h] BYREF
  struct REGION *v92; // [rsp+70h] [rbp-9h] BYREF
  __int64 v93; // [rsp+78h] [rbp-1h] BYREF
  struct REGION *v94; // [rsp+80h] [rbp+7h] BYREF
  struct REGION *v95; // [rsp+88h] [rbp+Fh]
  __int128 v96; // [rsp+90h] [rbp+17h]

  KeEnterCriticalRegion();
  v2 = (char *)this + 1112;
  ExAcquirePushLockSharedEx((char *)this + 1112, 0LL);
  v3 = (char *)qword_1402A10B0 + 8;
  v4 = 0;
  v86 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 2LL);
  v5 = (_OWORD *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 142) )
  {
LABEL_150:
    ExReleasePushLockSharedEx(v3, 2LL);
    KeLeaveCriticalRegion();
    if ( PsGetCurrentThreadId() == *((HANDLE *)v2 + 1) )
    {
      *((_QWORD *)v2 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v2, 0LL);
    }
    KeLeaveCriticalRegion();
    return v4;
  }
  v6 = (struct REGION *)*((_QWORD *)this + 143);
  v4 = 1;
  v89 = (struct REGION_CORE *)*((_QWORD *)this + 142);
  v7 = 0;
  v87 = v6;
  v8 = v6;
  if ( !v6 )
  {
    Region = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v86, 0x70u);
    v6 = Region;
    if ( !Region )
      goto LABEL_13;
    RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region);
    v7 = 1;
    v87 = v6;
    v8 = v6;
  }
  if ( v8 )
  {
    if ( !v7 && (*((_DWORD *)this + 9) & 0x10) == 0 )
    {
      v9 = *((_QWORD *)this + 62);
      if ( v9 && (*(_DWORD *)(v9 + 116) & 0x800) != 0 && !*((_QWORD *)this + 145) )
        *((_DWORD *)this + 130) |= 0x10u;
      goto LABEL_21;
    }
    if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v87, (const struct RustAutoHotpatchLockSH *)&v86, (struct RGNOBJ *)&v89) )
    {
      v13 = *((_QWORD *)this + 62);
      if ( v13 && (*(_DWORD *)(v13 + 116) & 0x800) != 0 )
        *((_DWORD *)this + 130) |= 0x10u;
      v6 = v87;
      *((_QWORD *)this + 143) = v87;
LABEL_21:
      v14 = *((_QWORD *)this + 20);
      v15 = (struct REGION *)*((_QWORD *)this + 21);
      v16 = (struct REGION *)*((_QWORD *)this + 141);
      if ( !((unsigned __int64)v16 | (unsigned __int64)v15 | v14) )
      {
        v17 = (struct REGION *)*((_QWORD *)this + 144);
        v87 = v17;
        if ( v17 )
        {
          Region = *(struct REGION **)(W32GetSessionState(v14) + 88);
          if ( v17 != *((struct REGION **)Region + 520) )
          {
            v18 = (_QWORD *)((char *)v17 + 24);
            v89 = qword_1402A10B0;
            if ( qword_1402A10B0 )
            {
              (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)qword_1402A10B0 + 152LL))((_QWORD *)v17 + 3);
            }
            else if ( *v18 )
            {
              sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((struct REGION *)((char *)v17 + 24));
              v21 = (struct REGION *)((char *)v17 + 24);
              if ( sizeScanAlloc == 112 )
              {
                pScan = (char *)REGION_CORE::get_pScan(v21, v20);
                v23 = (char *)*((_QWORD *)Region + 517);
                UserSessionState = W32GetUserSessionState(v25, v24);
                NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
                  (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
                  v23,
                  pScan);
                v17 = v87;
              }
              else if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v21) > 0x70 )
              {
                v28 = (char *)REGION_CORE::get_pScan((struct REGION *)((char *)v17 + 24), v27);
                GreDeleteFastMutex(v28);
              }
              *v18 = 0LL;
            }
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v17);
            v5 = (_OWORD *)((char *)this + 1000);
          }
          *((_QWORD *)this + 144) = 0LL;
        }
        v29 = (struct REGION *)((char *)v6 + 24);
        if ( qword_1402A10B0 )
        {
          if ( !v6 )
            v29 = 0LL;
          (*(void (__fastcall **)(REGION_CORE *, _OWORD *))(*(_QWORD *)qword_1402A10B0 + 80LL))(v29, v5);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
        else
        {
          if ( (unsigned int)REGION_CORE::get_sizeScan(v29) > 0x38 )
            *v5 = xmmword_14025D3F0;
          else
            *v5 = *(_OWORD *)((char *)v6 + 52);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
LABEL_142:
        v2 = (char *)this + 1112;
        goto LABEL_143;
      }
      v95 = (struct REGION *)*((_QWORD *)this + 20);
      v30 = v14 != 0;
      v31 = v14 != 0;
      v96 = 0LL;
      v32 = (unsigned int)(v30 + 1);
      *(&v95 + v31) = v15;
      if ( !v15 )
        v32 = v31;
      v33 = v32 + 1;
      *(&v95 + v32) = v16;
      if ( !v16 )
        v33 = v32;
      v85 = (void *)*((_QWORD *)this + 144);
      if ( !v85 )
      {
        v92 = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v86, 0x70u);
        v34 = v92;
        if ( v92 )
        {
          RGNMEMOBJ::vInit((RGNMEMOBJ *)&v92);
          v85 = v34;
        }
      }
      if ( !v85 )
      {
        v4 = 0;
LABEL_131:
        v68 = v85;
        *((_QWORD *)this + 144) = 0LL;
        if ( v68 )
        {
          v91 = *(_QWORD *)(W32GetSessionState(v31) + 88);
          if ( v68 != *(_QWORD **)(v91 + 4160) )
          {
            if ( qword_1402A10B0 )
            {
              (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)qword_1402A10B0 + 152LL))(v68 + 3);
            }
            else
            {
              v69 = v68[3];
              v87 = (struct REGION *)(v68 + 3);
              if ( v69 )
              {
                v70 = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v68 + 3));
                v72 = (REGION_CORE *)(v68 + 3);
                if ( v70 == 112 )
                {
                  v73 = (char *)REGION_CORE::get_pScan(v72, v71);
                  v74 = *(char **)(v91 + 4136);
                  v77 = W32GetUserSessionState(v76, v75);
                  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
                    (NSInstrumentation::CLeakTrackingAllocator *)(v77 + 72032),
                    v74,
                    v73);
                }
                else if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v72) > 0x70 )
                {
                  v79 = (char *)REGION_CORE::get_pScan((REGION_CORE *)(v68 + 3), v78);
                  GreDeleteFastMutex(v79);
                }
                *(_QWORD *)v87 = 0LL;
              }
            }
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v68);
          }
        }
        goto LABEL_142;
      }
      if ( v33 == 1 )
      {
        v84 = v95;
        if ( !(unsigned int)RGNOBJ::bCopy(
                              (RGNOBJ *)&v85,
                              (const struct RustAutoHotpatchLockSH *)&v86,
                              (struct RGNOBJ *)&v84) )
        {
          v4 = 0;
          goto LABEL_131;
        }
        goto LABEL_80;
      }
      if ( v33 == 2 )
      {
        v88 = v95;
        v84 = (struct REGION *)v96;
        v36 = *(_QWORD *)(W32GetSessionState(v31) + 88);
        if ( v85 == *(void **)(v36 + 4160) )
          v37 = RGNOBJ::iComplexity((RGNOBJ *)&v85, v35);
        else
          v37 = RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v36, &v85, &v88, &v84, 1, &v85);
        if ( !v37 )
        {
          v4 = 0;
          goto LABEL_131;
        }
        goto LABEL_80;
      }
      v84 = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v86, 0x70u);
      if ( v84 )
        RGNMEMOBJ::vInit((RGNMEMOBJ *)&v84);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v84);
      v94 = v95;
      v91 = *((_QWORD *)&v96 + 1);
      v93 = v96;
      v39 = (ULONG_PTR)v84;
      if ( v84 )
      {
        v41 = *(_QWORD *)(W32GetSessionState(v38) + 88);
        if ( v84 == *(struct REGION **)(v41 + 4160) )
          v42 = RGNOBJ::iComplexity((RGNOBJ *)&v84, v40);
        else
          v42 = RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v41, &v84, &v94, &v93, 1, &v84);
        if ( v42 )
        {
          v45 = *(_QWORD *)(W32GetSessionState(v43) + 88);
          if ( v85 == *(void **)(v45 + 4160)
             ? RGNOBJ::iComplexity((RGNOBJ *)&v85, v44)
             : (unsigned int)RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(
                               v45,
                               &v85,
                               &v84,
                               &v91,
                               1,
                               &v85) )
          {
            v39 = (ULONG_PTR)v84;
            goto LABEL_74;
          }
        }
        v39 = (ULONG_PTR)v84;
      }
      v4 = 0;
LABEL_74:
      if ( v39 )
      {
        v47 = (_QWORD *)(v39 + 80);
        if ( v47 )
        {
          v48 = *v47;
          if ( *(_QWORD **)(*v47 + 8LL) != v47 )
            goto LABEL_129;
          v49 = (_QWORD *)v47[1];
          if ( (_QWORD *)*v49 != v47 )
            goto LABEL_129;
          *v49 = v48;
          *(_QWORD *)(v48 + 8) = v49;
          v47[1] = v47;
          *v47 = v47;
        }
      }
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v84);
      if ( !v4 )
        goto LABEL_131;
LABEL_80:
      v50 = v85;
      v50[18] = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v31) + 88) + 4144LL));
      if ( !(unsigned int)RGNOBJ::bOffset(
                            (RGNOBJ *)&v85,
                            (const struct RustAutoHotpatchLockSH *)&v86,
                            (const struct _POINTL *)this + 129) )
      {
        v3 = v86;
        v4 = 0;
        goto LABEL_131;
      }
      v51 = (struct REGION *)((char *)v87 + 24);
      if ( !v87 )
        v51 = 0LL;
      if ( qword_1402A10B0 )
      {
        if ( !(*(unsigned int (__fastcall **)(REGION_CORE *))(*(_QWORD *)qword_1402A10B0 + 64LL))(v51) )
          goto LABEL_85;
      }
      else if ( (unsigned int)REGION_CORE::get_sizeScan(v51) != 56 )
      {
        goto LABEL_85;
      }
      v57 = (char *)v85;
      v58 = qword_1402A10B0;
      v59 = (char *)v85 + 24;
      if ( !v85 )
        v59 = 0LL;
      if ( qword_1402A10B0 )
      {
        if ( (*(unsigned int (__fastcall **)(REGION_CORE *, _DWORD *))(*(_QWORD *)qword_1402A10B0 + 56LL))(v51, v59) )
        {
          v57 = (char *)v85;
          v58 = qword_1402A10B0;
          goto LABEL_100;
        }
      }
      else if ( *((_DWORD *)v51 + 7) <= v59[7]
             && *((_DWORD *)v51 + 9) >= v59[9]
             && *((_DWORD *)v51 + 8) <= v59[8]
             && *((_DWORD *)v51 + 10) >= v59[10] )
      {
LABEL_100:
        *((_QWORD *)this + 144) = v57;
        v60 = (REGION_CORE *)(v57 + 24);
        if ( v58 )
        {
          if ( !v57 )
            v60 = 0LL;
          (*(void (__fastcall **)(REGION_CORE *, char *))(*(_QWORD *)v58 + 80LL))(v60, (char *)this + 1000);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
        else
        {
          if ( (unsigned int)REGION_CORE::get_sizeScan(v60) > 0x38 )
            *v5 = xmmword_14025D3F0;
          else
            *v5 = *(_OWORD *)((char *)v85 + 52);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
LABEL_127:
        v3 = v86;
        if ( v4 )
        {
LABEL_143:
          v80 = *((_QWORD *)this + 62);
          if ( v80 && (*(_DWORD *)(v80 + 116) & 0x800) != 0 )
            *((_DWORD *)this + 130) |= 8u;
          DC::vUpdateScaledRegions(this, (const struct RustAutoHotpatchLockSH *)&v86);
          v81 = (struct REGION *)*((_QWORD *)this + 143);
          if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
            p_DeviceContext = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v82) + 88);
          else
            p_DeviceContext = (struct Gre::Base::SESSION_GLOBALS *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          DC::vUpdate_VisRectFastOpt(this, p_DeviceContext, (const struct RustAutoHotpatchLockSH *)&v86, v81);
          goto LABEL_150;
        }
        goto LABEL_131;
      }
LABEL_85:
      v84 = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v86, 0x70u);
      if ( v84 )
        RGNMEMOBJ::vInit((RGNMEMOBJ *)&v84);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v84);
      v53 = (ULONG_PTR)v84;
      if ( v84 )
      {
        v55 = *(_QWORD *)(W32GetSessionState(v52) + 88);
        if ( v84 == *(struct REGION **)(v55 + 4160) )
          v56 = RGNOBJ::iComplexity((RGNOBJ *)&v84, v54);
        else
          v56 = RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v55, &v84, &v87, &v85, 1, &v84);
        if ( v56
          && (unsigned int)RGNOBJ::bCopy(
                             (RGNOBJ *)&v85,
                             (const struct RustAutoHotpatchLockSH *)&v86,
                             (struct RGNOBJ *)&v84) )
        {
          v61 = qword_1402A10B0;
          v62 = (char *)v85;
          *((_QWORD *)this + 144) = v85;
          if ( v61 )
          {
            v63 = *(_QWORD *)v61;
            v64 = v62 + 24;
            if ( !v62 )
              v64 = 0LL;
            (*(void (__fastcall **)(char *, char *))(v63 + 80))(v64, (char *)this + 1000);
            *((_DWORD *)this + 9) &= ~0x10u;
            v53 = (ULONG_PTR)v84;
          }
          else
          {
            if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v62 + 24)) > 0x38 )
            {
              v53 = (ULONG_PTR)v84;
              *v5 = xmmword_14025D3F0;
            }
            else
            {
              v53 = (ULONG_PTR)v84;
              *v5 = *(_OWORD *)((char *)v85 + 52);
            }
            *((_DWORD *)this + 9) &= ~0x10u;
          }
          goto LABEL_121;
        }
        v53 = (ULONG_PTR)v84;
      }
      v4 = 0;
LABEL_121:
      if ( !v53 )
        goto LABEL_126;
      v65 = (_QWORD *)(v53 + 80);
      if ( !v65 )
        goto LABEL_126;
      v66 = *v65;
      if ( *(_QWORD **)(*v65 + 8LL) == v65 )
      {
        v67 = (_QWORD *)v65[1];
        if ( (_QWORD *)*v67 == v65 )
        {
          *v67 = v66;
          *(_QWORD *)(v66 + 8) = v67;
          v65[1] = v65;
          *v65 = v65;
LABEL_126:
          RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v84);
          goto LABEL_127;
        }
      }
LABEL_129:
      __fastfail(3u);
    }
  }
LABEL_13:
  ExReleasePushLockSharedEx(v3, 2LL);
  KeLeaveCriticalRegion();
  CurrentThreadId = PsGetCurrentThreadId();
  v11 = (char *)this + 1112;
  if ( CurrentThreadId == *((HANDLE *)this + 140) )
  {
    *((_QWORD *)this + 140) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v11, 0LL);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
