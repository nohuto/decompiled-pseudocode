/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180098E00
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180098C80 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  wchar_t *Buffer; // r9
  unsigned __int64 Length; // r10
  wchar_t *v6; // r13
  wchar_t *v7; // r11
  wchar_t *v8; // rdx
  wchar_t *v9; // rbp
  int v10; // edi
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned __int64 v13; // r14
  wchar_t *v14; // rcx
  wchar_t *j; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // bx
  unsigned int v18; // r15d
  unsigned int v19; // ecx
  wchar_t *Atom; // rax
  wchar_t *v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned int v23; // ecx
  unsigned __int16 v24; // si
  wchar_t *v25; // rax
  wchar_t *v26; // r15
  unsigned __int64 v27; // rbx
  wchar_t *v28; // r14
  unsigned __int64 v29; // rbx
  wchar_t *i; // rcx
  wchar_t *v32; // rax
  wchar_t *Src; // [rsp+20h] [rbp-48h]
  wchar_t *v34; // [rsp+28h] [rbp-40h]
  unsigned int Size; // [rsp+70h] [rbp+8h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  Src = Buffer;
  v6 = 0LL;
  v34 = 0LL;
  v7 = Buffer;
  v8 = 0LL;
  if ( (_WORD)Length )
  {
    for ( i = &Buffer[(Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        v32 = i;
        if ( v8 )
          v32 = v8;
        v8 = v32;
        v34 = v32;
      }
      else if ( *i == 47 || *i == 92 )
      {
        v7 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v9 = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v10 = 0;
  v11 = v8 == 0LL ? 8 : 0;
  v12 = Length + 2 * (1 - (v7 - Buffer));
  LODWORD(v37) = v12;
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(v13) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2 * ((unsigned __int64)(unsigned int)v13 >> 1)) == 59 )
          break;
        LODWORD(v13) = v13 + 2;
      }
      while ( (unsigned int)v13 < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
    v18 = v11 + v12;
    v37 = v12;
  }
  else
  {
    v13 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v9 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v9 = (wchar_t *)((char *)v9 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = v9;
    for ( j = &v9[(v13 >> 1) - 1]; j > v9; --j )
    {
      if ( *j == 47 || *j == 92 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - v9;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return -1073741562;
    v17 = 2 * v16;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return -1073741562;
    if ( (unsigned __int16)Length > 0xFFFCu )
      return -1073741562;
    v18 = v11 + v12;
    v19 = v11 + v12 + v17;
    if ( v19 > 0xFFFE )
      return -1073741562;
    v10 = (unsigned __int16)v19;
    Atom = (wchar_t *)RtlpAllocateAtom((unsigned __int16)v19);
    v6 = Atom;
    if ( !Atom )
      return -1073741801;
    memmove(Atom, v9, v17);
    v37 = (unsigned int)v37;
    v21 = &v6[(unsigned __int64)v17 >> 1];
    memmove(v21, Src, (unsigned int)v37 - 2LL);
    v22 = ((unsigned __int64)(unsigned int)v37 - 2) >> 1;
    if ( v34 )
    {
      v21[v22] = 0;
    }
    else
    {
      *(_QWORD *)&v21[v22] = *(_QWORD *)L".DLL";
      v21[v22 + 4] = aDll[4];
    }
  }
  v23 = v18 + v13 + Size + 14;
  if ( v23 > 0xFFFE )
    return -1073741562;
  v24 = v18 + v13 + Size + 14;
  v25 = (wchar_t *)RtlpAllocateAtom((unsigned __int16)v23);
  v26 = v25;
  if ( !v25 )
    return -1073741801;
  memmove(v25, v9, (unsigned int)v13);
  v27 = (unsigned __int64)(unsigned int)v13 >> 1;
  v28 = &v26[v27];
  if ( Size )
  {
    memmove(&v26[v27], L"\\microsoft.system.package.metadata\\Application", Size);
    v28 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v28 = *(_QWORD *)L".Local";
  *((_DWORD *)v28 + 2) = *(_DWORD *)L"al";
  v28[6] = 92;
  memmove(v28 + 7, Src, v37 - 2);
  v29 = (unsigned __int64)(v37 - 2) >> 1;
  if ( v34 )
  {
    v28[v29 + 7] = 0;
  }
  else
  {
    *(_QWORD *)&v28[v29 + 7] = *(_QWORD *)L".DLL";
    v28[v29 + 11] = aDll[4];
  }
  RealName->Buffer = v6;
  RealName->MaximumLength = v10;
  RealName->Length = v10;
  if ( v10 )
    RealName->Length = v10 - 2;
  LocalName->MaximumLength = v24;
  LocalName->Length = v24 - 2;
  LocalName->Buffer = v26;
  return 0;
}
