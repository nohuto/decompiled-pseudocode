/*
 * XREFs of ??R?$default_delete@VCSceneResourceManager@@@std@@QEBAXPEAVCSceneResourceManager@@@Z @ 0x18022A3B4
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCSceneResourceManager@@U?$default_delete@VCSceneResourceManager@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021F540 (--1-$out_param_t@V-$unique_ptr@VCSceneResourceManager@@U-$default_delete@VCSceneResourceManager@.c)
 *     ??1?$unique_ptr@VCSceneResourceManager@@U?$default_delete@VCSceneResourceManager@@@std@@@std@@QEAA@XZ @ 0x1802299B0 (--1-$unique_ptr@VCSceneResourceManager@@U-$default_delete@VCSceneResourceManager@@@std@@@std@@QE.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18022F184 (--1CSceneResourceManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CSceneResourceManager>::operator()(__int64 a1, CSceneResourceManager *a2)
{
  if ( a2 )
  {
    CSceneResourceManager::~CSceneResourceManager(a2);
    operator delete(a2);
  }
}
