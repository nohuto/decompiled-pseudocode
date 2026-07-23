/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x140A6F3AC
 * Callers:
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A6E620 (RtlAbsoluteToSelfRelativeSD.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A6E644 (LocalConvertStringSDToSD_Rev1.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B0B638 (_CmGetRegKeySecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  __int16 v3; // r9
  __int16 v6; // cx
  unsigned __int8 *v7; // r12
  unsigned int v8; // edx
  unsigned __int16 *v9; // r15
  unsigned int v10; // r13d
  char *v11; // rax
  unsigned int v12; // eax
  unsigned __int16 *v13; // rbp
  unsigned int v14; // r14d
  ULONG v15; // ecx
  char *v16; // rdi
  int v17; // eax
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int Size; // [rsp+60h] [rbp+8h]
  unsigned int v25; // [rsp+68h] [rbp+10h]
  void *Src; // [rsp+70h] [rbp+18h]

  v3 = *((_WORD *)AbsoluteSecurityDescriptor + 1);
  v6 = v3 & 0x8000;
  if ( v3 < 0 )
  {
    v21 = *((unsigned int *)AbsoluteSecurityDescriptor + 1);
    if ( !(_DWORD)v21 )
    {
      v7 = 0LL;
      goto LABEL_4;
    }
    v7 = (unsigned __int8 *)AbsoluteSecurityDescriptor + v21;
  }
  else
  {
    v7 = (unsigned __int8 *)*((_QWORD *)AbsoluteSecurityDescriptor + 1);
  }
  if ( v7 )
  {
    v8 = (4 * v7[1] + 11) & 0xFFFFFFFC;
    goto LABEL_5;
  }
LABEL_4:
  v8 = 0;
LABEL_5:
  Size = v8;
  if ( (v3 & 4) == 0 )
    goto LABEL_33;
  if ( !v6 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)AbsoluteSecurityDescriptor + 4);
    goto LABEL_8;
  }
  v22 = *((unsigned int *)AbsoluteSecurityDescriptor + 4);
  if ( !(_DWORD)v22 )
  {
LABEL_33:
    v9 = 0LL;
    goto LABEL_34;
  }
  v9 = (unsigned __int16 *)((char *)AbsoluteSecurityDescriptor + v22);
LABEL_8:
  if ( v9 )
  {
    v10 = (v9[1] + 3) & 0xFFFFFFFC;
    goto LABEL_10;
  }
LABEL_34:
  v10 = 0;
LABEL_10:
  if ( v6 )
  {
    v20 = *((unsigned int *)AbsoluteSecurityDescriptor + 2);
    if ( !(_DWORD)v20 )
    {
      Src = 0LL;
      goto LABEL_13;
    }
    v11 = (char *)AbsoluteSecurityDescriptor + v20;
  }
  else
  {
    v11 = (char *)*((_QWORD *)AbsoluteSecurityDescriptor + 2);
  }
  Src = v11;
  if ( v11 )
  {
    v12 = (4 * (unsigned __int8)v11[1] + 11) & 0xFFFFFFFC;
    goto LABEL_14;
  }
LABEL_13:
  v12 = 0;
LABEL_14:
  v25 = v12;
  if ( (v3 & 0x10) == 0 )
    goto LABEL_31;
  if ( !v6 )
  {
    v13 = (unsigned __int16 *)*((_QWORD *)AbsoluteSecurityDescriptor + 3);
    goto LABEL_17;
  }
  v23 = *((unsigned int *)AbsoluteSecurityDescriptor + 3);
  if ( !(_DWORD)v23 )
  {
LABEL_31:
    v13 = 0LL;
    goto LABEL_32;
  }
  v13 = (unsigned __int16 *)((char *)AbsoluteSecurityDescriptor + v23);
LABEL_17:
  if ( v13 )
  {
    v14 = (v13[1] + 3) & 0xFFFFFFFC;
    goto LABEL_19;
  }
LABEL_32:
  v14 = 0;
LABEL_19:
  v15 = v10 + v14 + v8 + v12 + 20;
  if ( v15 > *BufferLength )
  {
    *BufferLength = v15;
    return -1073741789;
  }
  else if ( SelfRelativeSecurityDescriptor )
  {
    memset_0(SelfRelativeSecurityDescriptor, 0, v15);
    v16 = (char *)SelfRelativeSecurityDescriptor + 20;
    *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
    if ( v14 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 20, v13, v14);
      v17 = 20;
      v16 += v14;
    }
    else
    {
      v17 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v17;
    if ( v10 )
    {
      memmove(v16, v9, v10);
      v18 = (_DWORD)v16 - (_DWORD)SelfRelativeSecurityDescriptor;
      v16 += v10;
    }
    else
    {
      v18 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v18;
    if ( Size )
    {
      memmove(v16, v7, Size);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v16 - (_DWORD)SelfRelativeSecurityDescriptor;
      v16 += Size;
    }
    if ( v25 )
    {
      memmove(v16, Src, v25);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 2) = (_DWORD)v16 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
