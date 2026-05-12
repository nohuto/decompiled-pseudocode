/*
 * XREFs of sub_14012B890 @ 0x14012B890
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_14012B890(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  void *v4; // rbx
  __int64 v5; // r14
  __int64 Pool2; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx

  v2 = (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 2 | 8u) >> 1;
  v3 = (unsigned int)v2;
  v4 = *(void **)(*(_QWORD *)(a1 + 128) + 8LL);
  v5 = 24 * (v2 + 1);
  Pool2 = ExAllocatePool2(64LL, v5, 1330667858LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = v3;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16 * v3 + 24;
    *(_OWORD *)(Pool2 + 24) = xmmword_140154598;
    *(_OWORD *)(Pool2 + 40) = xmmword_140154588;
    *(_OWORD *)(*(_QWORD *)(Pool2 + 8) + 32LL) = xmmword_1401545D8;
    *(_OWORD *)(*(_QWORD *)(Pool2 + 8) + 48LL) = xmmword_1401545B8;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 2) != 0 )
      *(_OWORD *)(*(_QWORD *)(Pool2 + 8) + 64LL) = xmmword_1401545A8;
    v8 = 0LL;
    do
    {
      PoRegisterPowerSettingCallback(
        *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 8LL),
        (LPCGUID)(*(_QWORD *)(v7 + 8) + 16LL * (unsigned int)v8),
        sub_14012F0B0,
        *(PVOID *)(a1 + 128),
        (PVOID *)(*(_QWORD *)(v7 + 16) + 8 * v8));
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < (unsigned int)v3 );
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 312LL) = v7;
  }
  else if ( v4 )
  {
    sub_14008D9B8(v4, 64LL, v5, 1330667858, 0x80000000);
  }
  return 0LL;
}
