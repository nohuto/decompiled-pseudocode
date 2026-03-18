/*
 * XREFs of ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1402131E0
 * Callers:
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x14021C020 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x140065C80 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

char __fastcall CDesktopInputSink::GetTransform(struct tagINPUT_TRANSFORM *a1, __int64 a2)
{
  CPushLock *v3; // rdi
  __int64 v4; // rdx
  CompositionInputObject *v5; // rcx
  bool v6; // bl
  bool v7; // si
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  bool v17; // bl
  bool v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __m128 v22; // xmm2
  __m128 v23; // xmm2
  bool v24; // di
  bool v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int16 v29; // [rsp+30h] [rbp-28h]

  v3 = *(CPushLock **)(W32GetUserSessionState(a1, a2) + 19128);
  RIMLockShared((__int64)v3);
  v5 = (CompositionInputObject *)*((_QWORD *)v3 + 2);
  if ( !v5 )
  {
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v4) + 69144);
    v29 = 11;
LABEL_19:
    LOBYTE(v9) = v7;
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      v10,
      3,
      2,
      v29,
      (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
LABEL_20:
    CPushLock::ReleaseLock(v3);
    return 0;
  }
  if ( (int)CompositionInputObject::QueryTransform(v5, a1) < 0 )
  {
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69144);
    v29 = 12;
    goto LABEL_19;
  }
  CPushLock::ReleaseLock(v3);
  v16 = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 71264);
  if ( !v16 )
  {
    v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        2,
        13,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
    }
    return 0;
  }
  v22 = (__m128)LODWORD(FLOAT_1_0);
  v22.m128_f32[0] = 1.0 / (float)((float)v16 / 96.0);
  v23 = _mm_shuffle_ps(v22, v22, 0);
  *(__m128 *)a1 = _mm_mul_ps(*(__m128 *)a1, v23);
  *((__m128 *)a1 + 1) = _mm_mul_ps(*((__m128 *)a1 + 1), v23);
  v24 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 69144),
      4,
      2,
      15,
      (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids,
      v16);
  }
  return 1;
}
