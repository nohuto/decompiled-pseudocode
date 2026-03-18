/*
 * XREFs of DrvIsExternalMonitorActive @ 0x14002ABA4
 * Callers:
 *     UpdateExternalMonitorConnectedStatus @ 0x14002AAE4 (UpdateExternalMonitorConnectedStatus.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14002BC40 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DrvIsExternalMonitorActive(_BYTE *a1)
{
  int v2; // eax
  char *v3; // rdx
  unsigned int v4; // ebx
  unsigned int i; // r8d
  __int64 v6; // r9
  int v7; // eax
  _BYTE v9[432]; // [rsp+20h] [rbp-1D8h] BYREF
  unsigned int v10; // [rsp+1D0h] [rbp-28h]
  PVOID Buffer; // [rsp+1D8h] [rbp-20h]

  memset(v9, 0, sizeof(v9));
  v10 = 0;
  Buffer = 0LL;
  *a1 = 0;
  v2 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v9, 2u, 0LL);
  v3 = (char *)Buffer;
  v4 = v2;
  if ( v2 >= 0 )
  {
    for ( i = 0; i < v10; ++i )
    {
      v6 = 216LL * i;
      if ( (*(_QWORD *)((_BYTE *)Buffer + v6) & 0x9800000000000000uLL) == 0x8000000000000000uLL )
      {
        v7 = *(_DWORD *)((char *)Buffer + v6 + 80);
        if ( v7 != 0x80000000 && v7 != 11 && v7 != 13 )
        {
          *a1 = 1;
          break;
        }
      }
    }
  }
  if ( v3 && v3 != v9 )
    GreDeleteFastMutex(v3);
  return v4;
}
