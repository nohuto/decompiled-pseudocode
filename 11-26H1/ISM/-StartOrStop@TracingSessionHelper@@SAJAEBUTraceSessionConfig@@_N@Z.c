/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D80BC
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D6FF0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D71A0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D83D0 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180023358 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081CC0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800D3DE0 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ??1?$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U?$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std@@QEAA@XZ @ 0x1800D47E4 (--1-$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U-$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std.c)
 *     ??1?$unique_storage@U?$resource_policy@_K$$A6AK_K@Z$1?CloseTrace@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0?0$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D4808 (--1-$unique_storage@U-$resource_policy@_K$$A6AK_K@Z$1-CloseTrace@@YAK0@ZU-$integral_constant@_K$.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5064 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1800D8DBC (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(const struct TraceSessionConfig *a1, char a2)
{
  unsigned __int16 *v4; // r12
  size_t v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  const unsigned __int16 *v12; // rdx
  int DirectoryDeepNoThrow; // eax
  int v14; // r14d
  unsigned int v15; // esi
  unsigned int *v16; // rbx
  unsigned __int16 *v17; // rcx
  __int64 v18; // rdx
  const WCHAR *v19; // rdx
  const WCHAR *v20; // rdx
  ULONG started; // eax
  __int64 v22; // rdx
  int v23; // ebx
  __int64 v24; // rbx
  __int64 v25; // rdi
  const WCHAR *v26; // rdx
  signed int v27; // eax
  ULONG64 TraceHandle; // [rsp+48h] [rbp-39h] BYREF
  unsigned int *v30; // [rsp+50h] [rbp-31h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+58h] [rbp-29h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+88h] [rbp+7h] BYREF
  int v33; // [rsp+98h] [rbp+17h]
  unsigned __int64 v34; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v4 = (unsigned __int16 *)((char *)a1 + 48);
  v5 = std::_WChar_traits<unsigned short>::length((__int64)L"\\");
  v8 = v4;
  if ( *((_QWORD *)v4 + 3) > 7uLL )
    v8 = *(unsigned __int16 **)v4;
  v9 = std::_Traits_find_last_of<std::char_traits<unsigned short>>(v8, *((_QWORD *)v4 + 2), v6, v7, v5);
  v11 = std::wstring::substr(v4, &EnableParameters, v10, v9);
  if ( *(_QWORD *)(v11 + 24) > 7uLL )
    v11 = *(_QWORD *)v11;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow((const WCHAR *)v11, v12);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x56,
      (int)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::_Tidy_deallocate(&EnableParameters);
  std::wstring::wstring((__int64)InstanceName, a1);
  v14 = 2 * v33;
  v15 = 2 * v33 + 644;
  v16 = (unsigned int *)operator new(v15);
  v30 = v16;
  memset_0(v16, 0, v15);
  *v16 = v15;
  v16[11] = 0x20000;
  v16[10] = 1;
  *(_OWORD *)(v16 + 6) = *((_OWORD *)a1 + 2);
  v16[12] = *((_DWORD *)a1 + 20);
  v16[17] = *((_DWORD *)a1 + 21);
  v16[16] = *((_DWORD *)a1 + 22);
  v16[14] = *((_DWORD *)a1 + 23);
  v16[13] = *((_DWORD *)a1 + 24);
  v16[15] = *((_DWORD *)a1 + 25);
  v16[29] = 120;
  v16[28] = v14 + 122;
  v17 = v4;
  if ( *((_QWORD *)v4 + 3) > 7uLL )
    v17 = *(unsigned __int16 **)v4;
  v18 = (__int64)&v17[*((_QWORD *)v4 + 2)];
  if ( *((_QWORD *)v4 + 3) > 7uLL )
    v4 = *(unsigned __int16 **)v4;
  std::_Copy_memmove<enum _Button *,enum _Button *>(v4, v18, (char *)v16 + (unsigned int)(v14 + 122));
  TraceHandle = -1LL;
  if ( !a2 )
  {
    v26 = (const WCHAR *)InstanceName;
    if ( v34 > 7 )
      v26 = InstanceName[0];
    v27 = ControlTraceW(0LL, v26, (PEVENT_TRACE_PROPERTIES)v16, 1u);
    v23 = v27;
    if ( v27 > 0 )
      v23 = (unsigned __int16)v27 | 0x80070000;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v23);
      goto LABEL_33;
    }
LABEL_32:
    v23 = 0;
    goto LABEL_33;
  }
  v19 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v19 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v19, (PEVENT_TRACE_PROPERTIES)v16, 0) != 4201 )
  {
    v23 = 1;
    goto LABEL_33;
  }
  v20 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v20 = *(const WCHAR **)a1;
  started = StartTraceW(&TraceHandle, v20, (PEVENT_TRACE_PROPERTIES)v16);
  if ( !started )
  {
    v24 = *((_QWORD *)a1 + 13);
    v25 = *((_QWORD *)a1 + 14);
    while ( v24 != v25 )
    {
      memset(&EnableParameters.ControlFlags, 0, 40);
      *(_QWORD *)&EnableParameters.Version = 2LL;
      started = EnableTraceEx2(
                  TraceHandle,
                  (LPCGUID)v24,
                  1u,
                  *(_BYTE *)(v24 + 16),
                  *(_QWORD *)(v24 + 24),
                  *(_QWORD *)(v24 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v22 = 148LL;
        goto LABEL_19;
      }
      v24 += 40LL;
    }
    goto LABEL_32;
  }
  v22 = 131LL;
LABEL_19:
  v23 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)v22,
          (int)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
          (const char *)started);
LABEL_33:
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>(&TraceHandle);
  std::wstring::_Tidy_deallocate(InstanceName);
  std::unique_ptr<_EVENT_TRACE_PROPERTIES>::~unique_ptr<_EVENT_TRACE_PROPERTIES>((void **)&v30);
  return (unsigned int)v23;
}
