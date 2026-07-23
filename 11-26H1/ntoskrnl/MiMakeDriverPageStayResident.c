/*
 * XREFs of MiMakeDriverPageStayResident @ 0x14038C448
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiRemoveSystemImagePage @ 0x14038C1A4 (MiRemoveSystemImagePage.c)
 */

unsigned __int8 __fastcall MiMakeDriverPageStayResident(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  const signed __int64 *v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int8 result; // al
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3 - *(_QWORD *)(a1 + 48);
  v6 = *(const signed __int64 **)(a1 + 312);
  v7 = (unsigned int)(v4 >> 12);
  result = _bittest64(v6, v7);
  if ( !result )
  {
    v9 = (unsigned __int64)(unsigned int)v7 >> 3;
    *((_BYTE *)v6 + v9) |= 1 << (v7 & 7);
    result = MiGetWsleContents(v9, a3) & 0xF;
    if ( result != 9 )
    {
      v11 = (_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v12 = 48 * ((*v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      MiRemoveSystemImagePage(a2, (__int64)v11, v12);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
