/*
 * XREFs of ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003D3BC
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003D214 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x18003D478 (--0CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800652C8 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisual::Initialize(CAnimationEngine::CTransitionVisual *this)
{
  unsigned int v1; // esi
  __int64 v3; // rbx
  __int64 v4; // rdi
  CAnimationEngine::CTransitionVariable *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  CAnimationEngine::CTransitionVariable **v8; // rbx

  v1 = 0;
  v3 = 0LL;
  v4 = 7LL;
  while ( (unsigned int)v3 < 7 )
  {
    v5 = (CAnimationEngine::CTransitionVariable *)operator new(0x18uLL);
    if ( v5 )
      v6 = CAnimationEngine::CTransitionVariable::CTransitionVariable(v5);
    else
      v6 = 0LL;
    *((_QWORD *)this + v3 + 1) = v6;
    if ( !v6 )
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x604u, 0LL);
      v8 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
      do
      {
        if ( *v8 )
        {
          CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v8, v7);
          *v8 = 0LL;
        }
        ++v8;
        --v4;
      }
      while ( v4 );
      return v1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return v1;
}
