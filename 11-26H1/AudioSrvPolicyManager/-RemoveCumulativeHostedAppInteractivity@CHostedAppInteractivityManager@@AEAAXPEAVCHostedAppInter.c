/*
 * XREFs of ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800203CC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18001B1D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001BBD0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180020450 (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180020470 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        struct CHostedAppInteractivity *a2)
{
  struct CHostedAppInteractivity **i; // rdx
  struct CHostedAppInteractivity ***v4; // r8
  unsigned int v5; // edx

  for ( i = (struct CHostedAppInteractivity **)qword_1800689D8; i; i = (struct CHostedAppInteractivity **)*i )
  {
    if ( i[2] == a2 )
    {
      v4 = (struct CHostedAppInteractivity ***)(i + 1);
      if ( i == (struct CHostedAppInteractivity **)qword_1800689D8 )
        qword_1800689D8 = (__int64)*i;
      else
        **v4 = *i;
      if ( i == (struct CHostedAppInteractivity **)xmmword_1800689E0 )
        *(_QWORD *)&xmmword_1800689E0 = *v4;
      else
        *((_QWORD *)*i + 1) = *v4;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(&qword_1800689D8);
      if ( a2 )
        CHostedAppInteractivity::`scalar deleting destructor'(a2, v5);
      return;
    }
  }
}
