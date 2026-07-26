/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1400ABE58
 * Callers:
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005C260 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1400AB6B0 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rax
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]

  v7 = a7;
  v8 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a7;
    if ( !a7 )
      v13 = "NULL";
    ndisWppFastTraceMessage(&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids, a4, &a6, 8LL, v13, v12, 0LL);
  }
  v14 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v14 = v7 == 0LL;
  }
  if ( v14 )
    v7 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids, v16, &a6, 8LL, v7);
}
