/*
 * XREFs of MiProtectNonPagedPool @ 0x140250A90
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 * Callees:
 *     MiAddVaToProtectFlushList @ 0x140250D04 (MiAddVaToProtectFlushList.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 */

void __fastcall MiProtectNonPagedPool(volatile __int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rbp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  signed __int64 ValidPte; // rdi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rax
  signed __int64 v13; // rax
  __int64 TransitionPte; // rbx
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rbx
  int v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a1;
  v5 = a2;
  if ( (*a1 & 1) != 0 )
  {
    v7 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    v8 = 48 * v7 - 0x220000000000LL;
    if ( a2 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v7, 24LL);
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      v16 = (MiFlags & 0x8000000) == 0;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
      if ( !v16 )
        _mm_lfence();
      v17 = _InterlockedExchange64(a1, TransitionPte);
      if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(a1, TransitionPte, v15, v17);
      if ( (v17 & 0x200) != 0 )
        *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 0x10000;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_18;
    }
    v9 = a2;
    LODWORD(v9) = a2 | 0x80000000;
    ValidPte = MiMakeValidPte(a1, (v3 >> 12) & 0xFFFFFFFFFFLL, v9);
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( 1 )
    {
      v11 = ValidPte;
      ValidPte |= 0x200uLL;
      v12 = v11 & 0xFFFFFFFFFFFFFDFFuLL;
      if ( (v3 & 0x200) == 0 )
        ValidPte = v12;
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      v13 = _InterlockedCompareExchange64(a1, ValidPte, v3);
      if ( v3 == v13 )
        break;
      v3 = v13;
    }
    *(_QWORD *)(v8 + 16) = (32 * v5) ^ (*(_QWORD *)(v8 + 16) ^ (32 * v5)) & 0xFFFFFFFFFFFFFC1FuLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (MiFlags & 0x400) == 0
      || (ValidPte & 0x40) == 0 && (v3 & 0x40) != 0
      || (ValidPte & 2) == 0 && (v3 & 2) != 0
      || ValidPte < 0 && (v3 & 0x8000000000000000uLL) == 0LL )
    {
LABEL_18:
      MiAddVaToProtectFlushList(&unk_140E375C0, a1, a3);
    }
  }
  else if ( a2 != 24 )
  {
    if ( qword_140E2D8C0 && (v3 & 0x10) == 0 )
      v3 &= qword_140E2D8C8;
    v18 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    v19 = 48 * v18;
    v20 = a2;
    LODWORD(v20) = a2 | 0x80000000;
    v21 = MiMakeValidPte(a1, v18, v20);
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 - 0x220000000000LL + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v19 - 0x220000000000LL + 24) < 0 );
    }
    if ( (*(_QWORD *)(v19 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    {
      *(_QWORD *)(v19 - 0x220000000000LL + 24) = *(_QWORD *)(v19 - 0x220000000000LL + 24) & 0xC000000000000000uLL | 1;
      v21 |= 0x200uLL;
    }
    *(_QWORD *)(v19 - 0x220000000000LL + 16) = (32 * v5) ^ (*(_QWORD *)(v19 - 0x220000000000LL + 16) ^ (32 * v5)) & 0xFFFFFFFFFFFFFC1FuLL;
    _InterlockedAnd64((volatile signed __int64 *)(v19 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a1 = v21;
  }
}
