/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetAnonymousToken @ 0x1403B321C (SepGetAnonymousToken.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14052C4B4 (SepValidateAndCopyGlobalEntry.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403AF8F0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1403B31D0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140719D34 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rax
  int v7; // r15d
  _WORD *v8; // rdi
  ULONG_PTR v9; // rcx
  char *Pool2; // rax
  char *v11; // rbx
  unsigned int v12; // eax
  const void *v13; // rdx
  unsigned __int64 v14; // rdi
  int v15; // ecx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  int v18; // eax
  __int64 *i; // rdi
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  void **v22; // rdx
  _QWORD *v23; // r8
  _QWORD **v24; // rdi
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  char v27; // r14
  __int64 v28; // rdx
  _QWORD *v29; // rax
  int v30; // ecx
  _QWORD *v31; // rcx
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  int v35; // r8d
  int v36; // eax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  unsigned int v40; // eax
  __int64 v41; // rax
  _QWORD *v42; // rcx
  void **v43; // rsi
  _QWORD *v44; // rcx
  _QWORD *v45; // rdx
  void **v46; // rax
  __int64 *v47; // r14
  _QWORD **v48; // r8
  void **v49; // rax
  __int64 v50; // r9
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  int v53; // eax
  __int64 *v54; // r11
  PVOID v55; // r11
  __int64 *v56; // [rsp+78h] [rbp+20h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v56 = (__int64 *)(a1 + 8);
  v7 = 0;
  while ( v3 != v4 )
  {
    if ( !a3 || (*((_DWORD *)v3 + 13) & 1) == 0 )
    {
      v8 = v3 + 4;
      v9 = 256LL;
      if ( KeGetCurrentIrql() >= 2u )
        v9 = 64LL;
      Pool2 = (char *)ExAllocatePool2(v9);
      v11 = Pool2;
      if ( !Pool2 )
      {
LABEL_25:
        v7 = -1073741670;
        break;
      }
      memset_0(Pool2, 0, 0x70uLL);
      *((_WORD *)v11 + 17) = *v8;
      *((_QWORD *)v11 + 5) = v11 + 112;
      if ( v3 != (__int64 *)-32LL )
      {
        v12 = *((unsigned __int16 *)v11 + 17);
        v13 = (const void *)v3[5];
        if ( *v8 <= (unsigned __int16)v12 )
          v12 = (unsigned __int16)*v8;
        v14 = v12;
        *((_WORD *)v11 + 16) = v12;
        memmove(v11 + 112, v13, v12);
        if ( (unsigned __int64)*((unsigned __int16 *)v11 + 16) + 2 <= *((unsigned __int16 *)v11 + 17) )
          *(_WORD *)&v11[2 * (v14 >> 1) + 112] = 0;
      }
      *((_QWORD *)v11 + 10) = v11 + 72;
      *((_QWORD *)v11 + 9) = v11 + 72;
      *((_QWORD *)v11 + 13) = v11 + 96;
      *((_QWORD *)v11 + 12) = v11 + 96;
      v15 = *((_DWORD *)v3 + 13);
      *((_DWORD *)v11 + 13) = v15;
      if ( a3 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
        *((_DWORD *)v11 + 13) = v15 & 0xFFFFFF7E | 1;
      *((_WORD *)v11 + 24) = *((_WORD *)v3 + 24);
      if ( (*((_DWORD *)v11 + 14) & 2) == 0 )
      {
        v16 = *(_QWORD **)(a2 + 40);
        v17 = v11 + 16;
        if ( *v16 != a2 + 32 )
LABEL_24:
          __fastfail(3u);
        *v17 = a2 + 32;
        *((_QWORD *)v11 + 3) = v16;
        *v16 = v17;
        *(_QWORD *)(a2 + 40) = v17;
        *((_DWORD *)v11 + 14) |= 2u;
        ++*(_DWORD *)(a2 + 24);
      }
      v18 = *((unsigned __int16 *)v3 + 24);
      if ( v18 != 6 )
      {
        v40 = v18 - 1;
        if ( v40 <= 0xF )
          __asm { jmp     rcx }
        v7 = -1073741811;
        break;
      }
      for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
      {
        v20 = 256LL;
        if ( KeGetCurrentIrql() >= 2u )
          v20 = 64LL;
        v21 = ExAllocatePool2(v20);
        if ( !v21 )
          goto LABEL_25;
        *(_OWORD *)v21 = 0LL;
        *(_OWORD *)(v21 + 16) = 0LL;
        *(_OWORD *)(v21 + 32) = 0LL;
        *(_OWORD *)(v21 + 48) = 0LL;
        *(_QWORD *)(v21 + 40) = i[5];
        if ( (*(_DWORD *)(v21 + 32) & 2) == 0 )
        {
          v22 = (void **)*((_QWORD *)v11 + 13);
          v23 = (_QWORD *)(v21 + 16);
          if ( *v22 != v11 + 96 )
            goto LABEL_24;
          *v23 = v11 + 96;
          *(_QWORD *)(v21 + 24) = v22;
          *v22 = v23;
          *((_QWORD *)v11 + 13) = v23;
          *(_DWORD *)(v21 + 32) |= 2u;
          ++*((_DWORD *)v11 + 22);
        }
      }
    }
    v3 = (__int64 *)*v3;
    v4 = v56;
  }
  v24 = (_QWORD **)(a2 + 32);
  while ( 1 )
  {
    v25 = *v24;
    if ( *v24 == v24 )
      return (unsigned int)v7;
    v26 = v25 - 2;
    if ( v7 < 0 )
    {
      v27 = AuthzBasepRollbackSecurityAttributeChanges(a2, v25 - 2);
    }
    else
    {
      v27 = 0;
      if ( (v26[7] & 2) != 0 )
      {
        v28 = *v25;
        if ( *(_QWORD **)(*v25 + 8LL) != v25 )
          goto LABEL_24;
        v29 = (_QWORD *)v25[1];
        if ( (_QWORD *)*v29 != v25 )
          goto LABEL_24;
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        *((_DWORD *)v26 + 14) &= ~2u;
        if ( a2 )
          --*(_DWORD *)(a2 + 24);
      }
      v30 = v26[7] & 1;
      if ( (v26[7] & 4) != 0 )
      {
        if ( v30 )
        {
          v41 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 )
            goto LABEL_24;
          v42 = (_QWORD *)v26[1];
          if ( (_QWORD *)*v42 != v26 )
            goto LABEL_24;
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          *((_DWORD *)v26 + 14) &= ~1u;
          if ( a2 )
            --*(_DWORD *)a2;
        }
        v43 = (void **)(v26 + 9);
        while ( 1 )
        {
          v44 = *v43;
          if ( *v43 == v43 )
            break;
          if ( (v44[4] & 2) != 0 )
          {
            v48 = (_QWORD **)v44[2];
            if ( v48[1] != v44 + 2 )
              goto LABEL_24;
            v49 = (void **)v44[3];
            if ( *v49 != v44 + 2 )
              goto LABEL_24;
            *v49 = v48;
            v48[1] = v49;
            *((_DWORD *)v44 + 8) &= ~2u;
            --*((_DWORD *)v26 + 22);
          }
          if ( (v44[4] & 1) != 0 )
          {
            v45 = (_QWORD *)*v44;
            if ( *(_QWORD **)(*v44 + 8LL) != v44 )
              goto LABEL_24;
            v46 = (void **)v44[1];
            if ( *v46 != v44 )
              goto LABEL_24;
            *v46 = v45;
            v45[1] = v46;
            *((_DWORD *)v44 + 8) &= ~1u;
            --*((_DWORD *)v26 + 15);
            if ( (v44[4] & 4) != 0 )
              --*((_DWORD *)v26 + 16);
          }
          ExFreePoolWithTag(v44, 0);
        }
        v47 = (__int64 *)v26[12];
        while ( v47 != v26 + 12 )
        {
          v53 = *((_DWORD *)v47 + 4);
          v54 = v47 - 2;
          v47 = (__int64 *)*v47;
          if ( (v53 & 1) == 0 )
          {
            AuthzBasepRemoveSecurityAttributeValueFromLists(v26, v54, 0);
            ExFreePoolWithTag(v55, 0);
          }
        }
        v27 = 1;
      }
      else
      {
        if ( !v30 )
        {
          v31 = *(_QWORD **)(a2 + 16);
          if ( *v31 != a2 + 8 )
            goto LABEL_24;
          *v26 = a2 + 8;
          v26[1] = v31;
          *v31 = v26;
          *(_QWORD *)(a2 + 16) = v26;
          *((_DWORD *)v26 + 14) |= 1u;
          ++*(_DWORD *)a2;
        }
        v32 = v26 + 12;
        while ( 1 )
        {
          v33 = (_QWORD *)*v32;
          if ( (_QWORD *)*v32 == v32 )
            break;
          v34 = v33 - 2;
          v35 = v33[2] & 4;
          if ( (v33[2] & 2) != 0 )
          {
            v50 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 )
              goto LABEL_24;
            v51 = (_QWORD *)v33[1];
            if ( (_QWORD *)*v51 != v33 )
              goto LABEL_24;
            *v51 = v50;
            *(_QWORD *)(v50 + 8) = v51;
            *((_DWORD *)v34 + 8) &= ~2u;
            --*((_DWORD *)v26 + 22);
          }
          v36 = v34[4] & 1;
          if ( v35 )
          {
            if ( v36 )
            {
              v37 = *v34;
              if ( *(_QWORD **)(*v34 + 8LL) != v34 )
                goto LABEL_24;
              v38 = (_QWORD *)v34[1];
              if ( (_QWORD *)*v38 != v34 )
                goto LABEL_24;
              *v38 = v37;
              *(_QWORD *)(v37 + 8) = v38;
              *((_DWORD *)v34 + 8) &= ~1u;
              --*((_DWORD *)v26 + 15);
              if ( (v34[4] & 4) != 0 )
                --*((_DWORD *)v26 + 16);
            }
            ExFreePoolWithTag(v34, 0);
          }
          else if ( !v36 )
          {
            v52 = (_QWORD *)v26[10];
            if ( (_QWORD *)*v52 != v26 + 9 )
              goto LABEL_24;
            *v34 = v26 + 9;
            v34[1] = v52;
            *v52 = v34;
            v26[10] = v34;
            *((_DWORD *)v34 + 8) |= 1u;
            ++*((_DWORD *)v26 + 15);
          }
        }
      }
    }
    if ( v27 )
      ExFreePoolWithTag(v26, 0);
  }
}
