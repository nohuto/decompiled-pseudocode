/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x1403FF560
 * Callers:
 *     MiModifiedWriterWakeMdls @ 0x1403FFA38 (MiModifiedWriterWakeMdls.c)
 *     MiModwriterFillMdl @ 0x140400130 (MiModwriterFillMdl.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiMakePagefileWriterEntryAvailable(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[7] + 1032LL);
  if ( _bittest16((const signed __int16 *)(a1[8] + 172LL), 0xBu) )
  {
    result = (_QWORD *)*v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 )
LABEL_3:
      __fastfail(3u);
    *a1 = result;
    a1[1] = v1;
    result[1] = a1;
    *v1 = a1;
  }
  else
  {
    result = *(_QWORD **)(a1[7] + 1040LL);
    if ( (_QWORD *)*result != v1 )
      goto LABEL_3;
    *a1 = v1;
    a1[1] = result;
    *result = a1;
    v1[1] = a1;
  }
  return result;
}
