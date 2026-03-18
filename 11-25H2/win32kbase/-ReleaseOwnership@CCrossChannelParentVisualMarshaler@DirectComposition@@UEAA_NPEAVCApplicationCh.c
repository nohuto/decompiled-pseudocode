/*
 * XREFs of ?ReleaseOwnership@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAA_NPEAVCApplicationChannel@2@@Z @ 0x140156B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::ReleaseOwnership(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  bool result; // al

  v3 = (_QWORD *)*((_QWORD *)this + 46);
  if ( v3 )
  {
    *v3 = *((_QWORD *)a2 + 53);
    *((_QWORD *)a2 + 53) = v3;
    *((_QWORD *)this + 46) = 0LL;
  }
  v4 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 24) = 0LL;
  v5 = v4 & 0xFFFFFFEF;
  result = (v4 & 0x10) != 0;
  *((_DWORD *)this + 4) = v5;
  return result;
}
