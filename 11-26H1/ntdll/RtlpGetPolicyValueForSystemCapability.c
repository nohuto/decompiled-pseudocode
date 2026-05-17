/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x180057510
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000D958 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     ZwQueryLicenseValue @ 0x180161B50 (ZwQueryLicenseValue.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(const void **a1, UNICODE_STRING *a2)
{
  const void *Heap_0; // rdi
  unsigned int v5; // r14d
  char *Atom; // rax
  char *v7; // r15
  char *v8; // r14
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  unsigned int v11; // ecx
  unsigned int v12; // r15d
  void *v13; // r12
  int v14; // eax
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  int v17; // ebx
  _WORD *v18; // rax
  _WORD *v19; // r14
  __int64 v20; // rcx
  _WORD *v21; // rax
  __int16 v22; // cx
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF
  int v26; // [rsp+90h] [rbp+28h] BYREF

  Heap_0 = 0LL;
  LODWORD(Size) = 0;
  v26 = 0;
  v24 = 0LL;
  if ( !a1 || !a2 )
  {
    v17 = -1073741811;
LABEL_25:
    if ( !a2 )
      goto LABEL_29;
    goto LABEL_26;
  }
  v5 = (unsigned __int16)(*(_WORD *)a1 + 56);
  Atom = (char *)RtlpAllocateAtom((unsigned __int16)(*(_WORD *)a1 + 56));
  v7 = Atom;
  if ( !Atom )
  {
    v17 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(Atom, 0, v5);
  WORD1(v24) = v5;
  *((_QWORD *)&v24 + 1) = v7;
  if ( (unsigned int)(unsigned __int16)v24 + 54 > v5 )
  {
    v17 = -1073741789;
    goto LABEL_26;
  }
  v8 = &v7[2 * ((unsigned __int64)(unsigned __int16)v24 >> 1)];
  memmove(v8, L"Security-System-Capability-", 0x36uLL);
  v9 = WORD1(v24);
  v10 = v24 + 54;
  v11 = (unsigned __int16)(v24 + 54) + 1;
  LOWORD(v24) = v24 + 54;
  if ( v11 < WORD1(v24) )
  {
    *((_WORD *)v8 + 27) = 0;
    v9 = WORD1(v24);
    v10 = v24;
  }
  v12 = *(unsigned __int16 *)a1;
  if ( (_WORD)v12 )
  {
    if ( v12 + v10 > v9 )
    {
      v17 = -1073741789;
      goto LABEL_26;
    }
    v13 = (void *)(*((_QWORD *)&v24 + 1) + 2 * ((unsigned __int64)v10 >> 1));
    memmove(v13, a1[1], *(unsigned __int16 *)a1);
    LOWORD(v24) = v12 + v24;
    if ( (unsigned int)(unsigned __int16)v24 + 1 < WORD1(v24) )
      *((_WORD *)v13 + ((unsigned __int64)v12 >> 1)) = 0;
  }
  v14 = ZwQueryLicenseValue(&v24, &v26, 0LL, 0LL, &Size);
  if ( v14 != -1073741789 )
  {
    v17 = v14;
    if ( v14 >= 0 )
      goto LABEL_29;
    goto LABEL_25;
  }
  v15 = Size;
  v16 = Size;
  Heap_0 = (const void *)RtlAllocateHeap_0();
  v17 = ZwQueryLicenseValue(&v24, &v26, Heap_0, v15, &Size);
  if ( v17 >= 0 )
  {
    if ( v26 == 1 && v15 && (v15 & 1) == 0 )
    {
      v18 = (_WORD *)RtlpAllocateAtom(v15);
      v19 = v18;
      if ( v18 )
      {
        memmove(v18, Heap_0, v16);
        v20 = 0x7FFFLL;
        *a2 = 0LL;
        v21 = v19;
        do
        {
          if ( !*v21 )
            break;
          ++v21;
          --v20;
        }
        while ( v20 );
        v17 = -1073741811;
        if ( v20 )
        {
          v17 = 0;
          v22 = 2 * v20;
          a2->Buffer = v19;
          a2->Length = -2 - v22;
          a2->MaximumLength = -v22;
        }
        if ( v17 >= 0 )
        {
          v17 = 0;
          goto LABEL_27;
        }
      }
      else
      {
        v17 = -1073741801;
      }
    }
    else
    {
      v17 = -1073741823;
    }
  }
LABEL_26:
  RtlFreeAnsiString(a2);
LABEL_27:
  if ( Heap_0 )
    RtlFreeHeap_0();
LABEL_29:
  if ( *((_QWORD *)&v24 + 1) )
    RtlpSysVolFree(*((__int64 *)&v24 + 1));
  return (unsigned int)v17;
}
