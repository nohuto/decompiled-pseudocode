/*
 * XREFs of ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x18022F0F8
 * Callers:
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801D9344 (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

CSceneResourceManager *__fastcall CSceneResourceManager::CSceneResourceManager(
        CSceneResourceManager *this,
        struct CComposition *a2)
{
  _QWORD *v3; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CSceneResourceManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL, (__int64)a2);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 8) = v3;
  return this;
}
