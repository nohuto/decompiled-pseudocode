/*
 * XREFs of WPP_RECORDER_SF_SqZ @ 0x14006D780
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140044C50 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  const wchar_t *v13; // r10
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-68h]

  v8 = a6;
  v10 = 10LL;
  v11 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_18;
  if ( !a8 )
  {
    v12 = 8LL;
    goto LABEL_7;
  }
  v12 = *a8;
  if ( !(_WORD)v12 )
  {
LABEL_7:
    v13 = L"NULL";
    goto LABEL_8;
  }
  v13 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v14 = a8;
  if ( !a8 )
    v14 = L"\b";
  if ( a6 )
  {
    v15 = -1LL;
    do
      v18 = a6[++v15] == 0;
    while ( !v18 );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10LL;
  }
  v17 = a6;
  if ( !a6 )
    v17 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
    0x7Fu,
    v17,
    v16,
    &a7,
    8LL,
    v14,
    2LL,
    v13,
    v12,
    0LL);
LABEL_18:
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      v18 = a6[++v11] == 0;
    while ( !v18 );
    v10 = 2 * v11 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v8 = L"NULL";
  LOWORD(v20) = 127;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_588cecccef1c306149c05f90e63600c9_Traceguids, v20, v8, v10, &a7);
}
