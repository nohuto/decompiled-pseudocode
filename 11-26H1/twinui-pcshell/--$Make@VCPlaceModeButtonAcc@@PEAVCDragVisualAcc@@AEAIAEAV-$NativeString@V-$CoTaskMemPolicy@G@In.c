/*
 * XREFs of ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUCRect@Geometry@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUCRect@Geometry@@@Z @ 0x180548D54
 * Callers:
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x180549DA0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEBUtagRECT@@@Z @ 0x180549020 (--0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV-$NativeString@V-$CoTaskMemPolicy@G@Intern.c)
 *     ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x180549380 (-Attach@-$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,Geometry::CRect *>(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        __int64 *a5)
{
  void *v9; // rax
  __int64 v10; // rax
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v9;
  if ( v9 )
  {
    v10 = CPlaceModeButtonAcc::CPlaceModeButtonAcc(
            (_DWORD)v9,
            (*a2 + 32) & (unsigned int)-(*(_QWORD *)a2 != 0LL),
            *a3,
            a4,
            *a5);
    Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(a1, v10);
    v12 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v12);
  return a1;
}
