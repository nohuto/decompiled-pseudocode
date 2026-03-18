/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x140A623DC
 * Callers:
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A61650 (RtlAbsoluteToSelfRelativeSD.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A61674 (LocalConvertStringSDToSD_Rev1.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A95EB0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B09878 (_CmGetRegKeySecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlMakeSelfRelativeSD(__int64 a1, char *a2, unsigned int *a3)
{
  __int16 v3; // r9
  __int16 v6; // cx
  unsigned __int8 *v7; // r12
  unsigned int v8; // edx
  unsigned __int16 *v9; // r15
  unsigned int v10; // r13d
  unsigned __int8 *v11; // rax
  unsigned int v12; // eax
  unsigned __int16 *v13; // rbp
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  char *v16; // rdi
  int v17; // eax
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int Size; // [rsp+60h] [rbp+8h]
  unsigned int v25; // [rsp+68h] [rbp+10h]
  unsigned __int8 *Src; // [rsp+70h] [rbp+18h]

  v3 = *(_WORD *)(a1 + 2);
  v6 = v3 & 0x8000;
  if ( v3 < 0 )
  {
    v21 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v21 )
    {
      v7 = 0LL;
      goto LABEL_4;
    }
    v7 = (unsigned __int8 *)(a1 + v21);
  }
  else
  {
    v7 = *(unsigned __int8 **)(a1 + 8);
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
    v9 = *(unsigned __int16 **)(a1 + 32);
    goto LABEL_8;
  }
  v22 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v22 )
  {
LABEL_33:
    v9 = 0LL;
    goto LABEL_34;
  }
  v9 = (unsigned __int16 *)(a1 + v22);
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
    v20 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v20 )
    {
      Src = 0LL;
      goto LABEL_13;
    }
    v11 = (unsigned __int8 *)(a1 + v20);
  }
  else
  {
    v11 = *(unsigned __int8 **)(a1 + 16);
  }
  Src = v11;
  if ( v11 )
  {
    v12 = (4 * v11[1] + 11) & 0xFFFFFFFC;
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
    v13 = *(unsigned __int16 **)(a1 + 24);
    goto LABEL_17;
  }
  v23 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v23 )
  {
LABEL_31:
    v13 = 0LL;
    goto LABEL_32;
  }
  v13 = (unsigned __int16 *)(a1 + v23);
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
  if ( v15 > *a3 )
  {
    *a3 = v15;
    return 3221225507LL;
  }
  else if ( a2 )
  {
    memset_0(a2, 0, v15);
    v16 = a2 + 20;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    if ( v14 )
    {
      memmove(a2 + 20, v13, v14);
      v17 = 20;
      v16 += v14;
    }
    else
    {
      v17 = 0;
    }
    *((_DWORD *)a2 + 3) = v17;
    if ( v10 )
    {
      memmove(v16, v9, v10);
      v18 = (_DWORD)v16 - (_DWORD)a2;
      v16 += v10;
    }
    else
    {
      v18 = 0;
    }
    *((_DWORD *)a2 + 4) = v18;
    if ( Size )
    {
      memmove(v16, v7, Size);
      *((_DWORD *)a2 + 1) = (_DWORD)v16 - (_DWORD)a2;
      v16 += Size;
    }
    if ( v25 )
    {
      memmove(v16, Src, v25);
      *((_DWORD *)a2 + 2) = (_DWORD)v16 - (_DWORD)a2;
    }
    *((_WORD *)a2 + 1) |= 0x8000u;
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
