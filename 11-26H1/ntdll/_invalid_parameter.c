/*
 * XREFs of _invalid_parameter @ 0x180126608
 * Callers:
 *     _lfind @ 0x180127ED0 (_lfind.c)
 *     _snprintf @ 0x180128070 (_snprintf.c)
 *     _snwprintf @ 0x180128140 (_snwprintf.c)
 *     _splitpath_helper @ 0x1801282D0 (_splitpath_helper.c)
 *     _strlwr_s @ 0x1801285E0 (_strlwr_s.c)
 *     _strupr @ 0x1801286C0 (_strupr.c)
 *     _strupr_s @ 0x180128710 (_strupr_s.c)
 *     swprintf @ 0x180128780 (swprintf.c)
 *     _vscprintf_helper @ 0x18012887C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x1801288E0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x1801289D4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180128ABC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180128BAC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180128D10 (_wcslwr.c)
 *     _wcslwr_s @ 0x180128D70 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180128E60 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180128EF0 (_wcsset_s.c)
 *     wcstoxq @ 0x180128FC8 (wcstoxq.c)
 *     _wcsupr_s @ 0x180129260 (_wcsupr_s.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     bsearch_s @ 0x180129E70 (bsearch_s.c)
 *     qsort @ 0x18012BC20 (qsort.c)
 *     qsort_s @ 0x18012BFE0 (qsort_s.c)
 *     sprintf @ 0x18012C3E0 (sprintf.c)
 *     vscan_fn @ 0x18012C5F8 (vscan_fn.c)
 *     strtoxlX @ 0x18012CD80 (strtoxlX.c)
 *     wcstoxlX @ 0x18012E034 (wcstoxlX.c)
 *     strtoxq @ 0x18012E510 (strtoxq.c)
 *     _output_l @ 0x18012E7A0 (_output_l.c)
 *     _woutput_l @ 0x18012F110 (_woutput_l.c)
 *     _input_l @ 0x180131AA0 (_input_l.c)
 *     _wctomb_s_l @ 0x180132378 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180132460 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x1801325A4 (_ungetc_nolock.c)
 *     x64toa_s @ 0x180132760 (x64toa_s.c)
 *     xtoa_s @ 0x18013289C (xtoa_s.c)
 *     x64tow_s @ 0x180132AB0 (x64tow_s.c)
 *     xtow_s @ 0x180132BF4 (xtow_s.c)
 *     _makepath_s @ 0x180132D30 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180132EC0 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180132F70 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180132FF0 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x1801330A0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x1801330F0 (_splitpath_s.c)
 *     _strnset_s @ 0x180133390 (_strnset_s.c)
 *     _strset_s @ 0x180133420 (_strset_s.c)
 *     _wmakepath_s @ 0x180133480 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180133600 (_wsplitpath_s.c)
 *     memcpy_s @ 0x1801338C0 (memcpy_s.c)
 *     memmove_s @ 0x180133960 (memmove_s.c)
 *     vsprintf_s @ 0x180133A00 (vsprintf_s.c)
 *     sscanf_s @ 0x180133A60 (sscanf_s.c)
 *     strcat_s @ 0x180133AD0 (strcat_s.c)
 *     strcpy_s @ 0x180133B60 (strcpy_s.c)
 *     strncat_s @ 0x180133BE0 (strncat_s.c)
 *     strncpy_s @ 0x180133CE0 (strncpy_s.c)
 *     strtok_s @ 0x180133DE0 (strtok_s.c)
 *     vswprintf_s @ 0x180133F30 (vswprintf_s.c)
 *     swscanf_s @ 0x180133F90 (swscanf_s.c)
 *     wcscat_s @ 0x180134000 (wcscat_s.c)
 *     wcscpy_s @ 0x1801340A0 (wcscpy_s.c)
 *     wcsncat_s @ 0x180134130 (wcsncat_s.c)
 *     wcsncpy_s @ 0x180134240 (wcsncpy_s.c)
 *     wcstok_s @ 0x180134350 (wcstok_s.c)
 *     _output_s @ 0x18013444C (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180134CE8 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180134DCC (_soutput_s.c)
 *     _input_s @ 0x180135328 (_input_s.c)
 *     _sinput_s @ 0x180135C08 (_sinput_s.c)
 *     _swoutput_s @ 0x180135C80 (_swoutput_s.c)
 *     _woutput_s @ 0x180135DA8 (_woutput_s.c)
 *     _swinput_s @ 0x180136B38 (_swinput_s.c)
 *     _winput_s @ 0x180136C0C (_winput_s.c)
 *     _fgetwc_nolock @ 0x1801375E0 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18013762C (_ungetwc_nolock.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800B1590 (RtlVirtualUnwind.c)
 *     RtlCaptureContext @ 0x180126AB0 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-B0h] BYREF
  int v6[4]; // [rsp+60h] [rbp-A0h] BYREF
  DWORD64 v7; // [rsp+70h] [rbp-90h]
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  DWORD64 retaddr; // [rsp+5E8h] [rbp+4E8h] BYREF

  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  memset_thunk_772440563353939046(v6, 0, 0x98uLL);
  v7 = retaddr;
  v6[0] = -1073740777;
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
