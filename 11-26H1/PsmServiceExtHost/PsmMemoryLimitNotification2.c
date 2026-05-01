/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x18000D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000E264 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerIsSetForThread @ 0x18002A6C4 (CempLockTrackerIsSetForThread.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall PsmMemoryLimitNotification2(
        void *Src,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  int v9; // ebx
  ULONG v10; // eax
  _BYTE v11[80]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v12[144]; // [rsp+80h] [rbp-B8h] BYREF

  memset_0(v12, 0, 0x88uLL);
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v9 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
    v9 = 1;
  }
  memset_0(v11, 0, 0x44uLL);
  v10 = RtlLengthSid(Src);
  memcpy_0(v11, Src, v10);
  ModernResourceEnforcer::MemoryLimitNotification(
    *((ModernResourceEnforcer **)RmSvcGlobals + 5),
    (union _RM_SID *)v11,
    a2,
    a3,
    a4,
    a5);
  if ( v9 )
    CempLockTrackerClearForThread(HampLockTrackerId);
}
