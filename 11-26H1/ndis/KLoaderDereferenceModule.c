/*
 * XREFs of KLoaderDereferenceModule @ 0x1400DEF80
 * Callers:
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x140146128 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140148208 (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 */

void __fastcall KLoaderDereferenceModule(struct KLOADER_MODULE_REFERENCE__ *a1)
{
  int v2; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      18,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (char)a1);
  KLoader::DereferenceModule(a1, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1,
      19,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids);
  }
}
