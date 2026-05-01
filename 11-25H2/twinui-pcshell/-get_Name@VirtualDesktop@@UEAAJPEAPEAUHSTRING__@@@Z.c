/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180011FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180012124 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802B0550 (-get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::get_Name(VirtualDesktop *this, HSTRING *a2)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  HSTRING v6; // r8
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  int DefaultName; // eax
  unsigned int v11; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = *(__int64 (**)(void))(**((_QWORD **)this + 14) + 40LL);
  WindowsDeleteString(0LL);
  try
  {
    v5 = v4();
    v7 = v5;
    if ( v5 >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(0LL, 0LL, v6) )
      {
        *a2 = 0LL;
        WindowsDeleteString(0LL);
        result = 0LL;
      }
      else
      {
        DefaultName = VirtualDesktop::get_DefaultName(this, a2);
        v11 = DefaultName;
        if ( DefaultName >= 0 )
        {
          WindowsDeleteString(0LL);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC2,
            (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
            (const char *)(unsigned int)DefaultName,
            v12);
          WindowsDeleteString(0LL);
          result = v11;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v5,
        v12);
      WindowsDeleteString(0LL);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC5,
                           (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
                           v8);
  }
  return result;
}
