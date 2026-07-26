/*
 * XREFs of KLoaderReferenceModule @ 0x14006A790
 * Callers:
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x14014614C (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140138430 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 */

__int64 __fastcall KLoaderReferenceModule(
        struct _KLOADER_REFERENCE_MODULE_CONFIG *a1,
        struct KLOADER_MODULE_REFERENCE__ **a2)
{
  struct KLOADER_MODULE_REFERENCE__ **v2; // rdi
  __int64 result; // rax
  unsigned int v5; // ebx
  char v6[4]; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      12,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (__int64)a1 + 8);
  }
  result = KLoader::ReferenceModule(a1, a1, 0LL, v2);
  v5 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = result;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      (char)*v2,
      *(_DWORD *)v6);
    return v5;
  }
  return result;
}
