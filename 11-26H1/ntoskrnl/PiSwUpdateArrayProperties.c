/*
 * XREFs of PiSwUpdateArrayProperties @ 0x1409ADFF8
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1409AE6BC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwUpdateArrayProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r13d
  unsigned int i; // r12d
  __int64 v10; // rsi
  __int64 v11; // rcx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rdx
  size_t v14; // r8
  void *v15; // r15
  __int64 Pool2; // rax
  unsigned int v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  v4 = 0;
  v5 = a4;
  v6 = 0;
  while ( 2 )
  {
    if ( v6 >= v5 )
      return v4;
    for ( i = 0; ; ++i )
    {
      if ( i >= a2 )
        goto LABEL_16;
      v10 = 48LL * i;
      if ( *(_DWORD *)(a3 + 48LL * v6 + 16) == *(_DWORD *)(v10 + a1 + 16) )
      {
        v11 = *(_QWORD *)(a3 + 48LL * v6) - *(_QWORD *)(v10 + a1);
        if ( !v11 )
          v11 = *(_QWORD *)(a3 + 48LL * v6 + 8) - *(_QWORD *)(v10 + a1 + 8);
        if ( !v11 && *(_DWORD *)(a3 + 48LL * v6 + 20) == *(_DWORD *)(v10 + a1 + 20) )
          break;
      }
LABEL_6:
      ;
    }
    v12 = *(const wchar_t **)(a3 + 48LL * v6 + 24);
    v13 = *(const wchar_t **)(v10 + a1 + 24);
    if ( v12 != v13 && (!v12 || !v13 || wcsicmp(v12, v13)) )
    {
      a2 = v18;
      goto LABEL_6;
    }
    v14 = *(unsigned int *)(v10 + a1 + 36);
    if ( *(_DWORD *)(a3 + 48LL * v6 + 36) == (_DWORD)v14 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 48LL * i + 32) = *(_DWORD *)(a3 + 48LL * v6 + 32);
      if ( (_DWORD)v14 )
        memmove(*(void **)(a1 + 48LL * i + 40), *(const void **)(a3 + 48LL * v6 + 40), v14);
      a2 = v18;
LABEL_16:
      v5 = a4;
      ++v6;
      continue;
    }
    break;
  }
  v15 = *(void **)(v10 + a1 + 40);
  *(_QWORD *)(v10 + a1 + 40) = 0LL;
  if ( !*(_DWORD *)(a3 + 48LL * v6 + 36)
    || (Pool2 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(v10 + a1 + 40) = Pool2) != 0LL) )
  {
    if ( v15 )
      ExFreePoolWithTag(v15, 0x57706E50u);
    v14 = *(unsigned int *)(a3 + 48LL * v6 + 36);
    *(_DWORD *)(v10 + a1 + 36) = v14;
    goto LABEL_13;
  }
  *(_QWORD *)(v10 + a1 + 40) = v15;
  return (unsigned int)-1073741670;
}
