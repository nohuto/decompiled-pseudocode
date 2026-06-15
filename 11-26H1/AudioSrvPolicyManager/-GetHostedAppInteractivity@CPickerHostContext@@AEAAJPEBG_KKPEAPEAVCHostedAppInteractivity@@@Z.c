/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C0E8
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001BBD0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001B958 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180020470 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180028794 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CHostedAppInteractivity **a5)
{
  int v9; // ebx
  _QWORD *v10; // rsi
  struct CHostedAppInteractivity *v11; // rdi
  __int64 *v12; // rdx
  CHostedAppInteractivity *v13; // rcx
  ATL::CAtlException *v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  struct CHostedAppInteractivity *v17; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v18; // [rsp+28h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp+8h]

  v9 = 0;
  v17 = 0LL;
  v10 = *(_QWORD **)this;
  while ( v10 )
  {
    v11 = (struct CHostedAppInteractivity *)v10[2];
    v10 = (_QWORD *)*v10;
    v17 = v11;
    if ( *((_DWORD *)v11 + 2) == a4 && *((_QWORD *)v11 + 2) == a3 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v11, a2) )
      goto LABEL_8;
  }
  v9 = CHostedAppInteractivity::CreateInstance(a2, a3, a4, &v17);
  if ( v9 >= 0 )
  {
    try
    {
      v9 = 0;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(this, &v17);
    }
    catch ( ATL::CAtlException *v18 )
    {
      v12 = &v16;
      v15 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _o__resetstkoflw();
      v19 = *(_DWORD *)v15;
      v9 = *(_DWORD *)v15;
      if ( v19 < 0 )
        goto LABEL_17;
    }
    v11 = v17;
LABEL_8:
    *a5 = v11;
    v13 = 0LL;
    goto LABEL_9;
  }
LABEL_17:
  v13 = v17;
LABEL_9:
  if ( v13 )
    CHostedAppInteractivity::`scalar deleting destructor'(v13, (unsigned int)v12);
  if ( v9 < 0 )
    AudPolicyLogError("CPickerHostContext::GetHostedAppInteractivity", 247, v9);
  return (unsigned int)v9;
}
