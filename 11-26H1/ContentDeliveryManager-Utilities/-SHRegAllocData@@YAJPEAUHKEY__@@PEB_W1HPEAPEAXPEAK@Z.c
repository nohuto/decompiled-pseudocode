/*
 * XREFs of ?SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z @ 0x1800A50D8
 * Callers:
 *     ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800A4A7C (-GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall SHRegAllocData(HKEY a1, const wchar_t *a2, const wchar_t *a3, __int64 a4, void **a5)
{
  int v6; // esi
  LSTATUS v7; // eax
  int v8; // ebx
  LSTATUS ValueW; // eax
  void *pvData; // rax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Src[256]; // [rsp+50h] [rbp-B0h] BYREF

  hkey = a1;
  if ( a2 && *a2 )
  {
    v6 = 1;
    v7 = RegOpenKeyExW(a1, a2, 0, 1u, &hkey);
    a1 = hkey;
    v8 = v7;
  }
  else
  {
    v8 = 0;
    v6 = 0;
  }
  if ( v8 )
    goto LABEL_18;
  pcbData = 256;
  ValueW = RegGetValueW(a1, 0LL, a3, 2u, 0LL, Src, &pcbData);
  v8 = ValueW;
  if ( !ValueW || ValueW == 234 )
  {
    pvData = CoTaskMemAlloc(pcbData);
    *a5 = pvData;
    if ( pvData )
    {
      if ( v8 )
      {
        if ( RegGetValueW(hkey, 0LL, a3, 2u, 0LL, pvData, &pcbData) )
        {
          v8 = 1003;
          CoTaskMemFree(*a5);
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        memcpy_0(pvData, Src, pcbData);
      }
    }
    else
    {
      v8 = 14;
    }
  }
  if ( v6 )
    RegCloseKey(hkey);
  if ( v8 )
  {
LABEL_18:
    *a5 = 0LL;
    if ( v8 > 0 )
      return (unsigned __int16)v8 | 0x80070000;
  }
  return (unsigned int)v8;
}
