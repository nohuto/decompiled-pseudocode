/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x180041A90
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x180059088 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     ZwQueryLicenseValue @ 0x180161A50 (ZwQueryLicenseValue.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(const void **a1, _UNICODE_STRING *a2)
{
  PVOID Heap_0; // rdi
  unsigned int v5; // r14d
  wchar_t *Atom; // rax
  wchar_t *v7; // r15
  wchar_t *v8; // r14
  unsigned __int16 MaximumLength; // r8
  unsigned __int16 Length; // dx
  unsigned int v11; // ecx
  unsigned int v12; // r15d
  wchar_t *v13; // r12
  NTSTATUS v14; // eax
  ULONG v15; // r14d
  ULONG v16; // r15d
  NTSTATUS v17; // ebx
  _WORD *v18; // rax
  _WORD *v19; // r14
  __int64 v20; // rcx
  _WORD *v21; // rax
  __int16 v22; // cx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-38h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+28h] BYREF

  Heap_0 = 0LL;
  DataSize = 0;
  Type = 0;
  ValueName = 0LL;
  if ( !a1 || !a2 )
  {
    v17 = -1073741811;
LABEL_25:
    if ( !a2 )
      goto LABEL_29;
    goto LABEL_26;
  }
  v5 = (unsigned __int16)(*(_WORD *)a1 + 56);
  Atom = (wchar_t *)RtlpAllocateAtom((unsigned __int16)(*(_WORD *)a1 + 56));
  v7 = Atom;
  if ( !Atom )
  {
    v17 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(Atom, 0, v5);
  ValueName.MaximumLength = v5;
  ValueName.Buffer = v7;
  if ( (unsigned int)ValueName.Length + 54 > v5 )
  {
    v17 = -1073741789;
    goto LABEL_26;
  }
  v8 = &v7[(unsigned __int64)ValueName.Length >> 1];
  memmove(v8, L"Security-System-Capability-", 0x36uLL);
  MaximumLength = ValueName.MaximumLength;
  Length = ValueName.Length + 54;
  v11 = (unsigned __int16)(ValueName.Length + 54) + 1;
  ValueName.Length += 54;
  if ( v11 < ValueName.MaximumLength )
  {
    v8[27] = 0;
    MaximumLength = ValueName.MaximumLength;
    Length = ValueName.Length;
  }
  v12 = *(unsigned __int16 *)a1;
  if ( (_WORD)v12 )
  {
    if ( v12 + Length > MaximumLength )
    {
      v17 = -1073741789;
      goto LABEL_26;
    }
    v13 = &ValueName.Buffer[(unsigned __int64)Length >> 1];
    memmove(v13, a1[1], *(unsigned __int16 *)a1);
    ValueName.Length += v12;
    if ( (unsigned int)ValueName.Length + 1 < ValueName.MaximumLength )
      v13[(unsigned __int64)v12 >> 1] = 0;
  }
  v14 = ZwQueryLicenseValue(&ValueName, &Type, 0LL, 0, &DataSize);
  if ( v14 != -1073741789 )
  {
    v17 = v14;
    if ( v14 >= 0 )
      goto LABEL_29;
    goto LABEL_25;
  }
  v15 = DataSize;
  v16 = DataSize;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, DataSize);
  v17 = ZwQueryLicenseValue(&ValueName, &Type, Heap_0, v15, &DataSize);
  if ( v17 >= 0 )
  {
    if ( Type == 1 && v15 && (v15 & 1) == 0 )
    {
      v18 = RtlpAllocateAtom(v15);
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
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
LABEL_29:
  if ( ValueName.Buffer )
    RtlpSysVolFree(ValueName.Buffer);
  return (unsigned int)v17;
}
