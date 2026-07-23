/*
 * XREFs of MiUpdateAwePageTable @ 0x140342494
 * Callers:
 *     MiDeleteEnclavePage @ 0x140342680 (MiDeleteEnclavePage.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

__int64 __fastcall MiUpdateAwePageTable(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int64 PteShadow; // rax
  __int64 *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // r14
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF

  PteShadow = *a1;
  v6 = a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a1, *a1);
  v7 = 0xFFFFFFFFFFLL;
  v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = 0;
  if ( a2 )
  {
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    v10 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) + a2;
    a1 = (__int64 *)(v10 ^ (*(_QWORD *)(v8 + 24) ^ v10) & 0xC000000000000000uLL);
    *(_QWORD *)(v8 + 24) = a1;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = 0xFFFFFFFFFFLL;
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  }
  if ( v6 == (__int64 *)0xFFFFF6FB7DBEDF68LL )
    return 0LL;
  if ( a3 )
  {
    if ( a3 <= 0 )
      v11 = MiDecreaseUsedPtes((__int64)a1, (unsigned __int64)v6, (_KPROCESS *)(unsigned int)-a3);
    else
      v11 = MiIncreaseUsedPtes(a1, v6, (unsigned int)a3, 2LL);
  }
  else
  {
    v14 = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      v14 = MiReadPteShadow((unsigned __int64)v6, *v6);
    if ( (*(_DWORD *)(48 * (v7 & (v14 >> 12)) - 0x220000000000LL + 36) & 0x4000000) != 0 )
      v15 = *(_QWORD *)(48 * (v7 & (v14 >> 12)) - 0x220000000000LL) >> 36;
    else
      v15 = *(_QWORD *)(48 * (v7 & (v14 >> 12)) - 0x220000000000LL + 16) >> 17;
    v11 = v15 & 0x3FF;
  }
  v12 = v11 == 0;
  result = 1LL;
  if ( !v12 )
  {
    if ( v10 == 1 )
      return 2;
    return v9;
  }
  return result;
}
