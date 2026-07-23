/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x14079D210
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueTrEERequest @ 0x1405D6398 (IopIssueTrEERequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopEfiStatusToNTSTATUS @ 0x14079CF9C (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  _OWORD *v8; // r15
  __int64 v9; // r14
  void *v10; // rbp
  __int64 v11; // rdi
  int v12; // ebx
  char *v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rbx
  signed __int64 v18; // rcx
  signed __int64 v19; // rcx
  void *v20; // r13
  _DWORD *v21; // rdi
  int v22; // ecx
  unsigned __int64 v23; // rbp
  int v24; // ecx
  int v25; // [rsp+50h] [rbp-88h] BYREF
  __int64 v26; // [rsp+58h] [rbp-80h]
  _OWORD *Pool2; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+68h] [rbp-70h]
  _DWORD *v29; // [rsp+70h] [rbp-68h]
  __int64 v30; // [rsp+78h] [rbp-60h]
  unsigned __int64 v31; // [rsp+80h] [rbp-58h]

  v25 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v28) = 0;
  v29 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    v13 = (char *)ExAllocatePool2(0x100uLL);
    if ( v13
      && (a3 != 2
       || (v8 = (_OWORD *)ExAllocatePool2(0x100uLL)) != 0LL && (v28 = 288LL, (v9 = ExAllocatePool2(0x100uLL)) != 0)) )
    {
      v11 = a5;
      v14 = a5;
      v15 = a5;
      v26 = a5;
      v16 = (unsigned int)*a6;
      *a6 = 0;
      v31 = a5 + v16;
      while ( 1 )
      {
        v30 = v11;
        v17 = (__int64)Pool2;
        *Pool2 = *(_OWORD *)(v13 + 8);
        memmove((void *)(v17 + 16), v13 + 28, *((unsigned int *)v13 + 6));
        *(_WORD *)(v17 + 2 * ((unsigned __int64)*((unsigned int *)v13 + 6) >> 1) + 16) = 0;
        v12 = IopIssueTrEERequest(1, a1, a2, v17, 0x214u, (__int64)v13, 0x220u, 0x1Cu, &v25);
        if ( v12 < 0 )
          break;
        v18 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 == 0x800000000000000EuLL )
        {
          v12 = 0;
          break;
        }
        if ( v18 < 0 )
        {
          v12 = IopEfiStatusToNTSTATUS(v18);
          break;
        }
        if ( !a4 || (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)(v13 + 8), (__int64)(v13 + 28)) )
        {
          if ( a3 == 2 )
          {
            *v8 = *(_OWORD *)(v13 + 8);
            memmove(v8 + 1, v13 + 28, *((unsigned int *)v13 + 6));
            while ( 1 )
            {
              v12 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, v9, v28, 0x18u, &v25);
              if ( v12 < 0 )
                goto LABEL_42;
              v19 = *(_QWORD *)v9;
              if ( *(_QWORD *)v9 == 0x8000000000000005uLL )
              {
                if ( !v11 )
                  goto LABEL_29;
                LODWORD(v28) = *(_DWORD *)(v9 + 16) + 32;
                ExFreePoolWithTag((PVOID)v9, 0);
                v9 = ExAllocatePool2(0x100uLL);
                if ( !v9 )
                {
                  v12 = -1073741670;
                  goto LABEL_42;
                }
                v12 = -1073741789;
              }
              else if ( v19 < 0 )
              {
                v12 = IopEfiStatusToNTSTATUS(v19);
LABEL_28:
                if ( v12 < 0 )
                  goto LABEL_42;
LABEL_29:
                v20 = (void *)((v15 + *((unsigned int *)v13 + 6) + 39LL) & 0xFFFFFFFFFFFFFFF8uLL);
                v15 = ((unsigned __int64)v20 + *(_QWORD *)(v9 + 16) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                if ( v15 <= v31 )
                {
                  if ( v11 )
                  {
                    v21 = (_DWORD *)v26;
                    *(_OWORD *)(v26 + 16) = *(_OWORD *)(v13 + 8);
                    memmove(v21 + 8, v13 + 28, *((unsigned int *)v13 + 6));
                    v21[1] = (_DWORD)v20 - (_DWORD)v21;
                    memmove(v20, (const void *)(v9 + 24), *(_QWORD *)(v9 + 16));
                    v21[2] = *(_DWORD *)(v9 + 16);
                    v21[3] = *(_DWORD *)(v9 + 8);
                    *v21 = v15 - (_DWORD)v21;
                    v11 = v30;
                  }
                }
                else
                {
                  v11 = 0LL;
                }
                v29 = (_DWORD *)v26;
                v26 = v15;
                v22 = v15 + *a6 - (_DWORD)v29;
                goto LABEL_39;
              }
              if ( v12 != -1073741789 )
                goto LABEL_28;
            }
          }
          v23 = (v14 + *((unsigned int *)v13 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v23 <= v31 )
          {
            if ( v11 )
            {
              *(_OWORD *)(v14 + 4) = *(_OWORD *)(v13 + 8);
              memmove((void *)(v14 + 20), v13 + 28, *((unsigned int *)v13 + 6));
              *(_DWORD *)v14 = v23 - v14;
            }
          }
          else
          {
            v11 = 0LL;
          }
          v29 = (_DWORD *)v14;
          v24 = *a6 - v14;
          v14 = v23;
          v22 = v23 + v24;
          v15 = v26;
LABEL_39:
          *a6 = v22;
        }
      }
LABEL_42:
      v10 = Pool2;
      if ( v29 && v11 )
        *v29 = 0;
    }
    else
    {
      v11 = a5;
      v12 = -1073741670;
    }
    ExFreePoolWithTag(v10, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 )
      ExFreePoolWithTag((PVOID)v9, 0);
  }
  else
  {
    v11 = a5;
    v12 = -1073741670;
  }
  if ( !v11 )
  {
    if ( *a6 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v12;
}
