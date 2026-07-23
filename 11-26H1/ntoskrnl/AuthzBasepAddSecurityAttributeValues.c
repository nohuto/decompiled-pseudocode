/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x1403B24FC
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1403B0444 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403B27DC (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1403B31D0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int i; // r15d
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 SecurityAttributeValue; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v15; // ecx
  unsigned int v16; // ecx
  void *v17; // rcx
  __int64 v18; // rbx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // edx
  unsigned int v25; // edx

  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(a2 + 24) )
        return v4;
      if ( *(_WORD *)(a1 + 48) == 1 || *(_WORD *)(a1 + 48) == 2 )
      {
LABEL_10:
        v6 = i;
        v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * i);
        goto LABEL_11;
      }
      if ( *(_WORD *)(a1 + 48) == 3 )
        goto LABEL_29;
      if ( *(_WORD *)(a1 + 48) != 4 )
        break;
      v6 = i;
      v7 = *(_QWORD *)(a2 + 32) + 24LL * i;
LABEL_11:
      SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v7, *(unsigned __int16 *)(a1 + 48), a1);
      if ( !SecurityAttributeValue )
      {
        v9 = 0;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 3:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16 * v6);
            break;
          case 4:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24 * v6 + 8);
            break;
          case 5:
          case 0x10:
            v9 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16 * v6 + 8);
            break;
        }
        v10 = AuthzBasepAllocateSecurityAttributeValue(v9);
        v11 = v10;
        if ( !v10 )
          return (unsigned int)-1073741670;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 1:
          case 2:
LABEL_23:
            *(_QWORD *)(v10 + 40) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v6);
            break;
          case 3:
            v17 = (void *)(v10 + 64);
            v18 = 2 * v6;
            v19 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 8 * v18);
            *(_WORD *)(v10 + 40) = v19;
            *(_WORD *)(v10 + 42) = v19;
            *(_QWORD *)(v10 + 48) = v10 + 64;
            v20 = *(const void **)(*(_QWORD *)(a2 + 32) + 8 * v18 + 8);
            goto LABEL_36;
          case 4:
            *(_QWORD *)(v10 + 40) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24 * v6);
            v17 = (void *)(v10 + 64);
            v25 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24 * v6 + 8);
            *(_WORD *)(v10 + 48) = v25;
            v19 = v25;
            *(_QWORD *)(v10 + 56) = v10 + 64;
            v20 = *(const void **)(*(_QWORD *)(a2 + 32) + 24 * v6 + 16);
LABEL_36:
            memmove(v17, v20, v19);
            break;
          case 5:
            goto LABEL_44;
          case 6:
            goto LABEL_23;
          case 0x10:
LABEL_44:
            v17 = (void *)(v10 + 64);
            v23 = 2 * v6;
            v24 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8 * v23 + 8);
            *(_DWORD *)(v10 + 48) = v24;
            v19 = v24;
            *(_QWORD *)(v10 + 40) = v10 + 64;
            v20 = *(const void **)(*(_QWORD *)(a2 + 32) + 8 * v23);
            goto LABEL_36;
        }
        if ( (*(_DWORD *)(v11 + 32) & 2) == 0 )
        {
          v12 = *(_QWORD **)(a1 + 104);
          v13 = (_QWORD *)(v11 + 16);
          if ( *v12 != a1 + 96 )
            goto LABEL_26;
          *v13 = a1 + 96;
          *(_QWORD *)(v11 + 24) = v12;
          *v12 = v13;
          *(_QWORD *)(a1 + 104) = v13;
          *(_DWORD *)(v11 + 32) |= 2u;
          ++*(_DWORD *)(a1 + 88);
        }
        continue;
      }
      v15 = *(_DWORD *)(SecurityAttributeValue + 32);
      if ( (v15 & 4) == 0 )
        return (unsigned int)-1073741771;
      v16 = v15 & 0xFFFFFFFB;
      *(_DWORD *)(SecurityAttributeValue + 32) = v16;
      if ( (v16 & 2) != 0 )
      {
        v21 = *(_QWORD *)(SecurityAttributeValue + 16);
        if ( *(_QWORD *)(v21 + 8) != SecurityAttributeValue + 16
          || (v22 = *(_QWORD **)(SecurityAttributeValue + 24), *v22 != SecurityAttributeValue + 16) )
        {
LABEL_26:
          __fastfail(3u);
        }
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *(_DWORD *)(SecurityAttributeValue + 32) &= ~2u;
        --*(_DWORD *)(a1 + 88);
      }
      --*(_DWORD *)(a1 + 64);
    }
    if ( *(_WORD *)(a1 + 48) != 5 )
    {
      if ( *(_WORD *)(a1 + 48) == 6 )
        goto LABEL_10;
      if ( *(_WORD *)(a1 + 48) != 16 )
        return (unsigned int)-1073741811;
    }
LABEL_29:
    v7 = *(_QWORD *)(a2 + 32) + 16LL * i;
    v6 = i;
    goto LABEL_11;
  }
  return (unsigned int)-1073741811;
}
