/*
 * XREFs of ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x140139008
 * Callers:
 *     CreatePointerDeviceProcessEvents @ 0x140138F98 (CreatePointerDeviceProcessEvents.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     IsCurrentSessionHostServiceSession @ 0x140139520 (IsCurrentSessionHostServiceSession.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140139F58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CreatePointerDeviceProcessEvent(
        ACCESS_MASK AccessMask,
        int a2,
        BOOLEAN a3,
        unsigned __int16 *a4,
        void **a5)
{
  BOOL v6; // edi
  struct _ACL *v7; // rbx
  ULONG v8; // eax
  void *v9; // rax
  void *v10; // r15
  ULONG v12; // eax
  void *v13; // rax
  void *v14; // rsi
  ULONG v15; // ebx
  ULONG v16; // r12d
  struct _ACL *v17; // rax
  struct _ACL *v18; // r14
  __int64 v19; // rcx
  BOOLEAN InitialState[4]; // [rsp+20h] [rbp-E0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp-78h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v27; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v7 = 0LL;
  *(_DWORD *)v27.Value = 0;
  *(_WORD *)&v27.Value[4] = 256;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  v8 = RtlLengthRequiredSid(1u);
  v9 = (void *)Win32AllocPoolWithQuotaZInit(v8, 1702064981LL);
  v10 = v9;
  if ( v9 )
  {
    *RtlSubAuthoritySid(v9, 0) = 18;
    if ( RtlInitializeSid(v10, &IdentifierAuthority, 1u) >= 0 )
    {
      v12 = RtlLengthRequiredSid(1u);
      v13 = (void *)Win32AllocPoolWithQuotaZInit(v12, 1702064981LL);
      v14 = v13;
      if ( v13 )
      {
        *RtlSubAuthoritySid(v13, 0) = 0;
        if ( RtlInitializeSid(v14, &v27, 1u) >= 0 )
        {
          v15 = RtlLengthSid(v10);
          v16 = v15 + RtlLengthSid(v14) + 40;
          v17 = (struct _ACL *)Win32AllocPoolZInit(v16 + 40LL, 2020635477LL);
          v7 = v17;
          if ( v17 )
          {
            v18 = v17 + 5;
            if ( RtlCreateAcl(v17 + 5, v16, 2u) >= 0
              && RtlAddAccessAllowedAce(v18, 2u, AccessMask, v14) >= 0
              && RtlAddAccessAllowedAce(v18, 2u, 0x1F0003u, v10) >= 0
              && RtlCreateSecurityDescriptor(v7, 1u) >= 0
              && RtlSetDaclSecurityDescriptor(v7, 1u, v18, 0) >= 0
              && !(unsigned int)IsCurrentSessionHostServiceSession() )
            {
              *(_DWORD *)InitialState = W32GetCurrentWin32kSessionId(v19);
              if ( (int)StringCchPrintfW(
                          SourceString,
                          0x100uLL,
                          L"%ws\\%ld\\BaseNamedObjects\\%ws",
                          L"\\Sessions",
                          *(_DWORD *)InitialState,
                          a4) >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, SourceString);
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 192;
                ObjectAttributes.SecurityDescriptor = v7;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                v6 = ZwCreateEvent(a5, 0x1F0003u, &ObjectAttributes, (EVENT_TYPE)(a2 == 0), a3) >= 0;
              }
            }
          }
        }
        Win32FreePool(v14);
      }
    }
    Win32FreePool(v10);
    if ( v7 )
      Win32FreePool(v7);
  }
  return v6;
}
