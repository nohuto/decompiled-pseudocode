/*
 * XREFs of TryTrimWnfProcess @ 0x1400A6574
 * Callers:
 *     HandleTrimWnfInternal @ 0x1400A6470 (HandleTrimWnfInternal.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x14010C8F8 (-SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 */

void __fastcall TryTrimWnfProcess(
        VIDMM_GLOBAL *this,
        VIDMM_PROCESS_ADAPTER_INFO *a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        char a6)
{
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v6; // ebx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v6.0 = 0;
  if ( a5 )
  {
    v10 = *((_QWORD *)a2 + 15);
    if ( a6 || v10 != *((_QWORD *)a2 + 16) )
    {
      *((_BYTE *)a2 + 180) = 0;
      v6.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)1;
    }
    else if ( !*((_BYTE *)a2 + 180) )
    {
      v6.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)1;
      if ( (*((_DWORD *)this + 1746) & 0x2000000) == 0 )
        *((_BYTE *)a2 + 180) = 1;
    }
    *((_QWORD *)a2 + 16) = v10;
  }
  v11 = 0LL;
  v13 = 0LL;
  if ( a4 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, (struct _KTHREAD **)a2 + 18);
    VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(a2, &v13, 0, 1);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    v11 = v13;
    if ( v13 )
      v6.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v6.Value | 4);
  }
  if ( v6.0 )
    VIDMM_GLOBAL::SendTrimWnf(this, *((struct VIDMM_PROCESS **)a2 + 2), v6, v11);
}
