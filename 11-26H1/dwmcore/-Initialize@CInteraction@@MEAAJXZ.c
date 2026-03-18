/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x1801119A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800AA154 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180111BD8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x180111D80 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  CInteractionContextWrapper *v3; // rax
  struct IInteractionContextWrapper *v4; // rbx
  unsigned __int64 v5; // rcx
  CInteractionContextWrapper *v6; // rax
  CInteractionContextWrapper *v7; // rax
  struct IInteractionContextWrapper *v8; // rdi
  unsigned __int64 v9; // rcx
  CInteractionContextWrapper *v10; // rax
  CInteractionContextWrapper *v11; // rax
  struct IInteractionContextWrapper *v12; // r14
  unsigned __int64 v13; // rcx
  CInteractionContextWrapper *v14; // rax
  CInteractionContextWrapper *v15; // rax
  struct IInteractionContextWrapper *v16; // r15
  struct IInteractionContextWrapper *v17; // rbp
  int v18; // eax
  unsigned int v19; // esi

  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( !v2 || (v3 = CInteractionContextWrapper::CInteractionContextWrapper(v2), (v4 = v3) == 0LL) )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x69u, 0LL);
    return v19;
  }
  (**(void (__fastcall ***)(CInteractionContextWrapper *))v3)(v3);
  v6 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v5);
  if ( !v6 || (v7 = CInteractionContextWrapper::CInteractionContextWrapper(v6), (v8 = v7) == 0LL) )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Cu, 0LL);
    goto LABEL_14;
  }
  (**(void (__fastcall ***)(CInteractionContextWrapper *))v7)(v7);
  v10 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v9);
  if ( !v10 || (v11 = CInteractionContextWrapper::CInteractionContextWrapper(v10), (v12 = v11) == 0LL) )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Fu, 0LL);
    goto LABEL_13;
  }
  (**(void (__fastcall ***)(CInteractionContextWrapper *))v11)(v11);
  v14 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v13);
  if ( v14 )
  {
    v15 = CInteractionContextWrapper::CInteractionContextWrapper(v14);
    v16 = v15;
    v17 = v12;
    if ( v15 )
    {
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v15)(v15);
      v18 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 360), v4, v8, v12, v16, 0);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x74u, 0LL);
      (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v16 + 8LL))(v16);
      goto LABEL_12;
    }
  }
  else
  {
    v17 = v12;
  }
  v19 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x72u, 0LL);
LABEL_12:
  (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_13:
  (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_14:
  (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v4 + 8LL))(v4);
  return v19;
}
