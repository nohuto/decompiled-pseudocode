/*
 * XREFs of ?HandleSwitchToView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804E2C70
 * Callers:
 *     ?HandleSwitchToView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x1804E2CF0 (-HandleSwitchToView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::HandleSwitchToView(
        GamingPosturePositioner *this,
        struct IApplicationView *a2)
{
  __int64 result; // rax
  int v3; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 616) )
  {
    try
    {
      v3 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 56LL))();
      v5 = v3;
      if ( v3 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F9,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)v3);
        result = v5;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1FC,
                             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                             v4);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
