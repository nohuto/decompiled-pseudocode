/*
 * XREFs of ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x180041254
 * Callers:
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x18002CBB0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18001B1D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAAEAPEAVCHostedAppInteractivity@@AEAPEAU__POSITION@@@Z @ 0x1800219D0 (-GetNext@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 */

void __fastcall CPickerHostContext::RevokeInteractivityFromApps(CPickerHostContext *this)
{
  _QWORD *Next; // rax
  __int64 v2; // rdx
  int v3; // eax
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD **)this;
  while ( v4 )
  {
    Next = ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::GetNext(
             (__int64)this,
             &v4);
    v2 = *Next;
    LODWORD(Next) = *(_DWORD *)(*Next + 12LL);
    *(_DWORD *)(v2 + 12) = 0;
    if ( (_DWORD)Next )
    {
      v3 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
             this,
             *(const unsigned __int16 **)v2,
             *(_QWORD *)(v2 + 16),
             *(_DWORD *)(v2 + 8),
             0);
      if ( v3 < 0 )
        AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 280, v3);
    }
  }
}
