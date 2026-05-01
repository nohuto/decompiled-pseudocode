/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18000F9C0
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18000F920 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x18000F730 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURIT.c)
 *     memset_0 @ 0x18000FE42 (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(HANDLE TokenHandle, _BYTE *a2, bool *a3)
{
  NTSTATUS v5; // eax
  PVOID Heap; // rax
  PVOID v8; // rdi
  int v9; // eax
  ULONG v10; // ebx
  __int64 v11; // rbx
  const UNICODE_STRING *v12; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG TokenInformationLength; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h]

  *a2 = 0;
  TokenInformationLength = 0;
  v5 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
  if ( v5 == -1073741789 )
  {
    v15 = 0LL;
    if ( is_mul_ok(TokenInformationLength, 0x10uLL)
      && (Heap = RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   (TokenInformationLength * (unsigned __int128)0x10uLL) >> 64,
                   16LL * TokenInformationLength),
          (v8 = Heap) != 0LL) )
    {
      memset_0(Heap, 0, TokenInformationLength);
      v9 = NtQueryInformationToken(
             TokenHandle,
             TokenSecurityAttributes,
             v8,
             TokenInformationLength,
             &TokenInformationLength);
      if ( v9 >= 0 )
      {
        if ( *((_DWORD *)v8 + 1) )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
          v11 = 0LL;
          if ( *((_DWORD *)v8 + 1) )
          {
            while ( 1 )
            {
              v12 = (const UNICODE_STRING *)(*((_QWORD *)v8 + 1) + 40 * v11);
              if ( v12[1].Length == 3 && !RtlCompareUnicodeString(&DestinationString, v12, 1u) )
                break;
              v11 = (unsigned int)(v11 + 1);
              if ( (unsigned int)v11 >= *((_DWORD *)v8 + 1) )
                goto LABEL_16;
            }
            *a2 = 1;
          }
        }
LABEL_16:
        ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v8);
        return 0;
      }
      else
      {
        v10 = RtlNtStatusToDosErrorNoTeb(v9);
        ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v8);
        return v10;
      }
    }
    else
    {
      ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(0LL);
      return 8;
    }
  }
  else if ( v5 )
  {
    return RtlNtStatusToDosErrorNoTeb(v5);
  }
  else
  {
    return 1359;
  }
}
