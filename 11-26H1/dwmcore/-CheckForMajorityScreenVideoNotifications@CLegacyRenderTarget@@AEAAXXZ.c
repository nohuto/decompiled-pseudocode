/*
 * XREFs of ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800EFDC0
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PubSebRegisterRpc @ 0x1801811D4 (PubSebRegisterRpc.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1801C8C04 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x180252D10 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications(CLegacyRenderTarget *this)
{
  char v2; // r15
  __int64 v3; // r14
  char *v4; // rbx
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  char v10; // si
  bool v11; // zf
  int v12; // eax
  int v13; // eax

  if ( *((float *)this + 7482) == 0.0
    && *((float *)this + 7483) == 0.0
    && *((_BYTE *)this + 32514)
    && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    v3 = 0LL;
    if ( !*((_BYTE *)this + 32513) )
      goto LABEL_6;
  }
  v6 = *((_QWORD *)this + 2438);
  if ( v6
    && (v7 = *(_QWORD *)(v6 + 16)) != 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7) == 1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2438) + 16LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 1613);
    v9 = *((_QWORD *)this + 1614);
    while ( v8 != v9 )
    {
      if ( *(int *)(v8 + 348) >= 1
        && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 88LL))(*(_QWORD *)(v8 + 16)) == 1 )
      {
        v3 = *(_QWORD *)(v8 + 16);
        goto LABEL_21;
      }
      v8 += 392LL;
    }
    v3 = 0LL;
  }
LABEL_21:
  if ( *((_BYTE *)this + 32513) )
  {
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 32516) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 184LL))(
          *((_QWORD *)this + 25) + 24LL,
          1LL);
        *((_BYTE *)this + 32516) = 1;
      }
    }
    else if ( *((_BYTE *)this + 32516) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 184LL))(
        *((_QWORD *)this + 25) + 24LL,
        0LL);
      *((_BYTE *)this + 32516) = 0;
    }
  }
LABEL_6:
  v4 = (char *)this + 32424;
  if ( !v2 )
    v3 = 0LL;
  if ( !*((_QWORD *)this + 4054) )
  {
    v12 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377AD8, 2u, v12, 0xB2u, 0LL);
      return;
    }
  }
  v5 = (char *)this + 32440;
  if ( !*((_QWORD *)this + 4055) )
  {
    v13 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377AD8, 2u, v13, 0xB8u, 0LL);
      return;
    }
  }
  if ( v3 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 440LL))(v3, v5);
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
    v11 = v4[75] == 1;
    v4[73] = 1;
    v4[74] = v10;
    if ( (!v11 || v10 != v4[76]) && (int)CFSVPProvider::RequestThreadpoolWork(v4) < 0 )
      CFSVPProvider::SignalSEBWorker((CFSVPProvider *)v4);
    if ( v4 != (char *)-32LL )
      goto LABEL_14;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32456));
    *(_WORD *)((char *)this + 32497) = 0;
    if ( (*((_BYTE *)this + 32499) || *((_BYTE *)this + 32500))
      && (int)CFSVPProvider::RequestThreadpoolWork((char *)this + 32424) < 0 )
    {
      CFSVPProvider::SignalSEBWorker((CLegacyRenderTarget *)((char *)this + 32424));
    }
    if ( this != (CLegacyRenderTarget *)-32456LL )
LABEL_14:
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  }
}
