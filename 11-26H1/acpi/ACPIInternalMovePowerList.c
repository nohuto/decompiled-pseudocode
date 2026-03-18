/*
 * XREFs of ACPIInternalMovePowerList @ 0x14001A170
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140019030 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x14005D480 (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalMovePowerList(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  volatile __int32 *v9; // r9
  int v10; // r11d
  _DWORD *v11; // rax
  bool v12; // zf

  v4 = (_QWORD *)*a1;
  while ( v4 != a1 )
  {
    v8 = v4;
    v9 = (volatile __int32 *)v4;
    v4 = (_QWORD *)*v4;
    if ( *((_DWORD *)v8 + 12) )
      goto LABEL_11;
    v10 = *(_DWORD *)(v8[5] + 740LL);
    v11 = v8 + 7;
    v12 = v10 == 0;
    if ( v10 > 0 )
    {
      if ( (*v11 & 0x2000000) == 0 )
      {
        *v11 |= 0x2000000u;
        _InterlockedIncrement(&AcpiPowerCurrentPagingPathTransitions);
        goto LABEL_11;
      }
      v12 = v10 == 0;
    }
    if ( v12 && (*v11 & 0x2000000) != 0 )
    {
      *v11 &= ~0x2000000u;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
LABEL_11:
    _InterlockedExchange(v9 + 52, 3);
  }
  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    *v7 = a2;
    *(_QWORD *)(a2 + 8) = v7;
    v5[1] = v6;
    *v6 = v5;
    a1[1] = a1;
    *a1 = a1;
  }
}
