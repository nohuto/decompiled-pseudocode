/*
 * XREFs of ?DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14034B210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14034B290 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOP.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x14034B9A4 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 */

int __fastcall DxgkQueryDatabaseFromQDCCache(
        unsigned int a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4,
        unsigned int *a5)
{
  QDC_CACHE *v9; // rcx

  v9 = (QDC_CACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 185);
  if ( a3 )
    return QDC_CACHE::GetCachedData(v9, a1, a2, a3, a4, a5);
  else
    return QDC_CACHE::GetCachedBufferSizes(v9, a1, a2, a5);
}
