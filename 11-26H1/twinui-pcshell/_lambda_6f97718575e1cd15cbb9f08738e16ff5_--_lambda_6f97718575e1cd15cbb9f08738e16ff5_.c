/*
 * XREFs of _lambda_6f97718575e1cd15cbb9f08738e16ff5_::_lambda_6f97718575e1cd15cbb9f08738e16ff5_ @ 0x1802DCEA4
 * Callers:
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x180056900 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CD768 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801F08E0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 *     ?RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180204ED0 (-RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator() @ 0x18039613C (_lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_--operator().c)
 *     ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803972F0 (-HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803973D4 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x18041C040 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ?QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z @ 0x180423FA0 (-QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_6f97718575e1cd15cbb9f08738e16ff5_::_lambda_6f97718575e1cd15cbb9f08738e16ff5_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // rcx

  *a1 = a2;
  v4 = a1 + 1;
  *v4 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  return a1;
}
