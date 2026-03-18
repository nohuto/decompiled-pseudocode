/*
 * XREFs of ?SetIntegerProperty@CHolographicCompositionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140238710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicCompositionMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  char v7; // r8

  result = 0LL;
  if ( !*((_BYTE *)this + 68) || (v7 = 1, !*((_BYTE *)this + 88)) )
    v7 = 0;
  if ( a3 != 1 )
    return 3221225485LL;
  *((_DWORD *)this + 16) = a4;
  *((_BYTE *)this + 68) = 1;
  if ( v7 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
  }
  else if ( *((_BYTE *)this + 88) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
  }
  *a5 = 1;
  return result;
}
