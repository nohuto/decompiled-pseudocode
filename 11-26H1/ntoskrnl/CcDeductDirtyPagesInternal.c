/*
 * XREFs of CcDeductDirtyPagesInternal @ 0x14048F388
 * Callers:
 *     CcUpdateExternalCacheInfoEx @ 0x1404FE9A0 (CcUpdateExternalCacheInfoEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcDeductDirtyPagesInternal(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // r11
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  *(_QWORD *)(a3 + 1056) -= a2;
  if ( a4 )
    a4[124] -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x35DEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    v5 = -(__int64)a2;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 40LL), v5);
    v6 = *(_QWORD **)(a1 + 512);
    v6[31] += v6[5];
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL);
    v8 = v6[32];
    if ( v8 <= v7 )
      v8 = v7;
    v6[32] = v8;
    if ( a4 )
    {
      v6[33] += a4[127];
      v6[34] = a4[128];
      v6[35] = a4[129];
    }
    ++v6[36];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), v5);
  }
}
