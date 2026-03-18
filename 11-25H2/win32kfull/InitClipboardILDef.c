/*
 * XREFs of InitClipboardILDef @ 0x1402B4780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void InitClipboardILDef()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  NTSTATUS v3; // eax
  ULONG v4; // r14d
  ULONG i; // r15d
  unsigned __int64 v6; // r12
  unsigned int j; // esi
  bool v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Length; // [rsp+C0h] [rbp+40h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  Length = 0;
  KeyHandle = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v1 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v3 == -2147483643 || v3 == -1073741789 )
    {
      v0 = (_DWORD *)Win32AllocPoolZInit(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 && (unsigned int)(v0[8] - 1) <= 4 )
        {
          v4 = v0[9] + 16;
          if ( v0[9] < 0xFFFFFFF0 )
          {
            v1 = Win32AllocPoolZInit(v4, 1650684757LL);
            if ( v1 )
            {
              for ( i = 0; i < v0[8]; ++i )
              {
                if ( ZwEnumerateValueKey(KeyHandle, i, KeyValueBasicInformation, (PVOID)v1, v4, &Length) < 0 )
                  goto LABEL_20;
                if ( *(_DWORD *)(v1 + 4) == 1 )
                {
                  v6 = *(unsigned int *)(v1 + 8);
                  for ( j = 0; j < 5; ++j )
                  {
                    if ( !_wcsnicmp((const wchar_t *)*(&gaClipILDef + 4 * j), (const wchar_t *)(v1 + 12), v6 >> 1) )
                    {
                      *((_DWORD *)&gaClipILDef + 8 * j + 6) = 1;
                      break;
                    }
                  }
                }
              }
              dword_14039BB48 = 1;
              goto LABEL_29;
            }
          }
        }
      }
    }
  }
LABEL_20:
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      10,
      (__int64)&WPP_80c5c559a090326a6faa57b33a36599a_Traceguids);
  }
  dword_14039BB08 = 0;
  dword_14039BAE8 = 0;
  dword_14039BAA8 = 0;
  dword_14039BB48 = 1;
  dword_14039BB28 = 1;
  dword_14039BAC8 = 1;
  if ( v1 )
LABEL_29:
    Win32FreePool((void *)v1);
  if ( v0 )
    Win32FreePool(v0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
