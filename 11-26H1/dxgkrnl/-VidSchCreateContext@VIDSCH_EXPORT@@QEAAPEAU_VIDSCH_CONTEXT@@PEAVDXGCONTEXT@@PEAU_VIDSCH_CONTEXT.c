/*
 * XREFs of ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x14005A3D4
 * Callers:
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14019345C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VIDSCH_EXPORT::VidSchCreateContext(
        VIDSCH_EXPORT *this,
        struct DXGCONTEXT *a2,
        struct _VIDSCH_CONTEXT_DATA *a3)
{
  return (struct _VIDSCH_CONTEXT *)(*(__int64 (__fastcall **)(struct DXGCONTEXT *, struct _VIDSCH_CONTEXT_DATA *))(*((_QWORD *)this + 1) + 232LL))(
                                     a2,
                                     a3);
}
