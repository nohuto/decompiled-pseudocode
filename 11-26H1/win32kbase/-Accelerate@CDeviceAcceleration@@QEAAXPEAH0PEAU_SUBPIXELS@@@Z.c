/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400860B0
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     DoAccel @ 0x140085D70 (DoAccel.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x140085DD4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v5; // edi
  __int64 UserSessionState; // r13
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // r12
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // r14
  __int64 *v22; // r14
  __int64 v23; // r15
  __int64 *i; // rcx
  _DWORD *v25; // rsi
  __int64 v26; // rax
  void (__fastcall *v27)(CDeviceAcceleration *, _DWORD *, int *, __int64 **, __int64 *, __int64 *); // rax
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r9
  __int64 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 *v50; // [rsp+40h] [rbp-68h] BYREF
  __int64 v51; // [rsp+48h] [rbp-60h] BYREF
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  __int64 v53; // [rsp+58h] [rbp-50h]
  int v57; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)a3);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19216);
  v53 = v10;
  v14 = W32GetUserSessionState(v12, v11, v13);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v14 + 18688));
  v19 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 18680);
  v21 = *(_QWORD *)(v19 + 24);
  if ( !v21 )
    v21 = v19 + 32;
  v22 = (__int64 *)(v21 + 1456);
  v23 = W32GetUserSessionState(v19, v18, v20);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v23 + 18688));
  for ( i = (__int64 *)*v22; ; i = (__int64 *)*i )
  {
    if ( i == v22 || (v25 = i + 2, i == (__int64 *)-16LL) )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v23 + 18688));
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v14 + 18688));
      *(_DWORD *)a4 = 0;
      *((_DWORD *)a4 + 1) = 0;
      goto LABEL_35;
    }
    if ( (int)v10 >= *v25
      && (int)v10 < *((_DWORD *)i + 6)
      && SHIDWORD(v53) >= *((_DWORD *)i + 5)
      && SHIDWORD(v53) < *((_DWORD *)i + 7) )
    {
      break;
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v23 + 18688));
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v14 + 18688));
  *(_QWORD *)a4 = 0LL;
  v26 = *(_QWORD *)this;
  v57 = 0;
  v50 = 0LL;
  v52 = 0LL;
  v27 = *(void (__fastcall **)(CDeviceAcceleration *, _DWORD *, int *, __int64 **, __int64 *, __int64 *))(v26 + 8);
  v51 = 0LL;
  v27(this, v25 + 50, &v57, &v50, &v52, &v51);
  v28 = (__int64)*a3 << 16;
  v29 = (__int64)*a2 << 16;
  v30 = -65536LL * *a3;
  v31 = v29;
  if ( v30 < 0 )
    v30 = (__int64)*a3 << 16;
  v32 = -65536LL * *a2;
  if ( v32 < 0 )
    v32 = (__int64)*a2 << 16;
  if ( v32 >= v30 )
    v31 = (__int64)*a3 << 16;
  v33 = -v31;
  if ( v31 > 0 )
    v33 = v31;
  v34 = (__int64)*a2 << 16;
  v35 = v33 / 2;
  if ( v32 <= v30 )
    v34 = (__int64)*a3 << 16;
  v36 = -v34;
  if ( v34 > 0 )
    v36 = v34;
  v37 = v36 + v35;
  if ( v36 + v35 )
  {
    v38 = W32GetUserSessionState(v36, v34, v32);
    if ( v57 != 1 )
    {
      v39 = v50;
      do
      {
        if ( v37 <= *v39 )
          break;
        ++v5;
        ++v39;
      }
      while ( v5 < v57 - 1 );
    }
    v40 = v5 - 1;
    v41 = *(unsigned int *)(v38 + 19240);
    v42 = *(_QWORD *)(v52 + 8 * v40) + (*(_QWORD *)(v51 + 8 * v40) << 16) / v37;
    if ( (unsigned int)v41 < (unsigned int)v40 )
      v42 = (*(_QWORD *)(v52 + 8LL * *(unsigned int *)(v38 + 19240)) + (*(_QWORD *)(v51 + 8 * v41) << 16) / v37 + v42) >> 1;
    *(_DWORD *)(v38 + 19240) = v40;
    v43 = (v42 * v29) >> 16;
    v44 = v43 + *(_QWORD *)(v38 + 19224);
    v45 = *(_QWORD *)(v38 + 19232) + ((v28 * v42) >> 16);
    if ( v44 >= 0 )
    {
      v48 = v44 & 0x7FFFFFFFFFFF0000LL;
      v47 = v44 - (v44 & 0xFFFFFFFFFFFF0000uLL);
    }
    else
    {
      v46 = -(v43 + *(_QWORD *)(v38 + 19224)) & 0xFFFFFFFFFFFF0000uLL;
      v47 = v46 + v44;
      v48 = -(__int64)v46;
    }
    *(_QWORD *)(v38 + 19224) = v47;
    *(_DWORD *)a4 = v47;
    *a2 = v48 >> 16;
    if ( v45 >= 0 )
    {
      *(_QWORD *)(v38 + 19232) = (unsigned __int16)v45;
      *((_DWORD *)a4 + 1) = (unsigned __int16)v45;
    }
    else
    {
      v49 = v45 + (-v45 & 0xFFFFFFFFFFFF0000uLL);
      *(_QWORD *)(v38 + 19232) = v49;
      v45 = -(__int64)(-v45 & 0xFFFFFFFFFFFF0000uLL);
      *((_DWORD *)a4 + 1) = v49;
    }
    *a3 = v45 >> 16;
  }
LABEL_35:
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
}
