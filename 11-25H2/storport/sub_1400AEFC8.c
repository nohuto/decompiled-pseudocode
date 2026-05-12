/*
 * XREFs of sub_1400AEFC8 @ 0x1400AEFC8
 * Callers:
 *     sub_14019EDA4 @ 0x14019EDA4 (sub_14019EDA4.c)
 * Callees:
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     sub_1400BB140 @ 0x1400BB140 (sub_1400BB140.c)
 *     sub_140183278 @ 0x140183278 (sub_140183278.c)
 */

__int64 __fastcall sub_1400AEFC8(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  if ( !dword_1401684A8 )
  {
    v3 = *(_QWORD *)(a1 + 608);
    goto LABEL_6;
  }
  v2 = sub_140183278();
  if ( v2 )
  {
    sub_1400A9114(a1, 1, 3, (__int64)L"Initializing performance telemetry failed.", L"NtStatus", v2, 0LL, 0);
    sub_1400BB140(a1);
    v3 = *(_QWORD *)(a1 + 608);
LABEL_6:
    *(_DWORD *)(v3 + 4) &= ~1u;
    goto LABEL_7;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL) |= 1u;
LABEL_7:
  v4 = *(_QWORD *)(a1 + 608);
  result = (dword_140168478 != 0 ? 2 : 0) | *(_DWORD *)(v4 + 4) & 0xFFFFFFFD;
  *(_DWORD *)(v4 + 4) = result;
  return result;
}
