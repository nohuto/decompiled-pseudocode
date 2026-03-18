/*
 * XREFs of ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x18020B184
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180105C68 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801D962C (--1-$out_param_t@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801E21E0 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18020B068 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1802A5028 (--1CAtlasTexture@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CAtlasTexture>::operator()(__int64 a1, CAtlasTexture *a2)
{
  if ( a2 )
  {
    CAtlasTexture::~CAtlasTexture(a2);
    operator delete(a2, 0x28uLL);
  }
}
