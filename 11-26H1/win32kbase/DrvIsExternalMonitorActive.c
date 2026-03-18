/*
 * XREFs of DrvIsExternalMonitorActive @ 0x140196634
 * Callers:
 *     UpdateExternalMonitorConnectedStatus @ 0x140196570 (UpdateExternalMonitorConnectedStatus.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D0C8 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DrvIsExternalMonitorActive(_BYTE *a1)
{
  int v2; // eax
  __int64 i; // r8
  __int64 v4; // r9
  char *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  _BYTE v10[432]; // [rsp+20h] [rbp-1D8h] BYREF
  unsigned int v11; // [rsp+1D0h] [rbp-28h]
  PVOID Buffer; // [rsp+1D8h] [rbp-20h]

  memset(v10, 0, sizeof(v10));
  v11 = 0;
  Buffer = 0LL;
  *a1 = 0;
  v2 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v10, 2u, 0LL);
  v5 = (char *)Buffer;
  v6 = v2;
  if ( v2 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
    {
      v4 = 216LL * (unsigned int)i;
      v7 = *(_QWORD *)((char *)Buffer + v4);
      if ( v7 < 0 && (v7 & 0x1800000000000000LL) == 0 )
      {
        v8 = *(_DWORD *)((char *)Buffer + v4 + 80);
        if ( v8 != 0x80000000 && v8 != 11 && v8 != 13 )
        {
          *a1 = 1;
          break;
        }
      }
    }
  }
  if ( v5 && v5 != v10 )
    GreDeleteFastMutex(v5, (__int64)v5, i, v4);
  return v6;
}
