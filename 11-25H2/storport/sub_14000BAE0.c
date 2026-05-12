/*
 * XREFs of sub_14000BAE0 @ 0x14000BAE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_14000BAE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  NTSTATUS v6; // ebx

  v4 = sub_14000BCAC(a1, a2, a3);
  v5 = v4;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 35LL, &unk_14014C778, v4, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  if ( v6 < 0
    || (v6 = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(v5 + 8),
               3u,
               stru_140148968[*(int *)(*(_QWORD *)(a2 + 184) + 24LL)],
               (PREQUEST_POWER_COMPLETE)sub_14000AC80,
               (PVOID)a2,
               0LL),
        v6 < 0) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 336));
  }
  else
  {
    v6 = -1073741802;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 36LL, &unk_14014C778, v5, a2, v6);
  }
  return (unsigned int)v6;
}
