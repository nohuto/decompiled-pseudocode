/*
 * XREFs of ?OnDeviceUpdate@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BE0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x18006575C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceUpdate(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int16 v11; // [rsp+24h] [rbp-24h]
  __int16 v12; // [rsp+26h] [rbp-22h]
  __int16 v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+2Ch] [rbp-1Ch]
  __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)a2 + 1) != 2048 )
    return 0LL;
  if ( !HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, a3, a4) )
    return 0LL;
  v6 = *((_QWORD *)this + 11);
  if ( !v6 )
    return 0LL;
  if ( *((_BYTE *)a2 + 38) != 1 )
    return 0LL;
  v10 = *(_DWORD *)a2;
  v11 = *((_WORD *)a2 + 16);
  v12 = *((_WORD *)a2 + 17);
  v13 = *((_WORD *)a2 + 18);
  v15 = *(_QWORD *)((char *)a2 + 20);
  v16 = *((_DWORD *)a2 + 7);
  v14 = 1;
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 40LL))(v6, &v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x112,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
