/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x140047880
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x140027848 (GreCreateSemaphoreInternal.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C124 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046B64 (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  v4 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(a1 + 16) = a2;
  v5 = (struct _ERESOURCE *)(*v4 + 1720LL);
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<32>();
  v7 = v4 + 380;
  v8 = (_QWORD *)v7[1];
  if ( (_QWORD *)*v8 != v7 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  v7[1] = a1;
  if ( v5 )
    GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(v6, v5);
}
