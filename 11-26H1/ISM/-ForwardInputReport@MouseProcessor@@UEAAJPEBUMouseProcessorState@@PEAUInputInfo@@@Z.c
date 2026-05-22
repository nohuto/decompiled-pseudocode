/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18019BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180062EBC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180076840 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18019C5F0 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        const char *a4)
{
  char v6; // bp
  int v7; // esi
  char v8; // al
  int v9; // eax
  int v10; // eax
  struct InputInfo *v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  const struct std::nothrow_t *v15; // rdx
  int v16; // ebx
  const struct std::nothrow_t *v17; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-38h]
  struct InputInfo *v21[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 136) )
  {
    v6 = 1;
    v7 = 0;
    v8 = *((_BYTE *)this + 137);
    if ( (*((_BYTE *)this + 104) & 0x10) != 0 )
    {
      if ( v8 )
      {
        v7 = 155670;
      }
      else
      {
        v7 = 90134;
        *((_BYTE *)this + 137) = 1;
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 213) + 80LL))(
             *((_QWORD *)this + 213),
             0LL,
             166666LL);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x12A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v9,
          v20);
    }
    else if ( v8 )
    {
      v7 = 286720;
      *((_BYTE *)this + 137) = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *))(**((_QWORD **)this + 213) + 96LL))(
              *((_QWORD *)this + 213),
              a2);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x135,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v10,
          v20);
    }
    else
    {
      v6 = 0;
    }
    *((_DWORD *)a3 + 29) = 4;
    if ( v6 )
    {
      VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
        (__int64)v21,
        0x1D0uLL,
        (__int64)a3,
        a4);
      v11 = v21[0];
      *(_DWORD *)v21[0] = 8;
      v12 = *((_DWORD *)a3 + 2);
      *((_DWORD *)v11 + 2) = v12;
      v13 = *((_QWORD *)a3 + 2);
      *((_QWORD *)v11 + 2) = v13;
      *((_DWORD *)v11 + 79) = 1;
      *((_DWORD *)v11 + 80) = 2;
      *((_DWORD *)v11 + 81) = 2;
      *((_DWORD *)v11 + 83) = v7;
      *((_DWORD *)v11 + 88) = *((_DWORD *)a3 + 25);
      *((_DWORD *)v11 + 89) = *((_DWORD *)a3 + 26);
      *((_QWORD *)v11 + 46) = *((_QWORD *)v11 + 44);
      *((_DWORD *)v11 + 96) = v12;
      *((_QWORD *)v11 + 50) = v13;
      v14 = (unsigned int)InjectionDevice::Inject((MouseProcessor *)((char *)this + 144), v11);
      v16 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x156,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v14);
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v21, v17);
        return (unsigned int)v16;
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v21, v15);
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 14) + 80LL))(
            *((_QWORD *)this + 14),
            **((unsigned int **)this + 7),
            1LL);
    if ( v16 < 0 )
    {
      v19 = 348LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v16);
      return (unsigned int)v16;
    }
  }
  else if ( *((_DWORD *)a3 + 29) )
  {
    *((_DWORD *)a3 + 29) = 2 - (*((_BYTE *)a3 + 121) != 0);
  }
  else
  {
    v16 = MouseProcessor::SynthesizeMouseInput(a3);
    if ( v16 < 0 )
    {
      v19 = 363LL;
      goto LABEL_19;
    }
  }
  return 0LL;
}
