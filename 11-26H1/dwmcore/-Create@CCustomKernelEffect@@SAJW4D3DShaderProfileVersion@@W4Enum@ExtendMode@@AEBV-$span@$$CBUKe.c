/*
 * XREFs of ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18015C7FC
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@@Z @ 0x18015C8A8 (--0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKerne.c)
 */

__int64 __fastcall CCustomKernelEffect::Create(char a1, char a2, _QWORD *a3, __int64 *a4)
{
  char v4; // bl
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ebx

  v4 = a1;
  if ( (unsigned __int8)a1 >= 2u && *a3 <= 4uLL )
    v4 = 1;
  v8 = MIDL_user_allocate(0xF8uLL);
  if ( v8
    && (LOBYTE(v10) = a2,
        LOBYTE(v9) = v4,
        v11 = CCustomKernelEffect::CCustomKernelEffect(v8, v9, v10, a3),
        (v12 = v11) != 0) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
    *a4 = v12;
    return 0;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v13;
}
