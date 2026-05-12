/*
 * XREFs of sub_14012B4E0 @ 0x14012B4E0
 * Callers:
 *     sub_140127890 @ 0x140127890 (sub_140127890.c)
 * Callees:
 *     sub_1400C8170 @ 0x1400C8170 (sub_1400C8170.c)
 *     sub_14012BA18 @ 0x14012BA18 (sub_14012BA18.c)
 *     sub_14012BB98 @ 0x14012BB98 (sub_14012BB98.c)
 */

__int64 __fastcall sub_14012B4E0(_QWORD *SystemArgument2, _DWORD *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ecx

  if ( a2[1] < 0x18u || !*a2 )
    return 3221225485LL;
  v4 = a2[5] == 0;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(SystemArgument2[16] + 160LL) + 8LL) + 68LL) = *((unsigned __int8 *)a2 + 20);
  v5 = *(_QWORD *)(SystemArgument2[16] + 160LL);
  if ( v4 )
    v6 = *(unsigned __int8 *)(v5 + 182);
  else
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 68LL) + *(unsigned __int8 *)(v5 + 1);
  if ( v6 > 0x1F )
    return 3221225860LL;
  if ( (int)sub_1400C8170(SystemArgument2, v6) < 0 )
  {
    v8 = *(_QWORD *)(SystemArgument2[16] + 160LL);
    if ( a2[5] )
      ++*(_DWORD *)(v8 + 260);
    else
      ++*(_DWORD *)(v8 + 256);
  }
  *(_BYTE *)(*(_QWORD *)(SystemArgument2[16] + 160LL) + 180LL) = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(SystemArgument2[16] + 160LL) + 8LL);
  v10 = *(_DWORD *)(v9 + 68);
  if ( v10 && v10 < *(_DWORD *)(v9 + 16) - 1 )
  {
    if ( (unsigned __int8)sub_14012BB98(SystemArgument2) )
      sub_14012BA18(SystemArgument2);
  }
  return 0LL;
}
