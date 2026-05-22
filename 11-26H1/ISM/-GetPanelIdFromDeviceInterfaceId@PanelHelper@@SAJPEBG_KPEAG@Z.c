/*
 * XREFs of ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x18010BC9C
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E1440 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180045D60 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DECDC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall PanelHelper::GetPanelIdFromDeviceInterfaceId(const unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v5; // rdi
  int ObjectProperties; // eax
  unsigned int v7; // ebx
  __int64 i; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 j; // r8
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+38h] BYREF

  v17 = a2;
  v5 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180254F54 > *(_DWORD *)(v5 + 32) )
  {
    Init_thread_header(&dword_180254F54);
    if ( dword_180254F54 == -1 )
    {
      *(DEVPROPKEY *)&byte_1802549E8 = DEVPKEY_Device_InstanceId;
      dword_1802549FC = 0;
      qword_180254A00 = 0LL;
      Init_thread_footer(&dword_180254F54);
    }
  }
  LODWORD(v17) = 0;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  v7 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)v17 )
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
          (const char *)0x80004005LL,
          (int)"Failed to query device instance ID.",
          (const char *)&v17);
        return 2147500037LL;
      }
      if ( *(_DWORD *)(48 * i + 0x10) == 256 )
      {
        v10 = *(_QWORD *)(48 * i) - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( !v10 )
          v10 = *(_QWORD *)(48 * i + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( !v10 && *(_DWORD *)(48 * i + 0x20) == 18 )
        {
          v11 = *(_QWORD *)(48 * i + 0x28);
          if ( v11 )
            break;
        }
      }
    }
    if ( dword_180254F58 > *(_DWORD *)(v5 + 32) )
    {
      Init_thread_header(&dword_180254F58);
      if ( dword_180254F58 == -1 )
      {
        dword_1802549D8 = 2;
        *(_OWORD *)&xmmword_1802549C8 = DEVPKEY_Device_PanelId;
        dword_1802549DC = 0;
        qword_1802549E0 = 0LL;
        Init_thread_footer(&dword_180254F58);
      }
    }
    v18 = 0;
    v12 = DevGetObjectProperties(3LL, v11, 0LL);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
        (const char *)(unsigned int)v12);
      return v7;
    }
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v18 )
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x61,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
          (const char *)0x80004005LL,
          (int)"Failed to query panel ID.",
          (const char *)&v18);
        return 2147500037LL;
      }
      if ( *(_DWORD *)(48 * j + 0x10) == 2 )
      {
        v14 = *(_QWORD *)(48 * j) - DEVPKEY_Device_PanelId;
        if ( !v14 )
          v14 = *(_QWORD *)(48 * j + 8) - *((_QWORD *)&DEVPKEY_Device_PanelId + 1);
        if ( !v14 && *(_DWORD *)(48 * j + 0x20) == 18 && *(_QWORD *)(48 * j + 0x28) )
          break;
      }
    }
    v15 = StringCchCopyW(a3, 57LL, *(char **)(48 * j + 0x28));
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
        (const char *)(unsigned int)v15,
        (int)&xmmword_1802549C8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)(unsigned int)ObjectProperties);
    return v7;
  }
}
