/*
 * XREFs of sub_14005A5C4 @ 0x14005A5C4
 * Callers:
 *     sub_140044848 @ 0x140044848 (sub_140044848.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_1400A8194 @ 0x1400A8194 (sub_1400A8194.c)
 * Callees:
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14005A5C4(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int CurrentIrql; // ebp
  unsigned int i; // r14d
  _QWORD **v5; // rsi
  _QWORD *j; // r15
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v8 = 0LL;
  v9 = ArbpQueryConflictCallback;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < *(_DWORD *)(a1 + 856) )
    LOBYTE(CurrentIrql) = sub_14001E1F0(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 172); ++i )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 184) + 16LL * i);
    for ( j = *v5; j != v5; j = (_QWORD *)*j )
    {
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v9)(&v8, j) )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( (unsigned int)(unsigned __int8)CurrentIrql < *(_DWORD *)(a1 + 856) )
    sub_140029830(a1, CurrentIrql);
  if ( v8 )
    return v8 - 80;
  return v1;
}
