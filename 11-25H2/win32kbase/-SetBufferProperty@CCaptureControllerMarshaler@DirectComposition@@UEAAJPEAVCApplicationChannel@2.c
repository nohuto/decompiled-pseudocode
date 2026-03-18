/*
 * XREFs of ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetBufferProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // edx
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // xmm0_8

  v6 = 0;
  *a6 = 0;
  v8 = a3 - 2;
  if ( !v8 )
  {
    if ( a4 && a5 == 8 )
    {
      v11 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *(_QWORD *)((char *)this + 68) = v11;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 5;
  if ( v9 )
  {
    if ( v9 == 1 && a4 && a5 == 8 )
    {
      v10 = *a4;
      *((_DWORD *)this + 4) |= 0x2000u;
      *((_QWORD *)this + 16) = v10;
LABEL_14:
      *a6 = 1;
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 && a5 )
    return (unsigned int)-1073741811;
  v6 = DirectComposition::CMarshaledArrayBase::Copy(
         (DirectComposition::CCaptureControllerMarshaler *)((char *)this + 104),
         a4,
         a5,
         0x20uLL,
         0x71634344u);
  if ( v6 >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x1000u;
  }
  return (unsigned int)v6;
}
