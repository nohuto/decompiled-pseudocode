/*
 * XREFs of ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x18008D6C4
 * Callers:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008D3BC (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(FullScreenPositionerHelpers *this)
{
  int v1; // edx
  LSTATUS ValueW; // eax
  int v4; // ecx
  BOOL v5; // edx
  bool v6; // sf
  DWORD pdwType; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  int pvData; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_1808DB430;
  if ( !dword_1808DB430 )
  {
    pdwType = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FullScreen",
               L"IsForcedCompatModeEnabled",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    v4 = ValueW;
    if ( ValueW )
    {
      v5 = 1;
      if ( ValueW == 234 )
      {
LABEL_6:
        v6 = 1;
LABEL_7:
        if ( v6 )
        {
          v1 = dword_1808DB430;
        }
        else
        {
          v1 = v5 + 1;
          dword_1808DB430 = v1;
        }
        return v1 == 1;
      }
    }
    else
    {
      v4 = 13;
      if ( pdwType == 4 )
      {
        if ( !pvData || (v5 = 1, pvData == 1) )
        {
          v4 = 0;
          v5 = pvData != 1;
        }
      }
      else
      {
        v5 = 1;
        if ( pcbData == 4 )
        {
          if ( (_WORD)pvData == 48 || (v5 = 1, (_WORD)pvData == 49) )
          {
            v5 = (_WORD)pvData != 49;
            v4 = 0;
          }
        }
      }
    }
    v6 = v4 < 0;
    if ( v4 <= 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  return v1 == 1;
}
