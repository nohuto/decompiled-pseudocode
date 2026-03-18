/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BC968
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1401901A8 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x140221BDC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400BCBF8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1400BCF1C (GetNormalizedMouseSensitivityFactor.c)
 *     rand @ 0x1401A3574 (rand.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        __int64 a2,
        int a3,
        struct tagPOINT a4,
        bool a5,
        struct _SUBPIXELS *a6,
        int *a7,
        int *a8)
{
  LONG x; // ebx
  int v9; // edi
  int v10; // esi
  CMouseProcessor *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _SUBPIXELS *v15; // r9
  CDeviceAcceleration *v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  LONG *v27; // r12
  _QWORD **v28; // r15
  __int64 v29; // rax
  _QWORD *i; // rcx
  _QWORD *v31; // rax
  LONG *v32; // rax
  int NormalizedMouseSensitivityFactor; // eax
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // edx
  struct _SUBPIXELS *v38; // rbx
  int v39; // edx
  int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v42[2]; // [rsp+28h] [rbp-38h] BYREF
  tagDomLock *v43; // [rsp+38h] [rbp-28h] BYREF
  tagDomLock *v44; // [rsp+40h] [rbp-20h] BYREF
  int v45; // [rsp+A8h] [rbp+48h] BYREF
  int v46; // [rsp+B0h] [rbp+50h] BYREF
  struct tagPOINT v47; // [rsp+B8h] [rbp+58h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  x = a4.x;
  v9 = a3;
  v10 = a2;
  v11 = this;
  if ( a5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 16368) + 112LL)
      || (this = (CMouseProcessor *)*(unsigned int *)(W32GetUserSessionState(this, a2) + 16784),
          ((unsigned __int8)this & 0x40) == 0) )
    {
      UserSessionState = W32GetUserSessionState(this, a2);
      v15 = (struct _SUBPIXELS *)&v41;
      v16 = *(CDeviceAcceleration **)(UserSessionState + 16392);
      goto LABEL_4;
    }
  }
  v13 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 16368);
  if ( *(_BYTE *)(v13 + 112) )
  {
    v14 = W32GetUserSessionState(v13, v12);
    v15 = a6;
    v16 = *(CDeviceAcceleration **)(v14 + 16368);
LABEL_4:
    CDeviceAcceleration::Accelerate(v16, &v45, &v46, v15);
    v9 = v46;
    v10 = v45;
    goto LABEL_5;
  }
  v42[1] = 0LL;
  v18 = W32GetUserSessionState(v13, v12);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v43, (struct CEResourceLock *)(v18 + 18640));
  v41 = 0LL;
  v21 = W32GetUserSessionState(v20, v19);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v42, (struct CEResourceLock *)(v21 + 18640));
  v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18632);
  v26 = *(_QWORD *)(v25 + 24);
  if ( !v26 )
    v26 = v25 + 32;
  v27 = 0LL;
  v28 = (_QWORD **)(v26 + 1456);
  v29 = W32GetUserSessionState(v25, v24);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v44, (struct CEResourceLock *)(v29 + 18640));
  for ( i = *v28; ; i = (_QWORD *)*i )
  {
    v31 = 0LL;
    if ( i != v28 )
      v31 = i + 2;
    if ( !v31 )
      break;
    v32 = 0LL;
    if ( i != v28 )
      v32 = (LONG *)(i + 2);
    if ( x >= *v32 && x < v32[2] && v47.y >= v32[1] && v47.y < v32[3] )
    {
      v27 = v32;
      break;
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v44);
  tagDomLock::UnLockExclusive((PERESOURCE *)v42[0]);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v27);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v40 = rand();
    v38 = a6;
    *(_DWORD *)a6 = v40 % 0x10000;
    v39 = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v34 = *((_DWORD *)v11 + 9) + v10 * NormalizedMouseSensitivityFactor;
      v35 = v34 % 256;
      *((_DWORD *)v11 + 9) = v34 % 256;
      v10 = v34 / 256;
      if ( v34 < 0 && v35 > 0 )
      {
        v10 = v34 / 256 + 1;
        *((_DWORD *)v11 + 9) = v35 - 256;
      }
    }
    if ( v9 )
    {
      v36 = v9 * NormalizedMouseSensitivityFactor + *((_DWORD *)v11 + 10);
      v37 = v36 % 256;
      *((_DWORD *)v11 + 10) = v36 % 256;
      v9 = v36 / 256;
      if ( v36 < 0 && v37 > 0 )
      {
        ++v9;
        *((_DWORD *)v11 + 10) = v37 - 256;
      }
    }
    v38 = a6;
    *(_DWORD *)a6 = *((_DWORD *)v11 + 9) << 8;
    v39 = *((_DWORD *)v11 + 10) << 8;
  }
  *((_DWORD *)v38 + 1) = v39;
  tagDomLock::UnLockExclusive((PERESOURCE *)v43);
LABEL_5:
  *a7 = v10;
  *a8 = v9;
}
