/*
 * XREFs of ?CacheRotationInfo@CRotationMgr@@UEAAXXZ @ 0x140272890
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTopologyHardwareClone@@YAJPEAH@Z @ 0x140272B04 (-IsTopologyHardwareClone@@YAJPEAH@Z.c)
 */

void __fastcall CRotationMgr::CacheRotationInfo(CRotationMgr *this)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = 0;
  v2 = IsTopologyHardwareClone(&v3);
  if ( v2 < 0 )
  {
    if ( v2 == -1073741789 || v2 == -2147483643 )
      *((_DWORD *)this + 8) = 1;
    else
      *((_DWORD *)this + 7) = 1;
  }
  else
  {
    *((_DWORD *)this + 9) = v3;
  }
}
