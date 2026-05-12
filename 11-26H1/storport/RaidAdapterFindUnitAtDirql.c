/*
 * XREFs of RaidAdapterFindUnitAtDirql @ 0x140009C04
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     StorPortSetDeviceQueueDepth @ 0x140038750 (StorPortSetDeviceQueueDepth.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall RaidAdapterFindUnitAtDirql(__int64 a1, int a2)
{
  __int64 (__fastcall *v2)(_QWORD *); // r15
  __int64 (__fastcall *v3)(__int64, unsigned __int64); // r12
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r14
  int v10; // edi
  _QWORD **v11; // r14
  _QWORD *i; // rbx
  __int64 v13; // rax
  int v14; // eax
  _QWORD *result; // rax

  v2 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
  v3 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
  v5 = *(_DWORD *)(a1 + 172);
  v6 = 0LL;
  v7 = BYTE2(a2) | (unsigned __int64)((((unsigned __int8)a2 << 8) | (unsigned int)BYTE1(a2)) << 8);
  v8 = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 208))(v7);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = -1073741275;
  v11 = (_QWORD **)(16LL * (v8 % v5) + v9);
  for ( i = *v11; i != v11; i = (_QWORD *)*i )
  {
    v13 = v2(i);
    v14 = v3(v13, v7);
    if ( !v14 )
    {
      v10 = 0;
      v6 = i;
      break;
    }
    if ( v14 < 0 )
      break;
  }
  result = v6 - 10;
  if ( v10 < 0 )
    return 0LL;
  return result;
}
