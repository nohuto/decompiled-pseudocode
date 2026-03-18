/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1400418A8
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1400412AC (_SystemParametersInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x140042E78 (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  BOOL v5; // r14d
  HSURF v6; // rcx
  int v7; // edi
  __int64 DPIMETRICSForDpiUnsafe; // rax
  int v9; // r15d
  struct HLFONT__ *v10; // rbp
  int v11; // edi
  int v12; // ebp
  struct HLFONT__ **v13; // rax
  int v14; // r15d
  struct HLFONT__ *v15; // r14
  int v16; // edi
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r15d
  struct HLFONT__ *v22; // r14
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 UserSessionState; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // r8
  int v42; // eax
  struct HLFONT__ *v43; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, a2);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, v3);
  v4 = Get96DpiServerInfo();
  *(_DWORD *)(a1 + 4) = EngMulDiv(*(_DWORD *)(v4 + 4), v3, 96);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, v3);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, v3);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, v3);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, v3);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, v3);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, v3);
  *(_DWORD *)(a1 + 500) = GetDpiDependentMetric(29LL, v3);
  v5 = 0;
  v6 = *(HSURF *)(GetDPIServerInfoForDpi(v3) + 8);
  if ( v6 )
    v5 = GreExtGetObjectW(v6) != 0;
  v7 = 0;
  DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(v3);
  v43 = 0LL;
  v9 = 0;
  if ( DPIMETRICSForDpiUnsafe )
  {
    v10 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 32);
  }
  else
  {
    v37 = Get96DpiMetrics();
    v39 = CreateScaledFont(*(_QWORD *)(v37 + 32), &v43, v38, v3, 0LL, 0LL, 0LL);
    v10 = v43;
    v9 = v39;
  }
  if ( v10 && (unsigned int)GreExtGetObjectW((HSURF)v10) )
    v7 = 1;
  if ( v9 )
    DeleteMetricsFont(v10);
  v11 = v5 & v7;
  v12 = 0;
  v13 = (struct HLFONT__ **)GetDPIMETRICSForDpiUnsafe(v3);
  v43 = 0LL;
  v14 = 0;
  if ( v13 )
  {
    v15 = *v13;
  }
  else
  {
    v40 = (_QWORD *)Get96DpiMetrics();
    v42 = CreateScaledFont(*v40, &v43, v41, v3, 0LL, 0LL, 0LL);
    v15 = v43;
    v14 = v42;
  }
  if ( v15 && (unsigned int)GreExtGetObjectW((HSURF)v15) )
    v12 = 1;
  if ( v14 )
    DeleteMetricsFont(v15);
  v16 = v12 & v11;
  v17 = 0;
  v18 = GetDPIMETRICSForDpiUnsafe(v3);
  v43 = 0LL;
  v21 = 0;
  if ( v18 )
  {
    v22 = *(struct HLFONT__ **)(v18 + 56);
  }
  else
  {
    v34 = Get96DpiMetrics();
    v36 = CreateScaledFont(*(_QWORD *)(v34 + 56), &v43, v35, v3, 0LL, 0LL, 0LL);
    v22 = v43;
    v21 = v36;
  }
  if ( v22 && (unsigned int)GreExtGetObjectW((HSURF)v22) )
    v17 = 1;
  if ( v21 )
    DeleteMetricsFont(v22);
  v23 = v16 & v17;
  v24 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19872);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(v24 + 5004);
  *(_OWORD *)(a1 + 424) = *(_OWORD *)(v24 + 5020);
  *(_OWORD *)(a1 + 440) = *(_OWORD *)(v24 + 5036);
  *(_OWORD *)(a1 + 456) = *(_OWORD *)(v24 + 5052);
  *(_OWORD *)(a1 + 472) = *(_OWORD *)(v24 + 5068);
  *(_QWORD *)(a1 + 488) = *(_QWORD *)(v24 + 5084);
  *(_DWORD *)(a1 + 496) = *(_DWORD *)(v24 + 5092);
  v28 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19872);
  if ( v3 != *(unsigned __int16 *)(v28 + 6998) )
  {
    UserSessionState = W32GetUserSessionState(v28, v27);
    *(_DWORD *)(a1 + 412) = EngMulDiv(
                              *(_DWORD *)(a1 + 412),
                              v3,
                              *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL));
    v32 = W32GetUserSessionState(v31, v30);
    *(_DWORD *)(a1 + 408) = EngMulDiv(
                              *(_DWORD *)(a1 + 408),
                              v3,
                              *(unsigned __int16 *)(*(_QWORD *)(v32 + 19872) + 6998LL));
  }
  return v23;
}
