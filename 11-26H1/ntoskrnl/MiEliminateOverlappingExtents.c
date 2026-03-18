/*
 * XREFs of MiEliminateOverlappingExtents @ 0x1406F96E4
 * Callers:
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiLookupFixupExtentByPte @ 0x1404CBA54 (MiLookupFixupExtentByPte.c)
 */

unsigned __int64 __fastcall MiEliminateOverlappingExtents(__int64 *a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v7; // r12
  unsigned __int64 result; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rsi
  _BYTE *v13; // rax
  _BYTE *v14; // r12
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h]

  v17 = a3;
  v4 = *a1;
  v5 = 0LL;
  v7 = a3;
  result = *(unsigned int *)(*a1 + 56);
  if ( (result & 0x20) != 0 )
  {
    result = *(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    v5 = *(_QWORD *)(result + 48);
  }
  v10 = 0;
  v16 = 17;
  if ( a4 )
  {
    v11 = 0LL;
    do
    {
      v18 = MiLockProtoPoolPageForce(a2, &v16);
      do
      {
        v12 = *(_QWORD *)(v7 + 8 * v11);
        if ( v12 == 0x8000000000000000uLL )
          goto LABEL_15;
        if ( !v5 )
          goto LABEL_13;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        v13 = MiLookupFixupExtentByPte(v4, (const void *)a2);
        v14 = v13;
        if ( v13 && (*v13 & 1) == 0 )
          *(_QWORD *)(v17 + 8 * v11) = v12 | 0x4000000000000000LL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( !v14 )
        {
          v7 = v17;
LABEL_13:
          v15 = MiLockLeafPage((unsigned __int64 *)a2, 0);
          if ( v15 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(v7 + 8 * v11) = v12 | 0x4000000000000000LL;
          }
        }
LABEL_15:
        ++v10;
        a2 += 8LL;
        v11 = v10;
        if ( v10 >= a4 )
          break;
        v7 = v17;
      }
      while ( (a2 & 0xFFF) != 0 );
      result = MiUnlockProtoPoolPage(v18, v16);
      v7 = v17;
    }
    while ( v10 < a4 );
  }
  return result;
}
