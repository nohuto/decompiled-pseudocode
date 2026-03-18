/*
 * XREFs of ??0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@@Z @ 0x18015C8A8
 * Callers:
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18015C7FC (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 * Callees:
 *     ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x18015CAB8 (--$insert@V-$span_iterator@$$CBUKernelTap@@@details@gsl@@X@-$vector_facade@UConstantBufferRow@CC.c)
 */

__int64 __fastcall CCustomKernelEffect::CCustomKernelEffect(__int64 a1, char a2, char a3, __int64 *a4)
{
  _DWORD *v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int8 v11; // cl
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  v4 = (_DWORD *)(a1 + 24);
  *(_QWORD *)a1 = &CCustomKernelEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CCustomKernelEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *(_QWORD *)(a1 + 24) = a1 + 48;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = a1 + 176;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 243) = a2;
  *(_BYTE *)(a1 + 244) = a3;
  v7 = *a4;
  v15 = a4[1];
  v18[0] = v15;
  v18[2] = v15;
  v19 = *(_QWORD *)(a1 + 32);
  v16 = v15 + 12 * v7;
  v17 = v16;
  v18[1] = v16;
  detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<KernelTap const>,void>(
    a1 + 24,
    (unsigned int)&v14,
    (unsigned int)&v19,
    (unsigned int)v18,
    (__int64)&v15);
  if ( (unsigned __int64)((__int64)(*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4) <= 8 )
  {
    v11 = *(_BYTE *)(a1 + 243);
    *(_QWORD *)(a1 + 192) = (-(__int64)(v11 < 2u) & 0xFFFFFFFFFFFF922FuLL) + 60969;
    v12 = &unk_18034B040;
    if ( v11 < 2u )
      v12 = &unk_180359E90;
    v8 = a1 + 224;
    *(_QWORD *)(a1 + 200) = v12;
    *(_OWORD *)(a1 + 224) = xmmword_180359E78;
    v13 = (__int64)(unsigned int)(v4[2] - *v4) >> 4;
    *(_BYTE *)(a1 + 241) = 0;
    *(_BYTE *)(a1 + 240) = v13 + 48;
  }
  else
  {
    *(_QWORD *)(a1 + 192) = 60969LL;
    v8 = a1 + 224;
    *(_QWORD *)(a1 + 200) = &unk_18034B040;
    strcpy((char *)(a1 + 224), "SymmetricKernelMax");
  }
  *(_QWORD *)(a1 + 176) = (a3 != 0) + 2LL;
  *(_QWORD *)(a1 + 184) = &CCustomKernelEffect::k_shaderLinkingArguments;
  *(_BYTE *)(a1 + 222) = *(_BYTE *)(a1 + 243);
  *(_QWORD *)(a1 + 208) = v8;
  v9 = (__int64)(*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4;
  *(_WORD *)(a1 + 220) = 512;
  if ( v9 > 8 )
    LODWORD(v9) = 128;
  *(_DWORD *)(a1 + 216) = 16 * v9;
  return a1;
}
