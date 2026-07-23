/*
 * XREFs of WmipGetGuidObjectInstanceInfo @ 0x140AEB244
 * Callers:
 *     WmipTranslateFileHandle @ 0x140829CD0 (WmipTranslateFileHandle.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140AEB150 (IoWMIDeviceObjectToInstanceName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     IoGetDeviceInstanceName @ 0x1404D9C4C (IoGetDeviceInstanceName.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall WmipGetGuidObjectInstanceInfo(__int64 a1, ULONG_PTR a2, UNICODE_STRING *a3, _DWORD *a4)
{
  _DWORD *v5; // r15
  UNICODE_STRING *v6; // rbp
  int DeviceInstanceName; // ebx
  __int64 v8; // rdi
  unsigned __int16 v9; // r14
  int v10; // r13d
  const wchar_t *Buffer; // rsi
  __int64 *v13; // r12
  __int64 *i; // rdi
  __int64 v15; // r15
  __int64 v16; // rbp
  UNICODE_STRING v17; // xmm0
  UNICODE_STRING Str2; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a3;
  Str2 = 0LL;
  DeviceInstanceName = IoGetDeviceInstanceName(a2, &Str2);
  if ( DeviceInstanceName >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = Str2.Length >> 1;
    v10 = 0;
    DeviceInstanceName = -1073741162;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    Buffer = Str2.Buffer;
    if ( *(_DWORD *)(v8 + 36) )
    {
      v13 = (__int64 *)(v8 + 56);
      for ( i = *(__int64 **)(v8 + 56); i != v13; i = (__int64 *)*i )
      {
        if ( (i[2] & 1) != 0 )
        {
          v15 = i[11];
          v16 = -1LL;
          do
            ++v16;
          while ( *(_WORD *)(v15 + 2 * v16 + 4) );
          if ( !wcsnicmp((const wchar_t *)(v15 + 4), Buffer, v9)
            && (unsigned __int16)v16 == v9 + 1
            && *(_WORD *)(v15 + 2LL * (unsigned __int16)v16 + 2) == 95 )
          {
            DeviceInstanceName = 0;
            v10 = *(_DWORD *)i[11];
            break;
          }
        }
      }
      v6 = a3;
      v5 = a4;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( DeviceInstanceName >= 0 )
    {
      v17 = Str2;
      *v5 = v10;
      Buffer = 0LL;
      Str2.Buffer = 0LL;
      DeviceInstanceName = 0;
      *v6 = v17;
    }
    if ( Buffer )
      RtlFreeAnsiString(&Str2);
  }
  return (unsigned int)DeviceInstanceName;
}
