/*
 * XREFs of MiResetAccessBitsVpabCallback @ 0x1404C15A0
 * Callers:
 *     <none>
 * Callees:
 *     MiResetAccessBitPteWorker @ 0x14029BA28 (MiResetAccessBitPteWorker.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiResetAccessBitsVpabCallback(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 PteShadow; // rax
  __int64 v8; // r10
  _QWORD *v9; // r11
  char v10; // cl

  v5 = *(_QWORD *)(a1 + 32);
  PteShadow = *a3;
  v8 = (__int64)a3;
  v9 = a2;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a3, *a3);
  v10 = 0;
  if ( (*v9 & 2) != 0 )
    goto LABEL_7;
  if ( (*v9 & 1) != 0 )
  {
    if ( *(_DWORD *)(a5 + 4) )
      v10 = 4;
LABEL_7:
    MiResetAccessBitPteWorker(v5, v8, a4, 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a5, v10);
  }
  return 0LL;
}
