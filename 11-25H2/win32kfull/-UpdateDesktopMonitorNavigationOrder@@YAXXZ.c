/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x14014AAD8
 * Callers:
 *     SortMonitorsInSpatialOrder @ 0x14014A9F0 (SortMonitorsInSpatialOrder.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1400911FC (GetMonitorWorkRectForDpi.c)
 */

void __fastcall UpdateDesktopMonitorNavigationOrder(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r14
  __int64 v8; // rdx
  _QWORD *i; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  __m128i *MonitorWorkRectForDpi; // rax
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // rdx
  int v21; // r8d
  unsigned int v22; // r8d
  __int64 UserSessionState; // rax
  _QWORD *v24; // rax
  __m128i v25[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 255;
  v4 = 8LL * ***(unsigned int ***)(W32GetUserSessionState(a1, a2) + 56968);
  if ( v4 <= 0xFFFFFFFF )
  {
    v7 = (_QWORD *)Win32AllocPoolZInit((unsigned int)v4, 1835101525LL);
    if ( v7 )
    {
      for ( i = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 112LL); i; i = (_QWORD *)i[7] )
      {
        v10 = i[5];
        if ( (*(_DWORD *)(v10 + 24) & 1) != 0
          && (unsigned int)v2 < ***(_DWORD ***)(W32GetUserSessionState(v10, v8) + 56968) )
        {
          v7[v2] = i;
          i[12] = 0LL;
          i[13] = 0LL;
          v2 = (unsigned int)(v2 + 1);
        }
      }
      qsort(v7, (unsigned int)v2, 8uLL, MonitorCoordComp);
      v13 = 0LL;
      v15 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 56968) + 152LL);
      v15[1] = v15;
      *v15 = v15;
      if ( !(_DWORD)v2 )
        goto LABEL_11;
      do
      {
        v16 = v7[v13];
        v17 = (_QWORD *)(v16 + 96);
        MonitorWorkRectForDpi = GetMonitorWorkRectForDpi(v25, v16, 0x60u);
        v19 = _mm_srli_si128(*MonitorWorkRectForDpi, 8).m128i_u64[0];
        v20 = (unsigned int)v19 - (unsigned int)MonitorWorkRectForDpi->m128i_i64[0];
        v21 = HIDWORD(v19) - HIDWORD(MonitorWorkRectForDpi->m128i_i64[0]);
        if ( (int)v20 < v21 )
          v21 = v19 - MonitorWorkRectForDpi->m128i_i64[0];
        v22 = (unsigned int)v21 >> 1;
        if ( v3 < v22 )
          v22 = v3;
        v3 = v22;
        UserSessionState = W32GetUserSessionState(MonitorWorkRectForDpi->m128i_i64[0], v20);
        v15 = (_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 152LL);
        v24 = *(_QWORD **)(*(_QWORD *)(UserSessionState + 56968) + 160LL);
        if ( (_QWORD *)*v24 != v15 )
          __fastfail(3u);
        *v17 = v15;
        v13 = (unsigned int)(v13 + 1);
        v17[1] = v24;
        *v24 = v17;
        v15[1] = v17;
      }
      while ( (unsigned int)v13 < (unsigned int)v2 );
      if ( v3 == -1 )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 56968) + 144LL) = 0;
      else
LABEL_11:
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 56968) + 144LL) = v3;
      Win32FreePool(v7);
    }
  }
}
