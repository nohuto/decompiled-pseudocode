/*
 * XREFs of ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009C114 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009C238 (--$emplace_back@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCach.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18009C290 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedImageProducer::RecordUse(CCachedImageProducer *this, struct CDrawingContext *a2)
{
  __int64 *v2; // r14
  char v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // r15
  _QWORD **v7; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rax
  int v11; // ecx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 *v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  char v23; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  _QWORD *v25; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this - 16);
  v4 = *((_BYTE *)g_pComposition + 6458);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v6 = v2 + 4;
  v7 = (_QWORD **)v2[4];
  v8 = v5;
  while ( v7 != (_QWORD **)v2[5] )
  {
    v9 = *v7;
    if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)**v7 + 24LL))(**v7) < 0 )
      goto LABEL_13;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(*(_QWORD *)*v9 + 88LL))(*v9, &v21);
    if ( *(_DWORD *)v10 == *(_DWORD *)v8
      && *(_DWORD *)(v10 + 4) == *(_DWORD *)(v8 + 4)
      && ((v11 = *(_DWORD *)(v10 + 8), v11 == -1) || v11 == *(_DWORD *)(v8 + 8) || *(_DWORD *)(v8 + 8) == -3)
      && (*(float *)(v10 + 16) != 0.0) == (*(float *)(v8 + 16) != 0.0)
      && (!*(_BYTE *)(v10 + 20) || *(_BYTE *)(v8 + 20))
      && ((v12 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 144LL))(*v9), v13 = *v12, v4)
        ? (v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 160))(v12))
        : (v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 176))(v12)),
          !v14) )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          *(float *)(v8 + 16)
                        - *(float *)((*(__int64 (__fastcall **)(_QWORD, __int64 **))(*(_QWORD *)*v9 + 88LL))(*v9, &v21)
                                   + 16)) & _xmm) <= 0.0000011920929 )
        goto LABEL_20;
LABEL_13:
      v15 = ((__int64)v7 - *v6) >> 3;
      detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2 + 4,
        v15,
        1LL);
      v7 = (_QWORD **)(*v6 + 8 * v15);
    }
    else
    {
      ++v7;
    }
  }
  v25 = 0LL;
  v21 = (__int64 *)&v25;
  v16 = *v2;
  v22 = 0LL;
  v23 = 1;
  v17 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64 *))(v16 + 96))(v2, a2, &v22);
  if ( v23 )
  {
    v18 = *v21;
    *v21 = v22;
    if ( v18 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
  }
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
      (const char *)(unsigned int)v17);
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v25);
    v20 = 48LL;
    goto LABEL_30;
  }
  v9 = v25;
  v26 = v25;
  v25 = 0LL;
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::emplace_back<std::unique_ptr<CCachedImageProducer::CCachedRealization>>(
    v2 + 4,
    &v26);
  if ( v25 )
    std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
LABEL_20:
  v17 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *))(*(_QWORD *)(*v9 + 8LL) + 96LL))(*v9 + 8LL, a2);
  if ( v17 >= 0 )
    return 0LL;
  v20 = 50LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
