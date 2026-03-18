/*
 * XREFs of DrvSetVideoParameters @ 0x140160354
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DrvGetDeviceFromName @ 0x14004A170 (DrvGetDeviceFromName.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall DrvSetVideoParameters(PCUNICODE_STRING String1, __int64 a2, _OWORD *a3, int a4, int a5)
{
  unsigned int v9; // esi
  __int64 DeviceFromName; // r14
  __int64 v12; // rbx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  _OWORD *v19; // rax
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v9 = -5;
  DeviceFromName = 0LL;
  WdLogSingleEntry2(4LL, String1, a2);
  WdLogGlobalForLineNumber = 27319;
  if ( !String1 )
  {
    if ( a2 )
      DeviceFromName = *(_QWORD *)(a2 + 2568);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 27344;
      return v9;
    }
LABEL_8:
    if ( DeviceFromName == -4 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 27352;
      return v9;
    }
    if ( DeviceFromName )
    {
      if ( !a3 )
        return v9;
      if ( a5 && (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
        return 0xFFFFFFFFLL;
      v20 = 0;
      v12 = PALLOCNOZ(712LL, 1936876615LL);
      if ( !v12 )
      {
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 27373;
        return 0xFFFFFFFFLL;
      }
      v13 = (_OWORD *)v12;
      v14 = a3;
      v15 = 2LL;
      v16 = 2LL;
      do
      {
        *v13 = *v14;
        v13[1] = v14[1];
        v13[2] = v14[2];
        v13[3] = v14[3];
        v13[4] = v14[4];
        v13[5] = v14[5];
        v13[6] = v14[6];
        v13 += 8;
        *(v13 - 1) = v14[7];
        v14 += 8;
        --v16;
      }
      while ( v16 );
      *v13 = *v14;
      v13[1] = v14[1];
      v13[2] = v14[2];
      v13[3] = v14[3];
      v13[4] = v14[4];
      v13[5] = v14[5];
      *((_DWORD *)v13 + 24) = *((_DWORD *)v14 + 24);
      if ( a4 )
      {
        v17 = *(_DWORD *)(v12 + 20);
        if ( v17 != 1
          && (v17 != 2
           || ((*(_DWORD *)(v12 + 24) & 0x100) == 0 || *(_DWORD *)(v12 + 84) != 2)
           && ((*(_DWORD *)(v12 + 24) & 0x100) == 0 || *(_DWORD *)(v12 + 84) != 4 || *(_DWORD *)(v12 + 96))) )
        {
          GreDeleteFastMutex((char *)v12);
          return v9;
        }
      }
      v18 = GreDeviceIoControlImpl(
              *(PDEVICE_OBJECT *)(DeviceFromName + 136),
              0x230020u,
              (PVOID)v12,
              0x164u,
              (PVOID)v12,
              0x164u,
              &v20,
              0,
              1);
      if ( v18 )
        v18 = -5;
      v9 = v18;
      v19 = (_OWORD *)v12;
      do
      {
        *a3 = *v19;
        a3[1] = v19[1];
        a3[2] = v19[2];
        a3[3] = v19[3];
        a3[4] = v19[4];
        a3[5] = v19[5];
        a3[6] = v19[6];
        a3 += 8;
        *(a3 - 1) = v19[7];
        v19 += 8;
        --v15;
      }
      while ( v15 );
      *a3 = *v19;
      a3[1] = v19[1];
      a3[2] = v19[2];
      a3[3] = v19[3];
      a3[4] = v19[4];
      a3[5] = v19[5];
      *((_DWORD *)a3 + 24) = *((_DWORD *)v19 + 24);
      GreDeleteFastMutex((char *)v12);
    }
    WdLogSingleEntry1(5LL, (int)v9);
    WdLogGlobalForLineNumber = 27442;
    return v9;
  }
  DeviceFromName = DrvGetDeviceFromName(String1);
  if ( DeviceFromName )
    goto LABEL_8;
  WdLogSingleEntry0(5LL);
  WdLogGlobalForLineNumber = 27328;
  return v9;
}
