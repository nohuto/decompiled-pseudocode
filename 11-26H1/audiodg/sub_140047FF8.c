/*
 * XREFs of sub_140047FF8 @ 0x140047FF8
 * Callers:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 * Callees:
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140047FF8(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( qword_1400E9788
      || (qword_1400E9788 = sub_14004FC0C("RtlUnregisterFeatureConfigurationChangeNotification")) != 0 )
    {
      sub_1400B6010(v1);
    }
  }
}
