/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x1800131E8
 * Callers:
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800132F8 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008A6E0 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z @ 0x180064758 (-AddMultipleAndSet@-$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z.c)
 *     ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z @ 0x1800AC698 (-PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  _QWORD *v5; // r11
  __int64 i; // r10
  bool v9; // dl
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  struct tagPOINT v13; // [rsp+34h] [rbp-24h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v5 = (_QWORD *)((char *)this + 216);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*v5 + 40 * i) == a2 )
    {
      if ( (int)i >= 0 )
      {
        *(_QWORD *)(*v5 + 40 * i + 20) = *(_QWORD *)(*v5 + 40 * i + 8);
        *(_DWORD *)(*v5 + 40 * i + 16) = *(_DWORD *)(*v5 + 40 * i + 4);
        *(struct tagPOINT *)(*v5 + 40 * i + 8) = *a4;
        *(_DWORD *)(*v5 + 40 * i + 4) = a3;
        v9 = a5;
        goto LABEL_10;
      }
      break;
    }
  }
  if ( !a5 )
    return 0LL;
  v11 = *a4;
  v13 = v11;
  v14 = 0;
  v10[0] = a2;
  v10[1] = a3;
  v12 = a3;
  v15 = 0LL;
  DynArray<CKeystateTextFeedback,0>::AddMultipleAndSet((char *)this + 216, v10);
  v9 = a5;
LABEL_10:
  CDesktopManager::PostKeystateFeedback(CDesktopManager::s_pDesktopManagerInstance, v9, a2);
  return 0LL;
}
