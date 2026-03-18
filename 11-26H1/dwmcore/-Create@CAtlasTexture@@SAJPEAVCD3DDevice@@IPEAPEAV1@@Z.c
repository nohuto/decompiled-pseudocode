/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180105C68
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180036E7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x180104870 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x18020B184 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDevice *a1, UINT32 a2, struct CAtlasTexture **a3)
{
  struct CAtlasTexture *v6; // rax
  struct CAtlasTexture *v7; // rbx
  int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rcx

  v6 = (struct CAtlasTexture *)MIDL_user_allocate(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 9) = 0;
    *(_QWORD *)v6 = &CAtlasTexture::`vftable';
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    v8 = CAtlasTexture::Initialize(v6, a1, a2);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      return (unsigned int)v8;
    }
    v9 = 25;
  }
  else
  {
    v8 = -2147024882;
    v9 = 23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v9, 0LL);
  if ( v7 )
    std::default_delete<CAtlasTexture>::operator()(v10, v7);
  return (unsigned int)v8;
}
