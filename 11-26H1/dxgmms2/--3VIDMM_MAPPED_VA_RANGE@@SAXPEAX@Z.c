/*
 * XREFs of ??3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z @ 0x140117C48
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x14003A4B0 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::operator delete(void *a1)
{
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    ExFreeToLookasideListEx(&g_VaRangeLookasideList, a1);
  else
    operator delete(a1);
}
