/*
 * XREFs of MiInitializeNewPfnsLockProtos @ 0x1406EE224
 * Callers:
 *     MiInitializeDynamicPfnsWorker @ 0x1406EE0B0 (MiInitializeDynamicPfnsWorker.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 */

unsigned __int64 __fastcall MiInitializeNewPfnsLockProtos(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        unsigned __int8 *a7)
{
  unsigned __int64 v7; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rcx

  v7 = a5;
  *a7 = 17;
  v10 = *(_QWORD *)(a1 + 40);
  *a6 = 0LL;
  if ( a5 > (unsigned __int64)(4096 - (unsigned int)(a3 & 0xFFF)) >> 3 )
    v7 = (unsigned __int64)(4096 - (unsigned int)(a3 & 0xFFF)) >> 3;
  v11 = MiLockProtoPoolPageForce(a3, a7);
  v12 = *(_DWORD *)(v10 + 36) & 1;
  *a6 = v11;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xF8FFFFFF | (v12 << 24);
  if ( *(_QWORD *)(v10 + 16) )
  {
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFFF0000 | 1;
    *(_DWORD *)(a2 + 32) |= 0x200000u;
    *(_QWORD *)a2 = (*(_QWORD *)(v10 + 16) + 32LL) & -(__int64)(*(_QWORD *)(v10 + 16) != 0LL);
    *(_QWORD *)(*(_QWORD *)(v10 + 16) + 256LL) = 48 * a4 - 0x220000000000LL;
    v13 = *(_QWORD *)(v10 + 16);
    *(_QWORD *)(v13 + 272) = 0LL;
    *(_DWORD *)(v13 + 280) = 56;
    *(_QWORD *)(v13 + 304) = 0LL;
    *(_QWORD *)(v13 + 312) = 4096LL;
    *(_QWORD *)(*(_QWORD *)(v10 + 16) + 320LL) = a4;
  }
  return v7;
}
