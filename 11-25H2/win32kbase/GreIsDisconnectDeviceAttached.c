/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x14008E108
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1401700F0 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14008E380 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14008E420 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 */

__int64 __fastcall GreIsDisconnectDeviceAttached(__int64 a1)
{
  struct _ERESOURCE **v1; // rsi
  struct _ERESOURCE *v2; // rdi
  struct _ERESOURCE *v3; // rax
  unsigned int v4; // ebx
  struct _ERESOURCE *v5; // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v2 = *v1 + 6;
  EngAcquireSemaphoreShared((HSEMAPHORE)v2);
  GrepAcquireLockValidate<1>();
  v3 = v1[154];
  v4 = 1;
  if ( !v3 || (v3[1].OwnerEntry.TableSize & 1) == 0 )
  {
    v5 = v1[152];
    if ( !v5 || (v5[1].OwnerEntry.TableSize & 1) == 0 )
      v4 = 0;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", (int)v2);
  GrepReleaseLockValidate<1>();
  GreReleaseSemaphoreSharedInternal(v2);
  return v4;
}
