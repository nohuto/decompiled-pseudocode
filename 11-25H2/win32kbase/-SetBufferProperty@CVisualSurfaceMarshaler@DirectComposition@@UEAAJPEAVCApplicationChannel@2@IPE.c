/*
 * XREFs of ?SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14005B170
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetFrozenFlag@CVisualSurfaceMarshaler@DirectComposition@@IEAAXXZ @ 0x14005B204 (-ResetFrozenFlag@CVisualSurfaceMarshaler@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CVisualSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // xmm0_8
  _BYTE *v9; // rdx
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8

  *a6 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 && a4 && a5 == 8 )
      {
        v10 = *a4;
        *((_DWORD *)this + 4) |= 0x100u;
        *((_QWORD *)this + 10) = v10;
        goto LABEL_6;
      }
    }
    else if ( a4 && a5 == 8 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_QWORD *)this + 9) = v8;
LABEL_6:
      DirectComposition::CVisualSurfaceMarshaler::ResetFrozenFlag(this);
      *v9 = 1;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v11 = *a4;
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 8) = v11;
    goto LABEL_6;
  }
}
