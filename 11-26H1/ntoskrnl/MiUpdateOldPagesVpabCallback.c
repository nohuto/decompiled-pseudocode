/*
 * XREFs of MiUpdateOldPagesVpabCallback @ 0x1404C30F0
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateOldPteWorker @ 0x14029B8EC (MiUpdateOldPteWorker.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUpdateOldPagesVpabCallback(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, unsigned int *a5)
{
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // r11
  bool v9; // zf

  PteShadow = *a3;
  v6 = (unsigned __int64)a3;
  v7 = a2;
  v8 = a1;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a3, *a3);
  if ( (*v7 & 2) != 0 )
    v9 = (PteShadow & 0x20) == 0;
  else
    v9 = (*v7 & 1) == 0;
  if ( v9 )
    MiUpdateOldPteWorker(v8, v6, 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a5);
  return 0LL;
}
