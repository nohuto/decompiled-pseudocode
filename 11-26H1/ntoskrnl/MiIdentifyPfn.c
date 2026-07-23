/*
 * XREFs of MiIdentifyPfn @ 0x1402D2F70
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MmTryIdentifyPage @ 0x1406F4028 (MmTryIdentifyPage.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F6DF4 (MiUpdateBadPfnIdentity.c)
 * Callees:
 *     MiHyperPage @ 0x140292560 (MiHyperPage.c)
 *     MiIdentifyPageType @ 0x1402D3640 (MiIdentifyPageType.c)
 *     MiIdentifyResidentPage @ 0x1402D3820 (MiIdentifyResidentPage.c)
 *     MiIdentifyProtoPage @ 0x1402D3F60 (MiIdentifyProtoPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPfnToOwningProcess @ 0x1403FD420 (MiPfnToOwningProcess.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 *     MiIdentifyAwePage @ 0x140409D94 (MiIdentifyAwePage.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiIdentifyPfn(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rcx
  const __m128i *v7; // r14
  __m128i v8; // xmm0
  unsigned __int32 v9; // r8d
  unsigned int v10; // r8d
  unsigned __int64 v12; // rdi
  unsigned int v13; // r15d
  unsigned __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 TopLevelPfn; // rax
  __int64 v17; // rdx
  const __m128i *v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __m128i v29; // [rsp+20h] [rbp-30h] BYREF
  __m128i v30; // [rsp+30h] [rbp-20h]
  __m128i v31; // [rsp+40h] [rbp-10h]

  *(_OWORD *)a3 = 0LL;
  a3[2] = 0LL;
  v6 = a1 >> 18;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags )
  {
    if ( v6 < 0x400000 )
    {
      v21 = v6 & 0x3FFFFF;
      if ( _bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, v21) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v21) & 7LL;
        if ( v22 == 5 || !v22 )
          goto LABEL_41;
        v26 = v22 - 1;
        if ( !v26 )
        {
          v23 = 270LL;
          goto LABEL_42;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          v23 = 286LL;
          goto LABEL_42;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          v23 = 366LL;
          goto LABEL_42;
        }
        if ( v28 == 1 )
          v23 = 350LL;
        else
LABEL_41:
          v23 = 382LL;
LABEL_42:
        *a3 = v23;
        a3[1] = a1;
        return (a1 & 0xFFFFFFFFFFFC0000uLL) - a1 + 0x40000;
      }
    }
  }
  v7 = (const __m128i *)(48 * a1 - 0x220000000000LL);
  v29 = _mm_loadu_si128(v7);
  v30 = _mm_loadu_si128((const __m128i *)(48 * a1 - 0x21FFFFFFFFF0LL));
  v8 = _mm_loadu_si128((const __m128i *)(48 * a1 - 0x21FFFFFFFFE0LL));
  v31 = v8;
  a3[1] = a1;
  *a3 = (16LL * v8.m128i_u8[2]) ^ (*a3 ^ (16LL * v8.m128i_u8[2])) & 0xFFFFFFFFFFFFFF8FuLL;
  v9 = v31.m128i_i32[0];
  if ( (v31.m128i_i64[1] & 0x20000000000000LL) != 0 )
    goto LABEL_57;
  if ( (v31.m128i_i32[0] & 0x8000000) == 0 )
  {
LABEL_4:
    v10 = HIBYTE(v9);
    goto LABEL_5;
  }
  if ( (unsigned __int64)&v29 < 0xFFFFDE0000000000uLL
    || (unsigned __int64)&v29 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (unsigned int)MiIsDecayPfn((__int64)&STACK[0x220000000020] / 48) )
  {
LABEL_57:
    v10 = 5;
  }
  else
  {
    if ( (v9 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(&v29) != 9 )
      goto LABEL_4;
    v10 = 5;
  }
LABEL_5:
  *a3 = ((unsigned __int64)v10 << 57) ^ (*a3 ^ ((unsigned __int64)v10 << 57)) & 0xF1FFFFFFFFFFFFFFuLL;
  if ( (v31.m128i_i64[1] & 0x10000000000LL) != 0 )
    return MiIdentifyResidentPage(a1, 0xF1FFFFFFFFFFFFFFuLL, a3);
  if ( (unsigned int)MiIdentifyPageType(&v29, a3) )
    return 1LL;
  if ( v31.m128i_i64[1] >= 0 )
  {
    v12 = v29.m128i_u64[1];
    if ( v29.m128i_i64[1] && (((unsigned __int64)v31.m128i_i64[1] >> 60) & 7) != 1 )
      v12 = v29.m128i_i64[1] | 0x8000000000000000uLL;
    if ( v12 >= 0xFFFF800000000000uLL )
    {
      if ( *((_BYTE *)&MiState + ((v12 >> 39) & 0x1FF) + 46064) == 4 )
      {
        *a3 = *a3 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v12 - 344) << 9) | 3;
        a3[2] = 0xFFFFF6FB7DBED000uLL;
        return 1LL;
      }
      if ( v12 == -8LL )
      {
        *a3 = *a3 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a3[2] = (unsigned __int64)MmBadPointer;
        return 1LL;
      }
    }
    if ( (((unsigned __int64)v31.m128i_i64[1] >> 60) & 7) == 1 )
    {
      MiIdentifyAwePage(&v29, a3, 0x8000000000000000uLL);
      return 1LL;
    }
    v13 = 0;
    if ( v12 )
    {
      if ( v12 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        *a3 = *a3 & 0xF1FFFFFFFFFFFF8FuLL | 0x10;
        return 1LL;
      }
      v14 = (__int64)(v12 << 25) >> 16;
      if ( v14 >= 0xFFFF800000000000uLL )
      {
        v15 = *((unsigned __int8 *)&MiState + ((v14 >> 39) & 0x1FF) + 46064);
        if ( v15 == 4 )
        {
          *a3 = *a3 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          a3[2] = v14;
          return 1LL;
        }
LABEL_23:
        a3[2] = v14 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v31.m128i_i64[1] & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v24 = *a3;
          if ( v15 != 8 )
          {
            *a3 = v24 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            return 1LL;
          }
LABEL_64:
          *a3 = v24 & 0xFFFFFFFFFFFFFFF0uLL | 6;
          return 1LL;
        }
        if ( v14 >= 0x7FFFFFFF0000LL )
        {
          if ( (((unsigned __int64)v31.m128i_i64[1] >> 60) & 7) == 2 )
          {
            *a3 = *a3 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
            return 1LL;
          }
          if ( v15 == 5 )
          {
            *a3 = *a3 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            return 1LL;
          }
          if ( v15 <= 0x11 )
          {
            v25 = 174336;
            if ( _bittest(&v25, v15) )
            {
              v24 = *a3;
              goto LABEL_64;
            }
          }
        }
        if ( (v31.m128i_i8[2] & 7) == 6 && ((v29.m128i_i8[0] & 1) == 0 || (v31.m128i_i32[0] & 0x8000000) != 0) )
        {
          if ( v14 >= 0x7FFFFFFF0000LL && (unsigned int)MiHyperPage(v29.m128i_i64[1] | 0x8000000000000000uLL) )
          {
            v20 = *a3 & 0xFE000000000001FCuLL | ((unsigned __int64)(unsigned int)MiPfnToOwningProcess(v7, a2) << 9) | 0xC;
            goto LABEL_36;
          }
          if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v20 = *a3 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            goto LABEL_36;
          }
          v19 = *a3;
        }
        else
        {
          if ( a2 )
          {
            v13 = *(_DWORD *)(a2 + 464);
          }
          else
          {
            TopLevelPfn = MiGetTopLevelPfn((ULONG_PTR)v7);
            v18 = (const __m128i *)TopLevelPfn;
            if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) == 0 )
              v13 = *(_DWORD *)(MiGetPageTablePfnBuddyRaw(TopLevelPfn, v17, TopLevelPfn) + 464);
            if ( v18 != v7 )
              _InterlockedAnd64(&v18[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          }
          v19 = *a3 & 0xFE000000000001FFuLL | ((unsigned __int64)v13 << 9);
          *a3 = v19;
          if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            if ( v14 < qword_140E2DFC0 || v14 > qword_140E2DFD0 )
              v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
            else
              v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
            goto LABEL_36;
          }
        }
        v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL | 3;
LABEL_36:
        *a3 = v20;
        return 1LL;
      }
    }
    else
    {
      v14 = 0LL;
    }
    v15 = 0;
    goto LABEL_23;
  }
  MiIdentifyProtoPage(a1, &v29, a3);
  return 1LL;
}
