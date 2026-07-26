/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x140058DC0
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_sq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // r9
  const char *v14; // r8
  int v15; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v8 = -1LL;
  v9 = 5LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        v10 = a6[++v12] == 0;
      while ( !v10 );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = "NULL";
    ndisWppFastTraceMessage(&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids, 0x21u, v14, v13, va, 8LL, 0LL);
  }
  v10 = a6 == 0LL;
  if ( a6 )
  {
    do
      v10 = a6[++v8] == 0;
    while ( !v10 );
    v9 = v8 + 1;
    v10 = a6 == 0LL;
  }
  if ( v10 )
    v6 = "NULL";
  LOWORD(v15) = 33;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_63e371e5a248373aa5c809d99c379eef_Traceguids, v15, v6, v9, va);
}
