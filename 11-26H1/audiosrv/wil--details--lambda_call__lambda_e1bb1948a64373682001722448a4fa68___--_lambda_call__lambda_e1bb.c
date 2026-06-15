/*
 * XREFs of wil::details::lambda_call__lambda_e1bb1948a64373682001722448a4fa68___::_lambda_call__lambda_e1bb1948a64373682001722448a4fa68___ @ 0x1800C4368
 * Callers:
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$24 @ 0x180167E25 (_CAudioResourceManager--CreateStream_--_1_--dtor$24.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_e1bb1948a64373682001722448a4fa68___::_lambda_call__lambda_e1bb1948a64373682001722448a4fa68___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
      return (_BYTE *)AudioPolicyManagerExtension_OnPreMatchFormatStateChange(
                        *(_QWORD *)(***(_QWORD ***)(a1 + 8) + 48LL),
                        0LL);
  }
  return result;
}
