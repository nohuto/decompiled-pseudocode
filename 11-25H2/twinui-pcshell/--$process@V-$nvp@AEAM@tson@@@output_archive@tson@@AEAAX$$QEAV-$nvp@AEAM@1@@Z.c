/*
 * XREFs of ??$process@V?$nvp@AEAM@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAM@1@@Z @ 0x180570820
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180570CB4 (--$serialize@Voutput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE278 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<float &>>(__int64 a1, __int64 a2)
{
  char v3; // r8
  float *v4; // rax
  char v5; // dl
  char result; // al
  float v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = v3;
  v4 = *(float **)(a2 + 16);
  v5 = *v4 == 0.0;
  v7 = *v4;
  result = tson::output_archive::write_type(a1, v5, 22);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v7, 4uLL);
  return result;
}
