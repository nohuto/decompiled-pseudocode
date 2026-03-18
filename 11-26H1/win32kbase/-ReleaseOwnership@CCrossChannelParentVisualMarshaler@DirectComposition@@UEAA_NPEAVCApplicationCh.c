/*
 * XREFs of ?ReleaseOwnership@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAA_NPEAVCApplicationChannel@2@@Z @ 0x140192750
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
  bool result; // al

  v3 = (_QWORD *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    *v3 = *((_QWORD *)a2 + 53);
    *((_QWORD *)a2 + 53) = v3;
    *((_QWORD *)this + 42) = 0LL;
  }
  result = (*((_DWORD *)this + 4) & 0x10) != 0;
  *((_DWORD *)this + 4) &= ~0x10u;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
