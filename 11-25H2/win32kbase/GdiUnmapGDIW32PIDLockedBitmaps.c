/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x140084B10
 * Callers:
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140085008 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  struct _ERESOURCE *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v11);
  v10 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v2) + 88) + 936LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<36>();
  v3 = (_QWORD *)(a1 + 224);
  v4 = (_QWORD *)*v3;
  if ( *v3 )
  {
    while ( v4 != v3 )
    {
      v6 = (_QWORD *)*v4;
      v7 = v4;
      v8 = v4;
      v4 = v6;
      *(v7 - 33) = 0LL;
      *(v7 - 34) = 0LL;
      if ( (_QWORD *)v6[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v8) )
        __fastfail(3u);
      *v9 = v6;
      v6[1] = v9;
      v8[1] = v8;
      *v8 = v8;
    }
  }
  v3[1] = v3;
  *v3 = v3;
  SEMOBJ<36>::vUnlock(&v10);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v11);
}
