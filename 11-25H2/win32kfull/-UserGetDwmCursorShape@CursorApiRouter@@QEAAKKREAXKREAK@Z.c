/*
 * XREFs of ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z @ 0x1402DCA0C
 * Callers:
 *     NtUserGetDwmCursorShape @ 0x1402977E0 (NtUserGetDwmCursorShape.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402DC92C (-UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall CursorApiRouter::UserGetDwmCursorShape(
        const void **this,
        int a2,
        void *volatile a3,
        unsigned int a4,
        unsigned int *volatile a5)
{
  struct W32_PUSH_LOCK *v5; // rbx
  unsigned int v10; // esi

  v5 = (struct W32_PUSH_LOCK *)(this + 6);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 6), 0);
  v10 = 0;
  if ( this[7] )
  {
    if ( a2 == *((_DWORD *)this + 17) )
    {
      if ( a3 )
      {
        if ( a4 >= *((_DWORD *)this + 16) )
        {
          InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
          memmove(a3, this[7], *((unsigned int *)this + 16));
          *a5 = *((_DWORD *)this + 16);
          Win32FreePool((void *)this[7]);
          this[7] = 0LL;
          *((_DWORD *)this + 16) = 0;
        }
        else
        {
          *a5 = *((_DWORD *)this + 16);
          InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
          v10 = 8;
        }
      }
      else
      {
        *a5 = *((_DWORD *)this + 16);
        InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
      }
    }
    else
    {
      InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
      v10 = 87;
    }
    W32ReleasePushLockExclusiveEx(v5, 0LL);
    return v10;
  }
  else
  {
    InputTraceLogging::Cursor::Api::UserGetDwmCursorShape();
    W32ReleasePushLockExclusiveEx(v5, 0LL);
    return 87LL;
  }
}
