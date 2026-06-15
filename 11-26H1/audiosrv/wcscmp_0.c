/*
 * XREFs of wcscmp_0 @ 0x1801626D4
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092F64 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x18009DEA0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     ?RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBUAudioPumpDspTokenAcquisitionContext@2@PEAV2@@Z @ 0x1800C21D0 (-RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBU.c)
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015CA7C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015E144 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
