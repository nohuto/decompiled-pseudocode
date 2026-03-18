/*
 * XREFs of ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401BD928
 * Callers:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     _UmfdLoadFontFileView_::_2_::_lambda_1_::operator() @ 0x1401BD7D0 (_UmfdLoadFontFileView_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::LoadFontFile(
        PDEVOBJ *this,
        unsigned int a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int))(*(_QWORD *)this + 3040LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
