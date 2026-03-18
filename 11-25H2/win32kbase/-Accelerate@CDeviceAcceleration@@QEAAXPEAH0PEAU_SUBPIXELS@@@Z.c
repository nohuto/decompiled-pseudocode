/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400BCBF8
 * Callers:
 *     DoAccel @ 0x1400BC900 (DoAccel.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BC968 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  _DWORD *v21; // r15
  _QWORD **v22; // rdi
  __int64 v23; // rax
  _QWORD *i; // rcx
  _QWORD *v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // r8
  __int64 *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rbx
  signed __int64 v45; // r10
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 *v50; // [rsp+40h] [rbp-39h] BYREF
  __int64 v51; // [rsp+48h] [rbp-31h] BYREF
  __int64 v52; // [rsp+50h] [rbp-29h] BYREF
  __int64 v53; // [rsp+58h] [rbp-21h]
  __int64 v54; // [rsp+60h] [rbp-19h]
  tagDomLock *v55[2]; // [rsp+68h] [rbp-11h] BYREF
  tagDomLock *v56; // [rsp+78h] [rbp-1h] BYREF
  tagDomLock *v57; // [rsp+80h] [rbp+7h] BYREF
  int v59; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = 0;
  v54 = 0LL;
  UserSessionState = W32GetUserSessionState(this, a2);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)v55,
    (struct CEResourceLock *)(UserSessionState + 18640));
  v11 = W32GetUserSessionState(v10, v9);
  v55[1] = 0LL;
  v12 = *(_QWORD *)(v11 + 19184);
  v53 = v12;
  v15 = W32GetUserSessionState(v14, v13);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v56, (struct CEResourceLock *)(v15 + 18640));
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18632);
  v20 = *(_QWORD *)(v19 + 24);
  if ( !v20 )
    v20 = v19 + 32;
  v21 = 0LL;
  v22 = (_QWORD **)(v20 + 1456);
  v23 = W32GetUserSessionState(v19, v18);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v57, (struct CEResourceLock *)(v23 + 18640));
  for ( i = *v22; ; i = (_QWORD *)*i )
  {
    v25 = 0LL;
    if ( i != v22 )
      v25 = i + 2;
    if ( !v25 )
      break;
    v26 = 0LL;
    if ( i != v22 )
      v26 = i + 2;
    if ( (int)v12 >= *v26 && (int)v12 < v26[2] && SHIDWORD(v53) >= v26[1] && SHIDWORD(v53) < v26[3] )
    {
      v21 = v26;
      break;
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v57);
  tagDomLock::UnLockExclusive((PERESOURCE *)v56);
  *(_QWORD *)a4 = 0LL;
  if ( v21 )
  {
    v59 = 0;
    v50 = 0LL;
    v52 = 0LL;
    v51 = 0LL;
    (*(void (__fastcall **)(CDeviceAcceleration *, _DWORD *, int *, __int64 **, __int64 *, __int64 *))(*(_QWORD *)this + 8LL))(
      this,
      v21 + 50,
      &v59,
      &v50,
      &v52,
      &v51);
    v27 = (__int64)*a3 << 16;
    v28 = (__int64)*a2 << 16;
    v29 = -65536LL * *a3;
    v30 = v28;
    if ( v29 < 0 )
      v29 = (__int64)*a3 << 16;
    v31 = -65536LL * *a2;
    if ( v31 < 0 )
      v31 = (__int64)*a2 << 16;
    if ( v31 >= v29 )
      v30 = (__int64)*a3 << 16;
    v32 = -v30;
    if ( v30 > 0 )
      v32 = v30;
    v33 = v32 / 2;
    v34 = (__int64)*a2 << 16;
    if ( v31 <= v29 )
      v34 = (__int64)*a3 << 16;
    v35 = -v34;
    if ( v34 > 0 )
      v35 = v34;
    v36 = v35 + v33;
    if ( v35 + v33 )
    {
      v37 = W32GetUserSessionState(v35, v34) + 19192;
      if ( v59 != 1 )
      {
        v38 = v50;
        do
        {
          if ( v36 <= *v38 )
            break;
          ++v4;
          ++v38;
        }
        while ( v4 < v59 - 1 );
      }
      v39 = v4 - 1;
      v40 = *(unsigned int *)(v37 + 16);
      v41 = *(_QWORD *)(v52 + 8 * v39) + (*(_QWORD *)(v51 + 8 * v39) << 16) / v36;
      if ( (unsigned int)v40 < (unsigned int)v39 )
        v41 = (*(_QWORD *)(v52 + 8LL * *(unsigned int *)(v37 + 16)) + (*(_QWORD *)(v51 + 8 * v40) << 16) / v36 + v41) >> 1;
      *(_DWORD *)(v37 + 16) = v39;
      v42 = *(_QWORD *)v37 + ((v41 * v28) >> 16);
      v43 = -v42;
      v44 = *(_QWORD *)(v37 + 8) + ((v41 * v27) >> 16);
      if ( v42 >= 0 )
      {
        v46 = v42 & 0x7FFFFFFFFFFF0000LL;
        v45 = v42 & 0xFFFFFFFFFFFF0000uLL;
      }
      else
      {
        v45 = v42;
        v46 = -(__int64)(v43 & 0xFFFFFFFFFFFF0000uLL);
      }
      v47 = -(__int64)(v43 & 0xFFFFFFFFFFFF0000uLL);
      *(_QWORD *)v37 = v42 - v46;
      *(_DWORD *)a4 = v42 - v46;
      if ( v42 < 0 )
        v45 = v47;
      *a2 = v45 >> 16;
      if ( v44 >= 0 )
      {
        v49 = v44 & 0x7FFFFFFFFFFF0000LL;
        v48 = -v44;
      }
      else
      {
        v48 = -v44;
        v49 = -(__int64)(-v44 & 0xFFFFFFFFFFFF0000uLL);
      }
      *(_QWORD *)(v37 + 8) = v44 - v49;
      *((_DWORD *)a4 + 1) = v44 - v49;
      if ( v44 < 0 )
        v44 = -(__int64)(v48 & 0xFFFFFFFFFFFF0000uLL);
      *a3 = v44 >> 16;
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v55[0]);
}
