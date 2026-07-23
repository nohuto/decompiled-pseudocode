/*
 * XREFs of MiCreateCombineAnchor @ 0x1402E9BD4
 * Callers:
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1402E9B0C (MiConvertPrivateToProto.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIncrementCombinedPte @ 0x14036C478 (MiIncrementCombinedPte.c)
 */

__int64 __fastcall MiCreateCombineAnchor(__int64 *a1, __int64 a2, __int64 ***a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  _QWORD *v11; // r9
  unsigned int v12; // edx
  __int64 **v13; // rbx

  v3 = *a1;
  v4 = 0;
  v6 = a1[14];
  v7 = 16LL * (*(_DWORD *)(a2 + 8) & 0xF);
  v9 = *a1 + 104;
  *a3 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + v9));
  v10 = *(_QWORD *)(a2 + 8);
  v11 = (_QWORD *)(a2 + 24);
  v12 = *(_DWORD *)(a2 + 32) & 0x1F;
  v13 = *(__int64 ***)(v3 + 16 * ((v10 & 0xF) + 6));
  if ( !v13 )
    goto LABEL_17;
  do
  {
    if ( v10 <= (unsigned __int64)v13[3] )
    {
      if ( v10 < (unsigned __int64)v13[3] )
        goto LABEL_9;
      if ( v12 <= ((_DWORD)v13[6] & 0x1Fu) )
      {
        if ( v12 < ((_DWORD)v13[6] & 0x1Fu) )
          goto LABEL_9;
        if ( !v11 )
          break;
        if ( *v11 <= (unsigned __int64)v13[8] )
        {
          if ( *v11 >= (unsigned __int64)v13[8] )
            break;
LABEL_9:
          v13 = (__int64 **)*v13;
          continue;
        }
      }
    }
    v13 = (__int64 **)v13[1];
  }
  while ( v13 );
  if ( v13 && v13[7] )
  {
    if ( (unsigned int)MiIncrementCombinedPte(v6, v13 + 4, 1LL) )
    {
      v4 = -1073741302;
      *a3 = v13;
    }
    else
    {
      v4 = -1073741670;
    }
  }
LABEL_17:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + v3 + 104));
  return v4;
}
