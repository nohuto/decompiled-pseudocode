/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180027410
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180042A10 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800CF9AC (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x18011C004 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  DefaultChangedContext *v9; // rax
  unsigned int v10; // edx
  DefaultChangedContext *v11; // rdi
  DefaultChangedContext *v12; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  _QWORD *v14; // rcx
  unsigned int v15; // esi
  signed int LastError; // eax
  ATL::CAtlException *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  DefaultChangedContext *v21; // [rsp+30h] [rbp-38h]
  DefaultChangedContext *v22; // [rsp+38h] [rbp-30h]
  ATL::CAtlException *v23; // [rsp+40h] [rbp-28h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27,
      (unsigned int)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
      (_DWORD)a4,
      a2,
      a3);
  }
  if ( a3 )
    return 0LL;
  v9 = (DefaultChangedContext *)operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v9;
  v22 = v9;
  if ( v9 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v9);
    *((_QWORD *)v11 + 2) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v11 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v21 = v11;
  v12 = v11;
  v22 = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    v14 = WPP_GLOBAL_Control;
    goto LABEL_22;
  }
  try
  {
    *((_DWORD *)v11 + 2) = a2;
    v15 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(v11, a4);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v18 = &v19;
    v17 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v17;
    if ( *(int *)v17 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v21, (unsigned int)v18);
      v12 = v22;
      goto LABEL_15;
    }
    v12 = v22;
    v11 = v21;
  }
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandleDefaultDeviceChanged, v11, 0LL);
  *((_QWORD *)v11 + 3) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v12 = 0LL;
LABEL_15:
    v14 = WPP_GLOBAL_Control;
    goto LABEL_16;
  }
  LastError = GetLastError();
  v15 = LastError;
  if ( LastError > 0 )
    v15 = (unsigned __int16)LastError | 0x80070000;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, v15, v20);
    goto LABEL_15;
  }
LABEL_16:
  if ( (v15 & 0x80000000) != 0 )
  {
LABEL_22:
    if ( v14 != &WPP_GLOBAL_Control && (*((_DWORD *)v14 + 7) & 0x800000) != 0 && *((_BYTE *)v14 + 25) >= 2u )
      WPP_SF_d(v14[2], 29LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, v15, v20);
  }
  if ( v12 )
    DefaultChangedContext::`scalar deleting destructor'(v12, v10);
  return v15;
}
