/*
 * XREFs of sub_140040510 @ 0x140040510
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_140076980 @ 0x140076980 (sub_140076980.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140040510(__int64 a1, __int64 a2)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v4; // rdi
  int v5; // edx
  int v6; // ecx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v3 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_14000BCAC(a1);
  v4 = v3;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 25LL, &unk_14014C778, v3, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( byte_140168DAA )
  {
    v8 = 0LL;
    IoGetActivityIdIrp(a2, &v8);
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_140076980(v6, v5, (unsigned int)&v8, *((_DWORD *)v4 + 14), a2, *(_DWORD *)(a2 + 48));
  }
  ExReleaseRundownProtectionCacheAware(v4[42]);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 26LL, &unk_14014C778, v4, a2, *(_DWORD *)(a2 + 48));
  }
  return 0LL;
}
