/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x140047360
 * Callers:
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C124 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046B64 (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall MultiUserGreTrackRemoveEngResource(__int64 *a1)
{
  struct _ERESOURCE *v2; // rbx
  __int64 v3; // rcx
  __int64 *v4; // rax

  v2 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1720LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<32>();
  v3 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v4 = (__int64 *)a1[1], (__int64 *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( v2 )
    GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(v3, v2);
}
