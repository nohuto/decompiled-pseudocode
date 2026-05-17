/*
 * XREFs of _invalid_parameter @ 0x180126898
 * Callers:
 *     _lfind @ 0x180128160 (_lfind.c)
 *     _snprintf @ 0x180128300 (_snprintf.c)
 *     _snwprintf @ 0x1801283D0 (_snwprintf.c)
 *     _splitpath_helper @ 0x180128560 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180128870 (_strlwr_s.c)
 *     _strupr @ 0x180128950 (_strupr.c)
 *     _strupr_s @ 0x1801289A0 (_strupr_s.c)
 *     swprintf @ 0x180128A10 (swprintf.c)
 *     _vscprintf_helper @ 0x180128B0C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x180128B70 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180128C64 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180128D4C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180128E3C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180128FA0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180129000 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x1801290F0 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180129180 (_wcsset_s.c)
 *     wcstoxq @ 0x180129258 (wcstoxq.c)
 *     _wcsupr_s @ 0x1801294F0 (_wcsupr_s.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     bsearch_s @ 0x18012A100 (bsearch_s.c)
 *     qsort @ 0x18012BEB0 (qsort.c)
 *     qsort_s @ 0x18012C270 (qsort_s.c)
 *     sprintf @ 0x18012C670 (sprintf.c)
 *     vscan_fn @ 0x18012C888 (vscan_fn.c)
 *     strtoxlX @ 0x18012D014 (strtoxlX.c)
 *     wcstoxlX @ 0x18012E2C8 (wcstoxlX.c)
 *     strtoxq @ 0x18012E7A0 (strtoxq.c)
 *     _output_l @ 0x18012EA30 (_output_l.c)
 *     _woutput_l @ 0x18012F3A0 (_woutput_l.c)
 *     _input_l @ 0x180131D30 (_input_l.c)
 *     _wctomb_s_l @ 0x180132608 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x1801326F0 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x180132834 (_ungetc_nolock.c)
 *     x64toa_s @ 0x1801329F0 (x64toa_s.c)
 *     xtoa_s @ 0x180132B2C (xtoa_s.c)
 *     x64tow_s @ 0x180132D40 (x64tow_s.c)
 *     xtow_s @ 0x180132E84 (xtow_s.c)
 *     _makepath_s @ 0x180132FC0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180133150 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180133200 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180133280 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180133330 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180133380 (_splitpath_s.c)
 *     _strnset_s @ 0x180133620 (_strnset_s.c)
 *     _strset_s @ 0x1801336B0 (_strset_s.c)
 *     _wmakepath_s @ 0x180133710 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180133890 (_wsplitpath_s.c)
 *     memcpy_s @ 0x180133B50 (memcpy_s.c)
 *     memmove_s @ 0x180133BF0 (memmove_s.c)
 *     vsprintf_s @ 0x180133C90 (vsprintf_s.c)
 *     sscanf_s @ 0x180133CF0 (sscanf_s.c)
 *     strcat_s @ 0x180133D60 (strcat_s.c)
 *     strcpy_s @ 0x180133DF0 (strcpy_s.c)
 *     strncat_s @ 0x180133E70 (strncat_s.c)
 *     strncpy_s @ 0x180133F70 (strncpy_s.c)
 *     strtok_s @ 0x180134070 (strtok_s.c)
 *     vswprintf_s @ 0x1801341C0 (vswprintf_s.c)
 *     swscanf_s @ 0x180134220 (swscanf_s.c)
 *     wcscat_s @ 0x180134290 (wcscat_s.c)
 *     wcscpy_s @ 0x180134330 (wcscpy_s.c)
 *     wcsncat_s @ 0x1801343C0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1801344D0 (wcsncpy_s.c)
 *     wcstok_s @ 0x1801345E0 (wcstok_s.c)
 *     _output_s @ 0x1801346DC (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180134F78 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18013505C (_soutput_s.c)
 *     _input_s @ 0x1801355B4 (_input_s.c)
 *     _sinput_s @ 0x180135E94 (_sinput_s.c)
 *     _swoutput_s @ 0x180135F0C (_swoutput_s.c)
 *     _woutput_s @ 0x180136034 (_woutput_s.c)
 *     _swinput_s @ 0x180136DC4 (_swinput_s.c)
 *     _winput_s @ 0x180136E98 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18013786C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1801378B8 (_ungetwc_nolock.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlLookupFunctionEntry @ 0x18004AEA0 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800B4070 (RtlVirtualUnwind.c)
 *     RtlCaptureContext @ 0x180126D40 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 invalid_parameter()
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
