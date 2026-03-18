/*
 * XREFs of ?IsRemoteTreeEnabled@CChannel@@UEAA_NXZ @ 0x180232F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CChannel::IsRemoteTreeEnabled(CChannel *this)
{
  return *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 24LL) != 0LL;
}
