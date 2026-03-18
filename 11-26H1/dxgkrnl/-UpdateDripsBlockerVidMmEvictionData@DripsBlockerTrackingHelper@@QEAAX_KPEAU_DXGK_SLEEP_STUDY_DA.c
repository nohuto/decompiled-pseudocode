/*
 * XREFs of ?UpdateDripsBlockerVidMmEvictionData@DripsBlockerTrackingHelper@@QEAAX_KPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x14030F9FC
 * Callers:
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x14030F4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?GetVidMmEvictionDataEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAI@Z @ 0x1403FD148 (-GetVidMmEvictionDataEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::UpdateDripsBlockerVidMmEvictionData(
        DripsBlockerTrackingHelper *this,
        unsigned __int64 a2,
        struct _DXGK_SLEEP_STUDY_DATA *a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  if ( DripsBlockerTrackingHelper::GetVidMmEvictionDataEntry(this, a2, &v7) )
  {
    v5 = (unsigned __int64)v7 << 6;
    v6 = (v7 + 4722LL) << 6;
    *(_QWORD *)(v5 + v4 + 302176) = *(_QWORD *)a3;
    *(_QWORD *)(v5 + v4 + 302184) = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v5 + v4 + 302192) = *((_QWORD *)a3 + 2);
    *(_QWORD *)(v5 + v4 + 302200) = *((_QWORD *)a3 + 3);
    *(_QWORD *)(v6 + v4) = *((_QWORD *)a3 + 4);
    *(_QWORD *)(v5 + v4 + 302216) = *((_QWORD *)a3 + 5);
  }
}
