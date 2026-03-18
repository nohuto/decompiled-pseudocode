/*
 * XREFs of ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x14007D128
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x140028C7C (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D358 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DrvGetDevModeForLddmPath(struct tagGRAPHICS_DEVICE *a1, int a2, struct _devicemodeW *a3, bool *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // r15d
  char v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  __int64 i; // r8
  __int64 v13; // r9
  int v14; // ebx
  unsigned int v15; // eax
  char *v16; // rdx
  _DWORD *v17; // rsi
  __int64 DxgkWin32kInterface; // rax
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  bool *v21; // [rsp+28h] [rbp-D8h]
  _BYTE v22[432]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+1E0h] [rbp+E0h]
  PVOID Buffer; // [rsp+1E8h] [rbp+E8h]

  v21 = a4;
  memset(v22, 0, sizeof(v22));
  v7 = 0;
  v23 = 0;
  Buffer = 0LL;
  if ( a2 == -1 )
  {
    v8 = 18;
  }
  else
  {
    if ( a2 != -2 )
      return 3221225485LL;
    v8 = 20;
  }
  v20 = 0;
  v9 = 1;
  do
  {
    v10 = QDC_AUTO_BUFFERS::TryFillOnce((QDC_AUTO_BUFFERS *)v22, v8, (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v20);
    v14 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      break;
    v15 = v7++;
  }
  while ( v15 < 0xA );
  if ( v14 < 0 )
  {
LABEL_18:
    v16 = (char *)Buffer;
  }
  else
  {
    v16 = (char *)Buffer;
    v14 = -1073741275;
    for ( i = 0LL; (unsigned int)i < v23; i = (unsigned int)(i + 1) )
    {
      v17 = (char *)Buffer + 216 * (unsigned int)i;
      if ( *((_DWORD *)a1 + 62) == v17[6] && *((_DWORD *)a1 + 60) == v17[4] && *((_DWORD *)a1 + 61) == v17[5] )
      {
        v14 = 0;
        if ( a3 )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11, Buffer);
          v14 = (*(__int64 (__fastcall **)(_DWORD *, struct _devicemodeW *))(DxgkWin32kInterface + 688))(v17, a3);
          if ( v14 < 0 )
            goto LABEL_18;
          v16 = (char *)Buffer;
        }
        if ( v21 )
        {
          if ( v17[49] != -2 || v17[50] != -2 )
            v9 = 0;
          *v21 = v9;
        }
        break;
      }
    }
  }
  if ( a2 == -2 && v14 == -1073741275 && a3 )
  {
    memset(a3, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&a3->dmSpecVersion = 67175425;
    a3->dmSize = 220;
    a3->dmFields = 410910848;
    DrvGetDisplayDriverDpiSetting(a3);
    v16 = (char *)Buffer;
    v14 = 0;
  }
  if ( v16 )
  {
    if ( v16 != v22 )
      GreDeleteFastMutex(v16, (__int64)v16, i, v13);
  }
  return (unsigned int)v14;
}
