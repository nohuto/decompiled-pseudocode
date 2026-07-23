/*
 * XREFs of ObUnRegisterCallbacks @ 0x1407C70A0
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // edi
  unsigned __int64 v3; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rax

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (unsigned __int64)i << 6;
    v4 = (char *)RegistrationHandle + v3 + 32;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)((char *)RegistrationHandle + v3 + 88));
    ObpLockObjectTypeExclusive(*(_QWORD *)((char *)RegistrationHandle + v3 + 64));
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = *(_QWORD **)((char *)RegistrationHandle + v3 + 40), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    ObpUnlockObjectType(v4[4]);
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
