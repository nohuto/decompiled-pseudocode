/*
 * XREFs of SepSetSingletonEntry @ 0x14063BB00
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x14063B970 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403CB24C (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // edi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // si
  _DWORD *Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    if ( !*((_QWORD *)v7 + 2) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
      *((_QWORD *)v7 + 2) = Pool2;
      if ( !Pool2 )
      {
        v5 = -1073741801;
LABEL_7:
        ExReleaseSpinLockExclusive(v7, v8);
        return v5;
      }
      *Pool2 = 0;
      *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
      v10 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
      v10[1] = v10;
      *v10 = v10;
      v11 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
      v11[1] = v11;
      *v11 = v11;
    }
    v5 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v7 + 2), a2, a3);
    *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
    goto LABEL_7;
  }
  return v5;
}
