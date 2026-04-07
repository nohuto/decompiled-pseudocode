/*
 * XREFs of wil::details::lambda_call__CCaptureManager::StopWindowCapture_::_2_::_lambda_1___::_lambda_call__CCaptureManager::StopWindowCapture_::_2_::_lambda_1___ @ 0x180086888
 * Callers:
 *     _CCaptureManager::StopWindowCapture_::_1_::dtor$2 @ 0x1800E80AC (_CCaptureManager--StopWindowCapture_--_1_--dtor$2.c)
 *     _CCaptureManager::StartDisplayCapture_::_1_::dtor$2 @ 0x1800E8E08 (_CCaptureManager--StartDisplayCapture_--_1_--dtor$2.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

__int64 __fastcall wil::details::lambda_call__CCaptureManager::StopWindowCapture_::_2_::_lambda_1___::_lambda_call__CCaptureManager::StopWindowCapture_::_2_::_lambda_1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(*(_QWORD *)a1);
  }
  return result;
}
