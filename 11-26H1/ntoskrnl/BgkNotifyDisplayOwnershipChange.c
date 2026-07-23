/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14045C380
 * Callers:
 *     BgkNotifyDisplayOwnershipLost @ 0x1405C7E30 (BgkNotifyDisplayOwnershipLost.c)
 *     BgkSetDisplayOwnership @ 0x1405C7E90 (BgkSetDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1405C8560 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14045C580 (BgkpDisableConsole.c)
 *     BgkpTryEnableConsole @ 0x1405C8270 (BgkpTryEnableConsole.c)
 *     BgLibraryEnable @ 0x14071A6F8 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumeFinished @ 0x140C0F614 (BgkResumeFinished.c)
 *     BgkDestroy @ 0x140C55454 (BgkDestroy.c)
 *     BgSetFrameBufferAccess @ 0x140C554C8 (BgSetFrameBufferAccess.c)
 *     BgkpLockBgfxCodeSection @ 0x140C55820 (BgkpLockBgfxCodeSection.c)
 *     BgConsoleDestroyInterface @ 0x140C55C94 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140C55CF4 (BgConsoleGetInterface.c)
 *     BgDisplayFade @ 0x140C58B58 (BgDisplayFade.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140C5A1C0 (BgkpUnlockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140C5AEE4 (BgLibraryDisable.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD v7[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  if ( byte_140E65F58 && !a1 )
  {
    BgkResumeFinished();
    result = 0LL;
    byte_140E65F52 = 0;
    qword_140E65F28 = 0LL;
    return result;
  }
  if ( a1 != byte_140E65F52 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140E65F10 = a2;
      }
      else if ( !qword_140E65F10 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140E65F50 = 0;
      byte_140E65F18 = 0;
      BgkpDisableConsole();
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        if ( (unsigned int)(dword_140E65EF8 - 3) <= 1 )
        {
          if ( qword_140E65EE8 && *(_QWORD *)(qword_140E65EE8 + 136) )
            guard_dispatch_icall_no_overrides(0LL, v4);
          dword_140E65EF8 = 3;
          qword_140E65EE8 = (__int64)off_140E00DE0;
        }
        v3 = 0;
      }
      else
      {
        byte_140E65F52 = 0;
        byte_140E65F40 = 0;
        if ( qword_140E65F08 )
        {
          BgConsoleDestroyInterface();
          qword_140E65F08 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140E65F28 )
      {
        guard_dispatch_icall_no_overrides(v6, v5);
        qword_140E65F28 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140E65F10 )
      return 3221225473LL;
    result = guard_dispatch_icall_no_overrides(0LL, v7);
    if ( (int)result >= 0 )
    {
      qword_140E65F28 = 0LL;
      BgkpLockBgfxCodeSection();
      v3 = BgLibraryEnable(v7, 0LL);
      if ( v3 >= 0 )
        byte_140E65F52 = 1;
      qword_140E65F08 = BgConsoleGetInterface();
      if ( qword_140E65F08 )
        guard_dispatch_icall_no_overrides(0LL, 4291217094LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
