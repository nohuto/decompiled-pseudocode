/*
 * XREFs of MiEliminateOverlappingExtents @ 0x1406FE3B4
 * Callers:
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiLookupFixupExtentByPte @ 0x1404C5484 (MiLookupFixupExtentByPte.c)
 */

unsigned __int64 __fastcall MiEliminateOverlappingExtents(__int64 *a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v7; // r12
  unsigned __int64 result; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  _BYTE *v15; // rax
  _BYTE *v16; // r12
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h]
  __int64 v20; // [rsp+78h] [rbp+20h]

  v19 = a3;
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
  v18 = 17;
  if ( a4 )
  {
    v11 = 0LL;
    do
    {
      v20 = MiLockProtoPoolPageForce(a2, &v18);
      do
      {
        v14 = *(_QWORD *)(v7 + 8 * v11);
        if ( v14 == 0x8000000000000000uLL )
          goto LABEL_15;
        if ( !v5 )
          goto LABEL_13;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        v15 = MiLookupFixupExtentByPte(v4, (const void *)a2);
        v16 = v15;
        if ( v15 && (*v15 & 1) == 0 )
          *(_QWORD *)(v19 + 8 * v11) = v14 | 0x4000000000000000LL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( !v16 )
        {
          v7 = v19;
LABEL_13:
          v17 = MiLockLeafPage((unsigned __int64 *)a2, 0);
          if ( v17 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(v7 + 8 * v11) = v14 | 0x4000000000000000LL;
          }
        }
LABEL_15:
        ++v10;
        a2 += 8LL;
        v11 = v10;
        if ( v10 >= a4 )
          break;
        v7 = v19;
      }
      while ( (a2 & 0xFFF) != 0 );
      LOBYTE(v12) = v18;
      result = MiUnlockProtoPoolPage(v20, v12, v13);
      v7 = v19;
    }
    while ( v10 < a4 );
  }
  return result;
}
