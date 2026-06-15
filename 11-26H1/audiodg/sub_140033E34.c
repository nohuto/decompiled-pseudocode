/*
 * XREFs of sub_140033E34 @ 0x140033E34
 * Callers:
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_140029590 @ 0x140029590 (sub_140029590.c)
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_14005BAC8 @ 0x14005BAC8 (sub_14005BAC8.c)
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 *     sub_14005D708 @ 0x14005D708 (sub_14005D708.c)
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 *     sub_14006083C @ 0x14006083C (sub_14006083C.c)
 *     sub_14006B590 @ 0x14006B590 (sub_14006B590.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 *     sub_1400747DC @ 0x1400747DC (sub_1400747DC.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140085904 @ 0x140085904 (sub_140085904.c)
 *     sub_1400AE44C @ 0x1400AE44C (sub_1400AE44C.c)
 *     sub_1400AE682 @ 0x1400AE682 (sub_1400AE682.c)
 *     sub_1400AF537 @ 0x1400AF537 (sub_1400AF537.c)
 *     sub_1400AF822 @ 0x1400AF822 (sub_1400AF822.c)
 *     sub_1400AF858 @ 0x1400AF858 (sub_1400AF858.c)
 *     sub_1400AF8E8 @ 0x1400AF8E8 (sub_1400AF8E8.c)
 *     sub_1400B1C4C @ 0x1400B1C4C (sub_1400B1C4C.c)
 *     sub_1400B1E51 @ 0x1400B1E51 (sub_1400B1E51.c)
 *     sub_1400B20E3 @ 0x1400B20E3 (sub_1400B20E3.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140033E34(__int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
