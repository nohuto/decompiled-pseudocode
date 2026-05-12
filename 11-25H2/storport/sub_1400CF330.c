/*
 * XREFs of sub_1400CF330 @ 0x1400CF330
 * Callers:
 *     <none>
 * Callees:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400CF330(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  char *v3; // rdi
  __int64 v5; // rdx
  void (__fastcall *v6)(char *, __int64, _QWORD); // rax

  v3 = (char *)(Context - 160);
  LOBYTE(v5) = sub_140130818(Context - 160);
  v6 = (void (__fastcall *)(char *, __int64, _QWORD))Context[1];
  if ( v6 )
    v6(v3, v5, Context[2]);
}
