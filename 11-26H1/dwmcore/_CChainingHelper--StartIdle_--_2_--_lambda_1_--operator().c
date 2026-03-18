/*
 * XREFs of _CChainingHelper::StartIdle_::_2_::_lambda_1_::operator() @ 0x180139CB8
 * Callers:
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTrackerBase@@PEBVCManipulation@@@Z @ 0x180139A8C (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTrackerBase@@PEBVCManipulation@@@Z.c)
 * Callees:
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180139DA4 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChainingHelper::StartIdle_::_2_::_lambda_1_::operator()(__int64 ***a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 **v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 result; // rax
  __int64 **v11; // rdx
  __int64 v12; // rcx
  char v13; // [rsp+20h] [rbp-18h]

  v3 = (int)a2;
  v4 = **a1;
  v5 = *v4;
  (*(void (__fastcall **)(__int64 *, _QWORD))(*v4 + 232))(v4, a2);
  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 208))(v4, v6, (unsigned int)v3);
  v7 = a1[1];
  LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(***a1 + 264))(**a1, (unsigned int)v3, *a1[2]);
  LOBYTE(v8) = 1;
  LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(***a1 + 248))(
                 **a1,
                 (unsigned int)v3,
                 *a1[2],
                 v8);
  v13 = v5;
  result = CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v7, (unsigned int)v3, (unsigned int)v4, v9, v13);
  v11 = a1[1];
  v12 = 3 * v3;
  *((_BYTE *)v11 + 4 * v12) &= 0xFAu;
  *((_DWORD *)v11 + v12 + 2) = 0;
  *((_BYTE *)v11 + 36) |= 2u;
  return result;
}
