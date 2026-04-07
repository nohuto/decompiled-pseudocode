/*
 * XREFs of ??0CGraphicsDeviceManager@@IEAA@_N@Z @ 0x18008A634
 * Callers:
 *     ?Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z @ 0x18006E02C (-Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CGraphicsDeviceManager *__fastcall CGraphicsDeviceManager::CGraphicsDeviceManager(CGraphicsDeviceManager *this)
{
  __int64 v1; // rcx
  char v2; // dl

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CGraphicsDeviceManager::`vftable';
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)(v1 + 112) = 0LL;
  *(_BYTE *)(v1 + 120) = 0;
  *(_BYTE *)(v1 + 121) = v2;
  *(_QWORD *)(v1 + 104) = v1 + 96;
  *(_QWORD *)(v1 + 96) = v1 + 96;
  return (CGraphicsDeviceManager *)v1;
}
