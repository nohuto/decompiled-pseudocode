/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x1403CA6D0
 * Callers:
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140529F94 (SepValidateAndCopyGlobalEntry.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x140AFBF28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1402ACAA0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1403CAE00 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140715044 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rax
  char v5; // bp
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
  __int64 *i; // rdi
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  void **v21; // rdx
  _QWORD *v22; // r8
  _QWORD **v23; // rdi
  _QWORD *v24; // rcx
  _QWORD *v25; // rbx
  char v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rax
  int v29; // ecx
  _QWORD *v30; // rcx
  _QWORD *v31; // rsi
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  int v34; // r8d
  int v35; // eax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v39; // rax
  _QWORD *v40; // rcx
  void **v41; // rsi
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  void **v44; // rax
  __int64 *v45; // r14
  _QWORD **v46; // r8
  void **v47; // rax
  __int64 *v48; // rbp
  _WORD *v49; // r14
  ULONG_PTR v50; // rcx
  char *v51; // rax
  char *v52; // rdi
  const void *v53; // rdx
  unsigned int v54; // eax
  unsigned __int64 v55; // r14
  void **v56; // rcx
  _QWORD *v57; // rdx
  __int64 *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rdi
  void **v61; // rcx
  _QWORD *v62; // rdx
  __int64 *v63; // r14
  __int64 SecurityAttributeValue; // rax
  __int64 v65; // rdi
  void *v66; // rcx
  unsigned int v67; // eax
  void **v68; // rcx
  _QWORD *v69; // rdx
  __int64 v70; // r9
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  int v73; // eax
  __int64 *v74; // r11
  PVOID v75; // r11
  __int64 *v77; // [rsp+78h] [rbp+20h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v77 = (__int64 *)(a1 + 8);
  v5 = a3;
  v7 = 0;
  while ( v3 != v4 )
  {
    if ( !v5 || (*((_DWORD *)v3 + 13) & 1) == 0 )
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
      if ( v5 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
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
      if ( *((_WORD *)v3 + 24) == 6 )
      {
LABEL_17:
        for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
        {
          v19 = 256LL;
          if ( KeGetCurrentIrql() >= 2u )
            v19 = 64LL;
          v20 = ExAllocatePool2(v19);
          if ( !v20 )
            goto LABEL_25;
          *(_OWORD *)v20 = 0LL;
          *(_OWORD *)(v20 + 16) = 0LL;
          *(_OWORD *)(v20 + 32) = 0LL;
          *(_OWORD *)(v20 + 48) = 0LL;
          *(_QWORD *)(v20 + 40) = i[5];
          if ( (*(_DWORD *)(v20 + 32) & 2) == 0 )
          {
            v21 = (void **)*((_QWORD *)v11 + 13);
            v22 = (_QWORD *)(v20 + 16);
            if ( *v21 != v11 + 96 )
              goto LABEL_24;
            *v22 = v11 + 96;
            *(_QWORD *)(v20 + 24) = v21;
            *v21 = v22;
            *((_QWORD *)v11 + 13) = v22;
            *(_DWORD *)(v20 + 32) |= 2u;
            ++*((_DWORD *)v11 + 22);
          }
        }
      }
      else
      {
        switch ( *((_WORD *)v3 + 24) )
        {
          case 1:
          case 2:
            goto LABEL_17;
          case 3:
            v48 = (__int64 *)v3[9];
            while ( 2 )
            {
              if ( v48 == v3 + 9 )
                goto LABEL_49;
              v49 = v48 + 5;
              v50 = 256LL;
              if ( KeGetCurrentIrql() >= 2u )
                v50 = 64LL;
              v51 = (char *)ExAllocatePool2(v50);
              v52 = v51;
              if ( !v51 )
                goto LABEL_25;
              memset_0(v51, 0, 0x40uLL);
              *((_WORD *)v52 + 21) = *v49;
              *((_QWORD *)v52 + 6) = v52 + 64;
              if ( v48 != (__int64 *)-40LL )
              {
                v53 = (const void *)v48[6];
                v54 = *((unsigned __int16 *)v52 + 21);
                if ( *v49 <= (unsigned __int16)v54 )
                  v54 = (unsigned __int16)*v49;
                v55 = v54;
                *((_WORD *)v52 + 20) = v54;
                memmove(v52 + 64, v53, v54);
                if ( (unsigned __int64)*((unsigned __int16 *)v52 + 20) + 2 <= *((unsigned __int16 *)v52 + 21) )
                  *(_WORD *)&v52[2 * (v55 >> 1) + 64] = 0;
              }
              if ( (*((_DWORD *)v52 + 8) & 2) != 0 )
                goto LABEL_88;
              v56 = (void **)*((_QWORD *)v11 + 13);
              v57 = v52 + 16;
              if ( *v56 == v11 + 96 )
              {
                *v57 = v11 + 96;
                *((_QWORD *)v52 + 3) = v56;
                *v56 = v57;
                *((_QWORD *)v11 + 13) = v57;
                *((_DWORD *)v52 + 8) |= 2u;
                ++*((_DWORD *)v11 + 22);
LABEL_88:
                v48 = (__int64 *)*v48;
                continue;
              }
              goto LABEL_24;
            }
          case 4:
            v63 = (__int64 *)v3[9];
            while ( 2 )
            {
              if ( v63 == v3 + 9 )
                goto LABEL_49;
              SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v63 + 24));
              v65 = SecurityAttributeValue;
              if ( !SecurityAttributeValue )
                goto LABEL_25;
              v66 = (void *)(SecurityAttributeValue + 64);
              *(_QWORD *)(SecurityAttributeValue + 40) = v63[5];
              v67 = *((unsigned __int16 *)v63 + 24);
              *(_WORD *)(v65 + 48) = v67;
              *(_QWORD *)(v65 + 56) = v65 + 64;
              memmove(v66, (const void *)v63[7], v67);
              if ( (*(_DWORD *)(v65 + 32) & 2) != 0 )
                goto LABEL_104;
              v68 = (void **)*((_QWORD *)v11 + 13);
              v69 = (_QWORD *)(v65 + 16);
              if ( *v68 == v11 + 96 )
              {
                *v69 = v11 + 96;
                *(_QWORD *)(v65 + 24) = v68;
                *v68 = v69;
                *((_QWORD *)v11 + 13) = v69;
                *(_DWORD *)(v65 + 32) |= 2u;
                ++*((_DWORD *)v11 + 22);
LABEL_104:
                v63 = (__int64 *)*v63;
                continue;
              }
              goto LABEL_24;
            }
          case 5:
          case 0x10:
            v58 = (__int64 *)v3[9];
            break;
          default:
            v7 = -1073741811;
            goto LABEL_26;
        }
        while ( v58 != v3 + 9 )
        {
          v59 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v58 + 12));
          v60 = v59;
          if ( !v59 )
            goto LABEL_25;
          *(_QWORD *)(v59 + 40) = v59 + 64;
          *(_DWORD *)(v59 + 48) = *((_DWORD *)v58 + 12);
          memmove((void *)(v59 + 64), (const void *)v58[5], *((unsigned int *)v58 + 12));
          if ( (*(_DWORD *)(v60 + 32) & 2) == 0 )
          {
            v61 = (void **)*((_QWORD *)v11 + 13);
            v62 = (_QWORD *)(v60 + 16);
            if ( *v61 != v11 + 96 )
              goto LABEL_24;
            *v62 = v11 + 96;
            *(_QWORD *)(v60 + 24) = v61;
            *v61 = v62;
            *((_QWORD *)v11 + 13) = v62;
            *(_DWORD *)(v60 + 32) |= 2u;
            ++*((_DWORD *)v11 + 22);
          }
          v58 = (__int64 *)*v58;
        }
