/*
 * XREFs of ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x140204500
 * Callers:
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_KAEAU_GUID@@PEA_K@Z @ 0x140204300 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_KAEAU_GUID@@PEA_K@Z.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403FDED8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::StartPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  unsigned int v2; // r9d
  unsigned int v4; // esi
  DXGSESSIONDATA *v5; // rdi
  char v6; // r15
  unsigned int i; // r8d
  struct _PNP_TRANS_TOKEN *v8; // rdx
  int v9; // ebx
  char v10; // bp
  __int64 CurrentProcess; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // kr00_8
  char *v15; // rax
  char *v16; // rbx
  unsigned int v17; // ecx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // rax
  char *v22; // rdx
  __int64 v23; // rax
  char **v24; // r8
  __int64 v25; // rax
  char *v26; // rcx
  __int64 v27; // rcx
  struct _PNP_TRANS_TOKEN *v28; // rdx
  struct _PNP_TRANS_TOKEN **v29; // rcx
  struct _KEVENT *v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 4694);
  v4 = v2;
  v5 = this;
  v6 = 1;
  for ( i = 0; i < v2; ++i )
  {
    this = (DXGSESSIONDATA *)(32LL * i);
    v8 = *(struct _PNP_TRANS_TOKEN **)((char *)this + *((_QWORD *)v5 + 2348) + 8);
    if ( v8 )
    {
      if ( v8 == a2 )
        return;
      v6 = 0;
    }
    else
    {
      v4 = i;
    }
  }
  if ( *((_QWORD *)v5 + 2317) )
  {
    v9 = *(_DWORD *)v5;
    memset(&ApcState, 0, sizeof(ApcState));
    v10 = 0;
    CurrentProcess = PsGetCurrentProcess(this);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v9 )
    {
      v10 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v5 + 2332), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v5 + 2317));
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
  }
  v12 = *((_DWORD *)v5 + 4694);
  if ( v4 == v12 )
  {
    *((_DWORD *)v5 + 4694) = 2 * v12;
    v14 = (unsigned int)(2 * v12);
    v13 = 32 * v14;
    if ( !is_mul_ok(v14, 0x20uLL) )
      v13 = -1LL;
    v15 = (char *)operator new[](v13, 0x4B677844u, 256LL);
    v16 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry2(6LL, *(unsigned int *)v5, *((unsigned int *)v5 + 4694));
      v32 = *((unsigned int *)v5 + 4694);
      v31 = *(unsigned int *)v5;
      WdLogGlobalForLineNumber = 4559;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expend PnP transition record array for session 0x%I64x (new NumRecords = 0x%I64x).",
        v31,
        v32,
        0LL,
        0LL,
        0LL);
      *((_DWORD *)v5 + 4694) >>= 1;
      return;
    }
    memmove(v15, *((const void **)v5 + 2348), 32LL * v4);
    v17 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v18 = 32LL * v17;
        v19 = (_QWORD *)(v18 + *((_QWORD *)v5 + 2348) + 16LL);
        v20 = *v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 )
          break;
        v21 = (_QWORD *)v19[1];
        if ( (_QWORD *)*v21 != v19 )
          break;
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = &v16[v18 + 16];
        v23 = *(_QWORD *)&v16[v18 + 8];
        v24 = *(char ***)(v23 + 32);
        v25 = v23 + 24;
        if ( *v24 != (char *)v25 )
          break;
        *(_QWORD *)v22 = v25;
        ++v17;
        *((_QWORD *)v22 + 1) = v24;
        *v24 = v22;
        *(_QWORD *)(v25 + 8) = v22;
        if ( v17 >= v4 )
          goto LABEL_23;
      }
LABEL_27:
      __fastfail(3u);
    }
LABEL_23:
    v26 = (char *)*((_QWORD *)v5 + 2348);
    if ( v26 != (char *)v5 + 18792 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
    *((_QWORD *)v5 + 2348) = v16;
  }
  v27 = 32LL * v4;
  *(_QWORD *)(v27 + *((_QWORD *)v5 + 2348)) = v5;
  *(_QWORD *)(*((_QWORD *)v5 + 2348) + v27 + 8) = a2;
  v28 = (struct _PNP_TRANS_TOKEN *)(v27 + *((_QWORD *)v5 + 2348) + 16LL);
  v29 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)a2 + 4);
  if ( *v29 != (struct _PNP_TRANS_TOKEN *)((char *)a2 + 24) )
    goto LABEL_27;
  *(_QWORD *)v28 = (char *)a2 + 24;
  *((_QWORD *)v28 + 1) = v29;
  *v29 = v28;
  *((_QWORD *)a2 + 4) = v28;
  ++*((_DWORD *)a2 + 1);
  v30 = (struct _KEVENT *)*((_QWORD *)v5 + 2346);
  if ( v30 )
  {
    if ( v6 )
      KeResetEvent(v30);
  }
}
