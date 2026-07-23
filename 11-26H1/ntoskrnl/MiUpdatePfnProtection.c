/*
 * XREFs of MiUpdatePfnProtection @ 0x140313BB0
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v13; // edx
  int v14; // edx
  int v15; // edx

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v7 = *(_QWORD *)(a2 + 16);
  v8 = (v7 >> 5) & 0x1F;
  if ( a3 == 24 )
  {
    a3 = 24;
  }
  else if ( (_DWORD)v8 == 24
         && ((v13 = *(_DWORD *)(a1 + 48), (v13 & 0x80000) == 0)
           ? (v14 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 32LL) >> 1)
           : (v14 = v13 >> 5),
             v15 = v14 & 0x1F,
             LOBYTE(v8) = v15,
             v15 == 24)
         || (v9 = v8 & 0x18) == 0 )
  {
    v10 = a3 & 0x18;
    if ( v10 != 24 )
    {
      if ( v10 != 8 )
        goto LABEL_9;
      goto LABEL_8;
    }
    a3 &= 0xFFFFFFE7;
  }
  else
  {
    switch ( v9 )
    {
      case 16:
LABEL_8:
        a3 &= ~8u;
        break;
      case 8:
        a3 = a3 & 0xFFFFFFE7 | 8;
        break;
      case 24:
        a3 |= 0x18u;
        break;
    }
  }
LABEL_9:
  if ( v7 )
    DemandZeroPte = (32LL * a3) ^ (v7 ^ (32LL * a3)) & 0xFFFFFFFFFFFFFC1FuLL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(a3);
  *(_QWORD *)(a2 + 16) = DemandZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return a3;
}
