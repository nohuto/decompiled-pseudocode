/*
 * XREFs of sub_140038780 @ 0x140038780
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140038780(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  __int128 v8; // [rsp+40h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-128h] BYREF

  v8 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v8);
  v5 = sub_140006470(v4);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v5, "SaDevice_InitializeAPOs", 0LL);
  v6 = sub_1400B6010(*(_QWORD *)(a1 + 176));
  if ( v6 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 10LL, &unk_1400C6808);
    }
    sub_14005A470("CSystemAudioDeviceSharedBase::InnerInitializeAPO", 51LL, (unsigned int)v6);
  }
  else
  {
    *(_QWORD *)(a1 + 168) = a2;
  }
  sub_1400066EC(&PerformanceCount);
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v6;
}
