/*
 * XREFs of ?SetProperty@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z @ 0x18024A4EC (-SetCaptureState@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z.c)
 *     ?SetIsConstrainedBySize@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z @ 0x18024B8C0 (-SetIsConstrainedBySize@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_.c)
 *     ?SetSuspendOnScreenOff@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z @ 0x18024EBEC (-SetSuspendOnScreenOff@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N.c)
 *     ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x18026A408 (-OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetProperty(
        CCaptureController *a1,
        int a2,
        int a3,
        char *a4)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v8; // rdx
  int IsConstrainedBySize; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( a3 != 17 )
    {
      v8 = 816LL;
      goto LABEL_21;
    }
    IsConstrainedBySize = CCaptureControllerGeneratedT<CCaptureController,CResource>::SetCaptureState((__int64)a1, *a4);
    if ( IsConstrainedBySize < 0 )
    {
      v8 = 817LL;
      goto LABEL_22;
    }
    return 0LL;
  }
  v5 = v4 - 3;
  if ( !v5 )
  {
    if ( a3 != 17 )
    {
      v8 = 821LL;
      goto LABEL_21;
    }
    IsConstrainedBySize = CCaptureControllerGeneratedT<CCaptureController,CResource>::SetIsConstrainedBySize(
                            (__int64)a1,
                            *a4);
    if ( IsConstrainedBySize < 0 )
    {
      v8 = 822LL;
      goto LABEL_22;
    }
    return 0LL;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    if ( a3 != 18 )
    {
      v8 = 826LL;
      goto LABEL_21;
    }
    if ( *(float *)a4 != *((float *)a1 + 22) )
    {
      *((_DWORD *)a1 + 22) = *(_DWORD *)a4;
      CCaptureController::OnDefaultSDRBoostChanged(a1);
    }
    return 0LL;
  }
  if ( (_DWORD)v6 != 4 )
    return 2147942487LL;
  if ( a3 != 17 )
  {
    v8 = 831LL;
LABEL_21:
    IsConstrainedBySize = -2147024809;
    goto LABEL_22;
  }
  LOBYTE(v6) = *a4;
  IsConstrainedBySize = CCaptureControllerGeneratedT<CCaptureController,CResource>::SetSuspendOnScreenOff(a1, v6);
  if ( IsConstrainedBySize >= 0 )
    return 0LL;
  v8 = 832LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)IsConstrainedBySize);
  return (unsigned int)IsConstrainedBySize;
}
