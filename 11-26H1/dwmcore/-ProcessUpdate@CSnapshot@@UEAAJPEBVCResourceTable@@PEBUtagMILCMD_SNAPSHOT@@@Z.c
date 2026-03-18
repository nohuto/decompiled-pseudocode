/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x180216C50
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180286BC8 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // edi
  struct CVisual *Resource; // rbp
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int CVI; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+44h] [rbp+Ch]

  v5 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x9Cu);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
  if ( Resource )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        v7 = **((_QWORD **)g_pComposition + 77);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v7 + 8) + 40LL))(v7 + 8, &v12);
          v8 = v12;
          if ( v12 <= v13 )
            v8 = v13;
          v9 = v8;
          if ( *((_DWORD *)a3 + 3) < v8 )
            v9 = *((_DWORD *)a3 + 3);
          *((_DWORD *)this + 20) = v9;
          if ( *((_DWORD *)a3 + 4) < v8 )
            v8 = *((_DWORD *)a3 + 4);
          *((_DWORD *)this + 21) = v8;
          *((_BYTE *)this + 88) = *((_BYTE *)a3 + 20) != 0;
          CVI = CSnapshot::CreateCVI(this, Resource);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CVI, 0x86u, 0LL);
        }
      }
    }
  }
  return v5;
}
