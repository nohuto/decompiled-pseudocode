/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x14013EB3C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1402CA3AC (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?AssignFlickActions@@YAXPEAUtagFLICK_MAP@@@Z @ 0x14013ED78 (-AssignFlickActions@@YAXPEAUtagFLICK_MAP@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x14013EDFC (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x14013F240 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1, __int64 a2)
{
  NTSTATUS PointerDeviceCfgStringSetting; // ebx
  unsigned int v4; // r12d
  __int64 UserSessionState; // rsi
  int v7; // eax
  int v8; // ecx
  GUID *v9; // rdi
  GUID **v10; // r15
  const WCHAR *v11; // rdx
  void *v12; // rcx
  GUID *v13; // r13
  GUID v14; // xmm1
  __int64 v15; // rcx
  GUID v16; // xmm0
  void *DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B8h]
  GUID v20; // [rsp+68h] [rbp-A0h]
  _QWORD v21[15]; // [rsp+80h] [rbp-88h] BYREF
  WCHAR SourceString[128]; // [rsp+F8h] [rbp-10h] BYREF

  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  PointerDeviceCfgStringSetting = -1073741595;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 18456) )
  {
    v21[0] = a1;
    v21[2] = (char *)a1 + 16;
    v21[4] = (char *)a1 + 32;
    v21[6] = (char *)a1 + 48;
    v21[8] = (char *)a1 + 64;
    v21[10] = (char *)a1 + 80;
    v21[12] = (char *)a1 + 96;
    v21[14] = (char *)a1 + 112;
    v7 = RIMIsDefaultUILanguageRTL();
    v8 = *(_DWORD *)(UserSessionState + 18460);
    v9 = (GUID *)(UserSessionState + 18272);
    if ( v7 != v8 )
    {
      v16 = *(GUID *)(UserSessionState + 18368);
      *(GUID *)(UserSessionState + 18368) = *v9;
      *v9 = v16;
      *(_DWORD *)(UserSessionState + 18460) = v8 == 0;
    }
    PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                      0x7Cu,
                                      L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                      0x20019u,
                                      &DestinationString,
                                      0);
    if ( PointerDeviceCfgStringSetting >= 0 )
    {
      v10 = (GUID **)v21;
      while ( PointerDeviceCfgStringSetting >= 0 )
      {
        v11 = *(const WCHAR **)v9[-1].Data4;
        v12 = DestinationString;
        *(v10 - 1) = (GUID *)SourceString;
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v12, v11, SourceString, 0x7Du);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          RtlInitUnicodeString(&DestinationString_8, SourceString);
          v13 = *v10;
          PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString_8, *v10);
          if ( PointerDeviceCfgStringSetting >= 0 )
          {
            v14 = *v13;
            v20 = *v13;
            v19 = 0LL;
            v15 = -*(_QWORD *)&v20.Data1;
            if ( !*(_QWORD *)&v20.Data1 )
              v15 = *((_QWORD *)&v19 + 1) - *(_QWORD *)v20.Data4;
            if ( v15 )
              *v9 = v14;
          }
        }
        ++v4;
        v9 = (GUID *)((char *)v9 + 24);
        v10 += 2;
        if ( v4 >= 8 )
        {
          if ( PointerDeviceCfgStringSetting >= 0 )
            *(_DWORD *)(UserSessionState + 18456) = 1;
          break;
        }
      }
      ZwClose(DestinationString);
    }
  }
  if ( *(_DWORD *)(UserSessionState + 18456) )
  {
    PointerDeviceCfgStringSetting = 0;
    AssignFlickActions(a1);
  }
  return PointerDeviceCfgStringSetting >= 0;
}
