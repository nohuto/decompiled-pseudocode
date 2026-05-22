/*
 * XREFs of ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801BDF04
 * Callers:
 *     ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18007E130 (-ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801BDD48 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x18006575C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceArrival(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+24h] [rbp-24h]
  __int16 v11; // [rsp+26h] [rbp-22h]
  __int16 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  __int64 v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      a4);
  if ( HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, a3, a4) )
  {
    v6 = *((_QWORD *)this + 11);
    if ( v6 )
    {
      v9 = *(_DWORD *)a2;
      v10 = *((_WORD *)a2 + 16);
      v11 = *((_WORD *)a2 + 17);
      v12 = *((_WORD *)a2 + 18);
      v14 = *(_QWORD *)((char *)a2 + 20);
      v15 = *((_DWORD *)a2 + 7);
      v13 = 1;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v9);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
          (const char *)(unsigned int)v7);
    }
  }
  return 0LL;
}
