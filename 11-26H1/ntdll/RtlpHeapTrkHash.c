/*
 * XREFs of RtlpHeapTrkHash @ 0x18005D2C0
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18005CE10 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkFindStack @ 0x18005E340 (RtlpHeapTrkFindStack.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHeapTrkHash(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // r9
  __int64 v3; // r11
  __int16 *v4; // r10
  __int16 v5; // cx
  __int16 v6; // dx
  __int64 v8; // [rsp+10h] [rbp+10h] BYREF

  v1 = 0LL;
  v8 = a1;
  v2 = (unsigned __int8 *)&v8;
  v3 = 8LL;
  v4 = (__int16 *)&unk_1801C6818;
  do
  {
    v5 = *v4++;
    v6 = *v2++;
    v1 += (unsigned __int16)(v5 * v6) % 0x1EEFu;
    --v3;
  }
  while ( v3 );
  return v1 % 0x1EEF;
}
