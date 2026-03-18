/*
 * XREFs of ?PanCloseProcess@@YAXQEAXPEAU_EPROCESS@@@Z @ 0x14030A920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall PanCloseProcess(_QWORD *a1, struct _EPROCESS *a2)
{
  void (__fastcall *v2)(_QWORD, struct _EPROCESS *); // rax

  v2 = (void (__fastcall *)(_QWORD, struct _EPROCESS *))a1[203];
  if ( v2 )
    v2(a1[4], a2);
}
