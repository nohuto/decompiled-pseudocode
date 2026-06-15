/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C288
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18001B1D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001BBD0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180020470 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180028794 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CHostedAppInteractivity **a5)
{
  unsigned __int16 *v7; // r12
  int v8; // ebx
  CHostedAppInteractivity *v9; // rdi
  _QWORD *v10; // rcx
  CHostedAppInteractivity *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  CHostedAppInteractivity *v14; // rsi
  unsigned int v15; // edx
  int v16; // r8d
  __int64 result; // rax
  ATL::CAtlException *v18; // rbx
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  CHostedAppInteractivity *v20; // [rsp+20h] [rbp-28h] BYREF
  ATL::CAtlException *v21; // [rsp+28h] [rbp-20h] BYREF
  int v22; // [rsp+50h] [rbp+8h]

  v7 = a2;
  v8 = 0;
  v9 = 0LL;
  v10 = (_QWORD *)qword_1800689D8;
  while ( v10 )
  {
    v9 = (CHostedAppInteractivity *)v10[2];
    v10 = (_QWORD *)*v10;
    if ( *((_DWORD *)v9 + 2) == a4 && *((_QWORD *)v9 + 2) == a3 )
      goto LABEL_10;
  }
  v11 = (CHostedAppInteractivity *)operator new(0x18uLL);
  v14 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    goto LABEL_14;
  }
  *(_QWORD *)v11 = 0LL;
  *((_DWORD *)v11 + 2) = -1;
  *((_DWORD *)v11 + 3) = 0;
  *((_DWORD *)v11 + 2) = a4;
  *((_QWORD *)v11 + 2) = a3;
  v8 = _AllocString<CTCoAllocPolicy>(v13, v12, v7, v11);
  if ( v8 < 0 )
  {
    v16 = v8;
    if ( !v14 )
    {
LABEL_15:
      AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 313, v16);
      goto LABEL_16;
    }
    CHostedAppInteractivity::`scalar deleting destructor'(v14, v15);
LABEL_14:
    v16 = v8;
    goto LABEL_15;
  }
  try
  {
    v9 = v14;
    v20 = v14;
    v8 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      &qword_1800689D8,
      &v20);
  }
  catch ( ATL::CAtlException *v21 )
  {
    a2 = (unsigned __int16 *)&v19;
    v18 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v22 = *(_DWORD *)v18;
    v8 = *(_DWORD *)v18;
    v9 = v20;
    if ( v22 >= 0 )
      goto LABEL_10;
LABEL_16:
    if ( v9 )
      CHostedAppInteractivity::`scalar deleting destructor'(v9, (unsigned int)a2);
    if ( v8 < 0 )
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 446, v8);
    result = (unsigned int)v8;
  }
LABEL_10:
  *a5 = v9;
  v9 = 0LL;
  goto LABEL_16;
}
