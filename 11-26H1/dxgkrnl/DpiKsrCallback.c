/*
 * XREFs of DpiKsrCallback @ 0x140252220
 * Callers:
 *     <none>
 * Callees:
 *     DxgkStopAdapters @ 0x1401E0C3C (DxgkStopAdapters.c)
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1402518E4 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     ?DpiKsrComplete@@YAXPEAX@Z @ 0x1402519AC (-DpiKsrComplete@@YAXPEAX@Z.c)
 *     ?DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z @ 0x140251AF4 (-DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z.c)
 *     ?DpiKsrPrepare@@YAXPEAX@Z @ 0x140251BE4 (-DpiKsrPrepare@@YAXPEAX@Z.c)
 */

void __fastcall DpiKsrCallback(
        _BYTE *CallbackContext,
        PVOID Argument1,
        struct _KSR_FINALIZE_NOTIFICATION_CONTEXT *Argument2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 3;
        if ( v5 )
        {
          if ( v5 == 10 )
          {
            if ( CallbackContext[1465] )
              DxgkStopAdapters();
          }
        }
        else
        {
          DpiKsrFinalize(Argument2);
        }
      }
      else
      {
        DpiKsrComplete(CallbackContext);
      }
    }
    else
    {
      DpiKsrCancel(CallbackContext);
    }
  }
  else
  {
    DpiKsrPrepare(CallbackContext);
  }
}
