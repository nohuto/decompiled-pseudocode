/*
 * XREFs of DrvSetVideoParameters @ 0x1401A5280
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 __fastcall DrvSetVideoParameters(PCUNICODE_STRING String1, __int64 a2, _OWORD *a3, int a4, int a5)
{
  unsigned int v9; // esi
  __int64 DeviceFromName; // r14
  _DWORD *v12; // rdi
  __int64 v13; // r9
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _OWORD *v23; // rax
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF

  v9 = -5;
  DeviceFromName = 0LL;
  WdLogSingleEntry2(4LL, String1, a2);
  WdLogGlobalForLineNumber = 26167;
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 26176;
      return v9;
    }
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(_QWORD *)(a2 + 2568);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 26192;
      return v9;
    }
  }
  if ( DeviceFromName == -4 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 26200;
  }
  else if ( a3 )
  {
    if ( !a5 || (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
    {
      v12 = (_DWORD *)PALLOCNOZ(0x2C8u, 0x73726447u);
      if ( v12 )
      {
        ProbeForRead(a3, 1uLL, 1u);
        v14 = v12;
        v15 = a3;
        v16 = 2LL;
        v17 = 2LL;
        do
        {
          *v14 = *v15;
          v14[1] = v15[1];
          v14[2] = v15[2];
          v14[3] = v15[3];
          v14[4] = v15[4];
          v14[5] = v15[5];
          v14[6] = v15[6];
          v14 += 8;
          *(v14 - 1) = v15[7];
          v15 += 8;
          --v17;
        }
        while ( v17 );
        *v14 = *v15;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        v14[4] = v15[4];
        v14[5] = v15[5];
        *((_DWORD *)v14 + 24) = *((_DWORD *)v15 + 24);
        if ( !a4
          || (v18 = v12[5], v18 == 1)
          || v18 == 2 && ((v12[6] & 0x100) != 0 && v12[21] == 2 || (v12[6] & 0x100) != 0 && v12[21] == 4 && !v12[24]) )
        {
          v19 = GreDeviceIoControlImpl(
                  *(PDEVICE_OBJECT *)(DeviceFromName + 136),
                  0x230020u,
                  v12,
                  0x164u,
                  v12,
                  0x164u,
                  &v24,
                  0,
                  1);
          if ( v19 )
            v19 = -5;
          v9 = v19;
          v23 = v12;
          do
          {
            *a3 = *v23;
            a3[1] = v23[1];
            a3[2] = v23[2];
            a3[3] = v23[3];
            a3[4] = v23[4];
            a3[5] = v23[5];
            a3[6] = v23[6];
            a3 += 8;
            *(a3 - 1) = v23[7];
            v23 += 8;
            --v16;
          }
          while ( v16 );
          *a3 = *v23;
          a3[1] = v23[1];
          a3[2] = v23[2];
          a3[3] = v23[3];
          a3[4] = v23[4];
          a3[5] = v23[5];
          *((_DWORD *)a3 + 24) = *((_DWORD *)v23 + 24);
          GreDeleteFastMutex((char *)v12, v20, v21, v22);
          WdLogSingleEntry1(5LL, (int)v9);
          WdLogGlobalForLineNumber = 26290;
        }
        else
        {
          GreDeleteFastMutex((char *)v12, 0LL, 128LL, v13);
        }
        return v9;
      }
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 26221;
    }
    return 0xFFFFFFFFLL;
  }
  return v9;
}
