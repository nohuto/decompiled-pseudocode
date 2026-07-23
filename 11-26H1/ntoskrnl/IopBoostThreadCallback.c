/*
 * XREFs of IopBoostThreadCallback @ 0x1404774E0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopBoostThreadCallback(__int64 a1, ULONG_PTR *a2)
{
  ULONG_PTR v3; // rsi
  signed __int64 v4; // rbx
  signed __int64 BugCheckParameter4; // rax
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax

  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *a2);
  v3 = *a2;
  v4 = *a2 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(*a2 - 48, -1, 0x746C6644u);
  BugCheckParameter4 = _InterlockedDecrement64((volatile signed __int64 *)v4);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v4 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v4 + 24) ^ (unsigned __int64)BYTE1(v4)],
        v3,
        3uLL,
        *(_QWORD *)(v4 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v3, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v4);
  }
  v6 = a2[1];
  v7 = v6 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48, -1, 0x746C6644u);
  v8 = _InterlockedDecrement64((volatile signed __int64 *)v7);
  if ( v8 <= 0 )
  {
    if ( *(_QWORD *)(v7 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)],
        v6,
        3uLL,
        *(_QWORD *)(v7 + 8));
    if ( v8 < 0 )
      KeBugCheckEx(0x18u, 0LL, v6, 4uLL, v8);
    ObpDeferObjectDeletion(v6 - 48);
  }
}
