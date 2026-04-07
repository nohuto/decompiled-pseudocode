/*
 * XREFs of ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800A94B0
 * Callers:
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180085558 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800859B0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800B4D84 (--1CFlickVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800B4FA0 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTransitionVisualController@@I@Z @ 0x180002954 (-AddMultipleAndSet@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTra.c)
 *     ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z @ 0x1800AC5E8 (-PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z.c)
 */

__int64 __fastcall CContactManager::PostFlickFeedbackUpdate(__int64 a1, unsigned int a2, int a3, _QWORD *a4, bool a5)
{
  _QWORD *v5; // r11
  __int64 i; // r10
  bool v8; // dl
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v5 = (_QWORD *)(a1 + 184);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 208); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*v5 + 24 * i) == a2 )
    {
      if ( (int)i >= 0 )
      {
        *(_QWORD *)(*v5 + 24 * i + 8) = *a4;
        v8 = a5;
        *(_DWORD *)(*v5 + 24 * i + 4) = a3;
        goto LABEL_9;
      }
      break;
    }
  }
  if ( !a5 )
    return 0LL;
  v11 = *a4;
  v10[0] = a2;
  v10[1] = a3;
  v12 = 0LL;
  DynArray<CTransitionVisualController::TlwPair,0>::AddMultipleAndSet((__int64 *)(a1 + 184), (__int64)v10);
  v8 = a5;
LABEL_9:
  CDesktopManager::PostFlickFeedback(CDesktopManager::s_pDesktopManagerInstance, v8, a2);
  return 0LL;
}
