/*
 * XREFs of NtDxgkConnectDoorbell @ 0x1401E4130
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401E19A0 (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkConnectDoorbell(struct _D3DKMT_CONNECT_DOORBELL *a1)
{
  return DxgkConnectDoorbellInternal(a1);
}
