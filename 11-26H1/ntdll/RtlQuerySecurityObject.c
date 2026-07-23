/*
 * XREFs of RtlQuerySecurityObject @ 0x180107B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFilterSacl @ 0x18013DBF0 (RtlpFilterSacl.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  __int16 v5; // bp
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // r13d
  unsigned __int16 *v11; // r15
  char *v12; // rbx
  unsigned __int8 *v13; // r12
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  char *v17; // rbp
  int v18; // r14d
  char *v19; // rbp
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-68h]
  int v24; // [rsp+24h] [rbp-64h]
  int v25; // [rsp+28h] [rbp-60h]
  void *Src; // [rsp+30h] [rbp-58h]
  unsigned int v27; // [rsp+90h] [rbp+8h] BYREF
  int v28; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  ULONG v30; // [rsp+A8h] [rbp+20h]

  v30 = DescriptorLength;
  v5 = SecurityInformation;
  v8 = 0;
  v23 = 0;
  v27 = 0;
  v9 = 0;
  LODWORD(Size) = 0;
  Src = 0LL;
  v25 = v5 & 2;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (v5 & 2) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v13 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 2);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 2) )
        goto LABEL_2;
      v13 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 2);
    }
    if ( v13 )
      v23 = 4 * v13[1] + 8;
  }
LABEL_2:
  v24 = v5 & 4;
  if ( (v5 & 4) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 4) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v11 = (unsigned __int16 *)*((_QWORD *)ObjectDescriptor + 4);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 4) )
        goto LABEL_3;
      v11 = (unsigned __int16 *)((char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 4));
    }
    if ( v11 )
      v10 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_3:
  v14 = v5 & 0x1F8;
  if ( (v5 & 0x1F8) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 0x10) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v12 = (char *)*((_QWORD *)ObjectDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 3) )
        goto LABEL_4;
      v12 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 3);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v27, v5 & 0x1F8);
      v8 = v27;
      v9 = Size;
      DescriptorLength = v30;
    }
  }
LABEL_4:
  v28 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v19 = (char *)*((_QWORD *)ObjectDescriptor + 1);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 1) )
      {
        Src = 0LL;
        goto LABEL_5;
      }
      v19 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 1);
    }
    Src = v19;
    if ( v19 )
    {
      v9 = 4 * (unsigned __int8)v19[1] + 8;
      LODWORD(Size) = v9;
    }
  }
LABEL_5:
  v15 = v10 + v9 + v8 + v23 + 20;
  *ReturnLength = v15;
  if ( v15 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  v17 = (char *)ResultantDescriptor + 20;
  *(_OWORD *)ResultantDescriptor = 0LL;
  *((_DWORD *)ResultantDescriptor + 4) = 0;
  *((_WORD *)ResultantDescriptor + 1) |= 0x8000u;
  *(_BYTE *)ResultantDescriptor = 1;
  if ( v14 )
  {
    if ( v8 )
    {
      RtlpFilterSacl(v12, (char *)ResultantDescriptor + 20, &v27, v14);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
      v17 += v27;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 0x2830;
  }
  v18 = (int)ResultantDescriptor;
  if ( v24 )
  {
    if ( v10 )
    {
      memmove(v17, v11, v10);
      v18 = (int)ResultantDescriptor;
      v20 = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
      v17 += v10;
      *((_DWORD *)ResultantDescriptor + 4) = v20;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 0x140C;
  }
  if ( v28 )
  {
    if ( (_DWORD)Size )
    {
      v21 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      v22 = (int)v17;
      v17 += v21;
      *((_DWORD *)ResultantDescriptor + 1) = v22 - v18;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 1;
  }
  if ( v25 )
  {
    if ( v23 )
    {
      memmove(v17, v13, v23);
      *((_DWORD *)ResultantDescriptor + 2) = (_DWORD)v17 - v18;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
