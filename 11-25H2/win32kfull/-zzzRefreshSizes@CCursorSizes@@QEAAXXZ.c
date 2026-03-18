/*
 * XREFs of ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     EditionzzzUpdateCursorSizes @ 0x1401B7900 (EditionzzzUpdateCursorSizes.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1401B79B4 (--0CCursorSizes@@QEAA@XZ.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizesIndexFromDpi @ 0x14004DCB4 (GetCursorSizesIndexFromDpi.c)
 *     GetCursorSizeFromIndex @ 0x14004E6AC (GetCursorSizeFromIndex.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1401B7C3C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?DeferMonitorIcoCurCreation@@YAXXZ @ 0x1401B7C6C (-DeferMonitorIcoCurCreation@@YAXXZ.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1401D1E64 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z @ 0x140273BA8 (-ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x140273CAC (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall CCursorSizes::zzzRefreshSizes(CCursorSizes *this)
{
  char v2; // r12
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  __int128 v5; // xmm1
  INT CursorSizeFromIndex; // ebx
  __int64 v7; // rsi
  _DWORD *v8; // r15
  INT v9; // eax
  INT v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  unsigned int *v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r8d
  unsigned int *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rdi
  __int64 UserSessionState; // rax
  unsigned int v23; // ebx
  int v24; // [rsp+20h] [rbp-88h]
  unsigned int v25[4]; // [rsp+28h] [rbp-80h] BYREF
  __int128 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+48h] [rbp-60h]
  unsigned int v28[4]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v29; // [rsp+60h] [rbp-48h]
  __int64 v30; // [rsp+70h] [rbp-38h]

  v2 = 0;
  v3 = *(_DWORD *)UPDWORDPointer(8232LL);
  CPushLock::AcquireLockExclusive((CCursorSizes *)((char *)this + 64));
  v4 = 0;
  v5 = *(_OWORD *)((char *)this + 40);
  v24 = *((_DWORD *)this + 1);
  *(_OWORD *)v25 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 1) = v3;
  v27 = *((_QWORD *)this + 7);
  v26 = v5;
  CursorSizeFromIndex = GetCursorSizeFromIndex(0);
  v7 = 5LL;
  v8 = (_DWORD *)((char *)this + 24);
  do
  {
    v9 = GetCursorSizeFromIndex(v4);
    v10 = EngMulDiv(v9, v3, CursorSizeFromIndex);
    *v8 = 0;
    ++v4;
    v8[1] = v10;
    v8 += 2;
  }
  while ( v4 < 5 );
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 56968) + 112LL); i; i = *(_QWORD *)(v14 + 56) )
    *((_DWORD *)this
    + 2 * (unsigned int)GetCursorSizesIndexFromDpi(*(unsigned __int16 *)(*(_QWORD *)(i + 40) + 64LL))
    + 6) = 1;
  v15 = *(_OWORD *)((char *)this + 40);
  *(_OWORD *)v28 = *(_OWORD *)((char *)this + 24);
  v30 = *((_QWORD *)this + 7);
  v29 = v15;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v3 != v24 )
    InputTraceLogging::Cursor::UpdateBaseSize(v3);
  v16 = v28;
  v17 = 5LL;
  do
  {
    v18 = *v16;
    v19 = v25;
    v20 = 5LL;
    do
    {
      if ( v18 && *v19 && v16[1] == v19[1] )
      {
        v18 = 0;
        *v19 = 0;
      }
      v19 += 2;
      --v20;
    }
    while ( v20 );
    *v16 = v18;
    v16 += 2;
    --v17;
  }
  while ( v17 );
  v21 = 0LL;
  do
  {
    if ( v25[v21] )
    {
      v23 = v25[v21 + 1];
      InputTraceLogging::Cursor::ReloadCursorSizes(v23, 0);
      _CleanupUnneededSystemCursorSizes(v23);
    }
    if ( v28[v21] )
    {
      v2 = 1;
      InputTraceLogging::Cursor::ReloadCursorSizes(v28[v21 + 1], 1);
    }
    v21 += 2LL;
    --v7;
  }
  while ( v7 );
  if ( v2 )
    DeferMonitorIcoCurCreation();
  UserSessionState = W32GetUserSessionState(v16, v19);
  CCursorSizes::zzzUpdateGlobalCursorSize(
    this,
    (const struct tagPOINT *)(*(_QWORD *)(UserSessionState + 19872) + 4960LL),
    1);
}
