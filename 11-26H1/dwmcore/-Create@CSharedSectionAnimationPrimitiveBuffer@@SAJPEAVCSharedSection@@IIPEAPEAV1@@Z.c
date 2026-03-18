/*
 * XREFs of ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x18014D83C
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18014CC7C (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$SetInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x18014D8F0 (--$SetInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::Create(
        struct CSharedSection *a1,
        int a2,
        int a3,
        struct CSharedSectionAnimationPrimitiveBuffer **a4)
{
  unsigned int v5; // ebx
  struct CSharedSectionAnimationPrimitiveBuffer *v9; // rax
  struct CSharedSectionAnimationPrimitiveBuffer *v10; // rdi
  void (__fastcall **v11)(struct CSharedSectionAnimationPrimitiveBuffer *); // rax

  v5 = 0;
  v9 = (struct CSharedSectionAnimationPrimitiveBuffer *)operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
    SetInterface<CSharedSection,CSharedSection>((char *)v9 + 16, a1);
    v11 = *(void (__fastcall ***)(struct CSharedSectionAnimationPrimitiveBuffer *))v10;
    *((_DWORD *)v10 + 6) = a2;
    *((_DWORD *)v10 + 7) = a3;
    (*v11)(v10);
    *a4 = v10;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xDu, 0LL);
  }
  return v5;
}
