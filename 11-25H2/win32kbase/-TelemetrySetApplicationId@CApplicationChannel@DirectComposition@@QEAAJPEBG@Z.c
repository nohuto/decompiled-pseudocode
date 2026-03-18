/*
 * XREFs of ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x140068EB0
 * Callers:
 *     NtDCompositionTelemetrySetApplicationId @ 0x14011DC40 (NtDCompositionTelemetrySetApplicationId.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400692E8 (DirectComposition--Memory--Allocate_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400696EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::TelemetrySetApplicationId(
        DirectComposition::CApplicationChannel *this,
        const unsigned __int16 *a2)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  char *v7; // rcx
  unsigned __int16 *v8; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = a2;
  v5 = 151LL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (151 - v5) & -(__int64)(v5 != 0);
  if ( !v5 )
    return 3221225485LL;
  v7 = (char *)*((_QWORD *)this + 340);
  if ( v7 )
    GreDeleteFastMutex(v7);
  v8 = (unsigned __int16 *)DirectComposition::Memory::Allocate_0(2 * v6 + 2, 1717715780LL);
  *((_QWORD *)this + 340) = v8;
  if ( !v8 )
    return 3221225495LL;
  StringCchCopyW(v8, v6 + 1, a2);
  *((_BYTE *)this + 264) |= 0x80u;
  return 0LL;
}
