/*
 * XREFs of ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180048870
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180048AF8 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z @ 0x180048C80 (-GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GameInputProcessor::OnInput(
        __int64 **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r9
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v17; // eax
  __int16 v18; // r8
  char v19; // dl
  __int16 v20; // ax
  __int16 v21; // ax
  unsigned int v22; // eax
  __int64 TargetProcessId; // r9
  int v24; // [rsp+20h] [rbp-30h]
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  int v27; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v8 = 0;
  if ( gbIsDWMNoRawGameController )
  {
    *((_DWORD *)a4 + 2) = 0;
    return 0LL;
  }
  v9 = GameInputProcessor::LazyInitialize((GameInputProcessor *)this);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x102,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v9,
      v24);
  v10 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 64 )
  {
    if ( this[4] )
    {
      v11 = 0;
      v25 = 0;
      v12 = 0LL;
      v26 = 0LL;
      v13 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a3 + 2);
      if ( v13 )
      {
        if ( (**v13)(*((_QWORD *)a3 + 2), &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v26) >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 32LL))(v26, &v25);
          if ( v17 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x16C,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\syste"
                            "m\\lib\\gameinputprocessor.cpp",
              (const char *)(unsigned int)v17,
              v24);
        }
        v11 = v25;
        v12 = v26;
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v14 = this[4];
      v15 = *v14;
      if ( *((_DWORD *)a2 + 6) <= 0x58u )
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v15 + 48))(v14, *((unsigned int *)a2 + 1), v11);
      else
        (*(void (__fastcall **)(__int64 *, char *, _QWORD))(v15 + 56))(v14, (char *)a2 + 88, v11);
    }
    *((_DWORD *)a4 + 2) = 3;
    return 0LL;
  }
  switch ( v10 )
  {
    case 4096:
      if ( this[4] )
      {
        TargetProcessId = GameInputProcessor::GetTargetProcessId(a3);
        (*(void (__fastcall **)(__int64 *, _QWORD, char *, __int64))(*this[4] + 40))(
          this[4],
          *((unsigned int *)a2 + 1),
          (char *)a2 + 88,
          TargetProcessId);
      }
      goto LABEL_29;
    case 4:
      if ( !this[4] )
      {
LABEL_29:
        *((_DWORD *)a4 + 2) = 4;
        return 0LL;
      }
      v26 = 0LL;
      LOWORD(v26) = *((_WORD *)a2 + 28);
      v18 = *((_WORD *)a2 + 47);
      v19 = v18;
      WORD2(v26) = v18;
      v27 = *((_DWORD *)a2 + 88);
      if ( (_WORD)v26 == 0xFFFD )
        HIWORD(v26) = *((_WORD *)a2 + 178);
      v20 = *((_WORD *)a2 + 30);
      if ( v20 && !*((_WORD *)a2 + 29) )
      {
        v19 = v18 | 0x40;
        WORD2(v26) = v18 | 0x40;
      }
      if ( (v19 & 0x40) == 0 )
      {
        v21 = *((_WORD *)a2 + 29);
        WORD1(v26) = v21;
        if ( (v18 & 2) != 0 )
        {
          v21 |= 0xE000u;
          WORD1(v26) = v21;
        }
        if ( (v18 & 4) == 0 )
          goto LABEL_28;
        v20 = v21 | 0xE100;
      }
      WORD1(v26) = v20;
LABEL_28:
      v22 = GameInputProcessor::GetTargetProcessId(a3);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(*this[4] + 32))(
        this[4],
        *((unsigned int *)a2 + 1),
        &v26,
        v22);
      goto LABEL_29;
    case 128:
      v8 = 4;
      break;
  }
  *((_DWORD *)a4 + 2) = v8;
  return 0LL;
}
