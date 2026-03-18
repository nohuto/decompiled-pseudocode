/*
 * XREFs of sub_1409089F0 @ 0x1409089F0
 * Callers:
 *     sub_1408E0EF8 @ 0x1408E0EF8 (sub_1408E0EF8.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140909220 @ 0x140909220 (sub_140909220.c)
 *     sub_140909250 @ 0x140909250 (sub_140909250.c)
 *     sub_140909280 @ 0x140909280 (sub_140909280.c)
 */

__int64 __fastcall sub_1409089F0(__int64 a1, _QWORD *a2)
{
  int v2; // edi
  int v3; // r14d
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // sf
  int v11; // eax
  __int64 v12; // rdx

  v2 = 0;
  v3 = HIDWORD(qword_140E3E700) - 1;
  v6 = -1073741198;
  while ( v2 <= v3 )
  {
    v7 = (v3 + v2) / 2;
    v8 = *(_QWORD *)((unsigned int)(qword_140E3E700 * v7) + qword_140E3E710);
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E720 == sub_140909220 )
    {
      v9 = sub_140909220(v8, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E720 == sub_140909250 )
    {
      v9 = sub_140909250(v8, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E720 == sub_140909280 )
    {
      v9 = sub_140909280(v8, a1, 8LL);
    }
    else
    {
      v9 = guard_dispatch_icall_no_overrides(v8);
    }
    v10 = v9 < 0;
    if ( !v9 )
    {
      v6 = 0;
      v12 = *(_QWORD *)((unsigned int)(qword_140E3E700 * v7) + qword_140E3E710);
      if ( a2 )
      {
        if ( v12 )
          _InterlockedIncrement64((volatile signed __int64 *)(v12 + 232));
        *a2 = v12;
      }
      return v6;
    }
    if ( v9 >= 0 )
      v2 = v7 + 1;
    v11 = v7 - 1;
    if ( !v10 )
      v11 = v3;
    v3 = v11;
  }
  return v6;
}
