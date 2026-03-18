/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1400412AC
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x140041120 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     GetScaledLogFontForDpi @ 0x140041420 (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1400418A8 (GetWindowNCMetricsForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x140042E78 (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // ebp
  __int64 DPIMETRICSForDpiUnsafe; // rax
  int v11; // r14d
  struct HLFONT__ *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  struct HLFONT__ *v18; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  if ( a1 == 41 )
  {
    if ( *a3 == 504 )
      return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
LABEL_17:
    UserSetLastError(87);
    return v5;
  }
  if ( a1 != 31 )
  {
    if ( a1 != 45 )
      return v5;
    if ( *a3 == 108 )
    {
      a3[1] = GetDpiDependentMetric(18LL, a5);
      a3[2] = GetDpiDependentMetric(19LL, a5);
      a3[3] = (*(_DWORD *)(W32GetUserSessionState(v14, v13) + 66800) >> 21) & 1;
      return (unsigned int)GetScaledLogFontForDpi(0LL, a5, a3 + 4);
    }
    goto LABEL_17;
  }
  v9 = 0;
  DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(a5);
  v18 = 0LL;
  v11 = 0;
  if ( DPIMETRICSForDpiUnsafe )
  {
    v12 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 64);
  }
  else
  {
    v15 = Get96DpiMetrics();
    v17 = CreateScaledFont(*(_QWORD *)(v15 + 64), &v18, v16, a5, 0LL, 0LL, 0LL);
    v12 = v18;
    v11 = v17;
  }
  if ( v12 && (unsigned int)GreExtGetObjectW((HSURF)v12) )
    v9 = 1;
  if ( v11 )
    DeleteMetricsFont(v12);
  return v9;
}
