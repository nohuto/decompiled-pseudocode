/*
 * XREFs of HsaSetPasidAddressSpace @ 0x1405AD1A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HsaEnsureNoPendingFaults @ 0x1405ABDBC (HsaEnsureNoPendingFaults.c)
 */

__int64 __fastcall HsaSetPasidAddressSpace(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r11
  char v9; // bl
  __int64 v10; // rcx
  ULONG_PTR *v11; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL) + 8 * ((unsigned __int64)a4 >> 9) + 4096);
  v7 = 0LL;
  if ( a3 )
    v7 = *(_QWORD *)(a3 + 24);
  v8 = a4 & 0x1FF;
  v9 = 1;
  v10 = v7 & 0xFFFFFFFFFF000LL;
  if ( v7 )
    v10 = v7 & 0xFFFFFFFFFF000LL | 1;
  if ( *(_QWORD *)(v6 + 8 * v8) == v10 )
    v9 = 0;
  else
    *(_QWORD *)(v6 + 8 * v8) = v10;
  if ( !v7 )
  {
    v11 = (ULONG_PTR *)HsaEnsureNoPendingFaults(a1, a4);
    if ( v11 )
      KeBugCheckEx(0x159u, 0x2000uLL, (ULONG_PTR)v11, *v11, v11[1]);
  }
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
