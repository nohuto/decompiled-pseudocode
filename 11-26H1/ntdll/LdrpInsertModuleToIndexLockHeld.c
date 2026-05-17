/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x1800FC040
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x1800FBFF4 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 */

int __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // rbx
  unsigned int v5; // r10d
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // r8
  unsigned __int64 v11; // rax
  int result; // eax

  v2 = a2[2];
  *(_DWORD *)(a1 + 128) = v2;
  v3 = 0LL;
  *(_DWORD *)(a1 + 288) = a2[22];
  v5 = a2[20];
  *(_DWORD *)(a1 + 64) = v5;
  v6 = LdrpMappingInfoIndex;
  if ( (qword_1801CB420 & 1) == 0 )
  {
LABEL_4:
    v7 = 0;
    if ( !v6 )
      goto LABEL_13;
    while ( 1 )
    {
      if ( v2 < *(_DWORD *)(v6 - 96) || v2 <= *(_DWORD *)(v6 - 96) && v5 < *(_DWORD *)(v6 - 160) )
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_1801CB420 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_13;
          v8 ^= v6;
        }
        if ( !v8 )
          goto LABEL_13;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_1801CB420 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_12;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_12:
          v7 = 1;
          goto LABEL_13;
        }
      }
      v6 = v8;
    }
  }
  if ( LdrpMappingInfoIndex )
  {
    v6 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
    goto LABEL_4;
  }
  v6 = 0LL;
  v7 = 0;
LABEL_13:
  RtlRbInsertNodeEx((unsigned __int64 *)&LdrpMappingInfoIndex, v6, v7, a1 + 224);
  v9 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801CB410 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
    {
      v10 = 0;
      goto LABEL_23;
    }
    v9 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
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
        if ( (qword_1801CB410 & 1) != 0 )
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
        if ( (qword_1801CB410 & 1) != 0 )
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
  RtlRbInsertNodeEx((unsigned __int64 *)&LdrpModuleBaseAddressIndex, v3, v10, a1 + 200);
  result = *(_DWORD *)(a1 + 104) | 0x80;
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
