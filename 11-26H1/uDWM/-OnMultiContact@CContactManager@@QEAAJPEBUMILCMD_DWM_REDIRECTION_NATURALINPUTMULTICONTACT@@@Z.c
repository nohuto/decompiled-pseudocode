/*
 * XREFs of ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x1800122A4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012EFC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnMultiContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r8
  char *v7; // r9
  int v9; // ecx
  int v10; // ecx
  _DWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)a2 + 1) && *((_DWORD *)a2 + 1) <= 0x7Fu )
  {
    if ( *((_DWORD *)a2 + 2) == 40LL * *((unsigned int *)a2 + 1) )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = *((_QWORD *)a2 + 5 * v5 + 3);
        if ( *((_DWORD *)a2 + 10 * v5 + 12) == 1 )
        {
          if ( *((_BYTE *)this + 324) )
          {
            v9 = *((_DWORD *)a2 + 10 * v5 + 7);
            v11[1] = v9 - 25;
            v11[3] = v9 + 25;
            v10 = *((_DWORD *)a2 + 10 * v5 + 6);
            v11[0] = v10 - 25;
            v11[2] = v10 + 25;
            v7 = (char *)v11;
          }
          else
          {
            v7 = (char *)a2 + 40 * v5 + 32;
          }
          CContactManager::ProcessTouchContact(
            this,
            *((unsigned int *)a2 + 10 * v5 + 5),
            v6,
            v7,
            *((_DWORD *)a2 + 10 * v5 + 13),
            *((_DWORD *)a2 + 10 * v5 + 14),
            *(_QWORD *)((char *)a2 + 12));
        }
        else
        {
          CContactManager::ProcessPenContact(this, *((unsigned int *)a2 + 10 * v5 + 5), v6);
        }
        ++v5;
      }
      while ( v5 < *((_DWORD *)a2 + 1) );
    }
    else
    {
      v4 = -2147024872;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
