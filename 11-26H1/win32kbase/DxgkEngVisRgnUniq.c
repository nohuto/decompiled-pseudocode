/*
 * XREFs of DxgkEngVisRgnUniq @ 0x14013D620
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14001D2CC (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001D35C (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall DxgkEngVisRgnUniq(__int64 a1)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rdi
  int v3; // ecx
  int v4; // r8d

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = *(struct _ERESOURCE **)v1;
  EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v1 + 832LL));
  GrepAcquireLockValidate<14>();
  v3 = *(_DWORD *)(v1 + 4392);
  LODWORD(v1) = v3 + *(_DWORD *)(v1 + 4352);
  GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(v3, v2 + 8, v4);
  return (unsigned int)v1;
}
