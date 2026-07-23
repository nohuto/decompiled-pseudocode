/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x1408F4190
 * Callers:
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1408F3048 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1408F37EC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpFilterSacl @ 0x1408F4650 (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  PULONG v4; // r10
  _DWORD *v5; // r8
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int8 *v12; // r13
  __int64 v13; // rdx
  unsigned __int8 *v14; // r15
  __int64 v15; // rdx
  unsigned __int16 *v16; // rdi
  char *v17; // r11
  __int16 v18; // si
  unsigned int v19; // ebx
  DWORD v20; // r9d
  DWORD v21; // eax
  DWORD v22; // ecx
  char v23; // al
  __int16 v24; // cx
  char *v25; // rbx
  char *v26; // r9
  int v27; // r14d
  int v28; // ebx
  __int64 v29; // rcx
  NTSTATUS result; // eax
  char v31; // [rsp+20h] [rbp-88h]
  ULONG v32; // [rsp+24h] [rbp-84h]
  int v33; // [rsp+2Ch] [rbp-7Ch] BYREF
  size_t Size; // [rsp+30h] [rbp-78h]
  char *v35; // [rsp+38h] [rbp-70h]
  char *v36; // [rsp+40h] [rbp-68h]
  unsigned __int64 v37; // [rsp+48h] [rbp-60h]
  __int128 v38; // [rsp+50h] [rbp-58h]
  unsigned __int8 *v39; // [rsp+60h] [rbp-48h]
  char *v40; // [rsp+68h] [rbp-40h]
  unsigned __int16 *v41; // [rsp+70h] [rbp-38h]

  v4 = Length;
  v5 = SecurityDescriptor;
  v7 = 0;
  Size = 0LL;
  v33 = 0;
  v8 = *v4;
  v32 = *v4;
  v9 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *v4 = 20;
    if ( v8 < 0x14 )
      return -1073741789;
    result = 0;
    *(_OWORD *)SecurityDescriptor = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return result;
  }
  v38 = *(_OWORD *)v9;
  LODWORD(v39) = v9[4];
  v10 = *((_WORD *)v9 + 1);
  if ( v10 >= 0 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)v9 + 1);
  }
  else
  {
    v11 = v9[1];
    if ( (_DWORD)v11 )
      v12 = (unsigned __int8 *)v9 + v11;
    else
      v12 = 0LL;
  }
  *((_QWORD *)&v38 + 1) = v12;
  if ( v10 >= 0 )
  {
    v14 = (unsigned __int8 *)*((_QWORD *)v9 + 2);
  }
  else
  {
    v13 = v9[2];
    if ( (_DWORD)v13 )
      v14 = (unsigned __int8 *)v9 + v13;
    else
      v14 = 0LL;
  }
  v39 = v14;
  if ( (v10 & 4) != 0 )
  {
    if ( v10 >= 0 )
    {
      v16 = (unsigned __int16 *)*((_QWORD *)v9 + 4);
    }
    else
    {
      v15 = v9[4];
      if ( (_DWORD)v15 )
        v16 = (unsigned __int16 *)((char *)v9 + v15);
      else
        v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v41 = v16;
  if ( (v10 & 0x10) != 0 )
  {
    if ( v10 >= 0 )
    {
      v17 = (char *)*((_QWORD *)v9 + 3);
    }
    else
    {
      v29 = v9[3];
      if ( !(_DWORD)v29 )
      {
        v17 = 0LL;
        v35 = 0LL;
        goto LABEL_14;
      }
      v17 = (char *)v9 + v29;
    }
    v35 = v17;
  }
  else
  {
    v17 = 0LL;
    v35 = 0LL;
  }
LABEL_14:
  v40 = v17;
  v18 = WORD1(v38) & 0x7FFF;
  WORD1(v38) &= ~0x8000u;
  v19 = 20;
  v20 = *SecurityInformation;
  v21 = *SecurityInformation & 0x80;
  v22 = *SecurityInformation & 0x100;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v20 |= 0x1FFu;
    *SecurityInformation = v20;
    if ( !v21 )
    {
      v20 &= ~0x80u;
      *SecurityInformation = v20;
    }
    if ( !v22 )
    {
      v20 &= ~0x100u;
      *SecurityInformation = v20;
    }
  }
  if ( (v20 & 1) != 0 && v12 )
  {
    v7 = 4 * v12[1] + 8;
    v19 = 4 * v12[1] + 28;
  }
  if ( (v20 & 2) != 0 && v14 )
  {
    LODWORD(Size) = 4 * v14[1] + 8;
    v19 += Size;
  }
  if ( (v20 & 4) != 0 )
  {
    v23 = v18;
    v31 = v18;
    if ( (v18 & 4) != 0 && v16 )
    {
      HIDWORD(Size) = (v16[1] + 3) & 0xFFFFFFFC;
      v19 += HIDWORD(Size);
    }
  }
  else
  {
    v23 = v18;
    v31 = v18;
  }
  if ( (v20 & 0x1F8) != 0 && (v23 & 0x10) != 0 && v17 )
  {
    RtlpFilterSacl(v17, 0LL, &v33);
    v19 += v33;
    v5 = SecurityDescriptor;
    v4 = Length;
  }
  *v4 = v19;
  if ( v19 > v32 )
    return -1073741789;
  *(_OWORD *)v5 = 0LL;
  v5[4] = 0;
  *(_BYTE *)v5 = 1;
  v24 = *((_WORD *)v5 + 1) | 0x8000;
  *((_WORD *)v5 + 1) = v24;
  v25 = (char *)(((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  v36 = v25;
  v26 = v25;
  v37 = (unsigned __int64)v25;
  if ( (*SecurityInformation & 1) != 0 && (v37 = ((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFFCuLL, v12) )
  {
    memmove(v25, v12, v7);
    v5 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
    *((_WORD *)SecurityDescriptor + 1) |= v18 & 1;
    v24 = *((_WORD *)SecurityDescriptor + 1);
    v26 = &v25[(v7 + 3) & 0xFFFFFFFC];
    v37 = (unsigned __int64)v26;
    v25 = v26;
    v36 = v26;
    v27 = (int)v26;
  }
  else
  {
    v27 = (int)v25;
  }
  if ( (*SecurityInformation & 2) != 0 && v14 )
  {
    v28 = Size;
    memmove(v26, v14, (unsigned int)Size);
    v5 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 2) = v27 - (_DWORD)SecurityDescriptor;
    *((_WORD *)SecurityDescriptor + 1) |= v18 & 2;
    v24 = *((_WORD *)SecurityDescriptor + 1);
    v25 = (char *)(v37 + ((v28 + 3) & 0xFFFFFFFC));
    v36 = v25;
  }
  if ( (*SecurityInformation & 4) != 0 )
  {
    *((_WORD *)v5 + 1) = v24 | v18 & 0x140C;
    if ( (v31 & 4) != 0 )
    {
      if ( v16 )
      {
        memmove(v25, v16, v16[1]);
        v5 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
        v25 += HIDWORD(Size);
        v36 = v25;
      }
    }
  }
  if ( (*SecurityInformation & 0x1F8) != 0 )
  {
    *((_WORD *)v5 + 1) |= v18 & 0x2830;
    if ( (v31 & 0x10) != 0 )
    {
      if ( v35 )
      {
        RtlpFilterSacl(v35, v25, &v33);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
        v36 = &v25[v33];
      }
    }
  }
  return 0;
}
