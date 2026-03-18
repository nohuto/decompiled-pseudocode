/*
 * XREFs of ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1402AE1FC
 * Callers:
 *     WritePointerDeviceSettingsFull @ 0x1402AE5EC (WritePointerDeviceSettingsFull.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x140131C58 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1402AE390 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall SetFlickMap(struct tagFLICK_MAP *a1, __int64 a2)
{
  int v2; // r12d
  unsigned int v4; // r14d
  __int64 UserSessionState; // r15
  int v6; // ebx
  GUID *v7; // rsi
  const GUID *const *v8; // rdi
  const GUID *v9; // rax
  HANDLE Handle; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v13[15]; // [rsp+60h] [rbp-41h] BYREF

  Handle = 0LL;
  GuidString = 0LL;
  v2 = a2;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = OpenDeviceCfgKey(
         0x7Cu,
         L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
         0x20006u,
         &Handle,
         0);
  if ( v6 >= 0 )
  {
    v13[0] = a1;
    v13[2] = (char *)a1 + 16;
    v13[12] = (char *)a1 + 96;
    v13[4] = (char *)a1 + 32;
    v13[14] = (char *)a1 + 112;
    v13[6] = (char *)a1 + 48;
    v7 = (GUID *)(UserSessionState + 18280);
    v13[8] = (char *)a1 + 64;
    v13[10] = (char *)a1 + 80;
    v8 = (const GUID *const *)v13;
    do
    {
      if ( v6 < 0 )
        break;
      if ( v2 )
      {
        v6 = RtlStringFromGUID(*v8, &GuidString);
        if ( v6 >= 0 )
        {
          v6 = WritePointerDeviceCfgSetting(
                 Handle,
                 *(const unsigned __int16 **)v7[-1].Data4,
                 1u,
                 (unsigned __int8 *)GuidString.Buffer,
                 GuidString.MaximumLength);
          RtlFreeUnicodeString(&GuidString);
          GuidString.Buffer = 0LL;
        }
      }
      v9 = *v8;
      ++v4;
      v8 += 2;
      *v7 = *v9;
      v7 = (GUID *)((char *)v7 + 24);
    }
    while ( v4 < 8 );
    ZwClose(Handle);
  }
  if ( v6 >= 0 )
    *(_DWORD *)(UserSessionState + 18464) = 1;
  return v6 >= 0;
}
