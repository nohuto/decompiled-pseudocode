/*
 * XREFs of _CAppAudioSessionId::Initialize_::_1_::catch$28 @ 0x1801640AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppAudioSessionId::Initialize_::_1_::catch_28(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 128);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 32) = *v3;
  return 0LL;
}
