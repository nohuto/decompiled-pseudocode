/*
 * XREFs of ?CacheRotationInfo@CRotationMgr@@UEAAXXZ @ 0x14024C980
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTopologyHardwareClone@@YAJPEAH@Z @ 0x14024C9E4 (-IsTopologyHardwareClone@@YAJPEAH@Z.c)
 */

void __fastcall CRotationMgr::CacheRotationInfo(CRotationMgr *this)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
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
