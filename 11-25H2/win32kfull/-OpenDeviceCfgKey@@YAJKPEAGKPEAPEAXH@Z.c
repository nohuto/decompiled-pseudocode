/*
 * XREFs of ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x140131C58
 * Callers:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x140130BEC (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     EditionGetPointerDeviceConfigurationKey @ 0x140131B50 (EditionGetPointerDeviceConfigurationKey.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402ADE68 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402AE058 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1402AE1FC (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140131FF8 (RtlUnicodeStringValidateWorker.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140132044 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDeviceCfgKey(unsigned int a1, unsigned __int16 *a2, ACCESS_MASK a3, void **a4, int a5)
{
  unsigned __int16 *v7; // rsi
  size_t v8; // rdx
  NTSTATUS v9; // ebx
  ULONG v10; // r8d
  PWSTR Buffer; // rdi
  __int16 v12; // r10
  __int64 v13; // r11
  PWSTR v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  WCHAR *v18; // r10
  __int16 v19; // r8
  unsigned __int64 v20; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 UserSessionState; // rax
  NTSTATUS v28; // eax
  struct _UNICODE_STRING v29; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  v7 = a2;
  if ( a1 <= 0x15E )
  {
    *(_QWORD *)&v29.Length = 45875200LL;
    v29.Buffer = (PWSTR)&v34;
    if ( a1 == 122 )
    {
      v22 = RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", a2, 0x7AuLL) == 122;
    }
    else
    {
      if ( a1 != 136 )
        goto LABEL_4;
      v22 = RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status", a2, 0x88uLL) == 136;
    }
    if ( v22 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v24, v23) + 63520) )
      {
        UserSessionState = W32GetUserSessionState(v26, v25);
        v9 = RtlUnicodeStringCopy(&v29, (const struct _UNICODE_STRING *)(*(_QWORD *)(UserSessionState + 63520) + 200LL));
      }
      else
      {
        v9 = -1073741595;
      }
      goto LABEL_14;
    }
LABEL_4:
    KeyPath = 0LL;
    v9 = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( v9 < 0 )
      return (unsigned int)v9;
    Buffer = v29.Buffer;
    if ( v29.Buffer )
    {
      v9 = RtlUnicodeStringValidateWorker(&KeyPath, v8, v10);
      if ( v9 >= 0 )
      {
        v9 = 0;
        v14 = KeyPath.Buffer;
        v15 = (unsigned __int64)KeyPath.Length >> 1;
        if ( v13 )
        {
          while ( v15 )
          {
            --v15;
            *Buffer++ = *v14++;
            ++v12;
            if ( !--v13 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          if ( v15 )
            v9 = -2147483643;
        }
      }
      v29.Length = 2 * v12;
    }
    else
    {
      v9 = -1073741811;
    }
    RtlFreeUnicodeString(&KeyPath);
LABEL_14:
    if ( v9 >= 0 )
    {
      if ( (v29.Length & 1) != 0
        || (v29.MaximumLength & 1) != 0
        || v29.Length > v29.MaximumLength
        || v29.MaximumLength == 0xFFFF
        || !v29.Buffer && (v29.Length || v29.MaximumLength) )
      {
        v9 = -1073741811;
      }
      else
      {
        v9 = 0;
        v16 = (unsigned __int64)v29.Length >> 1;
        v17 = 0x7FFFLL;
        v18 = &v29.Buffer[v16];
        v19 = 0;
        v20 = ((unsigned __int64)v29.MaximumLength >> 1) - v16;
        if ( v20 )
        {
          while ( v17 )
          {
            if ( *v7 )
            {
              *v18++ = *v7++;
              --v17;
              ++v19;
              if ( --v20 )
                continue;
            }
            if ( v20 || !v17 )
              break;
            goto LABEL_35;
          }
        }
        else
        {
LABEL_35:
          if ( *v7 )
            v9 = -2147483643;
        }
        v29.Length = 2 * (v19 + v16);
      }
      if ( v9 >= 0 )
      {
        ObjectAttributes.ObjectName = &v29;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.RootDirectory = 0LL;
        if ( a5 )
        {
          Disposition = 0;
          v28 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        else
        {
          v28 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        }
        v9 = v28;
        if ( v28 >= 0 )
          *a4 = KeyHandle;
      }
    }
    return (unsigned int)v9;
  }
  return 2147483653LL;
}
