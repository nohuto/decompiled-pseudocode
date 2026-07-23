/*
 * XREFs of MiTrimWorkingSetVpabCallback @ 0x1403C47C0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimmedEnough @ 0x1403C48C0 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetVpabCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 *v7; // r10
  __int64 *v8; // r11
  unsigned __int64 PteShadow; // rax
  __int64 v10; // rcx

  if ( (unsigned int)MiTrimmedEnough(*(_QWORD *)(a1 + 32), a5) )
    return 1LL;
  PteShadow = *v7;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)v7, *v7);
  v10 = *v8;
  if ( (*v8 & 2) != 0 )
    v10 = (PteShadow >> 5) & 1;
  else
    LOBYTE(v10) = (v10 & 1) != 0;
  return MiTrimPteWorker(a1, (unsigned __int64)v7, a4, 48 * (unsigned int)(PteShadow >> 12), a5, v10, 0LL);
}
