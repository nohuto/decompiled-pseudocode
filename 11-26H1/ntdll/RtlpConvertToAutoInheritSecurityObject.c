/*
 * XREFs of RtlpConvertToAutoInheritSecurityObject @ 0x18013D6AC
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x180139E90 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlValidSecurityDescriptor @ 0x1800D5FF0 (RtlValidSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpConvertToAutoInheritSecurityObject(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int8 a5,
        _DWORD *a6)
{
  _DWORD *Heap_0; // r13
  int v10; // edi
  __int16 v11; // dx
  __int16 v12; // r9
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // r14
  void *v15; // rax
  void *v16; // r8
  void *v17; // rax
  ACL *v18; // rdx
  ACL *v19; // rcx
  __int16 v20; // r15
  __int64 v21; // rax
  __int16 v22; // ax
  unsigned __int16 *v23; // rcx
  void *v24; // r8
  void *v25; // rax
  ACL *v26; // rdx
  ACL *v27; // rcx
  __int16 v28; // di
  unsigned int v29; // r12d
  unsigned int v30; // edx
  unsigned int v31; // r14d
  unsigned int v32; // esi
  PVOID v33; // rbx
  char *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  unsigned __int8 *v37; // rdx
  unsigned __int8 *v38; // rdx
  char *v39; // rbx
  char v41; // [rsp+50h] [rbp-30h]
  int v42; // [rsp+54h] [rbp-2Ch] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-28h] BYREF
  void *Src; // [rsp+60h] [rbp-20h] BYREF
  void *v45; // [rsp+68h] [rbp-18h]
  PVOID HeapHandle; // [rsp+70h] [rbp-10h]
  void *v47; // [rsp+78h] [rbp-8h]
  char v48; // [rsp+C8h] [rbp+48h]

  Heap_0 = 0LL;
  Src = 0LL;
  BaseAddress = 0LL;
  v42 = 0;
  v41 = 0;
  v48 = 0;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  if ( !RtlValidSecurityDescriptor((PSECURITY_DESCRIPTOR)a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  v12 = v11 & 0x8000;
  if ( v11 >= 0 )
  {
    v13 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_110;
    }
    v13 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v47 = v13;
  if ( !v13 )
    goto LABEL_2;
  if ( v11 < 0 )
  {
    if ( *(_DWORD *)(a2 + 8) )
      v14 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 8));
    else
      v14 = 0LL;
  }
  else
  {
    v14 = *(unsigned __int8 **)(a2 + 16);
  }
  v45 = v14;
  if ( (v11 & 0x10) == 0 )
    goto LABEL_46;
  if ( v12 )
  {
    if ( *(_DWORD *)(a2 + 12) )
    {
      v15 = (void *)(a2 + *(unsigned int *)(a2 + 12));
      goto LABEL_18;
    }
LABEL_46:
    if ( a1 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        goto LABEL_53;
      }
      if ( *(_DWORD *)(a1 + 12) )
      {
        v21 = a1 + *(unsigned int *)(a1 + 12);
        goto LABEL_53;
      }
    }
    v21 = 0LL;
LABEL_53:
    v20 = v11 & 0x10 | 0x2800;
    if ( !v21 )
      v20 = v11 & 0x2010 | 0x800;
    goto LABEL_55;
  }
  v15 = *(void **)(a2 + 24);
LABEL_18:
  if ( !v15 )
    goto LABEL_46;
  if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !a1 )
  {
    Src = v15;
    v20 = v11 & 0x2010 | 0x800;
    goto LABEL_55;
  }
  if ( v12 )
  {
    if ( *(_DWORD *)(a2 + 8) )
      v16 = (void *)(a2 + *(unsigned int *)(a2 + 8));
    else
      v16 = 0LL;
  }
  else
  {
    v16 = *(void **)(a2 + 16);
  }
  if ( v12 )
  {
    if ( *(_DWORD *)(a2 + 4) )
      v17 = (void *)(a2 + *(unsigned int *)(a2 + 4));
    else
      v17 = 0LL;
  }
  else
  {
    v17 = *(void **)(a2 + 8);
  }
  if ( v12 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      v18 = (ACL *)(a2 + *(unsigned int *)(a2 + 12));
    else
      v18 = 0LL;
  }
  else
  {
    v18 = *(ACL **)(a2 + 24);
  }
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_38;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v19 = *(ACL **)(a1 + 24);
    goto LABEL_43;
  }
  if ( *(_DWORD *)(a1 + 12) )
    v19 = (ACL *)(a1 + *(unsigned int *)(a1 + 12));
  else
LABEL_38:
    v19 = 0LL;
LABEL_43:
  v10 = RtlpConvertAclToAutoInherit(v19, v18, a4, a5, v17, v16, a6, &Src, &v42);
  if ( v10 < 0 )
    goto LABEL_110;
  v41 = 1;
  v20 = 2 * (v42 & 0x1400 | (2 * (v42 & 8 | 4)));
LABEL_55:
  v22 = *(_WORD *)(a2 + 2);
  if ( (v22 & 4) == 0 )
    goto LABEL_84;
  if ( v22 < 0 )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      v23 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
      goto LABEL_60;
    }
LABEL_84:
    v28 = *(_WORD *)(a2 + 2) & 4 | 0x1400;
    goto LABEL_85;
  }
  v23 = *(unsigned __int16 **)(a2 + 32);
LABEL_60:
  if ( !v23 )
    goto LABEL_84;
  if ( (v22 & 0x400) != 0 || (v22 & 0x1000) != 0 || !a1 )
  {
    BaseAddress = v23;
    v28 = v22 & 0x1004 | 0x400;
LABEL_86:
    v29 = (4 * v13[1] + 11) & 0xFFFFFFFC;
    if ( v14 )
      v30 = (4 * v14[1] + 11) & 0xFFFFFFFC;
    else
      v30 = 0;
    if ( Src )
      v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v23 )
      v32 = (v23[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    v33 = HeapHandle;
    Heap_0 = RtlAllocateHeap_0(HeapHandle, NtdllBaseTag + 1310720, v29 + v30 + 20 + v32 + v31);
    if ( Heap_0 )
    {
      v34 = (char *)(Heap_0 + 5);
      *(_OWORD *)Heap_0 = 0LL;
      Heap_0[4] = 0;
      *((_WORD *)Heap_0 + 1) |= v20 | 0x8000;
      *(_BYTE *)Heap_0 = 1;
      if ( Src )
      {
        memmove(Heap_0 + 5, Src, *((unsigned __int16 *)Src + 1));
        v35 = 20;
        v34 += v31;
      }
      else
      {
        v35 = 0;
      }
      Heap_0[3] = v35;
      *((_WORD *)Heap_0 + 1) |= v28;
      if ( BaseAddress )
      {
        memmove(v34, BaseAddress, *((unsigned __int16 *)BaseAddress + 1));
        v36 = (_DWORD)v34 - (_DWORD)Heap_0;
        v34 += v32;
      }
      else
      {
        v36 = 0;
      }
      v37 = (unsigned __int8 *)v47;
      Heap_0[4] = v36;
      memmove(v34, v37, 4LL * v37[1] + 8);
      v38 = (unsigned __int8 *)v45;
      Heap_0[1] = (_DWORD)v34 - (_DWORD)Heap_0;
      v39 = &v34[v29];
      if ( v38 )
      {
        memmove(v39, v38, 4LL * v38[1] + 8);
        Heap_0[2] = (_DWORD)v39 - (_DWORD)Heap_0;
      }
      v33 = HeapHandle;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    if ( v48 )
      RtlFreeHeap_0(v33, 0, BaseAddress);
    goto LABEL_108;
  }
  if ( v22 >= 0 )
  {
    v24 = *(void **)(a2 + 16);
    v25 = *(void **)(a2 + 8);
    v26 = *(ACL **)(a2 + 32);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) )
      v24 = (void *)(a2 + *(unsigned int *)(a2 + 8));
    else
      v24 = 0LL;
    if ( *(_DWORD *)(a2 + 4) )
      v25 = (void *)(a2 + *(unsigned int *)(a2 + 4));
    else
      v25 = 0LL;
    if ( *(_DWORD *)(a2 + 16) )
      v26 = (ACL *)(a2 + *(unsigned int *)(a2 + 16));
    else
      v26 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_76;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v27 = *(ACL **)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_76:
      v27 = 0LL;
      goto LABEL_81;
    }
    v27 = (ACL *)(a1 + *(unsigned int *)(a1 + 16));
  }
LABEL_81:
  v10 = RtlpConvertAclToAutoInherit(v27, v26, a4, a5, v25, v24, a6, &BaseAddress, &v42);
  if ( v10 >= 0 )
  {
    v48 = 1;
    v28 = v42 & 0x1408 | 4;
LABEL_85:
    v23 = (unsigned __int16 *)BaseAddress;
    goto LABEL_86;
  }
LABEL_108:
  if ( v41 )
    RtlFreeHeap_0(HeapHandle, 0, Src);
LABEL_110:
  *a3 = Heap_0;
  return (unsigned int)v10;
}
