/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18021B59C
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 v1; // rbx
  _QWORD *i; // rsi

  v1 = 0LL;
  for ( i = (_QWORD *)((char *)this + 928); (unsigned int)v1 < *((_DWORD *)this + 238); v1 = (unsigned int)(v1 + 1) )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(*(volatile signed __int32 **)(*i + 8 * v1));
  DynArray<CChannelContext *,1>::Reset((__int64)i, 1);
}
