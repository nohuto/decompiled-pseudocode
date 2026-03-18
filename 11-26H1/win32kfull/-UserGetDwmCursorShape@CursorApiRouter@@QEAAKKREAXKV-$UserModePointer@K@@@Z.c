/*
 * XREFs of ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKV?$UserModePointer@K@@@Z @ 0x1402EF254
 * Callers:
 *     NtUserGetDwmCursorShape @ 0x1402B35F0 (NtUserGetDwmCursorShape.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402EF170 (-UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall CursorApiRouter::UserGetDwmCursorShape(__int64 a1, int a2, void *a3, unsigned int a4, __int64 a5)
{
  struct W32_PUSH_LOCK *v5; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // edi

  v5 = (struct W32_PUSH_LOCK *)(a1 + 48);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 48), 0);
  v10 = *(_DWORD *)(a1 + 64);
  v11 = 0;
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( a2 == *(_DWORD *)(a1 + 68) )
    {
      if ( a3 )
      {
        if ( a4 >= v10 )
        {
          InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
          memmove(a3, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 64));
          RtlWriteULongToUser(a5, *(unsigned int *)(a1 + 64));
          Win32FreePool(*(void **)(a1 + 56));
          *(_QWORD *)(a1 + 56) = 0LL;
          *(_DWORD *)(a1 + 64) = 0;
        }
        else
        {
          RtlWriteULongToUser(a5, v10);
          InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
          v11 = 8;
        }
      }
      else
      {
        RtlWriteULongToUser(a5, v10);
        InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
      }
    }
    else
    {
      InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
      v11 = 87;
    }
    W32ReleasePushLockExclusiveEx(v5, 0LL);
    return v11;
  }
  else
  {
    InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
    W32ReleasePushLockExclusiveEx(v5, 0LL);
    return 87LL;
  }
}
