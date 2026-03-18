/*
 * XREFs of ?SetRemarshalingFlags@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  char v1; // bl
  _DWORD *v2; // rax
  int *v4; // rsi

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 256) )
    *v2 |= 0x400u;
  if ( *((_BYTE *)this + 257) )
    *v2 |= 0x800u;
  v4 = (int *)((char *)this + 16);
  if ( *((_BYTE *)this + 258) )
    *v2 |= 0x1000u;
  else
    v4 = (int *)((char *)this + 16);
  if ( *((_BYTE *)this + 259) )
    *v4 = *v2 | 0x2000;
  if ( *((_BYTE *)this + 260) )
    *v4 |= 0x4000u;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this)
    || (*v4 & 0x7C00) != 0
    || *((_QWORD *)this + 34)
    || *((_QWORD *)this + 37)
    || *((_QWORD *)this + 40)
    || *((_QWORD *)this + 43) )
  {
    return 1;
  }
  return v1;
}
