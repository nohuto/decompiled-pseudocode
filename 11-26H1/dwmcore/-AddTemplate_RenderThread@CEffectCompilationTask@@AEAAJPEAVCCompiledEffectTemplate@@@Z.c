/*
 * XREFs of ?AddTemplate_RenderThread@CEffectCompilationTask@@AEAAJPEAVCCompiledEffectTemplate@@@Z @ 0x18014D430
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CEffectCompilationTask::AddTemplate_RenderThread(
        CEffectCompilationTask *this,
        struct CCompiledEffectTemplate *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  unsigned int v6; // eax
  struct CCompiledEffectTemplate *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 12);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v6 = 183;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v6, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x7Fu, 0LL);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 11) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 8, 1, &v7);
    if ( (v4 & 0x80000000) == 0 )
      return v4;
    v6 = 194;
    goto LABEL_6;
  }
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v2) = a2;
  *((_DWORD *)this + 12) = v3;
  return v4;
}
