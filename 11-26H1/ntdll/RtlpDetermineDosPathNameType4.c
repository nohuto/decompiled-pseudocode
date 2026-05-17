/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x1800A58D0
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x1800A57C4 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A6E20 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // r14
  char v8; // r12
  bool v9; // r15
  char v10; // bp
  int v12; // eax
  _DWORD *v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v12 = RtlDetermineDosPathNameType_Ustr(a2);
  v15 = *(_WORD *)a2 == 4;
  *v13 = v12;
  if ( v15 )
    goto LABEL_28;
  LOBYTE(v13) = 1;
  if ( (unsigned __int8)RtlEqualUnicodeString(&RtlpWin32NtRoot, a2, v13, v14, v24[0])
    || (LOBYTE(v16) = 1, (unsigned __int8)RtlEqualUnicodeString(L"\b\n", a2, v16, v17, v24[0])) )
  {
    v10 = 1;
  }
  else
  {
    LOBYTE(v16) = 1;
    if ( !(unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v16) )
      return v4;
  }
  v7 = 1;
  LOBYTE(v16) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(&RtlpWin32NtUncRoot, a2, v16, v17, v24[0]) )
  {
    LOBYTE(v18) = 1;
    if ( !(unsigned __int8)RtlEqualUnicodeString(&RtlpWin32NtUncRootSlash, a2, v18, v19, v24[0]) )
    {
      LOBYTE(v20) = 1;
      if ( (unsigned __int8)RtlPrefixUnicodeString(&RtlpWin32NtUncRootSlash, a2, v20) )
        goto LABEL_17;
      if ( !v10 )
      {
        v22 = *(_QWORD *)(a2 + 8) + 8LL;
        v24[0] = *(_QWORD *)a2;
        v24[1] = v22;
        LOWORD(v24[0]) -= 8;
        WORD1(v24[0]) -= 8;
        v23 = RtlDetermineDosPathNameType_Ustr(v24);
        v9 = v23 == 2;
        if ( v23 != 2 )
          *a4 |= 0x200u;
        goto LABEL_18;
      }
LABEL_28:
      *a4 |= 0x400u;
      v21 = *a4;
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  v10 = 1;
LABEL_17:
  v8 = 1;
  if ( v10 )
    goto LABEL_28;
LABEL_18:
  *a4 |= 0x10u;
  v21 = *a4;
LABEL_19:
  if ( v8 )
  {
    v21 |= 0x40u;
    *a4 = v21;
  }
  if ( v9 )
    *a4 = v21 | 0x20;
  return v4;
}
