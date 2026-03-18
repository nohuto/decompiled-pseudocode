/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180126E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801271B4 (--$_Reallocate@$0A@@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180127258 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$iter_swap@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@0@0@Z @ 0x18029603C (--$iter_swap@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$unique_ptr@VCCheckMPOCache@@.c)
 *     ?Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z @ 0x180297BD0 (-Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z.c)
 *     ??$emplace_back@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@QEAAAEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$$QEAU2@@Z @ 0x1802A56F4 (--$emplace_back@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector@UDXGI_CHECK_MULTIPLAN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        CLegacySwapChain *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  CCheckMPOCache **v9; // rbx
  __int64 v10; // rbx
  char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rcx
  int v24; // eax
  DWORD v25; // ebx
  bool v27; // bl
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int128 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+68h] [rbp-98h] BYREF
  __int128 v38; // [rsp+78h] [rbp-88h]
  __int128 v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+98h] [rbp-68h]
  __int128 v41; // [rsp+A8h] [rbp-58h]
  __int128 v42; // [rsp+B8h] [rbp-48h]
  __int128 v43; // [rsp+C8h] [rbp-38h]
  __int128 v44; // [rsp+D8h] [rbp-28h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF

  *a4 = 0;
  v6 = a3;
  if ( !*((_QWORD *)this + 33) || *((int *)this + 16) < 1 )
    return 0;
  v8 = *((_QWORD *)this + 5);
  if ( !*(_BYTE *)(v8 + 1493) )
  {
    ++*(_QWORD *)(v8 + 1448);
    *(_BYTE *)(v8 + 1493) = 1;
  }
  v9 = *(CCheckMPOCache ***)(v8 + 1432);
  while ( v9 != *(CCheckMPOCache ***)(v8 + 1424) )
  {
    if ( CCheckMPOCache::Matches(*--v9, a2, v6) )
    {
      *((_QWORD *)*v9 + 60) = *(_QWORD *)(v8 + 1448);
      v30 = *(_QWORD *)(v8 + 1432) - 8LL;
      LOBYTE(v29) = *((_BYTE *)*v9 + 488);
      if ( v9 != (CCheckMPOCache **)v30 )
        std::iter_swap<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<CCheckMPOCache>>>>,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<CCheckMPOCache>>>>>(
          v9,
          v30,
          v28,
          v29);
      return v29;
    }
  }
  v35 = 0LL;
  v10 = v6;
  v33 = v6;
  v34 = 0LL;
  if ( (_DWORD)v6 )
  {
    std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Reallocate<0>(&v34, &v33);
    v11 = (char *)a2 + 8;
    do
    {
      memset_0((char *)&v36 + 4, 0, 0x8CuLL);
      v12 = *(_QWORD *)v11;
      LODWORD(v36) = *((_DWORD *)v11 - 2);
      v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 40LL))(v12, (char *)&v37 + 12);
      v14 = *(_QWORD *)v11;
      *((_QWORD *)&v36 + 1) = v13;
      LODWORD(v37) = *((_DWORD *)v11 + 2);
      v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v33);
      v16 = *((_OWORD *)v11 + 2);
      v17 = *v15;
      v38 = *((_OWORD *)v11 + 1);
      *(_QWORD *)((char *)&v37 + 4) = v17;
      v18 = *((_OWORD *)v11 + 3);
      v39 = v16;
      v19 = *((_OWORD *)v11 + 4);
      v40 = v18;
      v20 = *((_OWORD *)v11 + 5);
      v41 = v19;
      v21 = *((_OWORD *)v11 + 6);
      v42 = v20;
      v22 = *((_OWORD *)v11 + 7);
      v43 = v21;
      v44 = v22;
      *(_OWORD *)&pExceptionRecord.ExceptionCode = v36;
      *(_OWORD *)&pExceptionRecord.ExceptionAddress = v37;
      *(_OWORD *)pExceptionRecord.ExceptionInformation = v38;
      *(_OWORD *)&pExceptionRecord.ExceptionInformation[2] = v39;
      *(_OWORD *)&pExceptionRecord.ExceptionInformation[4] = v40;
      *(_OWORD *)&pExceptionRecord.ExceptionInformation[6] = v41;
      *(_OWORD *)&pExceptionRecord.ExceptionInformation[8] = v42;
      *(_OWORD *)&pExceptionRecord.ExceptionInformation[10] = v21;
      *(_OWORD *)&pExceptionRecord.ExceptionInformation[12] = v22;
      std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::emplace_back<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        &v34,
        &pExceptionRecord);
      v11 += 144;
      --v10;
    }
    while ( v10 );
  }
  v23 = *((_QWORD *)this + 33);
  v31 = 0;
  v32 = 0;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, int *))(*(_QWORD *)v23 + 176LL))(
          v23,
          (unsigned int)v6,
          v34,
          &v31,
          &v32);
  v25 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x1DAu, 0LL);
    if ( v25 == -2005270527 || v25 == -2147024809 )
    {
      memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      pExceptionRecord.ExceptionCode = v25;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (_QWORD)v34 )
      std::_Deallocate<16>((void *)v34, 16 * ((v35 - (__int64)v34) >> 4));
    return 0;
  }
  v27 = v31 == 1;
  if ( v32 )
    *a4 = 1;
  else
    CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)this + 5), a2, v6, v31 == 1);
  if ( (_QWORD)v34 )
    std::_Deallocate<16>((void *)v34, 16 * ((v35 - (__int64)v34) >> 4));
  return v27;
}
