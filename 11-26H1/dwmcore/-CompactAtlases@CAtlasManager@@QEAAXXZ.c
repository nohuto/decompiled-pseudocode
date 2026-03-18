/*
 * XREFs of ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180105264 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x180105BB8 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180105BE4 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180105C68 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801E21E0 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18020B068 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x18020B184 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 *     ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x18021EFE4 (--$swap@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV-$unique_ptr@VC.c)
 */

void __fastcall CAtlasManager::CompactAtlases(CAtlasManager *this)
{
  __int64 v1; // rdi
  unsigned int v3; // r8d
  char *v4; // r10
  unsigned int v5; // r9d
  const struct CAtlasTexture **v6; // rsi
  char *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  char v10; // bp
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // r14d
  CAtlasTexture *v14; // rdx
  const struct CAtlasTexture *v15; // rdx
  struct CAtlasTexture *v16; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  CAtlasTexture *v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = (__int64)this + 620;
  if ( !this )
    v1 = 1124LL;
  v3 = 0;
  if ( *(_DWORD *)v1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x44u, 0LL);
  }
  else
  {
    v4 = (char *)*((_QWORD *)this + 1);
    v5 = 0;
    v6 = *(const struct CAtlasTexture ***)this;
    v7 = *(char **)this;
    if ( *(char **)this != v4 )
    {
      do
      {
        v8 = *(_QWORD *)v7;
        v7 += 8;
        v9 = *(_DWORD *)(v8 + 24);
        v3 += v9;
        v5 += v9 - *(_DWORD *)(v8 + 28);
      }
      while ( v7 != v4 );
      if ( v5 < v3 / 3 )
      {
        v10 = 0;
        LOBYTE(v18) = 0;
        if ( v4 - (char *)v6 == 8 )
        {
          v11 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)*v6 + 6) - *((_DWORD *)*v6 + 7));
          if ( v11 < v12 )
          {
            v19 = 0LL;
            v16 = 0LL;
            v17 = 1;
            v13 = CAtlasTexture::Create((CAtlasManager *)((char *)this - 504), v11, &v16);
            if ( v17 )
            {
              v14 = v19;
              v19 = v16;
              if ( v14 )
                std::default_delete<CAtlasTexture>::operator()();
            }
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x7Bu, 0LL);
              std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>(&v19);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x54u, 0LL);
            }
            else
            {
              v15 = *v6;
              v18 = 0;
              CAtlasTexture::CopyFrom(v19, v15, &v18);
              std::swap<CAtlasTexture,std::default_delete<CAtlasTexture>,0>(v6, &v19);
              CAtlasTexture::PurgeAndNotify(v19);
              if ( v19 )
                std::default_delete<CAtlasTexture>::operator()();
              v10 = 1;
            }
          }
        }
        else
        {
          CAtlasManager::MergeAtlases(this, (bool *)&v18);
          v10 = v18;
        }
        if ( v10 )
        {
          if ( !*(_DWORD *)v1 )
            *((_BYTE *)this + 987) = 1;
        }
      }
    }
  }
}