LABEL_49:
        v5 = a3;
      }
    }
    v3 = (__int64 *)*v3;
    v4 = v77;
  }
LABEL_26:
  v23 = (_QWORD **)(a2 + 32);
  while ( 1 )
  {
    v24 = *v23;
    if ( *v23 == v23 )
      return (unsigned int)v7;
    v25 = v24 - 2;
    if ( v7 < 0 )
    {
      v26 = AuthzBasepRollbackSecurityAttributeChanges(a2, v24 - 2);
    }
    else
    {
      v26 = 0;
      if ( (v25[7] & 2) != 0 )
      {
        v27 = *v24;
        if ( *(_QWORD **)(*v24 + 8LL) != v24 )
          goto LABEL_24;
        v28 = (_QWORD *)v24[1];
        if ( (_QWORD *)*v28 != v24 )
          goto LABEL_24;
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        *((_DWORD *)v25 + 14) &= ~2u;
        if ( a2 )
          --*(_DWORD *)(a2 + 24);
      }
      v29 = v25[7] & 1;
      if ( (v25[7] & 4) != 0 )
      {
        if ( v29 )
        {
          v39 = *v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_24;
          v40 = (_QWORD *)v25[1];
          if ( (_QWORD *)*v40 != v25 )
            goto LABEL_24;
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
          *((_DWORD *)v25 + 14) &= ~1u;
          if ( a2 )
            --*(_DWORD *)a2;
        }
        v41 = (void **)(v25 + 9);
        while ( 1 )
        {
          v42 = *v41;
          if ( *v41 == v41 )
            break;
          if ( (v42[4] & 2) != 0 )
          {
            v46 = (_QWORD **)v42[2];
            if ( v46[1] != v42 + 2 )
              goto LABEL_24;
            v47 = (void **)v42[3];
            if ( *v47 != v42 + 2 )
              goto LABEL_24;
            *v47 = v46;
            v46[1] = v47;
            *((_DWORD *)v42 + 8) &= ~2u;
            --*((_DWORD *)v25 + 22);
          }
          if ( (v42[4] & 1) != 0 )
          {
            v43 = (_QWORD *)*v42;
            if ( *(_QWORD **)(*v42 + 8LL) != v42 )
              goto LABEL_24;
            v44 = (void **)v42[1];
            if ( *v44 != v42 )
              goto LABEL_24;
            *v44 = v43;
            v43[1] = v44;
            *((_DWORD *)v42 + 8) &= ~1u;
            --*((_DWORD *)v25 + 15);
            if ( (v42[4] & 4) != 0 )
              --*((_DWORD *)v25 + 16);
          }
          ExFreePoolWithTag(v42, 0);
        }
        v45 = (__int64 *)v25[12];
        while ( v45 != v25 + 12 )
        {
          v73 = *((_DWORD *)v45 + 4);
          v74 = v45 - 2;
          v45 = (__int64 *)*v45;
          if ( (v73 & 1) == 0 )
          {
            AuthzBasepRemoveSecurityAttributeValueFromLists(v25, v74, 0);
            ExFreePoolWithTag(v75, 0);
          }
        }
        v26 = 1;
      }
      else
      {
        if ( !v29 )
        {
          v30 = *(_QWORD **)(a2 + 16);
          if ( *v30 != a2 + 8 )
            goto LABEL_24;
          *v25 = a2 + 8;
          v25[1] = v30;
          *v30 = v25;
          *(_QWORD *)(a2 + 16) = v25;
          *((_DWORD *)v25 + 14) |= 1u;
          ++*(_DWORD *)a2;
        }
        v31 = v25 + 12;
        while ( 1 )
        {
          v32 = (_QWORD *)*v31;
          if ( (_QWORD *)*v31 == v31 )
            break;
          v33 = v32 - 2;
          v34 = v32[2] & 4;
          if ( (v32[2] & 2) != 0 )
          {
            v70 = *v32;
            if ( *(_QWORD **)(*v32 + 8LL) != v32 )
              goto LABEL_24;
            v71 = (_QWORD *)v32[1];
            if ( (_QWORD *)*v71 != v32 )
              goto LABEL_24;
            *v71 = v70;
            *(_QWORD *)(v70 + 8) = v71;
            *((_DWORD *)v33 + 8) &= ~2u;
            --*((_DWORD *)v25 + 22);
          }
          v35 = v33[4] & 1;
          if ( v34 )
          {
            if ( v35 )
            {
              v36 = *v33;
              if ( *(_QWORD **)(*v33 + 8LL) != v33 )
                goto LABEL_24;
              v37 = (_QWORD *)v33[1];
              if ( (_QWORD *)*v37 != v33 )
                goto LABEL_24;
              *v37 = v36;
              *(_QWORD *)(v36 + 8) = v37;
              *((_DWORD *)v33 + 8) &= ~1u;
              --*((_DWORD *)v25 + 15);
              if ( (v33[4] & 4) != 0 )
                --*((_DWORD *)v25 + 16);
            }
            ExFreePoolWithTag(v33, 0);
          }
          else if ( !v35 )
          {
            v72 = (_QWORD *)v25[10];
            if ( (_QWORD *)*v72 != v25 + 9 )
              goto LABEL_24;
            *v33 = v25 + 9;
            v33[1] = v72;
            *v72 = v33;
            v25[10] = v33;
            *((_DWORD *)v33 + 8) |= 1u;
            ++*((_DWORD *)v25 + 15);
          }
        }
      }
    }
    if ( v26 )
      ExFreePoolWithTag(v25, 0);
  }
}
