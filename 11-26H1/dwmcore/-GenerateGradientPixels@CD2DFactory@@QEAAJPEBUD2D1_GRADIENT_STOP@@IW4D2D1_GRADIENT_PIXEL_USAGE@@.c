/*
 * XREFs of ?GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@W4D2D1_COLOR_SPACE@@22W4D2D1_EXTEND_MODE@@W4D2D1_COLOR_INTERPOLATION_MODE@@W4DXGI_FORMAT@@PEAXI@Z @ 0x180103430
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DFactory::GenerateGradientPixels(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_1803DE658 + 40LL))(
           qword_1803DE658,
           a2,
           a3);
}
