/*
 * XREFs of ?SetRemarshalingFlags@CAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023C5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationMarshaler *this)
{
  unsigned int v1; // eax
  bool v3; // cl
  __int64 v4; // rcx
  _QWORD *v5; // r8
  int v6; // eax

  v1 = *((_DWORD *)this + 4) & 0xFFFFD27F;
  *((_DWORD *)this + 4) = v1;
  if ( *((_DWORD *)this + 52) )
  {
    v1 |= 0x20000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 27) )
    *((_DWORD *)this + 57) = 0;
  v3 = (*((_BYTE *)this + 184) & 4) != 0;
  if ( v3 && (v1 & 0x4000) == 0 )
  {
    *((_DWORD *)this + 4) = v1 | 0x4000;
    *(_BYTE *)(*((_QWORD *)this + 8) + 28LL) = v3;
  }
  v4 = *((_QWORD *)this + 24);
  v5 = (_QWORD *)((char *)this + 200);
  if ( v4 || *v5 != *((_QWORD *)this + 12) )
  {
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 4) = v6 | 0x8000;
      *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = v4;
      *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *v5;
    }
  }
  return *((_QWORD *)this + 11) != 0LL;
}
