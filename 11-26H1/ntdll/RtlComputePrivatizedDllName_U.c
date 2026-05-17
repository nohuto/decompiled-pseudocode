/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180099CD0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180099B50 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int64 v4; // r10
  char *v6; // r13
  char *v7; // r11
  char *v8; // rdx
  wchar_t *Buffer; // rbp
  int v10; // edi
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned __int64 Length; // r14
  wchar_t *v14; // rcx
  wchar_t *j; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // bx
  unsigned int v18; // r15d
  unsigned int v19; // ecx
  char *Atom; // rax
  char *v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned int v23; // ecx
  __int16 v24; // si
  char *v25; // rax
  char *v26; // r15
  unsigned __int64 v27; // rbx
  char *v28; // r14
  unsigned __int64 v29; // rbx
  char *i; // rcx
  char *v32; // rax
  void *Src; // [rsp+20h] [rbp-48h]
  char *v34; // [rsp+28h] [rbp-40h]
  unsigned int Size; // [rsp+70h] [rbp+8h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  Src = v3;
  v6 = 0LL;
  v34 = 0LL;
  v7 = v3;
  v8 = 0LL;
  if ( (_WORD)v4 )
  {
    for ( i = &v3[2 * (v4 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        v32 = i;
        if ( v8 )
          v32 = v8;
        v8 = v32;
        v34 = v32;
      }
      else if ( *(_WORD *)i == 47 || *(_WORD *)i == 92 )
      {
        v7 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v10 = 0;
  v11 = v8 == 0LL ? 8 : 0;
  v12 = v4 + 2 * (1 - ((v7 - v3) >> 1));
  LODWORD(v37) = v12;
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2
                                                                      * ((unsigned __int64)(unsigned int)Length >> 1)) == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
    v18 = v11 + v12;
    v37 = v12;
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 47 || *j == 92 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - Buffer;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return 3221225734LL;
    v17 = 2 * v16;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return 3221225734LL;
    if ( (unsigned __int16)v4 > 0xFFFCu )
      return 3221225734LL;
    v18 = v11 + v12;
    v19 = v11 + v12 + v17;
    if ( v19 > 0xFFFE )
      return 3221225734LL;
    v10 = (unsigned __int16)v19;
    Atom = (char *)RtlpAllocateAtom((unsigned __int16)v19);
    v6 = Atom;
    if ( !Atom )
      return 3221225495LL;
    memmove(Atom, Buffer, v17);
    v37 = (unsigned int)v37;
    v21 = &v6[2 * ((unsigned __int64)v17 >> 1)];
    memmove(v21, Src, (unsigned int)v37 - 2LL);
    v22 = ((unsigned __int64)(unsigned int)v37 - 2) >> 1;
    if ( v34 )
    {
      *(_WORD *)&v21[2 * v22] = 0;
    }
    else
    {
      *(_QWORD *)&v21[2 * v22] = *(_QWORD *)L".DLL";
      *(_WORD *)&v21[2 * v22 + 8] = aDll[4];
    }
  }
  v23 = v18 + Length + Size + 14;
  if ( v23 > 0xFFFE )
    return 3221225734LL;
  v24 = v18 + Length + Size + 14;
  v25 = (char *)RtlpAllocateAtom((unsigned __int16)v23);
  v26 = v25;
  if ( !v25 )
    return 3221225495LL;
  memmove(v25, Buffer, (unsigned int)Length);
  v27 = (unsigned __int64)(unsigned int)Length >> 1;
  v28 = &v26[2 * v27];
  if ( Size )
  {
    memmove(&v26[2 * v27], L"\\microsoft.system.package.metadata\\Application", Size);
    v28 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v28 = *(_QWORD *)L".Local";
  *((_DWORD *)v28 + 2) = *(_DWORD *)L"al";
  *((_WORD *)v28 + 6) = 92;
  memmove(v28 + 14, Src, v37 - 2);
  v29 = (unsigned __int64)(v37 - 2) >> 1;
  if ( v34 )
  {
    *(_WORD *)&v28[2 * v29 + 14] = 0;
  }
  else
  {
    *(_QWORD *)&v28[2 * v29 + 14] = *(_QWORD *)L".DLL";
    *(_WORD *)&v28[2 * v29 + 22] = aDll[4];
  }
  *(_QWORD *)(a2 + 8) = v6;
  *(_WORD *)(a2 + 2) = v10;
  *(_WORD *)a2 = v10;
  if ( v10 )
    *(_WORD *)a2 = v10 - 2;
  *(_WORD *)(a3 + 2) = v24;
  *(_WORD *)a3 = v24 - 2;
  *(_QWORD *)(a3 + 8) = v26;
  return 0LL;
}
