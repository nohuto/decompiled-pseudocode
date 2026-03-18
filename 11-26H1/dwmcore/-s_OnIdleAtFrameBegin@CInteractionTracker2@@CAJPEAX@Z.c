/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker2@@CAJPEAX@Z @ 0x180277AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CInteractionTracker2::s_OnIdleAtFrameBegin(_QWORD *a1)
{
  bool v1; // zf
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[7] == 0LL;
  v4 = a1;
  if ( !v1 && a1[6] )
    CResource::InvalidateConsumingAnimationsInternal((__int64)a1);
  *((_BYTE *)a1 + 828) &= ~0x80u;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v4);
  return 0LL;
}
