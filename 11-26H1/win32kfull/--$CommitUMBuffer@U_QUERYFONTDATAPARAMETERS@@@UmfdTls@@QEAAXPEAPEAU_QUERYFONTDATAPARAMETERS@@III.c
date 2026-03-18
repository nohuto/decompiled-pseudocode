/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1401AE2F4
 * Callers:
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286150 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286890 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(
        UmfdTls *a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int v7; // r11d
  void *result; // rax
  int v9; // eax

  v7 = a5 + a6;
  if ( a5 + a6 < a5 || (v9 = a4 + v7, a4 + v7 < a4) || v9 + a3 < a3 )
    result = 0LL;
  else
    result = UmfdTls::CommitUMBuffer(a1, v9 + a3, 1);
  *a2 = result;
  return result;
}
