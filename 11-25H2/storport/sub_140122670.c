/*
 * XREFs of sub_140122670 @ 0x140122670
 * Callers:
 *     sub_1400BCCF8 @ 0x1400BCCF8 (sub_1400BCCF8.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400CE144 @ 0x1400CE144 (sub_1400CE144.c)
 *     sub_1400CF37C @ 0x1400CF37C (sub_1400CF37C.c)
 *     sub_1400D0158 @ 0x1400D0158 (sub_1400D0158.c)
 *     sub_1400D5148 @ 0x1400D5148 (sub_1400D5148.c)
 *     sub_1400D8D30 @ 0x1400D8D30 (sub_1400D8D30.c)
 *     sub_1400D9540 @ 0x1400D9540 (sub_1400D9540.c)
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400F23BC @ 0x1400F23BC (sub_1400F23BC.c)
 *     sub_1400F8858 @ 0x1400F8858 (sub_1400F8858.c)
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 *     sub_1400FFA50 @ 0x1400FFA50 (sub_1400FFA50.c)
 *     sub_14010F0B0 @ 0x14010F0B0 (sub_14010F0B0.c)
 *     sub_140121DE0 @ 0x140121DE0 (sub_140121DE0.c)
 *     sub_140123DD0 @ 0x140123DD0 (sub_140123DD0.c)
 *     sub_140124930 @ 0x140124930 (sub_140124930.c)
 *     sub_140124E74 @ 0x140124E74 (sub_140124E74.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 *     sub_140126494 @ 0x140126494 (sub_140126494.c)
 *     sub_140191238 @ 0x140191238 (sub_140191238.c)
 *     sub_140193330 @ 0x140193330 (sub_140193330.c)
 *     sub_14019FD80 @ 0x14019FD80 (sub_14019FD80.c)
 *     sub_1401A0D00 @ 0x1401A0D00 (sub_1401A0D00.c)
 * Callees:
 *     sub_1401206E0 @ 0x1401206E0 (sub_1401206E0.c)
 *     sub_140120B60 @ 0x140120B60 (sub_140120B60.c)
 *     sub_1401228F0 @ 0x1401228F0 (sub_1401228F0.c)
 *     sub_140122E00 @ 0x140122E00 (sub_140122E00.c)
 */

__int64 __fastcall sub_140122670(__int64 SystemArgument2, _QWORD *a2)
{
  __int64 result; // rax
  __int64 CurrentProcessorNumber; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // ebx
  int v13; // ebx
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_QWORD *)(SystemArgument2 + 968) & 0x8000LL) != 0 )
    return 3221225486LL;
  _interlockedbittestandset((volatile signed __int32 *)(*a2 + 4256LL), 0xFu);
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) == 0 )
    *(_DWORD *)(*a2 + 4256LL) |= 0x800u;
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 0x2000000LL) != 0
    || (*(_QWORD *)(SystemArgument2 + 968) & 0x4000000LL) != 0 )
  {
    *(_DWORD *)(*a2 + 4256LL) |= 0x800u;
  }
  if ( *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1272) + 4LL) )
    *(_DWORD *)(*a2 + 4256LL) |= 0x800u;
  if ( (*(_DWORD *)(*a2 + 4256LL) & 0x800) == 0 )
  {
    v6 = *(_QWORD *)(SystemArgument2 + 128);
    v7 = *(_QWORD *)(v6 + 160);
    if ( *(_BYTE *)v7 == 1 )
    {
      if ( _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 16) + 8 * CurrentProcessorNumber)) == 1 )
      {
        if ( KeGetCurrentIrql() >= 2u || (v8 = *(_QWORD *)(v6 + 160), (*(_DWORD *)(v8 + 76) & 6) != 0) )
        {
          v10 = 2LL;
          v9 = *(_QWORD **)(*(_QWORD *)(v6 + 160) + 8LL);
        }
        else
        {
          v9 = *(_QWORD **)(v8 + 8);
          v10 = 1LL;
        }
        PoFxActivateComponent(*v9, 0LL, v10);
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 160) + 8LL) + 64LL) != 1 )
      {
        if ( *a2 )
        {
          v11 = *(_QWORD *)(*a2 + 4184LL);
          if ( v11 )
            *(_BYTE *)(*(_QWORD *)(v11 + 184) + 3LL) |= 1u;
        }
        v12 = *(_DWORD *)(*a2 + 4256LL);
        sub_140120B60(*(_QWORD *)(SystemArgument2 + 1024), CurrentProcessorNumber, (signed __int64)a2);
        if ( (v12 & 1) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(SystemArgument2 + 960));
        _InterlockedOr(v14, 0);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 160LL) + 8LL) + 64LL) == 1 )
        {
          sub_1401228F0(SystemArgument2, CurrentProcessorNumber, 0, 0, 0);
          return 259LL;
        }
        return 259LL;
      }
    }
  }
  if ( *(_QWORD *)(*a2 + 4184LL) )
  {
    v13 = *(_DWORD *)(*a2 + 4256LL) & 1;
    if ( sub_1401206E0(
           *(volatile signed __int32 **)(SystemArgument2 + 1024),
           a2,
           0,
           CurrentProcessorNumber,
           SystemArgument2) )
    {
      if ( !(_BYTE)v13 )
        _InterlockedIncrement((volatile signed __int32 *)(SystemArgument2 + 960));
      return 259LL;
    }
  }
  result = sub_140122E00((PVOID)SystemArgument2, 0LL);
  if ( (_DWORD)result == -2147483631 )
    return 259LL;
  return result;
}
