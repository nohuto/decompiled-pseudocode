/*
 * XREFs of GetLocalMachineRegistryDWORDValues @ 0x140145838
 * Callers:
 *     EditionOverrideUserTouchGestureSettings @ 0x140145770 (EditionOverrideUserTouchGestureSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1401457C0 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1402A5794 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140145B70 (RtlUnicodeStringValidateWorker_0.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetLocalMachineRegistryDWORDValues(__int64 a1, size_t a2, __int128 *a3)
{
  __int128 v3; // xmm0
  _WORD *v5; // rdi
  NTSTATUS PointerDeviceCfgDWORDSetting; // ebx
  __int64 v7; // r9
  _WORD *v8; // r10
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  __int64 v11; // r8
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rcx
  _WORD *v15; // r10
  __int16 v16; // r8
  unsigned __int64 v17; // rdx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE *v20; // [rsp+30h] [rbp-D8h]
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v24[704]; // [rsp+88h] [rbp-80h] BYREF

  v3 = *a3;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_OWORD *)KeyHandle_8 = v3;
  KeyHandle = 0LL;
  v5 = (_WORD *)a2;
  SourceString.Buffer = (PWSTR)45875200;
  v20 = v24;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringValidateWorker_0((PCUNICODE_STRING)&SourceString.Buffer, a2, (ULONG)a3);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    v7 = 0x7FFFLL;
    v8 = v24;
    v9 = 0x7FFFLL;
    v10 = L"\\Registry\\Machine";
    v11 = 350LL;
    PointerDeviceCfgDWORDSetting = 0;
    v12 = 0;
    while ( v9 )
    {
      if ( *v10 )
      {
        *v8++ = *v10++;
        --v9;
        ++v12;
        if ( --v11 )
          continue;
      }
      if ( !v11 && v9 && *v10 )
        PointerDeviceCfgDWORDSetting = -2147483643;
      break;
    }
    v13 = 2 * v12;
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      if ( (v13 & 1) != 0
        || (BYTE2(SourceString.Buffer) & 1) != 0
        || v13 > WORD1(SourceString.Buffer)
        || WORD1(SourceString.Buffer) == 0xFFFF
        || !v20 && (v13 || WORD1(SourceString.Buffer)) )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        PointerDeviceCfgDWORDSetting = 0;
        v14 = (unsigned __int64)v13 >> 1;
        v15 = &v20[2 * v14];
        v16 = 0;
        v17 = ((unsigned __int64)WORD1(SourceString.Buffer) >> 1) - v14;
        if ( v17 )
        {
          while ( v7 )
          {
            if ( *v5 )
            {
              *v15++ = *v5++;
              --v7;
              ++v16;
              if ( --v17 )
                continue;
            }
            if ( v17 || !v7 )
              break;
            goto LABEL_27;
          }
        }
        else
        {
LABEL_27:
          if ( *v5 )
            PointerDeviceCfgDWORDSetting = -2147483643;
        }
        LOWORD(SourceString.Buffer) = 2 * (v16 + v14);
        if ( PointerDeviceCfgDWORDSetting >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&SourceString.Buffer;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          if ( PointerDeviceCfgDWORDSetting >= 0 )
          {
            PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(KeyHandle, KeyHandle_8);
            if ( PointerDeviceCfgDWORDSetting >= 0 && HIDWORD(KeyHandle_8[1]) != LODWORD(KeyHandle_8[1]) )
            {
              *((_DWORD *)a3 + 3) = HIDWORD(KeyHandle_8[1]);
              PointerDeviceCfgDWORDSetting = 0;
            }
            ZwClose(KeyHandle);
          }
        }
      }
    }
  }
  return (unsigned int)PointerDeviceCfgDWORDSetting;
}
