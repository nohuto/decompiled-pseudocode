/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180023E30
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000B24C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180023FF8 (-Free@ARI@@YAXPEAX@Z.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  unsigned int v6; // ebx
  NTSTATUS v8; // eax
  unsigned __int128 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  void *v12; // rdx
  struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *v13; // rbp
  ULONG v15; // ebx
  void *v16; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h]
  ULONG Size; // [rsp+88h] [rbp+20h] BYREF
  int Size_4; // [rsp+8Ch] [rbp+24h]

  Size_4 = HIDWORD(a4);
  v6 = 0;
  Size = 0;
  v8 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, &Size);
  if ( v8 == -1073741789 )
  {
    v9 = Size * (unsigned __int128)0x10uLL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    if ( is_mul_ok(Size, 0x10uLL)
      && (*(_QWORD *)&v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * Size), (v10 = v9) != 0) )
    {
      memset_0((void *)v9, 0, Size);
      v11 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, (PVOID)v10, Size, &Size);
      if ( v11 < 0 )
      {
        v15 = RtlNtStatusToDosErrorNoTeb(v11);
        ARI::Free((PVOID)v10, v16);
        return v15;
      }
      else
      {
        if ( *(_DWORD *)(v10 + 4) )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
          v18 = 0LL;
          while ( v6 < *(_DWORD *)(v10 + 4) )
          {
            v13 = (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *)(*(_QWORD *)(v10 + 8) + 40LL * v6);
            if ( !RtlCompareUnicodeString(&DestinationString, (PCUNICODE_STRING)v13, 1u) )
            {
              *a3 = v13;
              *a2 = v10;
              ARI::Free(0LL, v12);
              return 0;
            }
            ++v6;
          }
        }
        ARI::Free((PVOID)v10, v12);
        return 1168;
      }
    }
    else
    {
      ARI::Free(0LL, *((void **)&v9 + 1));
      return 8;
    }
  }
  else if ( v8 )
  {
    return RtlNtStatusToDosErrorNoTeb(v8);
  }
  else
  {
    return 1359;
  }
}
