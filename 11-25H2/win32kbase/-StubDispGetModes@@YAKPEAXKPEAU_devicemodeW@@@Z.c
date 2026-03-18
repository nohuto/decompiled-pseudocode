/*
 * XREFs of ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x14017DB20
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401B6D74 (UserGetDisconnectDeviceResolutionHint.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x1401CFF84 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall StubDispGetModes(void *a1, __int64 a2, struct _devicemodeW *a3)
{
  size_t v4; // rdi
  __int64 v5; // rsi
  __int16 *v6; // rcx
  WORD *v7; // rbx
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // esi
  size_t v11; // r8
  unsigned __int64 v12; // rdi
  DWORD dmPelsWidth; // r15d
  DWORD dmPelsHeight; // r14d
  char v15; // r9
  __int16 *v16; // rcx
  __int64 v17; // r11
  WORD *p_dmDriverVersion; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx

  v4 = (unsigned int)a2;
  if ( (unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline(a1, a2) )
  {
    v10 = 18;
    if ( a3 )
    {
      v11 = v4;
      v12 = v4 / 0xDC;
      if ( (_DWORD)v12 )
      {
        if ( (unsigned int)v12 < 0x12 )
          v10 = v12;
        memset(a3, 0, v11);
        dmPelsWidth = 1024;
        dmPelsHeight = 768;
        UserGetDisconnectDeviceResolutionHint(a3);
        if ( (a3->dmFields & 0x180000) == 0x180000
          && a3->dmPelsWidth - 800 <= 0x7FFFFCDF
          && a3->dmPelsHeight - 600 <= 0x7FFFFDA7 )
        {
          dmPelsWidth = a3->dmPelsWidth;
          dmPelsHeight = a3->dmPelsHeight;
        }
        v15 = 0;
        v16 = (__int16 *)&unk_140271462;
        v17 = v10;
        p_dmDriverVersion = &a3->dmDriverVersion;
        do
        {
          *(_OWORD *)(p_dmDriverVersion - 33) = *(_OWORD *)L"StubDisp";
          *(p_dmDriverVersion - 25) = aStubdisp[8];
          *(_DWORD *)(p_dmDriverVersion - 1) = 67175425;
          p_dmDriverVersion[1] = 220;
          *(_DWORD *)(p_dmDriverVersion + 53) = *(v16 - 1);
          *(_DWORD *)(p_dmDriverVersion + 55) = *v16;
          *(_DWORD *)(p_dmDriverVersion + 59) = 60;
          *(_DWORD *)(p_dmDriverVersion + 51) = 32;
          *(_DWORD *)(p_dmDriverVersion + 3) = 8126464;
          if ( *(v16 - 1) == dmPelsWidth && *v16 == dmPelsHeight )
            v15 = 1;
          p_dmDriverVersion += 110;
          v16 += 2;
          --v17;
        }
        while ( v17 );
        if ( v15 )
        {
          return 220 * v10;
        }
        else
        {
          v19 = v10 - 1;
          if ( v10 < (unsigned int)v12 )
            v19 = v10;
          v20 = v19;
          *(_OWORD *)a3[v20].dmDeviceName = *(_OWORD *)L"StubDisp";
          a3[v20].dmDeviceName[8] = aStubdisp[8];
          result = (unsigned int)(220 * (v19 + 1));
          *(_DWORD *)&a3[v20].dmSpecVersion = 67175425;
          a3[v20].dmSize = 220;
          a3[v20].dmPelsWidth = dmPelsWidth;
          a3[v20].dmPelsHeight = dmPelsHeight;
          a3[v20].dmDisplayFrequency = 60;
          a3[v20].dmBitsPerPel = 32;
          a3[v20].dmFields = 8126464;
        }
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      return 4180LL;
    }
  }
  else
  {
    if ( a3 )
    {
      memset(a3, 0, (unsigned int)v4);
      v5 = 18LL;
      v6 = (__int16 *)&unk_140271462;
      v7 = &a3->dmDriverVersion;
      do
      {
        *(_OWORD *)(v7 - 33) = *(_OWORD *)L"StubDisp";
        *(v7 - 25) = aStubdisp[8];
        *(_DWORD *)(v7 - 1) = 67175425;
        v7[1] = 220;
        *(_DWORD *)(v7 + 53) = *(v6 - 1);
        v8 = *v6;
        v6 += 2;
        *(_DWORD *)(v7 + 55) = v8;
        *(_DWORD *)(v7 + 59) = 60;
        *(_DWORD *)(v7 + 51) = 32;
        *(_DWORD *)(v7 + 3) = 8126464;
        v7 += 110;
        --v5;
      }
      while ( v5 );
    }
    return 3960LL;
  }
  return result;
}
