/*
 * XREFs of RtlCreateAndSetSD @ 0x1800C8770
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x18013A130 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlAddAce @ 0x18003C430 (RtlAddAce.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlCreateAcl @ 0x18005D4F0 (RtlCreateAcl.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800C8D00 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1800C8D50 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1800C8DA0 (RtlSetSaclSecurityDescriptor.c)
 */

__int64 __fastcall RtlCreateAndSetSD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int Acl; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int i; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 Heap_0; // rax
  __int64 v16; // rdi
  __int64 v17; // r15
  unsigned int j; // esi
  char *v19; // r15
  __int64 v20; // r8
  unsigned int v21; // ebp
  int v22; // edx
  char v23; // al
  char v24; // cl
  __int64 v25; // rdx
  __int16 v26; // ax
  __int16 v27; // ax
  char *v29; // [rsp+38h] [rbp-50h]
  char *v30; // [rsp+40h] [rbp-48h]
  unsigned int v31; // [rsp+98h] [rbp+10h]

  v31 = a2;
  v30 = 0LL;
  Acl = 0;
  v29 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 8;
  v10 = 8;
  for ( i = 0; i < a2; ++i )
  {
    v12 = 4 * *(unsigned __int8 *)(**(_QWORD **)(a1 + 16LL * i + 8) + 1LL);
    if ( !*(_BYTE *)(a1 + 16LL * i) || *(_BYTE *)(a1 + 16LL * i) == 1 )
    {
      v13 = v12 + 20;
      if ( v12 + 20 + v9 < v9 )
        return (unsigned int)-1073741801;
      v9 += v12 + 20;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 16LL * i) != 2 )
        return 3221225485LL;
      v13 = v12 + 20;
      if ( v12 + 20 + v10 < v10 )
        return (unsigned int)-1073741801;
      v10 += v12 + 20;
    }
    a2 = v31;
    if ( v7 > v13 )
      v13 = v7;
    v7 = v13;
  }
  v14 = 40;
  if ( v9 != 8 )
  {
    if ( v9 + 40 < 0x28 )
      return (unsigned int)-1073741801;
    v14 = v9 + 40;
  }
  if ( v10 != 8 && v14 + v10 < v14 )
    return (unsigned int)-1073741801;
  Heap_0 = RtlAllocateHeap_0();
  v16 = Heap_0;
  if ( !Heap_0 )
    return (unsigned int)-1073741801;
  v17 = Heap_0 + 40;
  if ( v9 != 8 )
  {
    v30 = (char *)(Heap_0 + 40);
    v17 += v9;
    Acl = RtlCreateAcl(Heap_0 + 40, v9, 2);
    if ( Acl < 0 )
      goto LABEL_42;
  }
  if ( v10 != 8 )
  {
    v29 = (char *)v17;
    Acl = RtlCreateAcl(v17, v10, 2);
    if ( Acl < 0 )
      goto LABEL_42;
  }
  v8 = RtlAllocateHeap_0();
  if ( !v8 )
  {
    Acl = -1073741801;
    goto LABEL_42;
  }
  for ( j = 0; j < v31; ++j )
  {
    v19 = 0LL;
    v20 = **(_QWORD **)(a1 + 16LL * j + 8);
    v21 = 4 * *(unsigned __int8 *)(v20 + 1) + 8;
    if ( !*(_BYTE *)(a1 + 16LL * j) )
    {
      v22 = *(_DWORD *)(a1 + 16LL * j + 4);
      v23 = *(_BYTE *)(a1 + 16LL * j + 2);
      v24 = *(_BYTE *)(a1 + 16LL * j + 1);
      *(_BYTE *)v8 = 0;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(a1 + 16LL * j) == 1 )
    {
      v22 = *(_DWORD *)(a1 + 16LL * j + 4);
      v23 = *(_BYTE *)(a1 + 16LL * j + 2);
      v24 = *(_BYTE *)(a1 + 16LL * j + 1);
      *(_BYTE *)v8 = 1;
LABEL_28:
      v19 = v30;
      goto LABEL_29;
    }
    if ( *(_BYTE *)(a1 + 16LL * j) != 2 )
      goto LABEL_30;
    v22 = *(_DWORD *)(a1 + 16LL * j + 4);
    v23 = *(_BYTE *)(a1 + 16LL * j + 2);
    v24 = *(_BYTE *)(a1 + 16LL * j + 1);
    v19 = v29;
    *(_BYTE *)v8 = 2;
LABEL_29:
    *(_DWORD *)(v8 + 4) = v22;
    *(_BYTE *)(v8 + 1) = v23 | v24;
    v21 += 12;
    *(_WORD *)(v8 + 2) = v21;
    Acl = RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(v20 + 1) + 8, v8 + 8, v20);
LABEL_30:
    if ( Acl >= 0 )
    {
      Acl = RtlAddAce(v19, 2u, 0xFFFFFFFF, (char *)v8, v21);
      if ( Acl >= 0 )
        continue;
    }
    goto LABEL_42;
  }
  *(_OWORD *)v16 = 0LL;
  *(_OWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 32) = 0LL;
  *(_BYTE *)v16 = 1;
  Acl = RtlSetOwnerSecurityDescriptor(v16, a3, 0LL);
  if ( Acl >= 0 )
  {
    Acl = RtlSetGroupSecurityDescriptor(v16, a4, 0LL);
    if ( Acl >= 0 )
    {
      if ( *(_BYTE *)v16 == 1 )
      {
        v26 = *(_WORD *)(v16 + 2);
        if ( v26 < 0 )
        {
          Acl = -1073741703;
        }
        else
        {
          v27 = v26 | 4;
          *(_QWORD *)(v16 + 32) = 0LL;
          if ( v30 )
            *(_QWORD *)(v16 + 32) = v30;
          *(_WORD *)(v16 + 2) = v27 & 0xFFF7;
          LOBYTE(v25) = v29 != 0LL;
          Acl = RtlSetSaclSecurityDescriptor(v16, v25, v29, 0LL);
          if ( Acl >= 0 )
          {
            Acl = 0;
            *a5 = v16;
            goto LABEL_43;
          }
        }
      }
      else
      {
        Acl = -1073741736;
      }
    }
  }
LABEL_42:
  RtlFreeHeap_0();
  if ( v8 )
LABEL_43:
    RtlFreeHeap_0();
  return (unsigned int)Acl;
}
