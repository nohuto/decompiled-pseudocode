/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1801AA340
 * Callers:
 *     ??1CResourceTable@@UEAA@XZ @ 0x1801AA29C (--1CResourceTable@@UEAA@XZ.c)
 *     ??1CChannelContext@@EEAA@XZ @ 0x18020E078 (--1CChannelContext@@EEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CProcessAttribution>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
