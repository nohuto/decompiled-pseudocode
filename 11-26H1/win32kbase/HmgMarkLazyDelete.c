/*
 * XREFs of HmgMarkLazyDelete @ 0x1400C3440
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentThreadAndEnterCriticalRegion @ 0x1400C36A0 (W32GetCurrentThreadAndEnterCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgMarkLazyDelete(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v3; // r12d
  __int64 SessionState; // rax
  __int64 v5; // rsi
  unsigned int v6; // r13d
  __int64 CurrentThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  unsigned int *v15; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  ThreadRestrictNewHandlesRegion *v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-20h]
  unsigned int *v24; // [rsp+28h] [rbp-18h] BYREF
  int v25; // [rsp+30h] [rbp-10h]
  __int16 v26; // [rsp+34h] [rbp-Ch]
  __int64 v27; // [rsp+38h] [rbp-8h]
  __int64 v30; // [rsp+98h] [rbp+58h] BYREF

  v3 = a1;
  v26 = 0;
  SessionState = W32GetSessionState(a1);
  v30 = 0LL;
  v5 = *(_QWORD *)(SessionState + 88);
  v6 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  v23 = v5;
  v27 = v5;
  CurrentThreadAndEnterCriticalRegion = W32GetCurrentThreadAndEnterCriticalRegion(&v30);
  v8 = CurrentThreadAndEnterCriticalRegion + 8;
  v9 = -CurrentThreadAndEnterCriticalRegion;
  v10 = v8 & -(__int64)(v9 != 0);
  if ( v10 )
    v11 = *(_QWORD *)((v8 & -(__int64)(v9 != 0)) + 0x40);
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v5 + 8);
  v13 = 1;
  v25 = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, v6);
  v24 = (unsigned int *)v14;
  v15 = (unsigned int *)v14;
  if ( !v14 )
  {
    v25 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_13;
  }
  _m_prefetchw((const void *)(v14 + 8));
  v16 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
  if ( v16 != (v30 & 0xFFFFFFFC) && v16 && (!v11 || v16 != (unsigned int)UMPDGetThreadClientPID(v10)) )
  {
LABEL_23:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
    v13 = v25;
    if ( v25 )
    {
      v15 = v24;
      goto LABEL_6;
    }
LABEL_13:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v24);
    return 0LL;
  }
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 8) + 96LL))(
                     *(_QWORD *)(v23 + 8),
                     *v15)
                 + 14) & 0x20) != 0
    && (!v10
     || (v22 = *(ThreadRestrictNewHandlesRegion **)(v10 + 328)) == 0LL
     || !*((_BYTE *)v22 + 80)
     || !ThreadRestrictNewHandlesRegion::InRegion(v22, v6)) )
  {
    LOBYTE(v26) = 1;
    goto LABEL_23;
  }
LABEL_6:
  if ( *((_BYTE *)v15 + 14) != a2 || *((_WORD *)v15 + 6) != HIWORD(v3) )
  {
    HIBYTE(v26) = 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
    v13 = v25;
    v15 = v24;
  }
  if ( !v13 )
    goto LABEL_13;
  v17 = v27;
  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 8) + 96LL))(*(_QWORD *)(v17 + 8), *v15);
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 8) + 96LL))(
                     *(_QWORD *)(v17 + 8),
                     *v15)
                 + 8) )
  {
    *((_BYTE *)v15 + 15) |= 2u;
    *a3 = 1;
  }
  *((_QWORD *)v15 + 2) = 0LL;
  v18 = *(__int64 **)(v17 + 8);
  v19 = *v18;
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v18 + 96))(v18, *v15);
  (*(void (__fastcall **)(__int64 *, __int64))(v19 + 48))(v18, v20);
  KeLeaveCriticalRegion();
  return 1LL;
}
