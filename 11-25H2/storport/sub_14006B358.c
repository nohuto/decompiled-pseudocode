/*
 * XREFs of sub_14006B358 @ 0x14006B358
 * Callers:
 *     sub_140043DEC @ 0x140043DEC (sub_140043DEC.c)
 *     sub_1400728C4 @ 0x1400728C4 (sub_1400728C4.c)
 *     sub_140072AE8 @ 0x140072AE8 (sub_140072AE8.c)
 *     sub_1400CB254 @ 0x1400CB254 (sub_1400CB254.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14006B358(int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(_QWORD); // rax

  if ( a2
    && a1
    && *(_QWORD *)a1
    && (v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL)) != 0
    && a1[7] >= 3
    && (v3 = *(__int64 (__fastcall **)(_QWORD))(v2 + 128)) != 0LL )
  {
    return v3(*(_QWORD *)a1);
  }
  else
  {
    return 3221225485LL;
  }
}
