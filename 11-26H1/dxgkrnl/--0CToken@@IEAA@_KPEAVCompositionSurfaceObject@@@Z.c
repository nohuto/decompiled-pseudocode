/*
 * XREFs of ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140019AF0
 * Callers:
 *     ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x14001885C (-Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140019A74 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1400A190C (-CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CToken *__fastcall CToken::CToken(CToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  *((_DWORD *)this + 6) = 6;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CToken::`vftable';
  *((_QWORD *)this + 7) = a2;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 6) = a3;
  ObReferenceObjectByPointer(a3, 3u, g_pDxgkCompositionObjectType, 0);
  return this;
}
