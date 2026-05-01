/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1806539C8
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180653978 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x180190FF8 (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
 *     ??1?$AutoPtrAriHeap@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@QEAA@XZ @ 0x18019356C (--1-$AutoPtrAriHeap@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@QEAA@XZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(HANDLE TokenHandle, _BYTE *a2, bool *a3)
{
  ULONG v3; // edi
  NTSTATUS v6; // eax
  PVOID v8; // rax
  PVOID v9; // rbx
  int v10; // eax
  unsigned int i; // esi
  const UNICODE_STRING *v12; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG TokenInformationLength; // [rsp+68h] [rbp+10h] BYREF
  PVOID v15; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  *a2 = 0;
  TokenInformationLength = 0;
  v6 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
  if ( v6 == -1073741789 )
  {
    v8 = ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(TokenInformationLength);
    v15 = v8;
    v9 = v8;
    if ( v8 )
    {
      memset_0(v8, 0, TokenInformationLength);
      v10 = NtQueryInformationToken(
              TokenHandle,
              TokenSecurityAttributes,
              v9,
              TokenInformationLength,
              &TokenInformationLength);
      if ( v10 >= 0 )
      {
        if ( *((_DWORD *)v9 + 1) )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
          for ( i = 0; i < *((_DWORD *)v9 + 1); ++i )
          {
            v12 = (const UNICODE_STRING *)(*((_QWORD *)v9 + 1) + 40LL * i);
            if ( v12[1].Length == 3 && !RtlCompareUnicodeString(&DestinationString, v12, 1u) )
            {
              *a2 = 1;
              break;
            }
          }
        }
      }
      else
      {
        v3 = RtlNtStatusToDosErrorNoTeb(v10);
      }
    }
    else
    {
      v3 = 8;
    }
    ARI::AutoPtrAriHeap<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>::~AutoPtrAriHeap<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(&v15);
    return v3;
  }
  else if ( v6 )
  {
    return RtlNtStatusToDosErrorNoTeb(v6);
  }
  else
  {
    return 1359;
  }
}
