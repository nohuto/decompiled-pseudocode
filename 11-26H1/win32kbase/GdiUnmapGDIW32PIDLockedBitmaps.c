/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x140024580
 * Callers:
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024A94 (--$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140024B80 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 v2; // rcx
  struct _ERESOURCE *v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v11);
  v3 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v2) + 88) + 936LL);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<36>();
  v5 = (_QWORD *)(a1 + 224);
  v6 = (_QWORD *)*v5;
  if ( *v5 )
  {
    while ( v6 != v5 )
    {
      v8 = (_QWORD *)*v6;
      v9 = v6;
      v4 = v6;
      v6 = v8;
      *(v9 - 33) = 0LL;
      *(v9 - 34) = 0LL;
      if ( (_QWORD *)v8[1] != v9 || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v4) )
        __fastfail(3u);
      *v10 = v8;
      v8[1] = v10;
      v4[1] = v4;
      *v4 = v4;
    }
  }
  v5[1] = v5;
  *v5 = v5;
  if ( v3 )
    GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(v4, v3);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v11);
}
