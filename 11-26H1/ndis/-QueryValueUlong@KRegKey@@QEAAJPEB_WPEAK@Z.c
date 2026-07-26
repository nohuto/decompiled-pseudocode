/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140163960
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x140142494 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1401639B0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  wchar_t *v5; // rax
  __int16 v6; // r10
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueUlong(this, &v7, a3);
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = 3221225485LL;
  if ( v4 )
  {
    result = 0LL;
    v6 = 2 * v4;
    v7.Buffer = a2;
    v7.Length = -2 - v6;
    v7.MaximumLength = -v6;
  }
  if ( (int)result >= 0 )
    return KRegKey::QueryValueUlong(this, &v7, a3);
  return result;
}
