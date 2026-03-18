/*
 * XREFs of CleanupHLSURF @ 0x140220E70
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14005C938 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400D7AB4 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 CleanupHLSURF()
{
  __int64 v0; // rdx
  __int64 i; // rcx
  __int64 result; // rax
  unsigned int v3; // ebx
  struct SFMLOGICALSURFACE *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v5);
  v4 = 0LL;
  for ( i = 0LL; ; i = v3 )
  {
    LOBYTE(v0) = 18;
    result = HmgSafeNextObjt(i, v0, &v4);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v4, 1);
  }
  if ( v5 )
    return GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
             v5);
  return result;
}
