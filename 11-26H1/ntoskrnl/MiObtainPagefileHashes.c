/*
 * XREFs of MiObtainPagefileHashes @ 0x14038DD0C
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14038ED2C (MiValidatePagefilePageHash.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiObtainPagefileHashes(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v4; // r14
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 i; // r8
  int v12; // eax

  v4 = (volatile LONG *)(a1 + 200);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  v9 = *(_QWORD *)(a1 + 184) + (unsigned int)(dword_140E360CC * a2);
  if ( a3 )
  {
    v10 = (_QWORD *)(a4 + 8);
    for ( i = a3; i; --i )
    {
      if ( (*(_QWORD *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
      {
        *((_DWORD *)v10 - 2) = *(_DWORD *)v9;
        if ( dword_140E360D0 )
        {
          *v10 = *(_QWORD *)(v9 + 8);
          v12 = *(_DWORD *)(v9 + 4);
          goto LABEL_6;
        }
      }
      else
      {
        *((_DWORD *)v10 - 2) = 0;
      }
      v12 = 0;
      *v10 = 0LL;
LABEL_6:
      *((_DWORD *)v10 - 1) = v12;
      v10 += 2;
      v9 += (unsigned int)dword_140E360CC;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
}
