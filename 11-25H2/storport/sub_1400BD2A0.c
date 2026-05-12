/*
 * XREFs of sub_1400BD2A0 @ 0x1400BD2A0
 * Callers:
 *     sub_1400BD5E0 @ 0x1400BD5E0 (sub_1400BD5E0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BCC68 @ 0x1400BCC68 (sub_1400BCC68.c)
 */

__int64 __fastcall sub_1400BD2A0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v4; // rax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1656) )
    return 0LL;
  v4 = sub_1400143E0(64LL, 56LL, 1950703954LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 1656) = v4;
  if ( !v4
    || (*(_QWORD *)(*(_QWORD *)(a1 + 1656) + 48LL) = sub_1400143E0(
                                                       64LL,
                                                       4096LL,
                                                       1950703954LL,
                                                       *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) == 0LL
    || (*(_QWORD *)(*(_QWORD *)(a1 + 1656) + 40LL) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 8LL))) == 0LL )
  {
    v1 = -1073741670;
    sub_1400BCC68(a1);
  }
  return v1;
}
