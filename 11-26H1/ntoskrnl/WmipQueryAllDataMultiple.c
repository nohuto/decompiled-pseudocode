/*
 * XREFs of WmipQueryAllDataMultiple @ 0x140A0E310
 * Callers:
 *     IoWMIQueryAllDataMultiple @ 0x140821F20 (IoWMIQueryAllDataMultiple.c)
 *     WmipIoControl @ 0x140A0D940 (WmipIoControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     WmipQueryAllData @ 0x140A0EAFC (WmipQueryAllData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        PVOID *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        int *a8)
{
  _DWORD *v9; // r14
  char *Pool2; // rax
  char *v12; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  int v15; // esi
  char v16; // r12
  unsigned int *v17; // r15
  unsigned int *v18; // r13
  unsigned int *v19; // rbx
  char *v21; // rbp
  int v22; // edi
  bool v23; // zf
  PVOID *v24; // rax
  PVOID v25; // rax
  unsigned int v26; // eax
  unsigned int *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v32; // eax
  __int64 v33; // [rsp+34h] [rbp-F4h] BYREF
  PVOID *v34; // [rsp+40h] [rbp-E8h]
  PVOID *v35; // [rsp+48h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-D8h]
  __int64 v37; // [rsp+58h] [rbp-D0h]
  __int64 v38; // [rsp+60h] [rbp-C8h]
  PVOID P; // [rsp+68h] [rbp-C0h]
  __int64 v40; // [rsp+78h] [rbp-B0h]
  _DWORD *v41; // [rsp+80h] [rbp-A8h]
  int *v42; // [rsp+88h] [rbp-A0h]
  _BYTE v43[80]; // [rsp+90h] [rbp-98h] BYREF

  v9 = a5;
  v35 = a2;
  v40 = a3;
  v41 = a5;
  v42 = a8;
  memset_0(v43, 0, 0x48uLL);
  v33 = 0LL;
  LODWORD(v37) = 0;
  Object = 0LL;
  if ( a2 )
  {
    v12 = 0LL;
    P = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    v12 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( a1 )
    {
      v13 = Pool2;
      v14 = a1;
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + a7 - Pool2 + 8);
        ++v13;
        --v14;
      }
      while ( v14 );
      v15 = 0;
      v16 = 0;
      v17 = 0LL;
      v18 = a5;
      v19 = a5;
      goto LABEL_7;
    }
  }
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  v18 = a5;
  v19 = a5;
  if ( a1 )
  {
LABEL_7:
    v21 = (char *)(v12 - (char *)v35);
    v34 = v35;
    v38 = a1;
    while ( 1 )
    {
      if ( v19 == (unsigned int *)v43 || a6 < 0x48 )
      {
        v19 = (unsigned int *)v43;
        v22 = 72;
        v17 = 0LL;
      }
      else
      {
        v19 = v18;
        v22 = a6;
      }
      memset_0(v19, 0, 0x48uLL);
      v23 = v35 == 0LL;
      v24 = v34;
      v19[11] = 1;
      *v19 = 48;
      if ( v23 )
      {
        *((_QWORD *)v19 + 2) = *(_QWORD *)&v21[(_QWORD)v24];
        v25 = Object;
      }
      else
      {
        v25 = *v24;
        Object = v25;
      }
      if ( (int)WmipQueryAllData(v25, v22, (__int64)&v33) >= 0 )
      {
        v26 = v19[11];
        if ( (v26 & 0x100) == 0 )
        {
          ++HIDWORD(v33);
          if ( (v26 & 0x20) != 0 )
          {
            v32 = v19[12];
            v19 = (unsigned int *)v43;
          }
          else
          {
            if ( v19 != (unsigned int *)v43 )
            {
              if ( v17 )
                v17[3] = v37;
              v17 = v19;
              v27 = v19 + 3;
              while ( 1 )
              {
                v28 = *v27;
                if ( !(_DWORD)v28 )
                  break;
                v27 = (unsigned int *)((char *)v27 + v28);
                v17 = (unsigned int *)((char *)v17 + v28);
              }
              v29 = ((_DWORD)v33 + 7) & 0xFFFFFFF8;
              v15 += v29;
              v18 = (unsigned int *)((char *)v18 + v29);
              a6 -= v29;
              v37 = (unsigned int)((_DWORD)v18 - (_DWORD)v17);
              goto LABEL_23;
            }
            v32 = v33;
          }
          v16 = 1;
          v15 += (v32 + 7) & 0xFFFFFFF8;
        }
      }
LABEL_23:
      ++v34;
      if ( !--v38 )
      {
        v9 = v41;
        v12 = (char *)P;
        break;
      }
    }
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( !HIDWORD(v33) )
    return 3221226133LL;
  if ( v16 )
  {
    v30 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v15;
  }
  else
  {
    v30 = v15;
  }
  *v42 = v30;
  return 0LL;
}
