/*
 * XREFs of MiIdentifyProtoPage @ 0x1402D3F60
 * Callers:
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiIdentifyProtoPage(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2[2];
  if ( (v3 & 0x400) != 0 )
  {
    if ( qword_140E2D8C0 && (v3 & 0x10) == 0 )
      v3 &= qword_140E2D8C8;
    v6 = 0LL;
    v7 = (v3 >> 12) & 0x3FFFFFFFFFFLL;
    if ( v7 )
      v8 = (_QWORD *)(qword_140E37D10 - 8 + 8 * v7);
    else
      v8 = 0LL;
    v9 = *v8;
    v10 = *(unsigned int *)(*v8 + 56LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v8 + 72LL));
    if ( (*(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      a3[2] = *(_QWORD *)((*(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)(v9 + 72), 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 72));
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9 + 72, retaddr);
      }
      a3[2] = (v10 >> 5) ^ (a3[2] ^ (v10 >> 5)) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v8[1] )
      {
        if ( (v8[4] & 0x20000) != 0 && (*(_DWORD *)(v9 + 56) & 8) != 0 && (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
          v11 = v8[1];
        else
          v11 = a2[1] | 0x8000000000000000uLL;
        v12 = v8[1];
        if ( (*(_DWORD *)(*v8 + 56LL) & 0x20) != 0 )
        {
          if ( v11 < v12 || v11 >= v12 + 8LL * *((unsigned int *)v8 + 11) )
            v16 = (v11 << 9) - (*(_QWORD *)(MiGetSharedProtos(*v8, 0xFFFFFFFFLL, v8) + 72) << 9);
          else
            v16 = (v11 << 9) - (v12 << 9);
          v13 = ((unsigned __int64)*((unsigned int *)v8 + 9) << 9) + (v16 & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          if ( v12 )
            v6 = (__int64)(v11 - v12) >> 3 << 12;
          v13 = v6 + ((*((unsigned int *)v8 + 9) | ((v8[4] & 0xFFC0) << 26)) << 12);
        }
        *a3 = v13 ^ (*a3 ^ v13) & 0xFE000000000001FFuLL;
      }
      v14 = *a3;
      if ( (v10 & 0x29) == 8 )
        result = v14 & 0xFFFFFFFFFFFFFFF0uLL | 8;
      else
        result = v14 & 0xFFFFFFFFFFFFFFF0uLL | 1;
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      result = *a3 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
    }
    *a3 = result;
  }
  else
  {
    a3[2] = a2[1] | 0x8000000000000000uLL;
    if ( (__int64)a2[1] > 0 && (a2[5] & 0x10000000000LL) == 0 )
    {
      a3[2] |= 1uLL;
      v17 = *(_QWORD *)((a2[1] | 0x8000000000000000uLL) + 0x18);
      if ( v17 >= 0x1000000000000LL )
        v17 = 0xFFFFFFFFFFFFLL;
      *a3 = (v17 << 9) ^ (*a3 ^ (v17 << 9)) & 0xFE000000000001FFuLL;
    }
    result = *a3 & 0xFFFFFFFFFFFFFFF0uLL | 2;
    *a3 = result;
  }
  return result;
}
