/*
 * XREFs of LdrpIssueEnclaveCall @ 0x180091110
 * Callers:
 *     LdrCallEnclave @ 0x180091100 (LdrCallEnclave.c)
 *     RtlEnclaveCallDispatcher @ 0x180162F90 (RtlEnclaveCallDispatcher.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800364A0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800911BC (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwCallEnclave @ 0x180160090 (ZwCallEnclave.c)
 *     RtlCallEnclave @ 0x180163000 (RtlCallEnclave.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(LPVOID (__cdecl *Routine)(LPVOID), ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 *v6; // rax
  __int64 *v7; // rdi
  unsigned int v8; // ebx

  if ( (Flags & 8) != 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  v6 = LdrpObtainLockedEnclave((unsigned __int64)Routine, 0);
  v7 = v6;
  v8 = 0;
  if ( !v6 )
  {
LABEL_3:
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(_QWORD))Routine)(*RoutineParamReturn);
    return v8;
  }
  LdrpUnlockAndDereferenceEnclave(v6);
  if ( *((_DWORD *)v7 + 14) == 16 )
    return (unsigned int)RtlCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  else
    return (unsigned int)ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
}
