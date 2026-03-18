/*
 * XREFs of ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1402C9FDC
 * Callers:
 *     WritePointerDeviceSettingsFull @ 0x1402CA69C (WritePointerDeviceSettingsFull.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x14013F240 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1402CA150 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
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
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v12[15]; // [rsp+48h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+77h] BYREF

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
    v12[0] = a1;
    v12[2] = (char *)a1 + 16;
    v12[12] = (char *)a1 + 96;
    v12[4] = (char *)a1 + 32;
    v12[14] = (char *)a1 + 112;
    v12[6] = (char *)a1 + 48;
    v7 = (GUID *)(UserSessionState + 18272);
    v12[8] = (char *)a1 + 64;
    v12[10] = (char *)a1 + 80;
    v8 = (const GUID *const *)v12;
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
    *(_DWORD *)(UserSessionState + 18456) = 1;
  return v6 >= 0;
}
