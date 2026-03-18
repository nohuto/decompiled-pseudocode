/*
 * XREFs of _CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator() @ 0x18027F780
 * Callers:
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18027F850 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x180281C8C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 */

unsigned __int64 __fastcall CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 PixelFormatSize; // al
  _QWORD *v5; // r9
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CSharedSectionWrapper::GetSharedSectionData(a2, v7);
  PixelFormatSize = GetPixelFormatSize(a3);
  return *v5 / ((unsigned __int64)PixelFormatSize >> 3);
}
