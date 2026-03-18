/*
 * XREFs of ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x1401FBAE0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x140152324 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401D9C74 (UserGetDisconnectDeviceResolutionHint.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall StubDispGetModes(void *a1, unsigned int a2, struct _devicemodeW *a3)
{
  size_t v4; // rsi
  unsigned int v5; // edi
  size_t v6; // r8
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  DWORD dmPelsWidth; // r15d
  DWORD dmPelsHeight; // r14d
  int v11; // edx
  int v12; // r8d
  char v13; // r8
  __int16 *v14; // rcx
  __int64 v15; // r11
  WORD *p_dmDriverVersion; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int16 *v20; // rcx
  WORD *v21; // rbx
  int v22; // eax

  v4 = a2;
  if ( (unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = 18;
    if ( a3 )
    {
      v6 = (unsigned int)v4;
      v7 = v4 / 0xDC;
      if ( (_DWORD)v7 )
      {
        if ( (unsigned int)v7 < 0x12 )
          v5 = v7;
        memset(a3, 0, v6);
        dmPelsWidth = 1024;
        dmPelsHeight = 768;
        UserGetDisconnectDeviceResolutionHint(a3, v11, v12);
        if ( (a3->dmFields & 0x180000) == 0x180000
          && a3->dmPelsWidth - 800 <= 0x7FFFFCDF
          && a3->dmPelsHeight - 600 <= 0x7FFFFDA7 )
        {
          dmPelsWidth = a3->dmPelsWidth;
          dmPelsHeight = a3->dmPelsHeight;
        }
        v13 = 0;
        v14 = (__int16 *)&unk_14027A242;
        v15 = v5;
        p_dmDriverVersion = &a3->dmDriverVersion;
        do
        {
          *(_OWORD *)(p_dmDriverVersion - 33) = *(_OWORD *)L"StubDisp";
          *(p_dmDriverVersion - 25) = aStubdisp[8];
          *(_DWORD *)(p_dmDriverVersion - 1) = 67175425;
          p_dmDriverVersion[1] = 220;
          *(_DWORD *)(p_dmDriverVersion + 53) = *(v14 - 1);
          *(_DWORD *)(p_dmDriverVersion + 55) = *v14;
          *(_DWORD *)(p_dmDriverVersion + 59) = 60;
          *(_DWORD *)(p_dmDriverVersion + 51) = 32;
          *(_DWORD *)(p_dmDriverVersion + 3) = 8126464;
          if ( *(v14 - 1) == dmPelsWidth && *v14 == dmPelsHeight )
            v13 = 1;
          p_dmDriverVersion += 110;
          v14 += 2;
          --v15;
        }
        while ( v15 );
        if ( v13 )
        {
          return 220 * v5;
        }
        else
        {
          v17 = v5 - 1;
          if ( v5 < (unsigned int)v7 )
            v17 = v5;
          v18 = v17;
          *(_OWORD *)a3[v18].dmDeviceName = *(_OWORD *)L"StubDisp";
          a3[v18].dmDeviceName[8] = aStubdisp[8];
          result = (unsigned int)(220 * (v17 + 1));
          *(_DWORD *)&a3[v18].dmSpecVersion = 67175425;
          a3[v18].dmSize = 220;
          a3[v18].dmPelsWidth = dmPelsWidth;
          a3[v18].dmPelsHeight = dmPelsHeight;
          a3[v18].dmDisplayFrequency = 60;
          a3[v18].dmBitsPerPel = 32;
          a3[v18].dmFields = 8126464;
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
      memset(a3, 0, v4);
      v19 = 18LL;
      v20 = (__int16 *)&unk_14027A242;
      v21 = &a3->dmDriverVersion;
      do
      {
        *(_OWORD *)(v21 - 33) = *(_OWORD *)L"StubDisp";
        *(v21 - 25) = aStubdisp[8];
        *(_DWORD *)(v21 - 1) = 67175425;
        v21[1] = 220;
        *(_DWORD *)(v21 + 53) = *(v20 - 1);
        v22 = *v20;
        v20 += 2;
        *(_DWORD *)(v21 + 55) = v22;
        *(_DWORD *)(v21 + 59) = 60;
        *(_DWORD *)(v21 + 51) = 32;
        *(_DWORD *)(v21 + 3) = 8126464;
        v21 += 110;
        --v19;
      }
      while ( v19 );
    }
    return 3960LL;
  }
  return result;
}
