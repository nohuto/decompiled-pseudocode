/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE7BC
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AD100 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x1801ADB94 (--$emplace_back@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AE218 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801AE73C (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x1801AF2A0 (-erase@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAA-AV-$_Vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::HitTest(Edges *this, int a2, int a3, const struct D2D_VECTOR_2F *a4, __int64 **a5)
{
  int v6; // eax
  int v8; // ebp
  __int64 v9; // rbx
  __int64 *v10; // r10
  char v11; // di
  unsigned int *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 *v15; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  const void *v18; // rcx
  unsigned int v21; // [rsp+24h] [rbp-74h]
  char v22; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-60h] BYREF
  int v25; // [rsp+58h] [rbp-40h]

  v6 = a3;
  v21 = a2;
  v8 = 0;
  v9 = 0LL;
  v10 = *a5;
  if ( *a5 )
  {
    if ( 0xCCCCCCCCCCCCCCCDuLL * ((v10[1] - *v10) >> 3) )
    {
      v11 = 1;
      while ( 1 )
      {
        if ( Edges::FindEdge(this, (const struct CandidateIdentity *)(*v10 + 40 * v9)) >= 0 )
        {
          if ( Edge::HitTest((Edge *)(*(_QWORD *)this + ((unsigned __int64)(unsigned int)v9 << 7)), v21, a3, a4) )
          {
            ++v8;
            v9 = (unsigned int)(v9 + 1);
            goto LABEL_10;
          }
          v12 = &v23;
        }
        else
        {
          v12 = (unsigned int *)&v22;
        }
        std::vector<CandidateIdentity>::erase(*a5, v12, **a5 + 40 * v9);
LABEL_10:
        v10 = *a5;
        if ( (unsigned int)v9 >= 0xCCCCCCCCCCCCCCCDuLL * (((*a5)[1] - **a5) >> 3) )
          goto LABEL_21;
      }
    }
    return 0;
  }
  v13 = *(_QWORD *)this;
  v14 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this == v14 )
    return 0;
  v11 = 1;
  do
  {
    if ( Edge::HitTest((Edge *)v13, a2, v6, a4) )
    {
      if ( !*a5 )
      {
        v15 = (__int64 *)operator new(0x18uLL);
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        *a5 = v15;
      }
      std::wstring::wstring((__int64)v24);
      v25 = 0;
      v16 = (_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 32) > 7uLL )
        v16 = (_QWORD *)*v16;
      v17 = std::_WChar_traits<unsigned short>::length((__int64)v16);
      std::wstring::assign((char *)v24, v18, v17);
      v25 = *(_DWORD *)(v13 + 64);
      std::vector<CandidateIdentity>::emplace_back<CandidateIdentity &>(*a5, (const struct CandidateIdentity *)v24);
      ++v8;
      std::wstring::_Tidy_deallocate(v24);
    }
    v13 += 128LL;
    v6 = a3;
    a2 = v21;
  }
  while ( v13 != v14 );
LABEL_21:
  if ( !v8 )
    return 0;
  return v11;
}
