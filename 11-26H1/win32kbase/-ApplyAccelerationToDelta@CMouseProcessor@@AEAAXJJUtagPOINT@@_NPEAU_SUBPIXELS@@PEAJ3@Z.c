/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x140085DD4
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1402244CC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400860B0 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x140086498 (GetNormalizedMouseSensitivityFactor.c)
 *     rand @ 0x1401C7A64 (rand.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        int a2,
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
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rax
  struct _SUBPIXELS *v16; // r9
  CDeviceAcceleration *v17; // rcx
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rcx
  LONG *v28; // r13
  _QWORD **v29; // r12
  __int64 v30; // r15
  _QWORD *i; // r8
  LONG *v32; // rdx
  _QWORD *v33; // rcx
  int NormalizedMouseSensitivityFactor; // r9d
  int v35; // eax
  struct _SUBPIXELS *v36; // rbx
  int v37; // edx
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  __int64 v42; // [rsp+20h] [rbp-10h]
  __int64 v43; // [rsp+28h] [rbp-8h] BYREF
  int v44; // [rsp+78h] [rbp+48h] BYREF
  int v45; // [rsp+80h] [rbp+50h] BYREF
  struct tagPOINT v46; // [rsp+88h] [rbp+58h]

  v46 = a4;
  v45 = a3;
  v44 = a2;
  x = a4.x;
  v9 = a3;
  v10 = a2;
  v11 = this;
  if ( a5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 16360) + 112LL)
      || (LODWORD(this) = *(_DWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 16776),
          ((unsigned __int8)this & 0x40) == 0) )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
      v16 = (struct _SUBPIXELS *)&v43;
      v17 = *(CDeviceAcceleration **)(UserSessionState + 0x4000);
      goto LABEL_4;
    }
  }
  v13 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 16360);
  if ( *(_BYTE *)(v13 + 112) )
  {
    v15 = W32GetUserSessionState(v13, v12, v14);
    v16 = a6;
    v17 = *(CDeviceAcceleration **)(v15 + 16360);
LABEL_4:
    CDeviceAcceleration::Accelerate(v17, &v44, &v45, v16);
    v9 = v45;
    v10 = v44;
    goto LABEL_5;
  }
  v43 = W32GetUserSessionState(v13, v12, v14);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v43 + 18688));
  v42 = W32GetUserSessionState(v20, v19, v21);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v42 + 18688));
  v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 18680);
  v27 = *(_QWORD *)(v25 + 24);
  if ( !v27 )
    v27 = v25 + 32;
  v28 = 0LL;
  v29 = (_QWORD **)(v27 + 1456);
  v30 = W32GetUserSessionState(v27, v25, v26);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v30 + 18688));
  for ( i = *v29; ; i = (_QWORD *)*i )
  {
    v32 = (LONG *)(i + 2);
    v33 = 0LL;
    if ( i != v29 )
      v33 = i + 2;
    if ( !v33 )
      break;
    if ( i == v29 )
      v32 = 0LL;
    if ( x >= *v32 && x < v32[2] && v46.y >= v32[1] && v46.y < v32[3] )
    {
      v28 = v32;
      break;
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v30 + 18688));
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v42 + 18688));
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v28);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v35 = rand();
    v36 = a6;
    *(_DWORD *)a6 = v35 % 0x10000;
    v37 = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v38 = *((_DWORD *)v11 + 9) + v10 * NormalizedMouseSensitivityFactor;
      v39 = v38 % 256;
      *((_DWORD *)v11 + 9) = v38 % 256;
      v10 = v38 / 256;
      if ( v38 < 0 && v39 > 0 )
      {
        v10 = v38 / 256 + 1;
        *((_DWORD *)v11 + 9) = v39 - 256;
      }
    }
    if ( v9 )
    {
      v40 = v9 * NormalizedMouseSensitivityFactor + *((_DWORD *)v11 + 10);
      v41 = v40 % 256;
      *((_DWORD *)v11 + 10) = v40 % 256;
      v9 = v40 / 256;
      if ( v40 < 0 && v41 > 0 )
      {
        ++v9;
        *((_DWORD *)v11 + 10) = v41 - 256;
      }
    }
    v36 = a6;
    *(_DWORD *)a6 = *((_DWORD *)v11 + 9) << 8;
    v37 = *((_DWORD *)v11 + 10) << 8;
  }
  *((_DWORD *)v36 + 1) = v37;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v43 + 18688));
LABEL_5:
  *a7 = v10;
  *a8 = v9;
}
