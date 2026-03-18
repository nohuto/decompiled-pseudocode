/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1403FA85C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140035350 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, char *a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  char *v8; // r8

  Current = DXGPROCESS::GetCurrent((__int64)this);
  v6 = 2LL * ((*((_DWORD *)Current + 102) >> 3) & 1);
  v7 = *((unsigned __int16 *)this + 8 * ((*((_DWORD *)Current + 102) >> 3) & 1) + 304);
  v8 = (char *)*((_QWORD *)this + v6 + 77);
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, v5, v8, v7);
}
