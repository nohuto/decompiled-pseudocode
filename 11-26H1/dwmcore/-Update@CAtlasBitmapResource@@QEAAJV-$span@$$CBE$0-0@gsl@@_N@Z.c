/*
 * XREFs of ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x1801034C4
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Write@CAtlasEntry@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x18010353C (-Write@CAtlasEntry@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CAtlasBitmapResource::Update(__int64 a1, __int128 *a2, char a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = *a2;
  v5 = CAtlasEntry::Write(a1 + 24, &v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xC4u, 0LL);
  }
  else
  {
    *(_BYTE *)(a1 + 48) = a3;
    *(_BYTE *)(a1 + 49) = 1;
  }
  return v6;
}
