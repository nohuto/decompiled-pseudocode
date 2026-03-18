/*
 * XREFs of GetScaledLogFontForDpi @ 0x140041420
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1400412AC (_SystemParametersInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x140042E78 (GetDPIMETRICSForDpiUnsafe.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 */

_BOOL8 __fastcall GetScaledLogFontForDpi(int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 DPIMETRICSForDpiUnsafe; // r9
  BOOL v7; // esi
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // ebp
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct HLFONT__ *v24; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  struct HLFONT__ *v29; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  DPIMETRICSForDpiUnsafe = 0LL;
  v7 = 0;
  if ( !a1 || (v8 = a1 - 1) == 0 || (v9 = (unsigned int)(v8 - 1), (unsigned int)v9 < 2) )
    DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(a2);
  v29 = 0LL;
  v10 = 0;
  if ( !a1 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v24 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 64);
      goto LABEL_15;
    }
    v26 = *(_QWORD *)(Get96DpiMetrics() + 64);
    goto LABEL_29;
  }
  v11 = a1 - 1;
  if ( !v11 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v24 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 32);
      goto LABEL_15;
    }
    v26 = *(_QWORD *)(Get96DpiMetrics() + 32);
    goto LABEL_29;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v24 = *(struct HLFONT__ **)DPIMETRICSForDpiUnsafe;
      goto LABEL_15;
    }
    v26 = *(_QWORD *)Get96DpiMetrics();
    goto LABEL_29;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v24 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 56);
      goto LABEL_15;
    }
    v26 = *(_QWORD *)(Get96DpiMetrics() + 56);
LABEL_29:
    v28 = CreateScaledFont(v26, &v29, v27, v4, 0LL, 0LL, 0LL);
    v24 = v29;
    v10 = v28;
    goto LABEL_15;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v15 = *(_QWORD *)(W32GetUserSessionState(v9, a2) + 19872);
      *(_OWORD *)a3 = *(_OWORD *)(v15 + 5004);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v15 + 5020);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v15 + 5036);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(v15 + 5052);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(v15 + 5068);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(v15 + 5084);
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(v15 + 5092);
      v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
      if ( v4 != *(unsigned __int16 *)(v19 + 6998) )
      {
        UserSessionState = W32GetUserSessionState(v19, v18);
        *(_DWORD *)(a3 + 4) = EngMulDiv(
                                *(_DWORD *)(a3 + 4),
                                v4,
                                *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL));
        v23 = W32GetUserSessionState(v22, v21);
        *(_DWORD *)a3 = EngMulDiv(*(_DWORD *)a3, v4, *(unsigned __int16 *)(*(_QWORD *)(v23 + 19872) + 6998LL));
      }
      return 1;
    }
    return v7;
  }
  v24 = *(struct HLFONT__ **)(GetDPIServerInfoForDpi(v4) + 8);
LABEL_15:
  if ( v24 )
    v7 = GreExtGetObjectW((HSURF)v24) != 0;
  if ( v10 )
    DeleteMetricsFont(v24);
  return v7;
}
