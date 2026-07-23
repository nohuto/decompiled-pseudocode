/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x1800C5B00
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800C5AE0 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  __int16 v5; // cx
  int v6; // r13d
  __int16 v8; // r9
  char *v9; // rax
  unsigned int v10; // r8d
  unsigned int *v11; // rax
  unsigned __int16 *v12; // r15
  size_t v13; // rbx
  char *v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // ebp
  ULONG v17; // ecx
  char *v18; // rsi
  int v19; // eax
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int Size; // [rsp+70h] [rbp+8h]
  void *v27; // [rsp+78h] [rbp+10h]
  void *Src; // [rsp+80h] [rbp+18h]
  void *v29; // [rsp+88h] [rbp+20h]

  v5 = *((_WORD *)AbsoluteSecurityDescriptor + 1);
  v6 = 0;
  v8 = v5 & 0x8000;
  if ( v5 < 0 )
  {
    v23 = *((unsigned int *)AbsoluteSecurityDescriptor + 1);
    if ( !(_DWORD)v23 )
    {
      Src = 0LL;
      goto LABEL_40;
    }
    v9 = (char *)AbsoluteSecurityDescriptor + v23;
  }
  else
  {
    v9 = (char *)*((_QWORD *)AbsoluteSecurityDescriptor + 1);
  }
  Src = v9;
  if ( !v9 )
  {
LABEL_40:
    v10 = 0;
    goto LABEL_5;
  }
  v10 = (4 * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFC;
LABEL_5:
  Size = v10;
  v11 = (unsigned int *)((char *)AbsoluteSecurityDescriptor + 16);
  if ( (v5 & 4) == 0 )
    goto LABEL_43;
  if ( !v8 )
  {
    v12 = (unsigned __int16 *)*((_QWORD *)AbsoluteSecurityDescriptor + 4);
    goto LABEL_8;
  }
  v24 = *v11;
  if ( !(_DWORD)v24 )
  {
LABEL_43:
    v12 = 0LL;
    goto LABEL_44;
  }
  v12 = (unsigned __int16 *)((char *)AbsoluteSecurityDescriptor + v24);
LABEL_8:
  if ( v12 )
  {
    v13 = (v12[1] + 3) & 0xFFFFFFFC;
    goto LABEL_10;
  }
LABEL_44:
  v13 = 0LL;
LABEL_10:
  if ( v8 )
  {
    v22 = *((unsigned int *)AbsoluteSecurityDescriptor + 2);
    if ( !(_DWORD)v22 )
    {
      v29 = 0LL;
      goto LABEL_34;
    }
    v14 = (char *)AbsoluteSecurityDescriptor + v22;
  }
  else
  {
    v14 = *(char **)v11;
  }
  v29 = v14;
  if ( v14 )
  {
    v15 = (4 * (unsigned __int8)v14[1] + 11) & 0xFFFFFFFC;
    goto LABEL_14;
  }
LABEL_34:
  v15 = 0;
LABEL_14:
  if ( (v5 & 0x10) == 0 )
  {
LABEL_15:
    v27 = 0LL;
LABEL_16:
    v16 = 0;
    goto LABEL_17;
  }
  if ( v8 )
  {
    v25 = *((unsigned int *)AbsoluteSecurityDescriptor + 3);
    if ( !(_DWORD)v25 )
      goto LABEL_15;
    v21 = (char *)AbsoluteSecurityDescriptor + v25;
  }
  else
  {
    v21 = (char *)*((_QWORD *)AbsoluteSecurityDescriptor + 3);
  }
  v27 = v21;
  if ( !v21 )
    goto LABEL_16;
  v16 = (*((unsigned __int16 *)v21 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  v17 = v13 + v16 + v15 + v10 + 20;
  if ( v17 > *BufferLength )
  {
    *BufferLength = v17;
    return -1073741789;
  }
  else if ( SelfRelativeSecurityDescriptor )
  {
    memset_thunk_772440563353939046(SelfRelativeSecurityDescriptor, 0, v17);
    v18 = (char *)SelfRelativeSecurityDescriptor + 20;
    *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
    if ( v16 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 20, v27, v16);
      v19 = 20;
      v18 += v16;
    }
    else
    {
      v19 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v19;
    if ( (_DWORD)v13 )
    {
      memmove(v18, v12, v13);
      v6 = (_DWORD)v18 - (_DWORD)SelfRelativeSecurityDescriptor;
      v18 += v13;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v6;
    if ( Size )
    {
      memmove(v18, Src, Size);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v18 - (_DWORD)SelfRelativeSecurityDescriptor;
      v18 += Size;
    }
    if ( v15 )
    {
      memmove(v18, v29, v15);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 2) = (_DWORD)v18 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
