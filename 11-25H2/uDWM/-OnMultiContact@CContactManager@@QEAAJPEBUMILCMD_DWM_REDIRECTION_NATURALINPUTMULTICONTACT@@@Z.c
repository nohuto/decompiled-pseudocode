/*
 * XREFs of ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18002C2B4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002CF14 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnMultiContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r8
  char *v8; // r9
  int v10; // ecx
  int v11; // ecx
  _DWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)(v4 - 1) > 0x7E )
  {
    v5 = -2147024809;
  }
  else if ( *((_DWORD *)a2 + 2) == 40 * v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *((_QWORD *)a2 + 5 * v6 + 3);
      if ( *((_DWORD *)a2 + 10 * v6 + 12) == 1 )
      {
        if ( *((_BYTE *)this + 324) )
        {
          v10 = *((_DWORD *)a2 + 10 * v6 + 7);
          v12[1] = v10 - 25;
          v12[3] = v10 + 25;
          v11 = *((_DWORD *)a2 + 10 * v6 + 6);
          v12[0] = v11 - 25;
          v12[2] = v11 + 25;
          v8 = (char *)v12;
        }
        else
        {
          v8 = (char *)a2 + 40 * v6 + 32;
        }
        CContactManager::ProcessTouchContact(
          this,
          *((unsigned int *)a2 + 10 * v6 + 5),
          v7,
          v8,
          *((_DWORD *)a2 + 10 * v6 + 13),
          *((_DWORD *)a2 + 10 * v6 + 14),
          *(_QWORD *)((char *)a2 + 12));
      }
      else
      {
        CContactManager::ProcessPenContact(this, *((unsigned int *)a2 + 10 * v6 + 5), v7);
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)a2 + 1) );
  }
  else
  {
    v5 = -2147024872;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
