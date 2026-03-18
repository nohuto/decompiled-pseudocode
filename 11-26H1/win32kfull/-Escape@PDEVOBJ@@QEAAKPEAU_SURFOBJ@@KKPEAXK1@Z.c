/*
 * XREFs of ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x14022DF70
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x140311C40 (-iOpenGLExtEscapeHelper@@YAXPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311C88 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x140328560 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::Escape(
        PDEVOBJ *this,
        struct _SURFOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  return (*(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)this + 2872LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
