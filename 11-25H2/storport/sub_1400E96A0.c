/*
 * XREFs of sub_1400E96A0 @ 0x1400E96A0
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400E9554 @ 0x1400E9554 (sub_1400E9554.c)
 *     sub_1400EA0D4 @ 0x1400EA0D4 (sub_1400EA0D4.c)
 */

__int64 __fastcall sub_1400E96A0(__int64 a1)
{
  unsigned int v2; // edi
  int v4; // ecx
  unsigned __int16 v5; // si
  __int64 v6; // rax
  void *v7; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 1416) )
    sub_1400EA0D4();
  if ( !*(_DWORD *)(a1 + 1208) )
    return 3221225659LL;
  v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 259LL);
  v5 = 4;
  if ( (unsigned int)(v4 + 1) < 4 )
    v5 = v4 + 1;
  v6 = sub_1400143E0(72LL, 8LL * v5 + 32, 1396793682LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 1416) = v6;
  if ( !v6 || (*(_QWORD *)(v6 + 8) = v6 + 32, !(unsigned __int16)sub_1400E9554(a1, v5)) )
  {
    v2 = -1073741670;
    v7 = *(void **)(a1 + 1416);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x53416152u);
      *(_QWORD *)(a1 + 1416) = 0LL;
    }
  }
  return v2;
}
