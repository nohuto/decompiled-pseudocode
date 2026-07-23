/*
 * XREFs of ObGetObjectInformation @ 0x1407C6810
 * Callers:
 *     ExpGetObjectInformation @ 0x1407774F4 (ExpGetObjectInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14041A930 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404C3844 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ObQueryTypeName @ 0x140A61F3C (ObQueryTypeName.c)
 *     ObpCreateTypeArray @ 0x140A67954 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140B26B88 (ObpDestroyTypeArray.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObGetObjectInformation(int a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r15
  __int64 Pool2; // rax
  unsigned __int16 *v7; // r12
  unsigned __int16 *v9; // rbx
  int v10; // r14d
  unsigned int v11; // esi
  unsigned int *TypeArray; // rdi
  unsigned int i; // edx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  unsigned int *v16; // r13
  char v17; // dl
  unsigned int j; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rcx
  _DWORD *v23; // r8
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int *v31; // rax
  int v32; // edx
  int v33; // r8d
  __int64 *v34; // rax
  unsigned int v35; // r9d
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rax
  int NameStringMode; // edi
  int v40; // eax
  unsigned int v41; // eax
  void *v42; // rbx
  const void **v43; // rcx
  unsigned __int16 *v44; // rdi
  __int16 v45; // ax
  __int16 v46; // bx
  unsigned int v47; // [rsp+30h] [rbp-B8h] BYREF
  int v48; // [rsp+34h] [rbp-B4h]
  char v49; // [rsp+38h] [rbp-B0h]
  unsigned int v50; // [rsp+3Ch] [rbp-ACh]
  int v51; // [rsp+40h] [rbp-A8h]
  unsigned int v52; // [rsp+44h] [rbp-A4h]
  const void **v53; // [rsp+48h] [rbp-A0h]
  unsigned int v54; // [rsp+50h] [rbp-98h]
  __int64 v55; // [rsp+58h] [rbp-90h]
  unsigned __int64 v56; // [rsp+60h] [rbp-88h]
  unsigned int *v57; // [rsp+68h] [rbp-80h]
  unsigned int *v58; // [rsp+70h] [rbp-78h]
  unsigned __int16 *v59; // [rsp+78h] [rbp-70h]
  _DWORD *v60; // [rsp+80h] [rbp-68h]
  __int64 v61; // [rsp+88h] [rbp-60h]
  __int64 v62; // [rsp+90h] [rbp-58h]
  __int64 v63; // [rsp+98h] [rbp-50h]
  __int64 v64; // [rsp+A0h] [rbp-48h]
  unsigned __int16 *v65; // [rsp+A8h] [rbp-40h]

  v47 = 0;
  v5 = 0LL;
  v57 = 0LL;
  v56 = 536LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = (unsigned __int16 *)Pool2;
  v59 = (unsigned __int16 *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v9 = (unsigned __int16 *)Pool2;
  v53 = (const void **)Pool2;
  v10 = 0;
  v11 = 0;
  v55 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(*(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary);
  v58 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v7, 0x7241624Fu);
    return 3221225473LL;
  }
  for ( i = 0; ; ++i )
  {
    v52 = i;
    if ( i >= *TypeArray )
      goto LABEL_74;
    v14 = *(_QWORD *)&TypeArray[2 * i + 2];
    if ( v14 )
    {
      v15 = (_DWORD *)(v14 + 80);
      v60 = v15;
      if ( v15 != *(_DWORD **)&ObpStackTraceLock.PriorityFloorSummary )
        break;
    }
LABEL_22:
    ;
  }
  v16 = (unsigned int *)ObpCreateTypeArray(v15);
  v57 = v16;
  if ( !v16 )
    goto LABEL_21;
  v17 = 1;
  v49 = 1;
  for ( j = 0; ; ++j )
  {
    v54 = j;
    if ( j >= *v16 )
      break;
    v19 = *(_QWORD *)&v16[2 * j + 2];
    v61 = v19;
    if ( !v19 )
      continue;
    v20 = v19 + 32;
    v21 = v19 + 80;
    v62 = v19 + 80;
    if ( v17 )
    {
      v49 = 0;
      if ( v55 && v11 < a4 )
        *(_DWORD *)v55 = v11;
      v22 = a3 + v11;
      v55 = v22;
      v63 = v22;
      v11 += 48;
      v50 = v11;
      if ( v11 < 0x30 )
        goto LABEL_18;
      if ( v11 >= a4 )
        goto LABEL_24;
      *(_DWORD *)v22 = 0;
      v23 = v60;
      *(_DWORD *)(v22 + 4) = v60[11];
      *(_DWORD *)(v22 + 8) = v23[12];
      *(_DWORD *)(v22 + 12) = *((unsigned __int8 *)v23 + 40);
      *(_DWORD *)(v22 + 16) = v23[18];
      *(_OWORD *)(v22 + 20) = *(_OWORD *)(v23 + 19);
      *(_DWORD *)(v22 + 36) = v23[23];
      *(_DWORD *)(v22 + 40) = v23[25];
      *(_BYTE *)(v22 + 44) = (*((_BYTE *)v23 + 66) & 8) != 0;
      v47 = 0;
      v24 = ObQueryTypeName(v21, v22 + 48, a4 - v11, &v47);
      v51 = v24;
      v25 = (v47 + 7) & 0xFFFFFFF8;
      v47 = v25;
      if ( v24 < 0 )
      {
        v10 = v24;
        v48 = v24;
      }
      else
      {
        v26 = v55;
        *(_WORD *)(v55 + 50) = v25 - 16;
        *(_QWORD *)(v26 + 56) += a2 - a3;
        v25 = v47;
      }
      v11 += v25;
      v50 = v11;
      if ( v11 < v25 )
      {
LABEL_18:
        v10 = -1073741675;
LABEL_19:
        v48 = v10;
        break;
      }
      v19 = v61;
      v27 = a4;
      v21 = v20 + 48;
    }
    else
    {
      v27 = a4;
      if ( v11 < a4 )
        *(_DWORD *)v5 = v11;
    }
    v5 = a3 + v11;
    v64 = v5;
    v11 += 64;
    v50 = v11;
    if ( v11 < 0x40 )
      goto LABEL_18;
    if ( v11 >= v27 )
    {
LABEL_24:
      v10 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v5 = 0;
    v28 = v21;
    if ( a1 )
      v28 = 0LL;
    *(_QWORD *)(v5 + 8) = v28;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v19 + 16);
    *(_WORD *)(v5 + 24) = *(_WORD *)(v19 + 24);
    *(_DWORD *)(v5 + 28) = *(_QWORD *)v20;
    *(_DWORD *)(v5 + 32) = *(_QWORD *)(v20 + 8);
    *(_WORD *)(v5 + 26) = *(unsigned __int8 *)(v20 + 27);
    v29 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)(v5 + 56) = v29;
    v30 = 0LL;
    if ( !a1 )
      v30 = v29;
    *(_QWORD *)(v5 + 56) = v30;
    v31 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v20);
    v32 = v60[26];
    v33 = v60[27];
    if ( v31 )
    {
      v32 = *v31;
      v33 = v31[1];
    }
    *(_DWORD *)(v5 + 36) = v32;
    *(_DWORD *)(v5 + 40) = v33;
    v34 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v20);
    if ( v34 )
    {
      v38 = *v34;
      if ( v38 )
        *(_QWORD *)(v5 + 48) = *(_QWORD *)(v38 + 464);
    }
    v47 = 0;
    NameStringMode = 0;
    v51 = 0;
    if ( *(_QWORD *)(v37 + 160) && (POBJECT_TYPE *)v37 == IoFileObjectType )
    {
      *(_OWORD *)v9 = *(_OWORD *)(v36 + 88);
      v40 = *v9;
      if ( (_WORD)v40 && *((_QWORD *)v9 + 1) )
      {
        v41 = v40 + 2;
        v47 = v41;
        if ( v41 > 0x208 )
        {
          v47 = 520;
          *v9 = 518;
          v41 = v47;
        }
        v42 = v9 + 8;
        memmove(v42, v53[1], v41 - 2LL);
        v43 = v53;
        v53[1] = v42;
        *((_WORD *)v43 + 1) = v47;
        *((_WORD *)v42 + ((unsigned __int64)*(unsigned __int16 *)v43 >> 1)) = 0;
        v47 += 16;
        v9 = (unsigned __int16 *)v53;
        v35 = a4;
      }
    }
    else
    {
      NameStringMode = ObQueryNameStringMode(v36, (_DWORD)v9, v56, (unsigned int)&v47, 0);
      v51 = NameStringMode;
      if ( NameStringMode != -1073741820 )
        goto LABEL_55;
      v35 = a4;
      if ( v47 > v56 && v11 + v47 < a4 )
      {
        v44 = v7;
        v7 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        v59 = v7;
        if ( v7 )
        {
          ExFreePoolWithTag(v44, 0x7241624Fu);
          v56 = v47;
          v61 = v47;
          v9 = v7;
          v53 = (const void **)v7;
          v65 = v7;
          NameStringMode = ObQueryNameStringMode(v62, (_DWORD)v7, v47, (unsigned int)&v47, 0);
          v51 = NameStringMode;
LABEL_55:
          v35 = a4;
          goto LABEL_56;
        }
        v7 = v44;
        v59 = v44;
        NameStringMode = -1073741670;
        v51 = -1073741670;
        v35 = a4;
      }
    }
LABEL_56:
    if ( !v47 )
    {
      v11 += 16;
      v50 = v11;
      if ( v11 < 0x10 )
        goto LABEL_18;
      goto LABEL_69;
    }
    v47 = (v47 + 7) & 0xFFFFFFF8;
    v11 += v47;
    v50 = v11;
    if ( v11 < v47 )
      goto LABEL_18;
    if ( NameStringMode < 0 )
    {
      v11 += 16;
      v50 = v11;
      if ( v11 < 0x10 )
        goto LABEL_18;
      if ( v11 >= v35 )
        goto LABEL_70;
      RtlInitUnicodeString((PUNICODE_STRING)(v5 + 64), 0LL);
      v10 = NameStringMode;
      v48 = NameStringMode;
    }
    else
    {
      v45 = *v9;
      if ( !*v9 || v11 >= v35 )
      {
        if ( !*v9 )
        {
LABEL_69:
          if ( v11 < v35 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v5 + 64), 0LL);
            goto LABEL_72;
          }
        }
LABEL_70:
        v10 = -1073741820;
        v48 = -1073741820;
        goto LABEL_72;
      }
      *(_WORD *)(v5 + 64) = v45;
      v46 = v45 + 2;
      memmove((void *)(v5 + 80), v53[1], (unsigned __int16)(v45 + 2));
      *(_QWORD *)(v5 + 72) = a2 + v5 + 80 - a3;
      *(_WORD *)(v5 + 66) = v46;
    }
LABEL_72:
    v9 = (unsigned __int16 *)v53;
    j = v54;
    v17 = v49;
  }
  ObpDestroyTypeArray(v16);
  v57 = 0LL;
  TypeArray = v58;
  if ( v10 >= 0 )
  {
LABEL_21:
    i = v52;
    goto LABEL_22;
  }
LABEL_74:
  if ( a5 )
    *a5 = v11;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v7, 0x7241624Fu);
  if ( !v55 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
