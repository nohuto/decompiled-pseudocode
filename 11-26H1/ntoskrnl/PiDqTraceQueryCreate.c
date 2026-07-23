/*
 * XREFs of PiDqTraceQueryCreate @ 0x140950F84
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14094FA58 (PiDqIrpQueryCreate.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x140498C4C (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     FilterConvertToString @ 0x1408A63CC (FilterConvertToString.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x1409F8958 (PnpConvertDevpropcompkeyArrayToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x140B115AC (PiDqConvertQueryFlagsToString.c)
 *     PiDqConvertObjectTypeToString @ 0x140B3696C (PiDqConvertObjectTypeToString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqTraceQueryCreate(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rdi
  _WORD *v4; // rsi
  char *v5; // r13
  void *v6; // r15
  char *v7; // r12
  int v8; // ecx
  int v9; // ecx
  char *v10; // rax
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  char *Pool2; // rax
  unsigned int v17; // ecx
  char *v18; // rdx
  char *v19; // rax
  unsigned int v20; // ecx
  char *v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23[3]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+C8h] [rbp+50h] BYREF
  const wchar_t *v26; // [rsp+D0h] [rbp+58h]
  char *v27; // [rsp+D8h] [rbp+60h]

  v1 = 0;
  if ( byte_140EF412A >= 0 )
    return (unsigned int)v1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  v27 = 0LL;
  v23[0] = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = PiDqConvertObjectTypeToString(*(unsigned int *)(v3 + 16), v23);
  if ( v1 < 0 )
    return (unsigned int)v1;
  v8 = *(_DWORD *)(v3 + 20);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return (unsigned int)-1073741811;
      v15 = *(_DWORD *)(v3 + 24);
      v26 = L"Instances";
      if ( v15 <= 2 )
        return (unsigned int)-1073741811;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, *(const void **)(v3 + 32), 2LL * *(unsigned int *)(v3 + 24));
      v17 = *(_DWORD *)(v3 + 24) - 2;
      if ( *(_DWORD *)(v3 + 24) != 2 )
      {
        v18 = &v7[2 * v17];
        v26 = L"Instances";
        do
        {
          if ( !*(_WORD *)v18 )
            *(_WORD *)v18 = 32;
          v18 -= 2;
          --v17;
        }
        while ( v17 );
      }
      v27 = v7;
    }
    else
    {
      v10 = *(char **)(v3 + 24);
      v26 = L"Instance";
      v27 = v10;
    }
  }
  else
  {
    v26 = L"Type";
  }
  v25 = 512;
  v11 = ExAllocatePool2(0x100uLL);
  v12 = (void *)v11;
  if ( !v11 )
    goto LABEL_34;
  v1 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v3 + 40), v11, 512LL, &v25);
  if ( v1 == -1073741789 )
  {
    ExFreePoolWithTag(v12, 0x58706E50u);
    v13 = ExAllocatePool2(0x100uLL);
    v12 = (void *)v13;
    if ( !v13 )
      goto LABEL_34;
    v1 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v3 + 40), v13, v25, &v25);
  }
  if ( v1 < 0 )
    goto LABEL_22;
  if ( (*(_DWORD *)(v3 + 40) & 4) != 0 )
  {
    if ( *(_DWORD *)(v3 + 48) <= 2u )
    {
      v1 = -1073741811;
      goto LABEL_22;
    }
    v19 = (char *)ExAllocatePool2(0x100uLL);
    v1 = 0;
    v5 = v19;
    if ( !v19 )
      goto LABEL_34;
    memmove(v19, *(const void **)(v3 + 56), 2LL * *(unsigned int *)(v3 + 48));
    v20 = *(_DWORD *)(v3 + 48) - 2;
    if ( *(_DWORD *)(v3 + 48) != 2 )
    {
      v21 = &v5[2 * v20];
      do
      {
        if ( !*(_WORD *)v21 )
          *(_WORD *)v21 = 32;
        v21 -= 2;
        --v20;
      }
      while ( v20 );
      v4 = 0LL;
    }
  }
  else
  {
    v1 = 0;
  }
  if ( *(_DWORD *)(v3 + 64) )
  {
    v25 = 512;
    v6 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v6 )
      goto LABEL_34;
    v1 = PnpConvertDevpropcompkeyArrayToString(
           *(_QWORD *)(v3 + 72),
           *(_DWORD *)(v3 + 64),
           (_DWORD)v6,
           512,
           (__int64)&v25);
    if ( v1 == -1073741789 )
    {
      ExFreePoolWithTag(v6, 0x58706E50u);
      v6 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v6 )
        goto LABEL_34;
      v1 = PnpConvertDevpropcompkeyArrayToString(
             *(_QWORD *)(v3 + 72),
             *(_DWORD *)(v3 + 64),
             (_DWORD)v6,
             v25,
             (__int64)&v25);
    }
    if ( v1 < 0 )
      goto LABEL_22;
    v1 = 0;
  }
  if ( !*(_DWORD *)(v3 + 80) )
    goto LABEL_20;
  v25 = 512;
  v4 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
    goto LABEL_34;
  v1 = FilterConvertToString(*(_DWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), 0x200u, v4, &v25);
  if ( v1 != -1073741789 )
    goto LABEL_60;
  ExFreePoolWithTag(v4, 0x58706E50u);
  v4 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
  {
LABEL_34:
    v1 = -1073741670;
    goto LABEL_22;
  }
  v1 = FilterConvertToString(*(_DWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), v25, v4, &v25);
LABEL_60:
  if ( v1 >= 0 )
  {
    v1 = 0;
LABEL_20:
    if ( byte_140EF412A < 0 )
    {
      LODWORD(v22) = PsGetCurrentThreadProcessId();
      v1 = McTemplateK0pqzzzzzzz_EtwWriteTransfer(v23[0], v14, v3, a1, v22, v23[0], v26, v27, v12, v5, v6, v4);
    }
  }
LABEL_22:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x58706E50u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x58706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x58706E50u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x58706E50u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x58706E50u);
  return (unsigned int)v1;
}
