/*
 * XREFs of ?OnCancelOrCompletion@GammaFlashAsyncOperation@@MEAAX_N@Z @ 0x18034A800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GammaFlashAsyncOperation::OnCancelOrCompletion(GammaFlashAsyncOperation *this, char a2)
{
  if ( a2 )
    *((_BYTE *)this + 252) = 1;
}
