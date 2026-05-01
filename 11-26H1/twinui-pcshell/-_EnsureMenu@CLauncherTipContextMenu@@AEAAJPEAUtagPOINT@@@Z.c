/*
 * XREFs of ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180603BC8
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C89D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x18018F358 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x18023090C (--0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C0D88 (-InternalRelease@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805FF138 (shell--TaskScheduler--AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___.c)
 *     ??1TaskScheduler@shell@@QEAA@XZ @ 0x1806009D0 (--1TaskScheduler@shell@@QEAA@XZ.c)
 *     ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x180603D20 (-_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLauncherTipContextMenu::_EnsureMenu(CLauncherTipContextMenu *this, struct tagPOINT *a2)
{
  int v3; // ebx
  void *v4; // rdx
  volatile int *v5; // rdx
  volatile int *v6; // rdx
  volatile int *v8; // [rsp+20h] [rbp-40h] BYREF
  volatile int *v9; // [rsp+28h] [rbp-38h] BYREF
  char v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+34h] [rbp-2Ch]
  _BYTE v12[24]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 320) )
  {
    if ( *((_BYTE *)this + 321) )
    {
      return (unsigned int)-2147483638;
    }
    else
    {
      v3 = CLauncherTipContextMenu::_EnsureScheduler(this);
      if ( v3 >= 0 )
      {
        shell::TaskScheduler::TaskScheduler(
          (shell::TaskScheduler *)v12,
          *((struct IShellTaskScheduler **)this + 17),
          &TOID_LAUNCHERTIPCONTEXTMENU_POPULATECOMMANDS);
        EnterCriticalSection((LPCRITICAL_SECTION)this + 6);
        if ( *((_BYTE *)this + 321) )
        {
          v3 = -2147483638;
        }
        else if ( !*((_BYTE *)this + 320) )
        {
          *((_BYTE *)this + 321) = 1;
          wil::details::ResetEvent(*((wil::details **)this + 44), v4);
          v8 = (volatile int *)this;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef((__int64 *)&v8, v5);
          v9 = (volatile int *)this;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef((__int64 *)&v9, v6);
          v10 = 0;
          v11 = 0LL;
          v3 = shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___((__int64)v12, (__int64)&v9);
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalRelease(&v9);
          if ( v3 < 0 )
            *((_BYTE *)this + 321) = 0;
          else
            v3 = -2147483638;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalRelease(&v8);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 6);
        shell::TaskScheduler::~TaskScheduler((shell::TaskScheduler *)v12);
      }
    }
  }
  return (unsigned int)v3;
}
