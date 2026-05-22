/*
 * XREFs of ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x18019C404
 * Callers:
 *     _lambda_0ae42814bce62c2276581394a3e1fe3f_::_lambda_invoker_cdecl_ @ 0x18019B8C0 (_lambda_0ae42814bce62c2276581394a3e1fe3f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180062EBC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180076840 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::OnMouseAsTouchAutoRepeat(MouseProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  DWORD TickCount; // edi
  int v6; // eax
  __int64 v7; // r8
  const char *v8; // r9
  struct InputInfo *v9; // rdx
  LARGE_INTEGER v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  struct InputInfo *v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 144) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1ED,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      a4);
  TickCount = GetTickCount();
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 15) + 88LL))(
         *((_QWORD *)this + 15),
         **((unsigned int **)this + 8),
         1LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v6,
      (int)&v14);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)v12, 0x1D0uLL, v7, v8);
  v9 = v12[0];
  *(_DWORD *)v12[0] = 8;
  *((_DWORD *)v9 + 2) = TickCount;
  *((LARGE_INTEGER *)v9 + 2) = PerformanceCount;
  v10 = PerformanceCount;
  *((_DWORD *)v9 + 79) = 1;
  *((_DWORD *)v9 + 80) = 2;
  *((_DWORD *)v9 + 81) = 2;
  *((_DWORD *)v9 + 83) = 155670;
  *((_QWORD *)v9 + 44) = v14;
  *((_QWORD *)v9 + 46) = v14;
  *((_DWORD *)v9 + 96) = TickCount;
  *((LARGE_INTEGER *)v9 + 50) = v10;
  InjectionDevice::Inject((MouseProcessor *)((char *)this + 152), v9);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v12, v11);
}
