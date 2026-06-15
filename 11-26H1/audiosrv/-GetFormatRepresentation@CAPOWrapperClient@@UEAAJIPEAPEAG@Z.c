/*
 * XREFs of ?GetFormatRepresentation@CAPOWrapperClient@@UEAAJIPEAPEAG@Z @ 0x1800B9F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::GetFormatRepresentation(
        CAPOWrapperClient *this,
        __int64 a2,
        unsigned __int16 **a3)
{
  if ( *((_DWORD *)this + 12) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 **))(**((_QWORD **)this + 2) + 104LL))(
             *((_QWORD *)this + 2),
             a2,
             a3);
  else
    return 2147500034LL;
}
