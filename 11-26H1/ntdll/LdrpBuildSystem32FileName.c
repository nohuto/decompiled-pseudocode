/*
 * XREFs of LdrpBuildSystem32FileName @ 0x1800BE800
 * Callers:
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1801180E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rsi
  size_t v8; // rax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // bp
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned __int16 *v14; // rbp
  _QWORD *v15; // r14
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // edx
  __int64 v20; // r8
  unsigned __int16 *v22; // rdx
  unsigned int v23; // r15d
  __int64 v24; // rax
  unsigned int v25; // esi
  unsigned __int16 *v26; // rdx
  void *v27; // r14
  unsigned __int16 *v28; // rdx
  unsigned int v29; // ebp
  void *v30; // rsi
  void *Atom; // r14

  *a1 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 30;
  else
    v7 = 2147352624LL;
  LOWORD(v8) = 0;
  v9 = 0;
  if ( v7 )
  {
    v8 = 2 * wcslen((const wchar_t *)v7);
    if ( v8 >= 0xFFFE )
      LOWORD(v8) = -4;
    v10 = v8;
    v9 = v8;
  }
  else
  {
    v10 = 0;
  }
  if ( (_WORD)v8 )
  {
    v11 = *a1;
    v12 = v11 + v9 + 2;
    if ( v12 <= a1[1] )
    {
LABEL_9:
      memmove((void *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v11), (const void *)v7, v10);
      *a1 += v10;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
      goto LABEL_10;
    }
    if ( v12 <= 0xFFFE )
    {
      v22 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
      v23 = (v12 + 63) & 0xFFFFFFC0;
      if ( v23 > 0xFFFE )
        v23 = 65534;
      if ( v22 == a1 + 8 )
      {
        Atom = (void *)RtlpAllocateAtom(v23);
        if ( Atom )
        {
          if ( *a1 )
            memmove(Atom, *((const void **)a1 + 1), *a1);
          LOWORD(v11) = *a1;
          *((_QWORD *)a1 + 1) = Atom;
          a1[1] = v23;
          goto LABEL_9;
        }
      }
      else
      {
        v24 = NtdllpReallocateStringRoutine(v23, v22, a3, a4);
        if ( v24 )
        {
          LOWORD(v11) = *a1;
          *((_QWORD *)a1 + 1) = v24;
          a1[1] = v23;
          goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
  v13 = *a1;
  v14 = a1 + 1;
  if ( v13 + 22 <= (unsigned int)a1[1] )
  {
LABEL_11:
    v15 = a1 + 4;
    v16 = *((_QWORD *)a1 + 1) + (unsigned __int16)v13;
    *(_OWORD *)v16 = *(_OWORD *)L"\\SYSTEM32\\";
    *(_DWORD *)(v16 + 16) = *(_DWORD *)L"2\\";
    *a1 += 20;
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    goto LABEL_12;
  }
  if ( (unsigned int)(v13 + 22) <= 0xFFFE )
  {
    v25 = (v13 + 85) & 0xFFFFFFC0;
    if ( v25 > 0xFFFE )
    {
      v25 = 65534;
      v14 = a1 + 1;
    }
    v26 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    if ( v26 == a1 + 8 )
    {
      v27 = (void *)RtlpAllocateAtom(v25);
      if ( !v27 )
        goto LABEL_33;
      if ( *a1 )
        memmove(v27, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v27 = (void *)NtdllpReallocateStringRoutine(v25, v26, a3, a4);
      if ( !v27 )
      {
        v14 = a1 + 1;
        goto LABEL_33;
      }
    }
    LOWORD(v13) = *a1;
    v14 = a1 + 1;
    *((_QWORD *)a1 + 1) = v27;
    a1[1] = v25;
    goto LABEL_11;
  }
LABEL_33:
  v15 = a1 + 4;
LABEL_12:
  if ( !a2 )
    return 0LL;
  v17 = *a2;
  v18 = 0;
  if ( (_WORD)v17 )
  {
    v19 = *a1;
    v20 = (unsigned int)(v19 + v17 + 2);
    if ( (unsigned int)v20 <= *v14 )
    {
LABEL_15:
      v18 = 0;
      memmove((void *)(*v15 + (unsigned __int16)v19), *((const void **)a2 + 1), (unsigned __int16)v17);
      *a1 += *a2;
      *(_WORD *)(*v15 + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
      return v18;
    }
    if ( (unsigned int)v20 > 0xFFFE )
      return (unsigned int)-1073741562;
    v28 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v29 = (v20 + 63) & 0xFFFFFFC0;
    if ( v29 > 0xFFFE )
      v29 = 65534;
    if ( v28 == a1 + 8 )
    {
      v30 = (void *)RtlpAllocateAtom(v29);
      if ( !v30 )
        return (unsigned int)-1073741801;
      v15 = a1 + 4;
      if ( *a1 )
      {
        memmove(v30, *((const void **)a1 + 1), *a1);
        v15 = a1 + 4;
        goto LABEL_52;
      }
    }
    else
    {
      v30 = (void *)NtdllpReallocateStringRoutine(v29, v28, v20, a4);
      v15 = a1 + 4;
    }
    if ( !v30 )
      return (unsigned int)-1073741801;
LABEL_52:
    LOWORD(v19) = *a1;
    *((_QWORD *)a1 + 1) = v30;
    a1[1] = v29;
    LOWORD(v17) = *a2;
    goto LABEL_15;
  }
  return v18;
}
