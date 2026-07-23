/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x1800FB790
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x1800FB744 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 */

int __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // rbx
  unsigned int v5; // r10d
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  BOOLEAN v10; // r8
  unsigned __int64 v11; // rax
  int result; // eax

  v2 = a2[2];
  *(_DWORD *)(a1 + 128) = v2;
  v3 = 0LL;
  *(_DWORD *)(a1 + 288) = a2[22];
  v5 = a2[20];
  *(_DWORD *)(a1 + 64) = v5;
  Root = (unsigned __int64)LdrpMappingInfoIndex.Root;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) == 0 )
  {
LABEL_4:
    v7 = 0;
    if ( !Root )
      goto LABEL_13;
    while ( 1 )
    {
      if ( v2 < *(_DWORD *)(Root - 96) || v2 <= *(_DWORD *)(Root - 96) && v5 < *(_DWORD *)(Root - 160) )
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_13;
          v8 ^= Root;
        }
        if ( !v8 )
          goto LABEL_13;
      }
      else
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_12;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_12:
          v7 = 1;
          goto LABEL_13;
        }
      }
      Root = v8;
    }
  }
  if ( LdrpMappingInfoIndex.Root )
  {
    Root = (unsigned __int64)&LdrpMappingInfoIndex ^ (unsigned __int64)LdrpMappingInfoIndex.Root;
    goto LABEL_4;
  }
  Root = 0LL;
  v7 = 0;
LABEL_13:
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
    {
      v10 = 0;
      goto LABEL_23;
    }
    v9 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  v10 = 0;
  v3 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(v3 - 152) )
      {
        v11 = *(_QWORD *)v3;
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( !v11 )
            break;
          v11 ^= v3;
        }
        if ( !v11 )
          break;
      }
      else
      {
        v11 = *(_QWORD *)(v3 + 8);
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_22;
          v11 ^= v3;
        }
        if ( !v11 )
        {
LABEL_22:
          v10 = 1;
          break;
        }
      }
      v3 = v11;
    }
  }
LABEL_23:
  RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)v3, v10, (PRTL_BALANCED_NODE)(a1 + 200));
  result = *(_DWORD *)(a1 + 104) | 0x80;
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
