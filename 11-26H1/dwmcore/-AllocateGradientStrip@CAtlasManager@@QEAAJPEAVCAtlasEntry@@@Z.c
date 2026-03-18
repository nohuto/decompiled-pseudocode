/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180036E7C
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800371A4 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x180105BB8 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180105C68 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801D962C (--1-$out_param_t@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801E21E0 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$emplace_back@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@$$QEAV21@@Z @ 0x1802A4FA4 (--$emplace_back@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@@-$v.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(__int64 **this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // rbx
  __int64 i; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 *v13; // [rsp+30h] [rbp-28h] BYREF
  struct CAtlasTexture *v14; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (__int64)this + 620;
  if ( !this )
    v5 = 1124LL;
  if ( *(_DWORD *)v5 )
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x12u, 0LL);
  }
  else
  {
    v6 = *this;
    v7 = 0;
    while ( v6 != this[1] )
    {
      v8 = *v6;
      if ( *(_DWORD *)(*v6 + 28) )
      {
        if ( v8 )
          goto LABEL_15;
        break;
      }
      if ( v4 <= *(_DWORD *)(v8 + 24) )
        v4 = *(_DWORD *)(v8 + 24);
      ++v6;
    }
    v17 = 0LL;
    v13 = &v17;
    v14 = 0LL;
    v15 = 1;
    v12 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v7 = CAtlasTexture::Create((struct CD3DDevice *)(this - 63), v12, &v14);
    wil::details::out_param_t<std::unique_ptr<CAtlasTexture>>::~out_param_t<std::unique_ptr<CAtlasTexture>>(&v13);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x27u, 0LL);
      std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>(&v17);
      return (unsigned int)v7;
    }
    v8 = v17;
    std::vector<std::unique_ptr<CAtlasTexture>>::emplace_back<std::unique_ptr<CAtlasTexture>>(this, &v17);
    std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>(&v17);
LABEL_15:
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *(_DWORD *)(v8 + 24) )
        ModuleFailFastForHRESULT(-2003304315, retaddr);
      v11 = *(_QWORD *)(v8 + 16);
      if ( !*(_QWORD *)(v11 + 8 * i) )
        break;
    }
    --*(_DWORD *)(v8 + 28);
    *(_QWORD *)(v11 + 8 * i) = a2;
    if ( *(_QWORD *)a2 )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 4) = i + 1;
  }
  return (unsigned int)v7;
}
