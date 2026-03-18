/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18002DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(CGlobalSurfaceManager *this)
{
  int v1; // r15d
  int v2; // edi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  int FrameSurfaceUpdates; // eax
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-39h] BYREF
  int v21; // [rsp+38h] [rbp-31h] BYREF
  int v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+50h] [rbp-19h] BYREF
  _QWORD Buffer[2]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v26[16]; // [rsp+68h] [rbp-1h] BYREF
  int *v27; // [rsp+78h] [rbp+Fh]
  __int64 v28; // [rsp+80h] [rbp+17h]
  __int64 *v29; // [rsp+88h] [rbp+1Fh]
  __int64 v30; // [rsp+90h] [rbp+27h]

  v20 = 0;
  v1 = 0;
  v22 = 0;
  v2 = 0;
  v21 = 0;
  v4 = CGlobalSurfaceManager::ProcessLegacyTokens(this);
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xA1u, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start,
      v5,
      1LL,
      Buffer);
  v6 = 0LL;
  if ( g_pComposition )
    v6 = *((_QWORD *)g_pComposition + 110);
  v23 = v6;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v23, &v20, &v22);
  if ( FrameSurfaceUpdates >= 0 )
  {
    v9 = 0;
    goto LABEL_9;
  }
  v9 = FrameSurfaceUpdates | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2328, 3u, FrameSurfaceUpdates | 0x10000000, 0x91u, 0LL);
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
LABEL_9:
      v10 = 0;
      if ( v20 )
      {
        do
        {
          Buffer[1] = 0LL;
          v13 = *((_QWORD *)this + 13) + 376LL * v10;
          Buffer[0] = *(_QWORD *)(v13 + 4);
          v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 24), Buffer);
          if ( v14 )
          {
            v15 = v14[1];
            if ( v15 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(v14[1]);
              v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 128LL))(v15, v13);
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xBCu, 0LL);
              ++v2;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
          }
          ++v10;
        }
        while ( v10 < v20 );
        v1 = v21;
      }
      if ( !v22 )
        break;
      v21 = ++v1;
      v17 = 0LL;
      if ( g_pComposition )
        v17 = *((_QWORD *)g_pComposition + 110);
      v24 = v17;
      v18 = NtDCompositionGetFrameSurfaceUpdates(&v24, &v20, &v22);
      if ( v18 < 0 )
      {
        v9 = v18 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2328, 3u, v18 | 0x10000000, 0x91u, 0LL);
        if ( v9 < 0 )
          break;
      }
      else
      {
        v9 = 0;
      }
    }
  }
  v11 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
  if ( v11 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    LODWORD(v23) = v1;
    v27 = &v21;
    v21 = v2;
    v29 = &v23;
    v28 = 4LL;
    v30 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v8,
      3LL,
      v26);
  }
  dword_1803DE40C += v2;
  return (unsigned int)v9;
}
