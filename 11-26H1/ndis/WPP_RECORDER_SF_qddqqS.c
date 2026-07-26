/*
 * XREFs of WPP_RECORDER_SF_qddqqS @ 0x14008FCB0
 * Callers:
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x14013EB70 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qddqqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const wchar_t *a11)
{
  __int64 v11; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  int v19; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v13 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a11 )
    {
      v14 = -1LL;
      do
        v15 = a11[++v14] == 0;
      while ( !v15 );
      v16 = 2 * v14 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a11;
    if ( !a11 )
      v17 = L"NULL";
    ndisWppFastTraceMessage(
      &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      0x30u,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      &a10,
      8LL,
      v17,
      v16,
      0LL);
  }
  if ( v11 )
  {
    do
      v15 = *(_WORD *)(v11 + 2 * v13++ + 2) == 0;
    while ( !v15 );
  }
  LOWORD(v19) = 48;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids, v19, &a6, 8LL, &a7);
}
