/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18001B1D8
 * Callers:
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x180041254 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 * Callees:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180017F08 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C288 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800203CC (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CHostedAppInteractivityManager *v8; // rcx
  int CumulativeHostedAppInteractivity; // edi
  struct CHostedAppInteractivity *v11; // rsi
  CHostedAppInteractivityManager *v12; // rcx
  int v13; // ebx
  BOOL v14; // edx
  struct CHostedAppInteractivity *v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  EnterCriticalSection(&CriticalSection);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v8,
                                       a2,
                                       a3,
                                       a4,
                                       &v15);
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_2;
  v11 = v15;
  v12 = (CHostedAppInteractivityManager *)*((unsigned int *)v15 + 3);
  if ( a5 )
  {
    v13 = (_DWORD)v12 + 1;
    goto LABEL_7;
  }
  v13 = *((_DWORD *)v15 + 3);
  if ( (_DWORD)v12 )
  {
    v13 = (_DWORD)v12 - 1;
LABEL_7:
    *((_DWORD *)v15 + 3) = v13;
  }
  v14 = v13 != 0;
  if ( ((_DWORD)v12 != 0) != v14 )
  {
    CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                         v12,
                                         a2,
                                         a3,
                                         a4,
                                         v14);
    if ( CumulativeHostedAppInteractivity < 0 )
    {
LABEL_2:
      AudPolicyLogError(
        "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
        401,
        CumulativeHostedAppInteractivity);
      goto LABEL_3;
    }
  }
  if ( !v13 )
    CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v12, v11);
LABEL_3:
  LeaveCriticalSection(&CriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
