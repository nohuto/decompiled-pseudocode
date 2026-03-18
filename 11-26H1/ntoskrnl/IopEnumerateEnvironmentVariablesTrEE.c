/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x14079A6E0
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueTrEERequest @ 0x1405D3BA8 (IopIssueTrEERequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     IopEfiStatusToNTSTATUS @ 0x14079A46C (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  _OWORD *v8; // r15
  signed __int64 *v9; // r14
  void *v10; // r13
  __int64 v11; // rdi
  int v12; // ebx
  signed __int64 *v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // eax
  signed __int64 v19; // rcx
  char v20; // al
  int v21; // eax
  signed __int64 v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  void *v25; // r13
  unsigned __int64 v26; // rbp
  void *v27; // rcx
  int v28; // ecx
  int v29; // ecx
  int v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+58h] [rbp-80h]
  __int64 v32; // [rsp+60h] [rbp-78h]
  _OWORD *Pool2; // [rsp+68h] [rbp-70h]
  _DWORD *v34; // [rsp+70h] [rbp-68h]
  unsigned __int64 v35; // [rsp+80h] [rbp-58h]

  v30 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v32) = 0;
  v34 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    v13 = (signed __int64 *)ExAllocatePool2(0x100uLL);
    if ( !v13 )
    {
LABEL_6:
      v11 = a5;
      v12 = -1073741670;
LABEL_48:
      ExFreePoolWithTag(v10, 0);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_54;
    }
    if ( a3 == 2 )
    {
      v8 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v8 )
        goto LABEL_6;
      v14 = 288;
      v32 = 288LL;
      v9 = (signed __int64 *)ExAllocatePool2(0x100uLL);
      if ( !v9 )
        goto LABEL_6;
    }
    else
    {
      v14 = v32;
    }
    v11 = a5;
    v15 = a5;
    v31 = a5;
    LODWORD(v16) = 0;
    v35 = a5 + (unsigned int)*a6;
    *a6 = 0;
    v12 = 0;
    while ( v12 >= 0 )
    {
      v17 = (__int64)Pool2;
      *Pool2 = *(_OWORD *)(v13 + 1);
      memmove((void *)(v17 + 16), (char *)v13 + 28, *((unsigned int *)v13 + 6));
      *(_WORD *)(v17 + 2 * ((unsigned __int64)*((unsigned int *)v13 + 6) >> 1) + 16) = 0;
      v18 = IopIssueTrEERequest(1, a1, a2, v17, 0x214u, (__int64)v13, 0x220u, 0x1Cu, &v30);
      LODWORD(v16) = 0;
      v12 = v18;
      if ( v18 < 0 )
        break;
      v19 = *v13;
      if ( *v13 == 0x800000000000000EuLL )
      {
        v12 = 0;
        break;
      }
      if ( v19 < 0 )
      {
        v12 = IopEfiStatusToNTSTATUS(v19);
        break;
      }
      if ( a4 )
      {
        v20 = guard_dispatch_icall_no_overrides((__int64)(v13 + 1), (__int64)v13 + 28);
        LODWORD(v16) = 0;
        if ( !v20 )
          continue;
      }
      if ( a3 == 2 )
      {
        *v8 = *(_OWORD *)(v13 + 1);
        memmove(v8 + 1, (char *)v13 + 28, *((unsigned int *)v13 + 6));
        while ( 1 )
        {
          v21 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, (__int64)v9, v14, 0x18u, &v30);
          v16 = 0LL;
          v12 = v21;
          if ( v21 < 0 )
            goto LABEL_45;
          v22 = *v9;
          if ( *v9 == 0x8000000000000005uLL )
          {
            if ( !v11 )
              goto LABEL_31;
            v14 = *((_DWORD *)v9 + 4) + 32;
            v32 = v14;
            ExFreePoolWithTag(v9, 0);
            v23 = ExAllocatePool2(0x100uLL);
            v16 = 0LL;
            v9 = (signed __int64 *)v23;
            if ( !v23 )
            {
              v12 = -1073741670;
              goto LABEL_45;
            }
            v12 = -1073741789;
          }
          else if ( v22 < 0 )
          {
            v12 = IopEfiStatusToNTSTATUS(v22);
LABEL_30:
            if ( v12 < 0 )
              goto LABEL_45;
LABEL_31:
            v24 = (_DWORD *)v31;
            v25 = (void *)((*((unsigned int *)v13 + 6) + v31 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
            v26 = ((unsigned __int64)v25 + v9[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v26 <= v35 )
            {
              if ( v11 )
              {
                v27 = (void *)(v31 + 32);
                *(_OWORD *)(v31 + 16) = *(_OWORD *)(v13 + 1);
                memmove(v27, (char *)v13 + 28, *((unsigned int *)v13 + 6));
                *(_DWORD *)(v31 + 4) = (_DWORD)v25 - v31;
                memmove(v25, v9 + 3, v9[2]);
                v24 = (_DWORD *)v31;
                *(_DWORD *)(v31 + 8) = *((_DWORD *)v9 + 4);
                v24[3] = *((_DWORD *)v9 + 2);
                *v24 = v26 - (_DWORD)v24;
              }
            }
            else
            {
              v11 = v16;
            }
            v34 = v24;
            v31 = v26;
            v28 = *a6 - (_DWORD)v24;
            goto LABEL_41;
          }
          if ( v12 != -1073741789 )
            goto LABEL_30;
        }
      }
      v26 = (v15 + *((unsigned int *)v13 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v26 <= v35 )
      {
        if ( v11 )
        {
          *(_OWORD *)(v15 + 4) = *(_OWORD *)(v13 + 1);
          memmove((void *)(v15 + 20), (char *)v13 + 28, *((unsigned int *)v13 + 6));
          *(_DWORD *)v15 = v26 - v15;
        }
      }
      else
      {
        v11 = 0LL;
      }
      v34 = (_DWORD *)v15;
      v28 = *a6 - v15;
      v15 = v26;
LABEL_41:
      v29 = v26 + v28;
      v14 = v32;
      LODWORD(v16) = 0;
      *a6 = v29;
    }
LABEL_45:
    v10 = Pool2;
    if ( v34 && v11 )
      *v34 = v16;
    goto LABEL_48;
  }
  v11 = a5;
  v12 = -1073741670;
LABEL_54:
  if ( !v11 )
  {
    if ( *a6 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v12;
}
