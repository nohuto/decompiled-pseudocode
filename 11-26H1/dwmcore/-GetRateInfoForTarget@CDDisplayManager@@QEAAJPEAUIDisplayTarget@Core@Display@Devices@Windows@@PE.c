/*
 * XREFs of ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x1801DFBAC
 * Callers:
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x18029B1B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z @ 0x18029CAC4 (--0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::GetRateInfoForTarget(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplayTarget *a2,
        struct RefreshRateInfo *a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  unsigned int v9; // eax
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rbx
  void (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  void (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rbx
  void (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int128 *, __int64 *); // rdi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int128 *, __int64 *); // rdi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  void (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v38[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-30h] BYREF
  int v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h] BYREF
  int v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h] BYREF
  int v44; // [rsp+F8h] [rbp-8h]

  v24 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v26 = 0;
  v25 = 0;
  v5 = *g_DDisplayManager;
  v36 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v5 + 80))(g_DDisplayManager, &v36);
  if ( v6 < 0 )
  {
    v9 = 236;
    goto LABEL_53;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 48LL))(v36, &v25);
  if ( v6 < 0 )
  {
    v9 = 239;
    goto LABEL_53;
  }
  if ( v25 )
    goto LABEL_10;
  v7 = v36;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 64LL);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v6 = v8(v7, &v35);
  if ( v6 < 0 )
  {
    v9 = 242;
    goto LABEL_53;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayTarget *, _QWORD *))(*(_QWORD *)v35 + 120LL))(
         v35,
         a2,
         &v24);
  if ( v6 >= 0 )
  {
LABEL_10:
    v10 = v24;
    if ( !v24 )
    {
      v6 = -2003304309;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0xFCu, 0LL);
      goto LABEL_54;
    }
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      v10 = v24;
    }
    (**v10)(v10, &GUID_f32459c5_e994_570b_9ec8_ef42c35a8547, &v34);
    v11 = v24;
    v12 = (*v24)[17];
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))v12)(v11, &v33);
    if ( v6 < 0 )
    {
      v9 = 257;
    }
    else
    {
      v39 = 0LL;
      v40 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, &v39);
      if ( v6 < 0 )
      {
        v9 = 259;
      }
      else
      {
        v13 = v34;
        v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 48LL);
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v6 = v14(v13, &v32);
        if ( v6 < 0 )
        {
          v9 = 262;
        }
        else
        {
          v41 = 0LL;
          v42 = 0;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL))(v32, &v41);
          if ( v6 < 0 )
          {
            v9 = 264;
          }
          else
          {
            v15 = v24;
            v16 = (*v24)[29];
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))v16)(v15, &v27);
            if ( v6 < 0 )
            {
              v9 = 269;
            }
            else
            {
              v17 = v27;
              v18 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v27 + 48LL);
              if ( v31 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              v37 = DisplayPath_MinPresentationRate;
              v6 = v18(v17, &v37, &v31);
              if ( v6 < 0 )
              {
                v9 = 272;
              }
              else
              {
                if ( v30 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v31)(
                       v31,
                       &GUID_08882ddb_a981_5887_b751_106993d66229,
                       &v30);
                if ( v6 < 0 )
                {
                  v9 = 273;
                }
                else
                {
                  v43 = 0LL;
                  v44 = 0;
                  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v43);
                  if ( v6 < 0 )
                  {
                    v9 = 275;
                  }
                  else
                  {
                    v19 = v27;
                    v20 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v27 + 48LL);
                    if ( v29 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                    v37 = DisplayPath_PresentationRateMultiplier;
                    v6 = v20(v19, &v37, &v29);
                    if ( v6 < 0 )
                    {
                      v9 = 280;
                    }
                    else
                    {
                      if ( v28 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                      v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v29)(
                             v29,
                             &GUID_513ef3af_e784_5325_a91e_97c2b8111cf3,
                             &v28);
                      if ( v6 < 0 )
                      {
                        v9 = 281;
                      }
                      else
                      {
                        v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 48LL))(v28, &v26);
                        if ( v6 >= 0 )
                        {
                          LODWORD(v37) = v39;
                          DWORD1(v37) = v40 * HIDWORD(v39);
                          RefreshRateInfo::RefreshRateInfo(v38, v37, v43, v41, v26);
                          v21 = v38[1];
                          *(_OWORD *)a3 = v38[0];
                          v22 = v38[2];
                          *((_OWORD *)a3 + 1) = v21;
                          *((_OWORD *)a3 + 2) = v22;
                          goto LABEL_54;
                        }
                        v9 = 282;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = 245;
  }
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v9, 0LL);
LABEL_54:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v24 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v24)[2])(v24);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  return (unsigned int)v6;
}
