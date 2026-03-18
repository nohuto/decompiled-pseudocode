/*
 * XREFs of ?SetBufferProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 3;
  if ( !v7 )
  {
    if ( a4 && a5 == 8 )
    {
      v9 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(_QWORD *)(a1 + 104) = v9;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1 || !a4 || a5 != 8 )
    return (unsigned int)-1073741811;
  v8 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x400u;
  *(_QWORD *)(a1 + 112) = v8;
LABEL_9:
  *a6 = 1;
  return v6;
}
