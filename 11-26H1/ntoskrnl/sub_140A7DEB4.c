/*
 * XREFs of sub_140A7DEB4 @ 0x140A7DEB4
 * Callers:
 *     sub_1409EB6CC @ 0x1409EB6CC (sub_1409EB6CC.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall sub_140A7DEB4(__int64 a1, _QWORD *a2)
{
  int v2; // edi
  int v3; // r14d
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx

  v2 = 0;
  v3 = HIDWORD(qword_140E3EA80) - 1;
  v6 = -1073741198;
  while ( v2 <= v3 )
  {
    v7 = (v3 + v2) / 2;
    v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)((unsigned int)(qword_140E3EA80 * v7) + qword_140E3EA90), a1);
    if ( !v8 )
    {
      v6 = 0;
      v10 = *(_QWORD *)((unsigned int)(qword_140E3EA80 * v7) + qword_140E3EA90);
      if ( a2 )
      {
        if ( v10 )
          _InterlockedIncrement64((volatile signed __int64 *)(v10 + 232));
        *a2 = v10;
      }
      return v6;
    }
    if ( v8 >= 0 )
      v2 = v7 + 1;
    v9 = v7 - 1;
    if ( v8 >= 0 )
      v9 = v3;
    v3 = v9;
  }
  return v6;
}
