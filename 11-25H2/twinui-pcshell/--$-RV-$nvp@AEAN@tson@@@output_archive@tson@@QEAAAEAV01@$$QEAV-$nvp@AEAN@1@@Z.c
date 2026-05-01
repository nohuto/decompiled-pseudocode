/*
 * XREFs of ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x180328DEC
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE278 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<double &>>(__int64 a1, __int64 a2)
{
  char v3; // r8
  double *v4; // rax
  char v5; // dl
  double v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = v3;
  v4 = *(double **)(a2 + 16);
  v5 = *v4 == 0.0;
  v7 = *v4;
  if ( tson::output_archive::write_type(a1, v5, 21) )
    tson::write_buffer::push_back(*(void ***)(a1 + 144), &v7, 8uLL);
  return a1;
}
