/*
 * XREFs of ??0QpcTimeConverter@@QEAA@XZ @ 0x18002E18C
 * Callers:
 *     _dynamic_initializer_for__GameControllerRawInputProvider::s_qpcTime__ @ 0x18000A3B0 (_dynamic_initializer_for__GameControllerRawInputProvider--s_qpcTime__.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007AB64 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18007D17C (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180159180 (--0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z.c)
 *     ??0EdgyLegacyProcessor@@QEAA@XZ @ 0x1801ACD2C (--0EdgyLegacyProcessor@@QEAA@XZ.c)
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801B1BB4 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v4; // rdx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  if ( QueryPerformanceFrequency(&Frequency) )
    v2 = Frequency;
  for ( *(LARGE_INTEGER *)this = v2; v2.QuadPart > 0x10C6F7A0B5EDuLL; *((_QWORD *)this + 1) = v4 )
  {
    if ( *((_QWORD *)this + 1) < 0xAuLL )
      break;
    v2.QuadPart /= 0xAuLL;
    v4 = *((_QWORD *)this + 1) / 0xAuLL;
    *(LARGE_INTEGER *)this = v2;
  }
  return this;
}
