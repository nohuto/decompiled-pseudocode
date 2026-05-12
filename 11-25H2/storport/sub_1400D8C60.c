/*
 * XREFs of sub_1400D8C60 @ 0x1400D8C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_1400D1760 @ 0x1400D1760 (sub_1400D1760.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400D8C60(__int64 DeviceObject, PVOID Context)
{
  ULONG v3; // ebx
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  unsigned int v6; // ebp

  v3 = 1000;
  v4 = 0;
  v5 = sub_14006B3A4(DeviceObject);
  v6 = 1000000 * *(unsigned __int8 *)(*((_QWORD *)v5 + 20) + 112LL);
  while ( sub_1400D1760((__int64)v5) )
  {
    sub_14002CDD0(v3);
    v4 += v3;
    if ( v6 && v4 >= v6 )
      break;
    if ( v3 < 0x186A0 )
    {
      v3 *= 2;
      if ( v3 >= 0x186A0 )
        v3 = 100000;
    }
  }
  *(_BYTE *)(*((_QWORD *)v5 + 20) + 113LL) = v4 / 0xF4240;
  (*(void (__fastcall **)(_QWORD, PVOID, _QWORD))(*((_QWORD *)v5 + 20) + 128LL))(*((_QWORD *)v5 + 1), Context, 0LL);
}
