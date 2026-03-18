/*
 * XREFs of HmgPentryFromPobj @ 0x140019EC0
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x140019290 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x140019380 (DEC_SHARE_REF_CNT.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x140035A40 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x140040510 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x140040610 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareUnlock @ 0x140055534 (HmgShareUnlock.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14010EFEC (-W32PidDCOwner@XDCOBJ@@QEAAKXZ.c)
 *     ?set_AppContainerW32PID@SURFACE@@QEAAXK@Z @ 0x1401BBF80 (-set_AppContainerW32PID@SURFACE@@QEAAXK@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1401BF6BC (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgPentryFromPobj(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
}
