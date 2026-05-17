/*
 * XREFs of LdrpIssueEnclaveCall @ 0x180070CC0
 * Callers:
 *     LdrCallEnclave @ 0x180070CB0 (LdrCallEnclave.c)
 *     RtlEnclaveCallDispatcher @ 0x180163090 (RtlEnclaveCallDispatcher.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18004BF20 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x180070D6C (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwCallEnclave @ 0x180160190 (ZwCallEnclave.c)
 *     RtlCallEnclave @ 0x180163100 (RtlCallEnclave.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), unsigned int a2, _QWORD *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rdi
  unsigned int v8; // ebx

  if ( (a2 & 8) != 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  v6 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v7 = v6;
  v8 = 0;
  if ( !v6 )
  {
LABEL_3:
    *a3 = a1(*a3);
    return v8;
  }
  LdrpUnlockAndDereferenceEnclave(v6);
  if ( *((_DWORD *)v7 + 14) == 16 )
    return (unsigned int)RtlCallEnclave(a1, 0LL, a2, a3);
  else
    return (unsigned int)ZwCallEnclave(a1, 0LL, a2, a3);
}
