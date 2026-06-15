/*
 * XREFs of ??R_lambda_958c91c43235a8789bf8f41d13e0d823_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x180029998
 * Callers:
 *     ?RemoveInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B580 (-RemoveInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotif.c)
 * Callees:
 *     <none>
 */

bool __fastcall _lambda_958c91c43235a8789bf8f41d13e0d823_::operator()(_BYTE **a1, __int64 a2)
{
  _QWORD *v2; // r8

  v2 = *a1;
  if ( *(_DWORD *)(a2 + 8) != *((_DWORD *)*a1 + 2) || *(_QWORD *)a2 && *v2 && *(_QWORD *)a2 != *v2 )
    return 0;
  *a1[1] = 1;
  return (*(_DWORD *)(a2 + 56))-- == 1;
}
