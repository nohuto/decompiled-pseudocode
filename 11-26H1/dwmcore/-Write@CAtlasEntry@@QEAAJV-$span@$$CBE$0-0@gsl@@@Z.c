/*
 * XREFs of ?Write@CAtlasEntry@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x18010353C
 * Callers:
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x1801034C4 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18010359C (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CAtlasEntry::Write(_QWORD *a1, __int128 *a2)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  if ( *a1 )
  {
    v4 = *a2;
    CAtlasTexture::UpdateGradientStrip(*a1, a1, &v4);
    return 0;
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x2Cu, 0LL);
  }
  return v2;
}
