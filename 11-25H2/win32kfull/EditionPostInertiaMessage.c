/*
 * XREFs of EditionPostInertiaMessage @ 0x1401AAC00
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     _PostThreadMessage @ 0x1401AAC30 (_PostThreadMessage.c)
 */

__int64 __fastcall EditionPostInertiaMessage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagTHREADINFO *a5)
{
  if ( a5 )
    return PostThreadMessage(a5, a2, a3, a4);
  else
    return PostMessage(*(_QWORD *)(a1 + 80), a2, a3, a4);
}
