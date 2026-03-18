/*
 * XREFs of _lambda_13e7d7c24174763590f6bf26896d2285_::operator() @ 0x1401C66AC
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1403F1AB0 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
 */

__int64 __fastcall lambda_13e7d7c24174763590f6bf26896d2285_::operator()(__int64 **a1, unsigned int a2, int *a3)
{
  __int64 v3; // rbp
  int v5; // eax
  char v7; // r8
  __int64 *v8; // rcx
  _DWORD *v9; // rcx
  int IsMonitorConnected; // eax
  __int64 v11; // rsi
  const wchar_t *v12; // r9
  unsigned int v13; // eax
  unsigned int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  unsigned __int8 v22; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v22 = 0;
  v5 = *a3;
  v7 = 1;
  if ( (v5 & 1) != 0 )
  {
    ++*(_DWORD *)a1[1];
    v8 = a1[2];
    if ( a3[4] || a3[5] )
      v7 = 0;
    *(_BYTE *)v8 |= v7;
    v9 = (_DWORD *)**a1;
    if ( a3[1] != v9[103] || a3[2] != v9[104] )
    {
      LODWORD(v11) = -1073741811;
      WdLogSingleEntry3(2LL, a2, **a1, -1073741811LL);
      v12 = L"Adapter LUID from path 0x%I64x does not match the LUID from adapter 0x%I64x,returning 0x%I64x).";
      v21 = -1073741811LL;
      v20 = **a1;
      WdLogGlobalForLineNumber = 986;
      goto LABEL_17;
    }
    IsMonitorConnected = MonitorIsMonitorConnected(v9, a3[3], 0, &v22);
    v11 = IsMonitorConnected;
    if ( IsMonitorConnected < 0 )
    {
      WdLogSingleEntry2(2LL, v3, IsMonitorConnected);
      v12 = L"Failed to check the monitor connection on path 0x%I64x, (Status = 0x%I64x).";
      v21 = 0LL;
      v20 = v11;
      WdLogGlobalForLineNumber = 995;
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v3, v20, v21, 0LL, 0LL);
      return (unsigned int)v11;
    }
    if ( !v22 )
    {
      LODWORD(v11) = -1071774920;
      WdLogSingleEntry3(2LL, (unsigned int)a3[3], v3, -1071774920LL);
      v16 = (unsigned int)a3[3];
      WdLogGlobalForLineNumber = 1003;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Target ID 0x%I64x from path 0x%I64x does not have connected monitor,returning 0x%I64x).",
        v16,
        v3,
        -1071774920LL,
        0LL,
        0LL);
      return (unsigned int)v11;
    }
    if ( (unsigned int)(a3[8] - 1) > 3 )
    {
      LODWORD(v11) = -1073741811;
      WdLogSingleEntry3(2LL, a3[8], v3, -1073741811LL);
      v18 = a3[8];
      WdLogGlobalForLineNumber = 1012;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Rotation mode (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        v18,
        v3,
        -1073741811LL,
        0LL,
        0LL);
      return (unsigned int)v11;
    }
    v13 = a3[11];
    if ( !v13 || v13 > 0x3F )
    {
      LODWORD(v11) = -1073741811;
      WdLogSingleEntry3(2LL, (unsigned int)a3[11], v3, -1073741811LL);
      v17 = (unsigned int)a3[11];
      WdLogGlobalForLineNumber = 1022;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VSync frequency divider (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        v17,
        v3,
        -1073741811LL,
        0LL,
        0LL);
      return (unsigned int)v11;
    }
  }
  if ( (*a3 & 2) != 0 )
  {
    v15 = a3[13];
    if ( v15 < 0x64 || v15 > 0x1F4 )
    {
      LODWORD(v11) = -1073741811;
      WdLogSingleEntry3(2LL, (unsigned int)a3[13], v3, -1073741811LL);
      v19 = (unsigned int)a3[13];
      WdLogGlobalForLineNumber = 1034;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Monitor scale factor (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        v19,
        v3,
        -1073741811LL,
        0LL,
        0LL);
      return (unsigned int)v11;
    }
  }
  return 0LL;
}
