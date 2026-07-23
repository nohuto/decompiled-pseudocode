/*
 * XREFs of WmipQueryAllDataMultiple @ 0x140A0C1A8
 * Callers:
 *     IoWMIQueryAllDataMultiple @ 0x140828130 (IoWMIQueryAllDataMultiple.c)
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     Feature_575661368__private_IsEnabledDeviceUsageNoInline @ 0x1406C71D8 (Feature_575661368__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipQueryAllData @ 0x140A0DCD8 (WmipQueryAllData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        PVOID *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int *a8)
{
  _DWORD *v9; // r14
  int v11; // r12d
  __int64 Pool2; // rax
  char *v13; // r15
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  unsigned int *v17; // rcx
  unsigned int *v18; // r13
  unsigned int *v19; // rdi
  char v21; // bp
  PVOID *v22; // r14
  char *v24; // rbp
  unsigned int v25; // r15d
  int v26; // ebx
  bool v27; // zf
  PVOID v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int *v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // ebx
  unsigned int v34; // r15d
  int v35; // eax
  char v36; // [rsp+30h] [rbp-F8h]
  __int64 v37; // [rsp+34h] [rbp-F4h] BYREF
  char *v38; // [rsp+40h] [rbp-E8h]
  PVOID *v39; // [rsp+48h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-D8h]
  __int64 v41; // [rsp+58h] [rbp-D0h]
  char *v42; // [rsp+60h] [rbp-C8h]
  __int64 v43; // [rsp+68h] [rbp-C0h]
  char *v44; // [rsp+70h] [rbp-B8h]
  __int64 v45; // [rsp+78h] [rbp-B0h]
  _DWORD *v46; // [rsp+80h] [rbp-A8h]
  int *v47; // [rsp+88h] [rbp-A0h]
  _BYTE v48[80]; // [rsp+90h] [rbp-98h] BYREF

  v9 = a5;
  v39 = a2;
  v45 = a3;
  v46 = a5;
  v47 = a8;
  memset_0(v48, 0, 0x48uLL);
  v11 = 0;
  v37 = 0LL;
  LODWORD(v43) = 0;
  Object = 0LL;
  if ( a2 )
  {
    v13 = 0LL;
    v42 = 0LL;
LABEL_9:
    v21 = 0;
    v16 = 0;
    v18 = 0LL;
    v36 = 0;
    v17 = a5;
    v19 = a5;
    v38 = (char *)a5;
    if ( !a1 )
      goto LABEL_39;
    goto LABEL_10;
  }
  a1 = *a7;
  Pool2 = ExAllocatePool2(0x100uLL);
  v42 = (char *)Pool2;
  v13 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( !a1 )
    goto LABEL_9;
  v14 = (_QWORD *)Pool2;
  v15 = a1;
  do
  {
    *v14 = *(_QWORD *)((char *)a7 + (_QWORD)v14 - Pool2 + 8);
    ++v14;
    --v15;
  }
  while ( v15 );
  v16 = 0;
  v17 = a5;
  v36 = 0;
  v38 = (char *)a5;
  v18 = 0LL;
  v19 = a5;
LABEL_10:
  v22 = v39;
  v24 = (char *)(v13 - (char *)v39);
  v25 = v43;
  v44 = v24;
  v41 = a1;
  while ( 1 )
  {
    if ( v19 == (unsigned int *)v48 || a6 < 0x48 )
    {
      v19 = (unsigned int *)v48;
      v26 = 72;
      v18 = 0LL;
    }
    else
    {
      v19 = v17;
      v26 = a6;
    }
    memset_0(v19, 0, 0x48uLL);
    v27 = v39 == 0LL;
    v19[11] = 1;
    *v19 = 48;
    if ( v27 )
    {
      *((_QWORD *)v19 + 2) = *(_QWORD *)&v24[(_QWORD)v22];
      v28 = Object;
    }
    else
    {
      v28 = *v22;
      Object = *v22;
    }
    if ( (int)WmipQueryAllData(v28, v26, (__int64)&v37) < 0 || (v29 = v19[11], (v29 & 0x100) != 0) )
    {
      v21 = v36;
      goto LABEL_36;
    }
    ++HIDWORD(v37);
    if ( (v29 & 0x20) != 0 )
    {
      v30 = v19[12];
      v19 = (unsigned int *)v48;
LABEL_23:
      v21 = 1;
      v36 = 1;
      v16 += (v30 + 7) & 0xFFFFFFF8;
LABEL_36:
      v17 = (unsigned int *)v38;
      goto LABEL_37;
    }
    if ( v19 == (unsigned int *)v48 )
    {
      v30 = v37;
      goto LABEL_23;
    }
    if ( v18 )
      v18[3] = v25;
    v18 = v19;
    v31 = v19 + 3;
    while ( 1 )
    {
      v32 = *v31;
      if ( !(_DWORD)v32 )
        break;
      v31 = (unsigned int *)((char *)v31 + v32);
      v18 = (unsigned int *)((char *)v18 + v32);
    }
    v33 = (v37 + 7) & 0xFFFFFFF8;
    v16 += v33;
    if ( (unsigned int)Feature_575661368__private_IsEnabledDeviceUsageNoInline() )
      a6 = v33 < a6 ? a6 - v33 : 0;
    else
      a6 -= v33;
    v21 = v36;
    v17 = (unsigned int *)&v38[v33];
    v34 = v33 + (_DWORD)v38;
    v38 = (char *)v17;
    v25 = v34 - (_DWORD)v18;
LABEL_37:
    ++v22;
    if ( !--v41 )
      break;
    v24 = v44;
  }
  v9 = v46;
  v13 = v42;
  v11 = HIDWORD(v37);
LABEL_39:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( !v11 )
    return 3221226133LL;
  if ( v21 )
  {
    v35 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v16;
  }
  else
  {
    v35 = v16;
  }
  *v47 = v35;
  return 0LL;
}
