/*
 * XREFs of RtlCSparseBitmapStart @ 0x14063CD08
 * Callers:
 *     RtlpHpVaMgrCtxStart @ 0x14063BEC0 (RtlpHpVaMgrCtxStart.c)
 *     RtlHpKInitializeHeapManager @ 0x1406D70BC (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     RtlpEnvRegisterFaultRange @ 0x14063DA58 (RtlpEnvRegisterFaultRange.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  ULONG_PTR v14; // [rsp+38h] [rbp-30h]
  ULONG_PTR v15; // [rsp+38h] [rbp-30h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h]

  v18 = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  *(_BYTE *)(a1 + 49) = 1;
  *(_BYTE *)(a1 + 50) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v6 = (((a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = *(unsigned int *)(a1 + 52);
  v17 = v7;
  if ( ((v7 >> 12) + 7) >> 3 > v8 )
    return 2147483653LL;
  v16 = v7 + v6;
  v9 = (__int64 *)(a1 + 8);
  result = RtlpHpEnvAllocVA((ULONG_PTR *)(a1 + 8), (__int64 *)&v16, 0LL, 1056768, 4u, v12, (unsigned __int8)a4, v14, 0);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v10, v16);
    v11 = *v9;
    *(_BYTE *)(a1 + 51) = v10;
    result = RtlpEnvRegisterFaultRange(v11, v6);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)a1 = v6 + *v9;
      if ( v7 <= 0x1000 )
      {
        result = RtlpHpEnvAllocVA(
                   (ULONG_PTR *)a1,
                   (__int64 *)&v17,
                   0LL,
                   1073745920,
                   4u,
                   v13,
                   *(unsigned __int8 *)(a1 + 50),
                   v15,
                   0);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a1 + 56) = 1LL;
      }
      return 0LL;
    }
  }
  return result;
}
