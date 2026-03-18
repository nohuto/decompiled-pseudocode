/*
 * XREFs of MiRevertPfnActivePageTable @ 0x140468A80
 * Callers:
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 *     MiRemoveActivePageTableLinks @ 0x1402EC880 (MiRemoveActivePageTableLinks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiRevertPfnActivePageTable(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    v2 = *(_QWORD *)a1 >> 36;
  else
    v2 = *(_QWORD *)(a1 + 16) >> 17;
  *(_DWORD *)(a1 + 36) &= ~0x4000000u;
  v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  if ( qword_140E2D740 )
  {
    v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
    if ( (qword_140E2D740 & v3) == 0 )
      v4 = qword_140E2D740 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
    v3 = v4;
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 16) = ((unsigned __int64)(unsigned int)v2 << 17) ^ (v3 ^ ((unsigned __int64)(unsigned int)v2 << 17)) & 0xFFFFFFFFF801FFFFuLL;
  *(_QWORD *)a1 &= 0xC7FFFFFFFFFFFFFFuLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
