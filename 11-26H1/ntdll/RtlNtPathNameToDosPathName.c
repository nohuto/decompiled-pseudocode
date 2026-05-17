/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800A7060
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnsureBufferSize @ 0x18009AB80 (RtlpEnsureBufferSize.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A6E20 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rsi
  unsigned __int64 v8; // rbp
  const wchar_t *v10; // r14
  __int64 v11; // r8
  unsigned __int16 *v12; // r15
  unsigned __int16 v13; // dx
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  __int64 v25; // [rsp+58h] [rbp+10h]

  v4 = 0;
  v6 = a3;
  v8 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( *a4 )
    {
      v8 = (__int64)(*a4 - *((_QWORD *)a2 + 1)) >> 1;
      if ( v8 >= (unsigned __int64)*a2 >> 1 )
        return (unsigned int)-1073741811;
    }
  }
  v10 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlPrefixUnicodeString(&RtlpDosDevicesUncPrefix, a2, a3) )
  {
    v10 = L"\b\n";
    LOBYTE(v11) = 1;
    if ( (unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v11) )
    {
      v12 = (unsigned __int16 *)&RtlpEmptyString;
      if ( v6 )
        *v6 = 3;
      goto LABEL_12;
    }
    if ( !v6 )
      return v4;
    v19 = RtlDetermineDosPathNameType_Ustr(a2);
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_25;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_25;
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( (unsigned int)(v24 - 1) > 1 )
              return v4;
LABEL_25:
            *v6 = 4;
            return v4;
          }
        }
      }
    }
    *v6 = 1;
    return v4;
  }
  v12 = (unsigned __int16 *)&unk_180172DD8;
  if ( v6 )
    *v6 = 2;
LABEL_12:
  v13 = *a2;
  v25 = (unsigned __int16)((*v12 >> 1) + (*a2 >> 1) - (*v10 >> 1));
  v14 = 2 * v25 + 2;
  if ( v14 > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else
  {
    v15 = (unsigned __int64 *)(a2 + 16);
    if ( a2 == (unsigned __int16 *)-16LL || v14 > *v15 )
    {
      if ( (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v14) < 0 )
        return (unsigned int)-1073741801;
      v13 = *a2;
    }
    v16 = *((_QWORD *)a2 + 2);
    a2[1] = *(_WORD *)v15;
    *((_QWORD *)a2 + 1) = v16;
    memmove(
      (void *)(v16 + 2 * ((unsigned __int64)*v12 >> 1)),
      (const void *)(v16 + 2 * ((unsigned __int64)*v10 >> 1)),
      v13 - (unsigned __int64)*v10);
    memmove(*((void **)a2 + 1), *((const void **)v12 + 1), *v12);
    v17 = (unsigned __int16)(2 * v25);
    v18 = *((_QWORD *)a2 + 1);
    *a2 = v17;
    *(_WORD *)(v18 + 2 * (v17 >> 1)) = 0;
    if ( v8 )
      *a4 = *((_QWORD *)a2 + 1) + 2 * (v8 + ((unsigned __int64)*v12 >> 1) - ((unsigned __int64)*v10 >> 1));
  }
  return v4;
}
