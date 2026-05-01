/*
 * XREFs of ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180544DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x1800A26D8 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x18054508C (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopNameChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  PCWSTR StringRawBuffer; // rax
  int VirtualDesktopRegKeyName; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  UINT32 length[4]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 v11[49]; // [rsp+40h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a3 )
  {
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a3, length);
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::WritePerDesktopData(
                                 this,
                                 a2,
                                 L"Name",
                                 2 * (length[0] + 1),
                                 StringRawBuffer,
                                 2LL * (length[0] + 1));
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v7 = 210LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)VirtualDesktopRegKeyName);
      return (unsigned int)VirtualDesktopRegKeyName;
    }
  }
  else
  {
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                                 this,
                                 a2,
                                 (unsigned __int16 (*)[49])v11);
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v7 = 215LL;
      goto LABEL_4;
    }
    LOBYTE(v9) = 1;
    VirtualDesktopRegKeyName = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 *, const unsigned __int16 *))(**((_QWORD **)this + 2) + 72LL))(
                                 *((_QWORD *)this + 2),
                                 v9,
                                 v11,
                                 L"Name");
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v7 = 216LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
