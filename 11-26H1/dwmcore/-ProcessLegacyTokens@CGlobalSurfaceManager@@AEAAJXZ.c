/*
 * XREFs of ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18002DEB0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18002F760 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002FF00 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x18014EBF8 (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1801C0ABC (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessLegacyTokens(CGlobalSurfaceManager *this, __int64 a2, __int64 a3)
{
  int v4; // r14d
  unsigned int v5; // r12d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  unsigned int *v9; // r8
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // rcx
  int FrameLegacyTokens; // eax
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r13
  unsigned int j; // r15d
  int v19; // eax
  CGdiSpriteBitmap *TargetResource; // rax
  unsigned int i; // r15d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  void *v26; // rax
  int v27; // eax
  bool v28; // r13
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  bool v33[4]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-51h] BYREF
  int v36; // [rsp+48h] [rbp-49h] BYREF
  void *v37; // [rsp+50h] [rbp-41h] BYREF
  __int128 v38; // [rsp+58h] [rbp-39h] BYREF
  __int64 v39; // [rsp+68h] [rbp-29h]
  _BYTE v40[16]; // [rsp+70h] [rbp-21h] BYREF
  void **v41; // [rsp+80h] [rbp-11h]
  __int64 v42; // [rsp+88h] [rbp-9h]
  void **v43; // [rsp+90h] [rbp-1h]
  __int64 v44; // [rsp+98h] [rbp+7h]
  _QWORD v45[2]; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v46[2]; // [rsp+B0h] [rbp+1Fh] BYREF

  v4 = 0;
  v5 = 0;
  v34 = 0;
  v36 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start,
      a3,
      1LL,
      v45);
  v6 = (_QWORD *)((char *)this + 384);
  v39 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v38 = 0LL;
  if ( &v38 != (__int128 *)((char *)this + 384) )
  {
    v7 = (_QWORD *)*v6;
    *v6 = 0LL;
    v8 = (_QWORD *)*((_QWORD *)this + 49);
    *((_QWORD *)this + 49) = 0LL;
    v39 = *((_QWORD *)this + 50);
    *(_QWORD *)&v38 = v7;
    *((_QWORD *)&v38 + 1) = v8;
    *((_QWORD *)this + 50) = 0LL;
  }
  for ( ; v7 != v8; ++v7 )
  {
    TargetResource = (CGdiSpriteBitmap *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v7);
    if ( TargetResource )
    {
      *((_BYTE *)TargetResource + 153) = 1;
      CGdiSpriteBitmap::EnsureBitmapRealization(TargetResource);
    }
  }
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy(&v38);
  v10 = 0;
  if ( !*((_DWORD *)this + 70) )
    goto LABEL_7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start,
      v9,
      1LL,
      v45);
  for ( i = 0; i < *((_DWORD *)this + 70); ++i )
  {
    v22 = *((_QWORD *)this + 32);
    v23 = 16LL * i;
    v33[0] = 0;
    ++*(_DWORD *)(v23 + v22);
    v24 = *((_QWORD *)this + 32);
    v25 = *(_DWORD *)(v23 + v24);
    v26 = *(void **)(v23 + v24 + 8);
    v35 = v25;
    v37 = v26;
    v27 = CLegacySurfaceManager::ProcessToken(
            (CGlobalSurfaceManager *)((char *)this + 152),
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v26,
            v9,
            v33);
    v10 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x110u, 0LL);
      break;
    }
    v28 = v33[0];
    if ( v33[0] || v35 > 0x64 )
    {
      v31 = DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((char *)this + 256, i);
      v10 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x118u, 0LL);
        break;
      }
      operator delete(v37);
      if ( !v28 )
        ++*((_DWORD *)this + 63);
      --i;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop,
      v9,
      1LL,
      v46);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xF0u, 0LL);
  }
  else
  {
LABEL_7:
    v11 = 0;
    v12 = 0LL;
    if ( g_pComposition )
      v12 = *((_QWORD *)g_pComposition + 110);
    v46[0] = v12;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(v46, &v34, &v36);
    if ( FrameLegacyTokens < 0 )
    {
      v11 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      LODWORD(v37) = v34;
      v35 = v11;
      v41 = (void **)&v35;
      v42 = 4LL;
      v43 = &v37;
      v44 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        v14,
        3LL,
        v40);
    }
    while ( 1 )
    {
      *((_DWORD *)this + 62) = v11;
      if ( v11 < 0 )
        break;
      v15 = v34;
      v4 += v34;
      v16 = *((_QWORD *)this + 13);
      for ( j = 0; j < v15; ++j )
      {
        v33[0] = 0;
        v19 = CLegacySurfaceManager::ProcessToken(
                (CGlobalSurfaceManager *)((char *)this + 152),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v16,
                v14,
                v33);
        v10 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x103u, 0LL);
          goto LABEL_17;
        }
        if ( !v33[0] )
        {
          v32 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CGlobalSurfaceManager *)((char *)this + 152),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v16);
          v10 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x108u, 0LL);
            goto LABEL_17;
          }
        }
        v16 += *(unsigned int *)(v16 + 4);
        v15 = v34;
      }
      if ( !v36 )
        break;
      ++v5;
      v11 = 0;
      v29 = 0LL;
      if ( g_pComposition )
        v29 = *((_QWORD *)g_pComposition + 110);
      v45[0] = v29;
      v30 = NtDCompositionGetFrameLegacyTokens(v45, &v34, &v36);
      if ( v30 < 0 )
      {
        v11 = v30 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30 | 0x10000000, 0x1Du, 0LL);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
          (unsigned int)v11,
          v34);
    }
  }
LABEL_17:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v35 = v5;
    v41 = &v37;
    LODWORD(v37) = v4;
    v43 = (void **)&v35;
    v42 = 4LL;
    v44 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v14,
      3LL,
      v40);
  }
  dword_1803DE40C += v4;
  return (unsigned int)v10;
}
