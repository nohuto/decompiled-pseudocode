/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x1409690F8
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x140968948 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A3F7D8 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140ADDE44 (PiDqObjectActionQueueEntryCreate.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  _QWORD *v7; // rdx
  int v8; // edx
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  v4 = 0;
  v10 = 0LL;
  if ( (v2 & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( (*(_DWORD *)(a1 + 228) & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v3 = PiDqObjectActionQueueEntryCreate(a2, &v10);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v7 = *(_QWORD **)(a1 + 216);
      if ( *v7 != a1 + 208 )
        __fastfail(3u);
      v9 = v10;
      *v10 = a1 + 208;
      v9[1] = v7;
      *v7 = v9;
      *(_QWORD *)(a1 + 216) = v9;
    }
  }
  v8 = *(_DWORD *)(a1 + 228);
  if ( (v8 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v3 < 0) )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 228) = v8 | 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v4 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
