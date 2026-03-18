/*
 * XREFs of InitScancodeMap @ 0x1400AB2C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     FastGetProfileValue @ 0x1400A9350 (FastGetProfileValue.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

int __fastcall InitScancodeMap(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const WCHAR *v4; // rsi
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rbx
  BYTE *Text; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rbx
  NTSTATUS v12; // eax
  ULONG v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const WCHAR *v16; // rsi
  int v17; // ebx
  BYTE *v18; // rdx
  _DWORD *v19; // rax
  void *v20; // rbx
  NTSTATUS v21; // eax
  ULONG v22; // ebx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  void *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  PULONG ResultLength; // [rsp+30h] [rbp-61h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG Length; // [rsp+48h] [rbp-49h] BYREF
  int v44; // [rsp+4Ch] [rbp-45h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 KeyValueInformation; // [rsp+68h] [rbp-29h] BYREF
  _WORD v48[40]; // [rsp+78h] [rbp-19h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 12896) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    GreDeleteFastMutex(*(char **)(UserSessionState + 12896));
    *(_QWORD *)(W32GetUserSessionState(v25, v24) + 12896) = 0LL;
  }
  Length = 0;
  v4 = L"Scancode Map";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v5 = -1LL;
  v44 = *(_DWORD *)(W32GetUserSessionState(v3, v2) + 62784);
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v48[0] = 0;
    v6 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)L"Scancode Map", &MessageResourceEntry) >= 0 )
    {
      v7 = -1LL;
      Text = MessageResourceEntry->Text;
      do
        ++v7;
      while ( *(_WORD *)&Text[2 * v7] );
      v6 = v7 - 2;
      if ( v6 < 0 )
        goto LABEL_8;
      if ( v6 > 39 )
        v6 = 39;
      memmove(v48, Text, 2LL * v6);
    }
    v48[v6] = 0;
LABEL_8:
    v4 = v48;
  }
  while ( 1 )
  {
    v11 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v44);
    if ( !v11 )
      break;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v4);
    v12 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v12 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v11);
      v13 = Length;
LABEL_12:
      if ( v13 - 13 <= 0xFFF1 )
      {
        v26 = (void *)Win32AllocPoolZInitImpl(256LL, v13 + 8LL, 0x6D637355u);
        v27 = v26;
        if ( v26 )
        {
          LODWORD(ResultLength) = v13;
          FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, v26, (size_t)ResultLength, 0);
          *(_QWORD *)(W32GetUserSessionState(v29, v28) + 12896) = v27;
        }
      }
      break;
    }
    if ( v12 == -2147483643 )
    {
      ZwClose(v11);
      v13 = DWORD2(KeyValueInformation);
      goto LABEL_12;
    }
    if ( !v44 )
    {
      ZwClose(v11);
      break;
    }
    ZwClose(v11);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 12904) )
  {
    v30 = W32GetUserSessionState(v15, v14);
    GreDeleteFastMutex(*(char **)(v30 + 12904));
    *(_QWORD *)(W32GetUserSessionState(v32, v31) + 12904) = 0LL;
    *(_DWORD *)(W32GetUserSessionState(v34, v33) + 12912) = 0;
  }
  Length = 0;
  v16 = L"Scancode Map Ex";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v44 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 62784);
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v48[0] = 0;
    v17 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)L"Scancode Map Ex", &MessageResourceEntry) >= 0 )
    {
      v18 = MessageResourceEntry->Text;
      do
        ++v5;
      while ( *(_WORD *)&v18[2 * v5] );
      v17 = v5 - 2;
      if ( (int)v5 - 2 < 0 )
        goto LABEL_20;
      if ( v17 > 39 )
        v17 = 39;
      memmove(v48, v18, 2LL * v17);
    }
    v48[v17] = 0;
LABEL_20:
    v16 = v48;
  }
  while ( 1 )
  {
    v19 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v44);
    v20 = v19;
    if ( !v19 )
      return (int)v19;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v16);
    v21 = ZwQueryValueKey(v20, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v21 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      LODWORD(v19) = ZwClose(v20);
      v22 = Length;
LABEL_24:
      if ( v22 >= 0x10 && (v22 & 0xF) == 0 )
      {
        v19 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v22, 0x6D637355u);
        v35 = v19;
        if ( v19 )
        {
          LODWORD(ResultLengtha) = v22;
          FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, v19, (size_t)ResultLengtha, 0);
          *(_QWORD *)(W32GetUserSessionState(v37, v36) + 12904) = v35;
          v19 = (_DWORD *)W32GetUserSessionState(v39, v38);
          v19[3228] = v22 >> 4;
        }
      }
      return (int)v19;
    }
    if ( v21 == -2147483643 )
    {
      LODWORD(v19) = ZwClose(v20);
      v22 = DWORD2(KeyValueInformation);
      goto LABEL_24;
    }
    if ( !v44 )
    {
      LODWORD(v19) = ZwClose(v20);
      return (int)v19;
    }
    ZwClose(v20);
  }
}
