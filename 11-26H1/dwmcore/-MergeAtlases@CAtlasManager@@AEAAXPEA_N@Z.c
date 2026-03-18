/*
 * XREFs of ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18020B068
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180105264 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180105BE4 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801E21E0 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x18020B184 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 */

void __fastcall CAtlasManager::MergeAtlases(CAtlasManager *this, bool *a2)
{
  __int64 v2; // rax
  CAtlasManager *v4; // rsi
  bool v5; // bp
  unsigned int v6; // r10d
  __int64 i; // r8
  unsigned int v8; // r9d
  unsigned int *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 ***v16; // rbx
  int v17; // r15d
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v4 = this;
  v5 = 0;
  v6 = *(_DWORD *)(**(_QWORD **)this + 24LL);
  for ( i = *(_QWORD *)this + 8LL; i != *((_QWORD *)v4 + 1); i += 8LL )
  {
    v8 = *(_DWORD *)(*(_QWORD *)i + 24LL);
    if ( v8 >= v6 )
    {
      if ( v8 == v6 )
      {
        this = *(CAtlasManager **)v2;
        if ( v8 - *(_DWORD *)(*(_QWORD *)i + 28LL) < *(_DWORD *)(*(_QWORD *)v2 + 24LL)
                                                   - *(_DWORD *)(*(_QWORD *)v2 + 28LL) )
          v2 = i;
      }
    }
    else
    {
      v6 = *(_DWORD *)(*(_QWORD *)i + 24LL);
      v2 = i;
    }
  }
  v9 = *(unsigned int **)v2;
  v10 = (__int64 *)(v2 + 8);
  *(_QWORD *)v2 = 0LL;
  v11 = (__int64 *)*((_QWORD *)v4 + 1);
  while ( v10 != v11 )
  {
    v12 = *v10;
    *v10 = 0LL;
    v13 = *(v10 - 1);
    *(v10 - 1) = v12;
    if ( v13 )
      std::default_delete<CAtlasTexture>::operator()(this, v13);
    ++v10;
  }
  std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>((_QWORD *)(*((_QWORD *)v4 + 1) - 8LL));
  v14 = *((_QWORD *)v4 + 1) - 8LL;
  *((_QWORD *)v4 + 1) = v14;
  v15 = v9[6];
  if ( (_DWORD)v15 != v9[7] )
  {
    v16 = *(__int64 ****)v4;
    v17 = v15 + 1;
    v18 = 1;
    if ( v16 != (__int64 ***)v14 )
    {
      v5 = 1;
      do
      {
        CAtlasTexture::CopyFrom(*v16, (const struct CAtlasTexture *)v9, &v18);
        if ( v18 == v17 )
          break;
        ++v16;
      }
      while ( v16 != (__int64 ***)v14 );
    }
    CAtlasTexture::PurgeAndNotify((CAtlasTexture *)v9);
  }
  *a2 = v5;
  std::default_delete<CAtlasTexture>::operator()(v15, v9);
}
