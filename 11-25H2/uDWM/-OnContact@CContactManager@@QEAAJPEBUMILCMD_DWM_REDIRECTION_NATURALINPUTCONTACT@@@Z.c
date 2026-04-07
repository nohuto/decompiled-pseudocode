/*
 * XREFs of ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800AAD34
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002CF14 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *a2)
{
  __int64 v4; // r9
  struct tagPOINT v5; // r8
  int v6; // ecx
  struct tagRECT *v7; // r9
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = (struct tagPOINT)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 8) == 1 )
  {
    if ( *((_BYTE *)this + 324) )
    {
      v6 = *((_DWORD *)a2 + 3);
      v10[1] = v6 - 25;
      v10[3] = v6 + 25;
      v10[0] = v5.x - 25;
      v10[2] = v5.x + 25;
      v7 = (struct tagRECT *)v10;
    }
    else
    {
      v7 = (struct tagRECT *)((char *)a2 + 16);
    }
    CContactManager::ProcessTouchContact(
      (__int64)this,
      *((_DWORD *)a2 + 1),
      v5,
      v7,
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 13),
      *(_QWORD *)((char *)a2 + 44));
  }
  else
  {
    CContactManager::ProcessPenContact(
      (__int64)this,
      *((_DWORD *)a2 + 1),
      v5,
      v4,
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 13),
      *(_QWORD *)((char *)a2 + 44));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return 0LL;
}
