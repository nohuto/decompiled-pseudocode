/*
 * XREFs of ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x18001B774
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B6B8 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) )
    return 0;
  if ( *(_QWORD *)a1 && *(_QWORD *)a2 )
    return *(_QWORD *)a1 == *(_QWORD *)a2;
  return 1;
}
