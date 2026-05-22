/*
 * XREFs of ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

int __fastcall EdgyControllerServer::RegisterEdgyControllerClient(
        EdgyConnection **this,
        struct BamoEdgyControllerServerStub *a2,
        const unsigned __int16 *a3,
        struct BamoEdgyControllerClientProxy *a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r9

  v7 = std::_WChar_traits<unsigned short>::length((__int64)a3);
  std::wstring::assign((char *)(v8 + 88), a3, v7);
  return EdgyConnection::RegisterControllerClient(this[7], a3, a4);
}
