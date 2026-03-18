/*
 * XREFs of ?GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z @ 0x14024A848
 * Callers:
 *     GreHidePointer @ 0x1400A4E00 (GreHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4 (-vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 */

void __fastcall GreHidePointerInternal(struct PDEVOBJ *a1)
{
  HSEMAPHORE v2; // rbx
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r15
  __int64 v6; // rax
  _QWORD *v7; // r14
  int v8; // ebp
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(HSEMAPHORE *)(*(_QWORD *)a1 + 56LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<4>();
  v5 = *(_QWORD *)(W32GetSessionState(v4, v3) + 96);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 1784LL);
    v7 = *(_QWORD **)v6;
    v8 = *(_DWORD *)(v6 + 16);
    do
    {
      v9 = v7[6];
      if ( (*(_DWORD *)(v9 + 2112) & 0x2000) == 0 )
        vMovePointer((struct PDEVOBJ *)&v9, 0xFFFFFFFF, 0xFFFFFFFFLL, *(_DWORD *)(v5 + 64));
      v7 = (_QWORD *)*v7;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    vMovePointer(a1, 0xFFFFFFFF, 0xFFFFFFFFLL, *(_DWORD *)(v5 + 64));
  }
  *(_DWORD *)(*(_QWORD *)a1 + 64LL) = -1;
  *(_DWORD *)(*(_QWORD *)a1 + 68LL) = -1;
  if ( v2 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v2);
}
