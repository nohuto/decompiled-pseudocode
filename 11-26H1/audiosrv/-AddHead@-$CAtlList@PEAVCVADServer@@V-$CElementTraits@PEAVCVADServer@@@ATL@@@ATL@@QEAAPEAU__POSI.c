/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCVADServer@@@Z @ 0x18005D110
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001E598 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18005D1F4 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::AddHead(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 *result; // rax
  struct ATL::CAtlPlex *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rax

  v2 = (__int64 *)qword_1801D5760;
  v4 = g_VADServerList;
  if ( !qword_1801D5760 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_1801D5758, (unsigned int)dword_1801D5768, 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = (unsigned int)(dword_1801D5768 - 1);
    v9 = (__int64 *)((char *)v7 + 16 * v8 + 8 * v8 + 8);
    v2 = (__int64 *)qword_1801D5760;
    if ( (int)dword_1801D5768 - 1 >= 0 )
    {
      do
      {
        *v9 = (__int64)v2;
        v2 = v9;
        qword_1801D5760 = (__int64)v9;
        v9 -= 3;
        LODWORD(v8) = v8 - 1;
      }
      while ( (int)v8 >= 0 );
    }
  }
  v5 = *v2;
  v2[2] = *a2;
  qword_1801D5760 = v5;
  v2[1] = 0LL;
  *v2 = v4;
  ++qword_1801D5750;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = v2;
  else
    qword_1801D5748 = (__int64)v2;
  result = v2;
  g_VADServerList = (__int64)v2;
  return result;
}
