/*
 * XREFs of ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140016CC4
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release(DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 49) )
  {
    *((_BYTE *)this + 49) = 0;
    if ( *((_BYTE *)this + 16) )
    {
      *((_BYTE *)this + 16) = 0;
      v2 = *((_QWORD *)this + 1) + 136LL;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 16));
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 1), *(_QWORD *)this);
    }
    if ( !*((_BYTE *)this + 48) )
    {
      if ( *((_BYTE *)this + 40) )
      {
        v3 = *((_QWORD *)this + 4) + 136LL;
        *((_BYTE *)this + 40) = 0;
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
        ExReleasePushLockSharedEx(v3, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 4), *((_QWORD *)this + 3));
      }
    }
  }
}
