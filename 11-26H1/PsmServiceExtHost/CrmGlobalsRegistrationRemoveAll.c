/*
 * XREFs of CrmGlobalsRegistrationRemoveAll @ 0x1800754E0
 * Callers:
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x1800755C0 (CrmGlobalsRegistrationsDeleteRoutine.c)
 */

__int64 CrmGlobalsRegistrationRemoveAll()
{
  char v0; // al
  unsigned __int64 v1; // rcx
  int v2; // edi
  unsigned __int64 v3; // rax
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rbx

  CempLockAcquireExclusive((__int64)&unk_1800E3938);
  v0 = BYTE8(xmmword_1800E3948);
  v1 = xmmword_1800E3948;
  if ( (BYTE8(xmmword_1800E3948) & 1) != 0 && (_QWORD)xmmword_1800E3948 )
    v1 = (unsigned __int64)&xmmword_1800E3948 ^ xmmword_1800E3948;
  v2 = BYTE8(xmmword_1800E3948) & 1;
  if ( v1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)v1;
        v4 = (_QWORD *)v1;
        if ( !*(_QWORD *)v1 )
        {
          v4 = (_QWORD *)(v1 + 8);
          v3 = *(_QWORD *)(v1 + 8);
          if ( !v3 )
            break;
        }
        if ( v2 )
          v1 ^= v3;
        else
          v1 = v3;
        *v4 = 0LL;
      }
      v5 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v2 && v5 )
        v5 ^= v1;
      CrmGlobalsRegistrationsDeleteRoutine(v1, 0LL);
      if ( !v5 )
        break;
      v1 = v5;
    }
    v0 = BYTE8(xmmword_1800E3948);
  }
  xmmword_1800E3948 = 0LL;
  if ( (v0 & 1) != 0 )
    BYTE8(xmmword_1800E3948) = 1;
  dword_1800E3940 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800E3938);
}
