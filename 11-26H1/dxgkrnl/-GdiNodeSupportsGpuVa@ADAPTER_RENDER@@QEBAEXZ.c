/*
 * XREFs of ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x140054C90
 * Callers:
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140356CC0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1403575E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x140054CC8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 */

bool __fastcall ADAPTER_RENDER::GdiNodeSupportsGpuVa(ADAPTER_RENDER *this)
{
  unsigned __int8 v2; // al
  char v3; // dl

  v2 = ADAPTER_RENDER::NodeSupportsGpuVa(this, 0, 0);
  v3 = 0;
  if ( v2 )
    return *(_BYTE *)(*((_QWORD *)this + 2) + 3080LL) == 0;
  return v3;
}
