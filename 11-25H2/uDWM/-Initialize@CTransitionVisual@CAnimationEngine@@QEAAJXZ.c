/*
 * XREFs of ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18006E330
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18006E194 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x18006E3E4 (--0CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800744D8 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisual::Initialize(
        CAnimationEngine::CTransitionVisual *this,
        const struct std::nothrow_t *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  CAnimationEngine::CTransitionVariable *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  CAnimationEngine::CTransitionVariable **v9; // rbx

  v2 = 0;
  v4 = 0LL;
  v5 = 7LL;
  while ( (unsigned int)v4 < 7 )
  {
    v6 = (CAnimationEngine::CTransitionVariable *)operator new[](0x18uLL, a2);
    if ( v6 )
      v7 = CAnimationEngine::CTransitionVariable::CTransitionVariable(v6);
    else
      v7 = 0LL;
    *((_QWORD *)this + v4 + 1) = v7;
    if ( !v7 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x604u, 0LL);
      v9 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
      do
      {
        if ( *v9 )
        {
          CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v9, v8);
          *v9 = 0LL;
        }
        ++v9;
        --v5;
      }
      while ( v5 );
      return v2;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  return v2;
}
