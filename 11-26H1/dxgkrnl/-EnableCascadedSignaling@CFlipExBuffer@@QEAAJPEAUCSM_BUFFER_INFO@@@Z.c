/*
 * XREFs of ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x14006A0C4
 * Callers:
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14004E190 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 * Callees:
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x14001D320 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14004E4BC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x14006D1A4 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::EnableCascadedSignaling(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  int SessionTokenManager; // eax
  __int64 v5; // rsi
  int InfoInternal; // ebx
  void (__fastcall ***v7)(_QWORD); // r11
  void (__fastcall ***v8)(_QWORD); // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 *v11; // rcx
  __int64 v12; // r8
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  void (__fastcall ***v17)(_QWORD); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+58h] [rbp-A8h] BYREF

  if ( !*((_QWORD *)this + 86) )
  {
    v18 = 0LL;
    v17 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v18);
    v5 = v18;
    InfoInternal = SessionTokenManager;
    if ( SessionTokenManager >= 0 )
    {
      InfoInternal = (*(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v18 + 120LL))(
                       v18,
                       *((_QWORD *)this + 47),
                       &v17);
      if ( InfoInternal >= 0 )
      {
        v7 = v17;
        v8 = v17;
        if ( v17 )
        {
          (**v17)(v17);
          v7 = v17;
        }
        *((_QWORD *)this + 86) = v8;
        InfoInternal = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), char *, char *, char *, char *, char *))(*v7)[4])(
                         v7,
                         (char *)this + 656,
                         (char *)this + 664,
                         (char *)this + 672,
                         (char *)this + 680,
                         (char *)this + 668);
      }
    }
    ReleaseInterface<IAdapter>(&v17);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( InfoInternal < 0 )
      goto LABEL_16;
  }
  InfoInternal = CFlipExBuffer::GetInfoInternal(this, a2);
  *((_QWORD *)a2 + 145) = 0LL;
  *((_QWORD *)a2 + 147) = *((_QWORD *)this + 82);
  if ( InfoInternal >= 0
    && (v10 = *(_QWORD *)this,
        LODWORD(v17) = 31,
        LOBYTE(v9) = 1,
        InfoInternal = (*(__int64 (__fastcall **)(CFlipExBuffer *, __int64, void (__fastcall ****)(_QWORD), _BYTE *))(v10 + 80))(
                         this,
                         v9,
                         &v17,
                         v19),
        InfoInternal >= 0) )
  {
    if ( (_DWORD)v17 )
    {
      v11 = (__int128 *)&v20;
      v12 = (unsigned int)v17;
      v13 = (_OWORD *)((char *)a2 + 168);
      do
      {
        v14 = *v11;
        v15 = v11[1];
        v11 = (__int128 *)((char *)v11 + 40);
        *v13 = v14;
        v13[1] = v15;
        v13 += 2;
        --v12;
      }
      while ( v12 );
    }
  }
  else
  {
LABEL_16:
    CFlipExBuffer::DisableCascadedSignaling(this);
  }
  return (unsigned int)InfoInternal;
}
