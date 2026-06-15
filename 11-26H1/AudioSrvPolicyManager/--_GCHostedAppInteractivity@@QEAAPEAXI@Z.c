/*
 * XREFs of ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180020470
 * Callers:
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001B958 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C0E8 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C288 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800203CC (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x18004108C (--1CPickerHostContext@@QEAA@XZ.c)
 * Callees:
 *     ??1CHostedAppInteractivity@@QEAA@XZ @ 0x18002049C (--1CHostedAppInteractivity@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CHostedAppInteractivity *__fastcall CHostedAppInteractivity::`scalar deleting destructor'(
        CHostedAppInteractivity *this)
{
  CHostedAppInteractivity::~CHostedAppInteractivity(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
