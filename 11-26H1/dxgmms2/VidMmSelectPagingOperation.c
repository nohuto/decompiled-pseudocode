/*
 * XREFs of VidMmSelectPagingOperation @ 0x1400D1E60
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 */

__int64 __fastcall VidMmSelectPagingOperation(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v5; // r14
  __int64 v6; // rsi
  unsigned __int8 v7; // r13
  __int64 v8; // r15
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // r12
  char v12; // al
  VIDMM_GLOBAL *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  unsigned __int8 v19; // dl
  char v20; // dl
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r15
  VIDMM_GLOBAL *v26; // rax
  __int64 v27; // r15
  VIDMM_GLOBAL *v28; // rbx
  _QWORD *v29; // r12
  char v30; // dl
  _QWORD *v31; // r8
  char v32; // cl
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  VIDMM_GLOBAL *v37; // rbx
  char v38; // r8
  _QWORD *v39; // rdx
  char v40; // cl
  __int64 v41; // rax
  VIDMM_GLOBAL *v42; // rbx
  _QWORD *v43; // rdx
  char v44; // r8
  char v45; // cl
  __int64 v46; // rax
  _QWORD *v47; // r10
  _QWORD *v48; // r10
  _QWORD *v49; // rcx
  _QWORD *v50; // r11
  _QWORD *v51; // r11
  _QWORD *v52; // r10
  _QWORD *v53; // r10
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // [rsp+50h] [rbp-78h]
  int v63; // [rsp+50h] [rbp-78h]
  int v64; // [rsp+50h] [rbp-78h]
  _QWORD *v65; // [rsp+58h] [rbp-70h]
  char v66[8]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v67; // [rsp+70h] [rbp-58h]
  int v68; // [rsp+78h] [rbp-50h]
  char v69; // [rsp+D0h] [rbp+8h]
  char v70; // [rsp+D0h] [rbp+8h]
  char v71; // [rsp+D0h] [rbp+8h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v8 = a1 + 64;
  *(_QWORD *)(a1 + 192) = KeGetCurrentThread();
  v9 = *(_QWORD **)(a1 + 64);
  if ( v9 == (_QWORD *)(a1 + 64) )
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v37 = *(VIDMM_GLOBAL **)a1;
    v70 = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v37 + 41280, 0LL);
    *((_QWORD *)v37 + 5161) = KeGetCurrentThread();
    v63 = *((_DWORD *)v37 + 10330);
    *((_QWORD *)v37 + 5161) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v37 + 41280, 0LL);
    KeLeaveCriticalRegion();
    v38 = 0;
    v39 = v9;
    do
    {
      v10 = v39;
      if ( v63
        && (v54 = v39[4], *(_BYTE *)(v54 + 24))
        && *(_DWORD *)(v54 + 48) == 203
        && (**(_DWORD **)(*(_QWORD *)(v54 + 64) + 96LL) & 0x20000) != 0 )
      {
        v40 = v70;
      }
      else
      {
        v40 = 0;
        v38 = 1;
        v70 = 0;
      }
      v41 = *v39;
      if ( *v39 == v8 )
        break;
      if ( *(_QWORD **)(v41 + 8) != v39 )
        goto LABEL_64;
      v47 = (_QWORD *)v39[1];
      if ( (_QWORD *)*v47 != v39 )
        goto LABEL_64;
      *v47 = v41;
      *(_QWORD *)(v41 + 8) = v47;
      v48 = *(_QWORD **)(a1 + 72);
      if ( *v48 != v8 )
        goto LABEL_64;
      *v39 = v8;
      v39[1] = v48;
      *v48 = v39;
      *(_QWORD *)(a1 + 72) = v39;
      if ( (_QWORD *)v41 == v9 )
        break;
      v39 = (_QWORD *)v41;
    }
    while ( v40 );
    if ( v38 )
    {
      if ( v10 )
        goto LABEL_34;
      v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
      v10 = 0LL;
    }
  }
  v12 = *(_BYTE *)(a1 + 213);
  if ( v12 == 1 || v12 == 3 )
  {
    v13 = *(VIDMM_GLOBAL **)a1;
    v14 = *(_QWORD *)a1 + 45000LL;
    v67 = v14;
    if ( v14 && *(struct _KTHREAD **)(v14 + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(v15, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v67, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *(_DWORD *)(v67 + 24);
        if ( v18 != -1 && (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v18);
      }
      ExAcquirePushLockSharedEx(v67, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v67 + 16));
    v68 = 1;
    if ( *((VIDMM_GLOBAL **)v13 + 5629) == (VIDMM_GLOBAL *)((char *)v13 + 45032) )
    {
      if ( *((VIDMM_GLOBAL **)v13 + 5631) == (VIDMM_GLOBAL *)((char *)v13 + 45048) )
      {
        if ( *((VIDMM_GLOBAL **)v13 + 5633) == (VIDMM_GLOBAL *)((char *)v13 + 45064) )
        {
          if ( !*(_BYTE *)(*((_QWORD *)v13 + 3) + 3093LL) && !*(_BYTE *)(*((_QWORD *)v13 + 2) + 1025LL)
            || *((VIDMM_GLOBAL **)v13 + 5635) == (VIDMM_GLOBAL *)((char *)v13 + 45080) )
          {
            v68 = 0;
            _InterlockedDecrement((volatile signed __int32 *)(v67 + 16));
            ExReleasePushLockSharedEx(v67, 0LL);
            KeLeaveCriticalRegion();
            v6 = 0LL;
            goto LABEL_22;
          }
          v19 = 4;
        }
        else
        {
          v19 = 3;
        }
      }
      else
      {
        v19 = 2;
      }
    }
    else
    {
      v19 = 1;
    }
    v7 = 1;
    v11 = *((_QWORD *)v13 + 2 * (unsigned int)v19 + 5627) - 184LL;
    if ( !VIDMM_GLOBAL::IsTdrPending(v13) )
    {
      if ( v20 == 2 )
      {
        v58 = *(_QWORD **)(v11 + 240);
        if ( v58 )
        {
          v59 = v58[28];
          if ( v59 > *(_QWORD *)(*v58 + 4568LL) )
          {
            v60 = *((_QWORD *)v13 + 571) - v59;
            v61 = *(_QWORD *)v13;
            if ( v60 > *(_QWORD *)(*(_QWORD *)v13 + 128LL) )
            {
              *(_QWORD *)(v61 + 128) = v60;
              *(_BYTE *)(v61 + 214) = 8;
            }
            v11 = 0LL;
          }
        }
      }
      else if ( v20 == 3 )
      {
        v21 = *(_QWORD *)v13;
        v22 = *(_QWORD *)(v11 + 216);
        v23 = *((_QWORD *)v13 + 571);
        v24 = *(_QWORD *)(*(_QWORD *)v13 + 128LL);
        if ( v23 < v22 )
        {
          v57 = v23 - v22;
          if ( v57 > v24 )
          {
            *(_QWORD *)(v21 + 128) = v57;
            *(_BYTE *)(v21 + 214) = 6;
          }
          v11 = 0LL;
        }
        else if ( v24 < 0 )
        {
          *(_QWORD *)(v21 + 128) = 0LL;
          *(_BYTE *)(v21 + 214) = 6;
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v66);
    v6 = v11;
    if ( v11 && (*(_BYTE *)(v11 + 312) & 7) == 1 )
      goto LABEL_37;
LABEL_22:
    v25 = a1 + 48;
    if ( *(_QWORD *)(a1 + 48) == a1 + 48 )
      goto LABEL_23;
    v42 = *(VIDMM_GLOBAL **)a1;
    v65 = *(_QWORD **)(a1 + 48);
    v71 = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v42 + 41280, 0LL);
    *((_QWORD *)v42 + 5161) = KeGetCurrentThread();
    v64 = *((_DWORD *)v42 + 10330);
    *((_QWORD *)v42 + 5161) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v42 + 41280, 0LL);
    KeLeaveCriticalRegion();
    v43 = v65;
    v44 = 0;
    do
    {
      v10 = v43;
      if ( v64
        && (v55 = v43[4], *(_BYTE *)(v55 + 24))
        && *(_DWORD *)(v55 + 48) == 203
        && (**(_DWORD **)(*(_QWORD *)(v55 + 64) + 96LL) & 0x20000) != 0 )
      {
        v45 = v71;
      }
      else
      {
        v45 = 0;
        v44 = 1;
        v71 = 0;
      }
      v46 = *v43;
      if ( *v43 == v25 )
        break;
      if ( *(_QWORD **)(v46 + 8) != v43 )
        goto LABEL_64;
      v50 = (_QWORD *)v43[1];
      if ( (_QWORD *)*v50 != v43 )
        goto LABEL_64;
      *v50 = v46;
      *(_QWORD *)(v46 + 8) = v50;
      v51 = *(_QWORD **)(a1 + 56);
      if ( *v51 != v25 )
        goto LABEL_64;
      *v43 = v25;
      v43[1] = v51;
      *v51 = v43;
      *(_QWORD *)(a1 + 56) = v43;
      if ( (_QWORD *)v46 == v65 )
        break;
      v43 = (_QWORD *)v46;
    }
    while ( v45 );
    if ( !v44 )
    {
LABEL_23:
      v10 = 0LL;
    }
    else if ( v10 )
    {
      goto LABEL_34;
    }
    if ( *(_BYTE *)(a1 + 215) )
    {
      v26 = *(VIDMM_GLOBAL **)a1;
      *(_BYTE *)(a1 + 215) = 0;
      *(_QWORD *)(a1 + 120) = *((_QWORD *)v26 + 571);
    }
    if ( !v11 || *(_QWORD *)(*(_QWORD *)a1 + 4568LL) - *(_QWORD *)(a1 + 120) < qword_14008A5A8 )
    {
      v27 = a1 + 32;
      if ( *(_QWORD *)(a1 + 32) == a1 + 32 )
        goto LABEL_58;
      v28 = *(VIDMM_GLOBAL **)a1;
      v29 = *(_QWORD **)(a1 + 32);
      v69 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v28 + 41280, 0LL);
      *((_QWORD *)v28 + 5161) = KeGetCurrentThread();
      v62 = *((_DWORD *)v28 + 10330);
      *((_QWORD *)v28 + 5161) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v28 + 41280, 0LL);
      KeLeaveCriticalRegion();
      v30 = 0;
      v31 = v29;
      do
      {
        v10 = v29;
        if ( v62
          && (v56 = v29[4], *(_BYTE *)(v56 + 24))
          && *(_DWORD *)(v56 + 48) == 203
          && (**(_DWORD **)(*(_QWORD *)(v56 + 64) + 96LL) & 0x20000) != 0 )
        {
          v32 = v69;
        }
        else
        {
          v32 = 0;
          v30 = 1;
          v69 = 0;
        }
        v33 = *v29;
        if ( *v29 == v27 )
          break;
        if ( *(_QWORD **)(v33 + 8) != v29 )
          goto LABEL_64;
        v52 = (_QWORD *)v29[1];
        if ( (_QWORD *)*v52 != v29 )
          goto LABEL_64;
        *v52 = v33;
        *(_QWORD *)(v33 + 8) = v52;
        v53 = *(_QWORD **)(a1 + 40);
        if ( *v53 != v27 )
          goto LABEL_64;
        *v29 = v27;
        v29[1] = v53;
        *v53 = v29;
        *(_QWORD *)(a1 + 40) = v29;
        if ( (_QWORD *)v33 == v31 )
          break;
        v29 = (_QWORD *)v33;
      }
      while ( v32 );
      if ( !v30 )
      {
LABEL_58:
        v10 = 0LL;
      }
      else if ( v10 )
      {
        goto LABEL_34;
      }
    }
    *(_BYTE *)(a1 + 215) = 1;
    goto LABEL_37;
  }
  v10 = *(_QWORD **)(a1 + 32);
  v49 = (_QWORD *)(a1 + 32);
  while ( v10 != v49 )
  {
    if ( (v10[14] & 0x18) == 0x18 )
    {
      if ( !v10 )
        goto LABEL_69;
LABEL_34:
      v5 = (_QWORD *)v10[4];
      v34 = v10 + 4;
      v6 = v10[12];
      if ( (_QWORD *)v5[1] == v10 + 4 )
      {
        v35 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) == v5 )
        {
          *v34 = v35;
          *(_QWORD *)(v35 + 8) = v34;
          *v5 = 0LL;
          v5[1] = 0LL;
          goto LABEL_37;
        }
      }
LABEL_64:
      __fastfail(3u);
    }
    v10 = (_QWORD *)*v10;
  }
  v10 = 0LL;
LABEL_69:
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v49) + 24) = *(unsigned __int8 *)(a1 + 213);
    WdLogGlobalForLineNumber = 1191;
  }
LABEL_37:
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 184, 0LL);
  KeLeaveCriticalRegion();
  *a2 = v10;
  *a3 = v5;
  *a4 = v6;
  return v7;
}
