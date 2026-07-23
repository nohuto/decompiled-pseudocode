/*
 * XREFs of LdrpBuildSystem32FileName @ 0x1800BC260
 * Callers:
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180117E90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(unsigned __int16 *a1, unsigned __int16 *a2)
{
  _DWORD *SharedData; // rcx
  __int64 v5; // rsi
  size_t v6; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // bp
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // ecx
  unsigned __int16 *v12; // rbp
  _QWORD *v13; // r14
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // esi
  int v17; // edx
  unsigned int v18; // r8d
  unsigned __int16 *v20; // rdx
  unsigned int v21; // r15d
  __int64 v22; // rax
  unsigned int v23; // esi
  unsigned __int16 *v24; // rdx
  PVOID v25; // r14
  unsigned __int16 *v26; // rdx
  unsigned int v27; // ebp
  PVOID v28; // rsi
  PVOID Atom; // r14

  *a1 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 30;
  else
    v5 = 2147352624LL;
  LOWORD(v6) = 0;
  v7 = 0;
  if ( v5 )
  {
    v6 = 2 * wcslen((const wchar_t *)v5);
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    v8 = v6;
    v7 = v6;
  }
  else
  {
    v8 = 0;
  }
  if ( (_WORD)v6 )
  {
    v9 = *a1;
    v10 = v9 + v7 + 2;
    if ( v10 <= a1[1] )
    {
LABEL_9:
      memmove((void *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v9), (const void *)v5, v8);
      *a1 += v8;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
      goto LABEL_10;
    }
    if ( v10 <= 0xFFFE )
    {
      v20 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
      v21 = (v10 + 63) & 0xFFFFFFC0;
      if ( v21 > 0xFFFE )
        v21 = 65534;
      if ( v20 == a1 + 8 )
      {
        Atom = RtlpAllocateAtom(v21);
        if ( Atom )
        {
          if ( *a1 )
            memmove(Atom, *((const void **)a1 + 1), *a1);
          LOWORD(v9) = *a1;
          *((_QWORD *)a1 + 1) = Atom;
          a1[1] = v21;
          goto LABEL_9;
        }
      }
      else
      {
        v22 = NtdllpReallocateStringRoutine(v21, v20);
        if ( v22 )
        {
          LOWORD(v9) = *a1;
          *((_QWORD *)a1 + 1) = v22;
          a1[1] = v21;
          goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
  v11 = *a1;
  v12 = a1 + 1;
  if ( v11 + 22 <= (unsigned int)a1[1] )
  {
LABEL_11:
    v13 = a1 + 4;
    v14 = *((_QWORD *)a1 + 1) + (unsigned __int16)v11;
    *(_OWORD *)v14 = *(_OWORD *)SlashSystem32SlashString.Buffer;
    *(_DWORD *)(v14 + 16) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
    *a1 += 20;
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    goto LABEL_12;
  }
  if ( (unsigned int)(v11 + 22) <= 0xFFFE )
  {
    v23 = (v11 + 85) & 0xFFFFFFC0;
    if ( v23 > 0xFFFE )
    {
      v23 = 65534;
      v12 = a1 + 1;
    }
    v24 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    if ( v24 == a1 + 8 )
    {
      v25 = RtlpAllocateAtom(v23);
      if ( !v25 )
        goto LABEL_33;
      if ( *a1 )
        memmove(v25, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v25 = (PVOID)NtdllpReallocateStringRoutine(v23, v24);
      if ( !v25 )
      {
        v12 = a1 + 1;
        goto LABEL_33;
      }
    }
    LOWORD(v11) = *a1;
    v12 = a1 + 1;
    *((_QWORD *)a1 + 1) = v25;
    a1[1] = v23;
    goto LABEL_11;
  }
LABEL_33:
  v13 = a1 + 4;
LABEL_12:
  if ( !a2 )
    return 0LL;
  v15 = *a2;
  v16 = 0;
  if ( (_WORD)v15 )
  {
    v17 = *a1;
    v18 = v17 + v15 + 2;
    if ( v18 <= *v12 )
    {
LABEL_15:
      v16 = 0;
      memmove((void *)(*v13 + (unsigned __int16)v17), *((const void **)a2 + 1), (unsigned __int16)v15);
      *a1 += *a2;
      *(_WORD *)(*v13 + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
      return v16;
    }
    if ( v18 > 0xFFFE )
      return (unsigned int)-1073741562;
    v26 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v27 = (v18 + 63) & 0xFFFFFFC0;
    if ( v27 > 0xFFFE )
      v27 = 65534;
    if ( v26 == a1 + 8 )
    {
      v28 = RtlpAllocateAtom(v27);
      if ( !v28 )
        return (unsigned int)-1073741801;
      v13 = a1 + 4;
      if ( *a1 )
      {
        memmove(v28, *((const void **)a1 + 1), *a1);
        v13 = a1 + 4;
        goto LABEL_52;
      }
    }
    else
    {
      v28 = (PVOID)NtdllpReallocateStringRoutine(v27, v26);
      v13 = a1 + 4;
    }
    if ( !v28 )
      return (unsigned int)-1073741801;
LABEL_52:
    LOWORD(v17) = *a1;
    *((_QWORD *)a1 + 1) = v28;
    a1[1] = v27;
    LOWORD(v15) = *a2;
    goto LABEL_15;
  }
  return v16;
}
