/*
 * XREFs of WPP_RECORDER_SF_sL @ 0x1400BA660
 * Callers:
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400492E0 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_sL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  const char *v12; // r8
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v9 = 5LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = "NULL";
    ndisWppFastTraceMessage(&WPP_588cecccef1c306149c05f90e63600c9_Traceguids, 0x4Bu, v12, v11, va, 4LL, 0LL);
  }
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = v7 + 1;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v6 = "NULL";
  LOWORD(v15) = 75;
  return WppAutoLogTrace(a1, 2LL, 14LL, &WPP_588cecccef1c306149c05f90e63600c9_Traceguids, v15, v6, v9, va);
}
