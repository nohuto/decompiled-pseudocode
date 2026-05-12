/*
 * XREFs of sub_14001F6B0 @ 0x14001F6B0
 * Callers:
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 */

__int64 __fastcall sub_14001F6B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD **v3; // rdi
  PEX_RUNDOWN_REF_CACHE_AWARE *v5; // r14
  char v7; // r15
  bool v8; // bl
  int v9; // ebx
  char v10; // cl
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_QWORD **)(a1 + 1872);
  v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)sub_140021280(a1) )
  {
    PoFxIdleComponent(**v3, a2, 0LL);
    v7 = 1;
    v9 = *((_DWORD *)*v3 + 8);
    ExReleaseRundownProtectionCacheAware(*v5);
    v8 = (v9 & 2) == 0;
  }
  if ( *(_QWORD *)(v2 + 4960) )
  {
    v10 = sub_140021110(v2, 0LL, 0LL);
    if ( !v7 )
      v8 = v10;
  }
  if ( (unsigned __int8)sub_140021280(a1) )
  {
    _InterlockedDecrement64(*v3 + 5);
    _InterlockedIncrement64(*v3 + 20);
    ExReleaseRundownProtectionCacheAware(*v5);
  }
  v11 = *(_QWORD *)(v2 + 4960);
  if ( v11 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v11 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 4960) + 96LL));
  }
  return !v8 ? 0xC100000C : 0;
}
