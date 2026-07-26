/*
 * XREFs of ?KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1400DEEA8
 * Callers:
 *     ndisKLoaderIrpCreateHandler @ 0x1400DF28C (ndisKLoaderIrpCreateHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140138430 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 */

__int64 __fastcall KLoaderReferenceModuleForCreateIrp(
        const struct _KLOADER_REFERENCE_MODULE_CONFIG *a1,
        const struct _IRP *a2,
        struct KLOADER_MODULE_REFERENCE__ **a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  char v9[4]; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (__int64)a1 + 8);
  v6 = KLoader::ReferenceModule(a1, a1, a2, a3);
  v7 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v6;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (char)*a3,
      *(_DWORD *)v9);
  }
  return v7;
}
