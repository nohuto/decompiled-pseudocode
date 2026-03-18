/*
 * XREFs of PopBcdEstablishResumeObject @ 0x140B68C20
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x140779B20 (BcdQueryObject.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x1407E15C4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409D3C04 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdGetElementData @ 0x1409D4B60 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, _QWORD *a2)
{
  void *v3; // rbx
  int ElementData; // edi
  int v6; // eax
  int v7; // eax
  _WORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+24h] [rbp-3Ch] BYREF
  HANDLE v11; // [rsp+28h] [rbp-38h] BYREF
  void *v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v9[0] = 0;
  v13 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY.Data1, &v11);
  if ( ElementData >= 0 )
  {
    v10 = 16;
    ElementData = BcdGetElementData((__int64)v11, 587202563LL, (__int64)&v14, (__int64)&v10);
    if ( ElementData >= 0 )
    {
      v6 = BcdOpenObject(a1, (unsigned int *)&v14, &v12);
      v3 = v12;
      ElementData = v6;
      if ( v6 >= 0 )
      {
        ElementData = BcdQueryObject((__int64)v12, 1, (__int64)&v13, 0LL);
        if ( ElementData >= 0 )
        {
          if ( (HIDWORD(v13) & 0xF0000000) == 0x10000000
            && (HIDWORD(v13) & 0xF00000) == 0x200000
            && (HIDWORD(v13) & 0xFFFFF) == 4 )
          {
            v10 = 2;
            if ( (int)BcdGetElementData((__int64)v3, 637534211LL, (__int64)v9, (__int64)&v10) < 0 || !LOBYTE(v9[0]) )
            {
              ElementData = PopBcdSetDefaultResumeObjectElements((__int64)v3, (__int64)v11);
              if ( ElementData < 0 )
                goto LABEL_12;
            }
            goto LABEL_11;
          }
          ElementData = -1073741275;
        }
      }
      if ( v3 )
      {
        BcdCloseObject(v3);
        v3 = 0LL;
        v12 = 0LL;
      }
    }
    if ( !InitIsWinPEMode )
    {
      v7 = PopBcdRegenerateResumeObject(a1, (__int64)v11, &v12);
      v3 = v12;
      ElementData = v7;
    }
    if ( ElementData >= 0 )
    {
LABEL_11:
      ElementData = PopBcdCopyLoaderObjectSettings((__int64)v11, (__int64)v3);
      goto LABEL_12;
    }
    v3 = 0LL;
  }
LABEL_12:
  if ( v11 )
    BcdCloseObject(v11);
  if ( ElementData < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementData;
LABEL_25:
    BcdCloseObject(v3);
    return (unsigned int)ElementData;
  }
  if ( !a2 )
    goto LABEL_25;
  *a2 = v3;
  return (unsigned int)ElementData;
}
