/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1400CDC50
 * Callers:
 *     SortMonitorsInSpatialOrder @ 0x1400CDC20 (SortMonitorsInSpatialOrder.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __m128i *MonitorWorkRectForDpi; // rax
  unsigned __int64 v18; // xmm0_8
  __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // r8d
  __int64 UserSessionState; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __m128i v25[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 255;
  v4 = 8LL * ***(unsigned int ***)(W32GetUserSessionState(a1, a2) + 56968);
  if ( v4 <= 0xFFFFFFFF )
  {
    v7 = (_QWORD *)Win32AllocPoolZInit((unsigned int)v4, 1835101525LL);
    if ( v7 )
    {
      for ( i = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 104LL); i; i = (_QWORD *)i[7] )
      {
        v24 = *(unsigned int *)(i[5] + 24LL);
        if ( (v24 & 1) != 0 && (unsigned int)v2 < ***(_DWORD ***)(W32GetUserSessionState(v24, v8) + 56968) )
        {
          v7[v2] = i;
          v2 = (unsigned int)(v2 + 1);
          i[12] = 0LL;
          i[13] = 0LL;
        }
      }
      qsort(v7, (unsigned int)v2, 8uLL, MonitorCoordComp);
      v12 = 0LL;
      v14 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 56968) + 144LL);
      v14[1] = v14;
      *v14 = v14;
      if ( !(_DWORD)v2 )
        goto LABEL_14;
      do
      {
        v15 = v7[v12];
        v16 = (_QWORD *)(v15 + 96);
        MonitorWorkRectForDpi = GetMonitorWorkRectForDpi(v25, v15, 0x60u);
        v18 = _mm_srli_si128(*MonitorWorkRectForDpi, 8).m128i_u64[0];
        v19 = (unsigned int)v18 - (unsigned int)MonitorWorkRectForDpi->m128i_i64[0];
        v20 = HIDWORD(v18) - HIDWORD(MonitorWorkRectForDpi->m128i_i64[0]);
        if ( (int)v19 < v20 )
          v20 = v18 - MonitorWorkRectForDpi->m128i_i64[0];
        v21 = (unsigned int)v20 >> 1;
        if ( v3 < v21 )
          v21 = v3;
        v3 = v21;
        UserSessionState = W32GetUserSessionState(MonitorWorkRectForDpi->m128i_i64[0], v19);
        v14 = (_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 144LL);
        v23 = *(_QWORD **)(*(_QWORD *)(UserSessionState + 56968) + 152LL);
        if ( (_QWORD *)*v23 != v14 )
          __fastfail(3u);
        *v16 = v14;
        v12 = (unsigned int)(v12 + 1);
        v16[1] = v23;
        *v23 = v16;
        v14[1] = v16;
      }
      while ( (unsigned int)v12 < (unsigned int)v2 );
      if ( v3 == -1 )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 56968) + 136LL) = 0;
      else
LABEL_14:
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 56968) + 136LL) = v3;
      Win32FreePool(v7);
    }
  }
}
