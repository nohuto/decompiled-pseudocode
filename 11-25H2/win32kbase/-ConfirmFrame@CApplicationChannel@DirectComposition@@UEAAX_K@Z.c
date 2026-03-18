/*
 * XREFs of ?ConfirmFrame@CApplicationChannel@DirectComposition@@UEAAX_K@Z @ 0x1400B6280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::ConfirmFrame(
        DirectComposition::CApplicationChannel *this,
        __int64 a2)
{
  *((_DWORD *)this + 105) = *((_DWORD *)this + 104);
  *((_DWORD *)this + 672) = 0;
  if ( a2 )
    *((_QWORD *)this + 50) = a2;
}
