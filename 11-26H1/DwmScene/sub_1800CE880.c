/*
 * XREFs of sub_1800CE880 @ 0x1800CE880
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800CE880(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = *(_QWORD *)(a1 + 536);
  if ( *a2 != result )
  {
    if ( result )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 336LL))(a1);
      *(_BYTE *)(a1 + 504) = 0;
    }
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    result = *a2;
    v6 = a2[1];
    *(_QWORD *)(a1 + 536) = *a2;
    v7 = *(_QWORD *)(a1 + 544);
    *(_QWORD *)(a1 + 544) = v6;
    if ( v7 )
      result = sub_180010EC8(v7);
    if ( *(_QWORD *)(a1 + 536) )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
      *(_BYTE *)(a1 + 504) = 1;
    }
  }
  return result;
}
