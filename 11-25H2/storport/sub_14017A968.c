/*
 * XREFs of sub_14017A968 @ 0x14017A968
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_1400697CC @ 0x1400697CC (sub_1400697CC.c)
 */

void sub_14017A968()
{
  volatile signed __int32 *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (volatile signed __int32 *)qword_140169290;
    if ( qword_140169290 == &qword_140169290 )
      break;
    if ( *((PVOID **)qword_140169290 + 1) != &qword_140169290
      || (v1 = *(_QWORD *)qword_140169290, *(PVOID *)(*(_QWORD *)qword_140169290 + 8LL) != qword_140169290) )
    {
      __fastfail(3u);
    }
    qword_140169290 = *(PVOID *)qword_140169290;
    *(_QWORD *)(v1 + 8) = &qword_140169290;
    if ( (unsigned int)sub_1400567A0() )
      _InterlockedDecrement(v0 + 4);
    sub_1400697CC((PVOID)v0);
  }
}
