/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x14003A378
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x14003A30C (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x14003A76C (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003AC14 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // r15d
  unsigned int v10; // ebx
  __int64 v11; // rax
  const char *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r14d
  unsigned int v15; // esi
  char *Pool2; // rax
  char *v17; // rdi
  __int64 v19; // rdi
  void *v20; // r14
  __int64 v21; // rax
  unsigned int *v22; // r13
  __int64 i; // rbp
  unsigned int *v24; // r8
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // r15d
  __int64 v29; // rax
  char *v30; // r12
  unsigned int *v31; // rsi
  const void **v32; // rbp
  unsigned __int64 v33; // rax
  bool v34; // zf
  PVOID *v35; // rsi
  unsigned int *v36; // [rsp+30h] [rbp-38h]
  __int64 v37; // [rsp+30h] [rbp-38h]
  unsigned int *v38; // [rsp+38h] [rbp-30h]
  __int64 v39; // [rsp+38h] [rbp-30h]
  int v40; // [rsp+70h] [rbp+8h]

  v40 = a1;
  v6 = 0;
  v36 = 0LL;
  v10 = a2;
  if ( (a4 & 0x4000000) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v11 & 0x1000000000LL) != 0 )
    {
      if ( v11 >= 0 )
        v12 = "ACPI\\Processor";
      else
        v12 = *(const char **)(a1 + 184);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = v13 + 2;
      v15 = 2 * (v13 + 2);
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        v15,
                        1399874369LL);
      v17 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, v14, "%s", v12);
        ACPIAnsiStringToWideHelper(v17, v15);
        *a5 = v17;
        if ( a6 )
          *a6 = v15;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 || *(_WORD *)(a3 + 2) == 2 )
  {
    v19 = 1LL;
  }
  else
  {
    if ( *(_WORD *)(a3 + 2) != 4 )
      return 3222536207LL;
    v36 = *(unsigned int **)(a3 + 32);
    v19 = *v36;
    if ( *(unsigned int *)(a3 + 24) < (unsigned __int64)(40 * v19 + 8) )
      return 3222536207LL;
  }
  v20 = (void *)ExAllocatePool2(64LL, 8 * v19, 1299211073LL);
  if ( !v20 )
    return 3221225626LL;
  v21 = ExAllocatePool2(64LL, 4 * v19, 1299211073LL);
  v22 = (unsigned int *)v21;
  if ( !v21 )
  {
    ExFreePoolWithTag(v20, 0);
    return 3221225626LL;
  }
  switch ( *(_WORD *)(a3 + 2) )
  {
    case 1:
      v27 = ACPIGetConvertToPnpIDWide(v40, a2, a3, a4, (__int64)v20, v21);
      break;
    case 2:
      v27 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v20, v21);
      break;
    case 4:
      for ( i = 0LL; (unsigned int)i < (unsigned int)v19; i = (unsigned int)(i + 1) )
      {
        v24 = &v36[8 * i + 2 + 2 * (unsigned int)i];
        if ( *((_WORD *)v24 + 1) == 1 )
        {
          v38 = &v22[i];
          v25 = ACPIGetConvertToPnpIDWide(v40, a2, (_DWORD)v24, a4, (__int64)v20 + 8 * i, (__int64)v38);
        }
        else
        {
          if ( *((_WORD *)v24 + 1) != 2 )
            ACPIInternalError(0x60396uLL);
          v38 = &v22[i];
          v25 = ACPIGetConvertToStringWideWithPrepend(
                  (int)v22 + 4 * (int)i,
                  a2,
                  (_DWORD)v24,
                  a4,
                  (__int64)v20 + 8 * i,
                  (__int64)v38);
        }
        v10 = v25;
        if ( v25 < 0 )
        {
          v19 = (unsigned int)i;
          goto LABEL_53;
        }
        v26 = *v38;
        if ( *v38 == 1 )
        {
          v26 = 0;
          *v38 = 0;
        }
        v6 += v26;
      }
LABEL_42:
      if ( v6 > 2 )
      {
        v28 = v6 + 2;
        v29 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v28, 1399874369LL);
        v37 = v29;
        if ( v29 )
        {
          v30 = (char *)v29;
          if ( (_DWORD)v19 )
          {
            v31 = v22;
            v39 = (unsigned int)v19;
            v32 = (const void **)v20;
            do
            {
              if ( *v32 )
                memmove(v30, *v32, *v31);
              ++v32;
              v33 = (unsigned __int64)*v31++ >> 1;
              v34 = v39-- == 1;
              v30 += 2 * v33;
            }
            while ( !v34 );
          }
          *a5 = v37;
          if ( a6 )
            *a6 = v28;
        }
        else
        {
          v10 = -1073741670;
        }
        goto LABEL_53;
      }
      goto LABEL_43;
    default:
LABEL_43:
      v10 = -1072431089;
      goto LABEL_53;
  }
  v10 = v27;
  v6 = *v22;
  if ( v27 >= 0 )
    goto LABEL_42;
LABEL_53:
  if ( (_DWORD)v19 )
  {
    v35 = (PVOID *)v20;
    do
    {
      if ( *v35 )
        ExFreePoolWithTag(*v35, 0);
      ++v35;
      --v19;
    }
    while ( v19 );
  }
  ExFreePoolWithTag(v22, 0);
  ExFreePoolWithTag(v20, 0);
  return v10;
}
