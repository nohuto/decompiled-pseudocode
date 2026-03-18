/*
 * XREFs of InitScancodeMap @ 0x1400E2C80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     FastGetProfileValue @ 0x1400E13A0 (FastGetProfileValue.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

int __fastcall InitScancodeMap(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  const WCHAR *v6; // rsi
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  BYTE *Text; // rdx
  int v11; // edx
  int v12; // ecx
  void *v13; // rbx
  int v14; // r8d
  NTSTATUS v15; // eax
  ULONG v16; // ebx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  const WCHAR *v20; // rsi
  int v21; // ebx
  BYTE *v22; // rdx
  _DWORD *v23; // rax
  void *v24; // rbx
  NTSTATUS v25; // eax
  ULONG v26; // ebx
  __int64 UserSessionState; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  void *v34; // rax
  void *v35; // rsi
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  _DWORD *v49; // rdi
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  PULONG ResultLength; // [rsp+30h] [rbp-61h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG Length; // [rsp+48h] [rbp-49h] BYREF
  int v60; // [rsp+4Ch] [rbp-45h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 KeyValueInformation; // [rsp+68h] [rbp-29h] BYREF
  _WORD v64[40]; // [rsp+78h] [rbp-19h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 12888) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    GreDeleteFastMutex(*(char **)(UserSessionState + 12888), v28, v29, v30);
    *(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 12888) = 0LL;
  }
  Length = 0;
  v6 = L"Scancode Map";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v7 = -1LL;
  v60 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 62776);
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v64[0] = 0;
    v8 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)L"Scancode Map", &MessageResourceEntry) >= 0 )
    {
      v9 = -1LL;
      Text = MessageResourceEntry->Text;
      do
        ++v9;
      while ( *(_WORD *)&Text[2 * v9] );
      v8 = v9 - 2;
      if ( v8 < 0 )
        goto LABEL_8;
      if ( v8 > 39 )
        v8 = 39;
      memmove(v64, Text, 2LL * (unsigned int)v8);
    }
    v64[v8] = 0;
LABEL_8:
    v6 = v64;
  }
  while ( 1 )
  {
    v13 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v60);
    if ( !v13 )
      break;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v6);
    v15 = ZwQueryValueKey(v13, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v15 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v13);
      v16 = Length;
LABEL_12:
      if ( v16 - 13 <= 0xFFF1 )
      {
        v34 = (void *)Win32AllocPoolZInitImpl(256LL, v16 + 8LL, 0x6D637355u);
        v35 = v34;
        if ( v34 )
        {
          LODWORD(ResultLength) = v16;
          FastGetProfileValue(0LL, 8, L"Scancode Map", 0LL, v34, (size_t)ResultLength, 0);
          *(_QWORD *)(W32GetUserSessionState(v37, v36, v38) + 12888) = v35;
        }
      }
      break;
    }
    if ( v15 == -2147483643 )
    {
      ZwClose(v13);
      v16 = DWORD2(KeyValueInformation);
      goto LABEL_12;
    }
    if ( !v60 )
    {
      ZwClose(v13);
      break;
    }
    ZwClose(v13);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v12, v11, v14) + 12896) )
  {
    v39 = W32GetUserSessionState(v18, v17, v19);
    GreDeleteFastMutex(*(char **)(v39 + 12896), v40, v41, v42);
    *(_QWORD *)(W32GetUserSessionState(v44, v43, v45) + 12896) = 0LL;
    *(_DWORD *)(W32GetUserSessionState(v47, v46, v48) + 12904) = 0;
  }
  Length = 0;
  v20 = L"Scancode Map Ex";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v60 = *(_DWORD *)(W32GetUserSessionState(v18, v17, v19) + 62776);
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v64[0] = 0;
    v21 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)L"Scancode Map Ex", &MessageResourceEntry) >= 0 )
    {
      v22 = MessageResourceEntry->Text;
      do
        ++v7;
      while ( *(_WORD *)&v22[2 * v7] );
      v21 = v7 - 2;
      if ( (int)v7 - 2 < 0 )
        goto LABEL_20;
      if ( v21 > 39 )
        v21 = 39;
      memmove(v64, v22, 2LL * (unsigned int)v21);
    }
    v64[v21] = 0;
LABEL_20:
    v20 = v64;
  }
  while ( 1 )
  {
    v23 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v60);
    v24 = v23;
    if ( !v23 )
      return (int)v23;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v20);
    v25 = ZwQueryValueKey(v24, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v25 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      LODWORD(v23) = ZwClose(v24);
      v26 = Length;
LABEL_24:
      if ( v26 >= 0x10 && (v26 & 0xF) == 0 )
      {
        v23 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v26, 0x6D637355u);
        v49 = v23;
        if ( v23 )
        {
          LODWORD(ResultLengtha) = v26;
          FastGetProfileValue(0LL, 8, L"Scancode Map Ex", 0LL, v23, (size_t)ResultLengtha, 0);
          *(_QWORD *)(W32GetUserSessionState(v51, v50, v52) + 12896) = v49;
          v23 = (_DWORD *)W32GetUserSessionState(v54, v53, v55);
          v23[3226] = v26 >> 4;
        }
      }
      return (int)v23;
    }
    if ( v25 == -2147483643 )
    {
      LODWORD(v23) = ZwClose(v24);
      v26 = DWORD2(KeyValueInformation);
      goto LABEL_24;
    }
    if ( !v60 )
    {
      LODWORD(v23) = ZwClose(v24);
      return (int)v23;
    }
    ZwClose(v24);
  }
}
