/*
 * XREFs of ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x14004C5B0
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1401FFE30 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x140200110 (DxgkReleaseKeyedMutex2.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B20F4 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(DXGKEYEDMUTEX **this)
{
  DXGKEYEDMUTEX *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGKEYEDMUTEX::ReleaseReference(v1);
}
