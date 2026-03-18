/*
 * XREFs of MagGetLensContextInformation @ 0x140231FF0
 * Callers:
 *     NtUserMagGetContextInformation @ 0x1401D9680 (NtUserMagGetContextInformation.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1401183F4 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     MagpFindThreadContext @ 0x1401BA1A0 (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1401BA1C0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     _GetMagnificationInputTransform @ 0x14021EACC (_GetMagnificationInputTransform.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        struct tagWND *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  unsigned int updated; // ebx
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  __int64 v10; // rdx
  int v11; // r9d
  struct _MAG_THREAD_CONTEXT *v12; // rsi
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  struct _MAG_LENS_CONTEXT *v22; // rax
  struct _MAG_LENS_CONTEXT *v23; // rax
  struct _MAG_LENS_CONTEXT *v24; // rax
  struct _MAG_LENS_CONTEXT *v25; // r14
  unsigned int v26; // eax
  _DWORD *v27; // r15
  int v28; // ebx
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // r13
  __int64 v33; // rdx
  void **Handle; // rbp
  void *v35; // rdi
  void *v36; // rcx
  unsigned int *v37; // rax
  unsigned int *v38; // r10
  int v39; // ecx
  __int64 v40; // r8
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _MAG_LENS_CONTEXT *v45; // rax
  struct _MAG_LENS_CONTEXT *v46; // r8
  int v47; // edx
  int v48; // ecx
  int v49; // eax
  __int64 v50; // r9
  __int64 v51; // r11
  __int64 v52; // rdx
  struct _MAG_LENS_CONTEXT *v53; // rax
  int v54; // eax
  struct _MAG_LENS_CONTEXT *v55; // rax
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  _BYTE v57[8]; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-40h] BYREF

  updated = -1073741811;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v12 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  v14 = v11 - 2;
  if ( !v14 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (LensContext = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 496LL) + 232LL)) == 0LL )
    {
      LensContext = MagpFindLensContext(v12, a3);
      if ( !LensContext )
        return updated;
    }
    *(_OWORD *)a5 = *(_OWORD *)((char *)LensContext + 72);
    return 0;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v55 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 496LL) + 232LL)) == 0LL )
    {
      v55 = MagpFindLensContext(v12, a3);
      if ( !v55 )
        return updated;
    }
    if ( (*((_DWORD *)v55 + 4) & 2) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v55 + 88);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v55 + 104);
    }
    else
    {
      *(_OWORD *)a5 = xmmword_140353F10;
      *(_OWORD *)(a5 + 16) = xmmword_140353F20;
    }
    return 0;
  }
  v16 = v15 - 1;
  if ( !v16 )
    return (unsigned int)GetMagnificationInputTransform(a5, v10) == 0 ? 0xC0000001 : 0;
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v53 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 496LL) + 240LL)) == 0LL )
    {
      v53 = MagpFindLensContext(v12, a3);
      if ( !v53 )
        return updated;
    }
    if ( (*((_DWORD *)v53 + 4) & 4) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v53 + 120);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v53 + 136);
      *(_OWORD *)(a5 + 32) = *(_OWORD *)((char *)v53 + 152);
      *(_OWORD *)(a5 + 48) = *(_OWORD *)((char *)v53 + 168);
      *(_OWORD *)(a5 + 64) = *(_OWORD *)((char *)v53 + 184);
      *(_OWORD *)(a5 + 80) = *(_OWORD *)((char *)v53 + 200);
      v54 = *((_DWORD *)v53 + 54);
    }
    else
    {
      *(_OWORD *)a5 = xmmword_140359FE0;
      *(_OWORD *)(a5 + 16) = xmmword_140359FF0;
      *(_OWORD *)(a5 + 32) = xmmword_14035A000;
      *(_OWORD *)(a5 + 48) = xmmword_14035A010;
      *(_OWORD *)(a5 + 64) = xmmword_14035A020;
      *(_OWORD *)(a5 + 80) = xmmword_14035A030;
      v54 = 1065353216;
    }
    *(_DWORD *)(a5 + 96) = v54;
    return 0;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v45 = MagpFindLensContext(ThreadContext, a3);
    v46 = v45;
    if ( !v45 )
      return updated;
    v47 = *a6;
    if ( (unsigned int)*a6 >= 8 )
    {
      v48 = *((_DWORD *)v45 + 56);
      *(_DWORD *)a5 = v48;
      v49 = *((_DWORD *)v45 + 57);
      *(_DWORD *)(a5 + 4) = v49;
      v50 = (unsigned int)(v49 + v48);
      v51 = (unsigned int)v50;
      if ( (unsigned int)(v47 - 8) >= (unsigned __int64)(8 * v50) )
      {
        if ( (_DWORD)v50 )
        {
          v52 = 0LL;
          do
          {
            *(_QWORD *)(a5 + v52 + 8) = *(_QWORD *)(v52 + *((_QWORD *)v46 + 29));
            v52 += 8LL;
            --v51;
          }
          while ( v51 );
        }
        *a6 = 8 * v50 + 8;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v37 = (unsigned int *)MagpFindLensContext(ThreadContext, a3);
    v38 = v37;
    if ( !v37 )
      return updated;
    v39 = *a6;
    if ( (unsigned int)*a6 >= 0x10 )
    {
      v40 = v37[60];
      *(_DWORD *)a5 = v40;
      *(_DWORD *)(a5 + 4) = v37[61];
      *(_DWORD *)(a5 + 8) = v37[62];
      *(_DWORD *)(a5 + 12) = v37[63];
      if ( (unsigned int)(v39 - 16) >= (unsigned __int64)(24 * v40) )
      {
        v41 = 0;
        if ( (_DWORD)v40 )
        {
          do
          {
            v42 = v41++;
            v43 = 3 * v42;
            v44 = *((_QWORD *)v38 + 32);
            *(_OWORD *)(a5 + 8 * v43 + 16) = *(_OWORD *)(v44 + 8 * v43);
            *(_QWORD *)(a5 + 8 * v43 + 32) = *(_QWORD *)(v44 + 8 * v43 + 16);
            LODWORD(v40) = *(_DWORD *)a5;
          }
          while ( v41 < *(_DWORD *)a5 );
        }
        *a6 = 24 * v40 + 16;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 != 1 )
        return updated;
      if ( !a3 )
        return updated;
      v22 = MagpFindLensContext(ThreadContext, a3);
      if ( !v22 )
        return updated;
      *(_DWORD *)a5 = *((_DWORD *)v22 + 66);
    }
    else
    {
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v23 = MagpFindLensContext(ThreadContext, a3);
      if ( !v23 )
        return updated;
      *(_DWORD *)a5 = 0;
      if ( (*((_DWORD *)v23 + 4) & 0x40) != 0 )
        *(_DWORD *)a5 = 1;
    }
    return 0;
  }
  if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v24 = MagpFindLensContext(ThreadContext, a3);
  v25 = v24;
  if ( !v24 )
    return updated;
  v26 = *((_DWORD *)v24 + 4);
  v27 = (_DWORD *)((char *)v25 + 240);
  v28 = (v26 >> 6) & 1;
  if ( (v26 & 0x20) != 0 || !*v27 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 8) = 0;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_DWORD *)(a5 + 4) = *v27;
    *(_DWORD *)(a5 + 12) = *((_DWORD *)v25 + 61);
    *(_DWORD *)(a5 + 16) = *((_DWORD *)v25 + 62);
    *(_DWORD *)(a5 + 20) = *((_DWORD *)v25 + 63);
    return 0;
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    && !(unsigned __int8)Win32ProcessCapability::CheckAccess(*(_QWORD *)(a2 + 464), 2LL) )
  {
    return 0;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a3);
  v29 = ReferenceDwmProcess();
  v32 = (void *)ReferenceDwmApiPort(v31, v30);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v57, 1);
  if ( v32 && v29 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v32,
                v29,
                *(_QWORD *)a3,
                ***(_QWORD ***)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL),
                (__int128 *)v25 + 2,
                *(_QWORD *)(a5 + 24),
                v28,
                (int *)a5);
  }
  else
  {
    DereferenceDwmApiPort(v32);
    updated = -1073741823;
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v57);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v33);
  DereferenceDwmProcess(v29);
  if ( (updated & 0x80000000) == 0 )
  {
    if ( *(int *)a5 < 0 )
      return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
    if ( *(_DWORD *)(a5 + 4) != *v27
      || *(_DWORD *)(a5 + 12) != *((_DWORD *)v25 + 61)
      || *(_DWORD *)(a5 + 16) != *((_DWORD *)v25 + 62)
      || *(_DWORD *)(a5 + 20) != *((_DWORD *)v25 + 63) )
    {
      v36 = *(void **)(a5 + 40);
      if ( v36 )
      {
        ObfDereferenceObject(v36);
        *(_QWORD *)(a5 + 40) = 0LL;
      }
      return (unsigned int)-1073741811;
    }
    if ( !*(_DWORD *)(a5 + 8) )
      return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
    Handle = (void **)(a5 + 40);
    v35 = *(void **)(a5 + 40);
    if ( !v35 )
      return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
    *Handle = 0LL;
    updated = ObOpenObjectByPointer(v35, 0x80u, 0LL, 4u, MmSectionObjectType, 1, Handle);
    ObfDereferenceObject(v35);
    if ( (updated & 0x80000000) == 0 )
      return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  }
  return updated;
}
