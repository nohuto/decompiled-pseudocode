/*
 * XREFs of ?GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z @ 0x140202E3C
 * Callers:
 *     DxgkGetSessionFlipManagerRegistry @ 0x1400651E4 (DxgkGetSessionFlipManagerRegistry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CFlipManagerRegistry@@QEAA@XZ @ 0x14007B688 (--0CFlipManagerRegistry@@QEAA@XZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::GetFlipManagerRegistry(DXGSESSIONDATA *this, struct IFlipManagerRegistry **a2)
{
  struct IFlipManagerRegistry *v2; // rax
  unsigned int v3; // ebx
  CFlipManagerRegistry *v6; // rax

  v2 = (struct IFlipManagerRegistry *)*((_QWORD *)this + 2345);
  v3 = 0;
  if ( !v2 )
  {
    v6 = (CFlipManagerRegistry *)operator new(0x28uLL, 0x65724346u, 256LL);
    if ( !v6 )
    {
      *((_QWORD *)this + 2345) = 0LL;
LABEL_6:
      v3 = -1073741801;
      v2 = 0LL;
      goto LABEL_7;
    }
    v2 = CFlipManagerRegistry::CFlipManagerRegistry(v6);
    *((_QWORD *)this + 2345) = v2;
    if ( !v2 )
      goto LABEL_6;
  }
LABEL_7:
  *a2 = v2;
  return v3;
}
