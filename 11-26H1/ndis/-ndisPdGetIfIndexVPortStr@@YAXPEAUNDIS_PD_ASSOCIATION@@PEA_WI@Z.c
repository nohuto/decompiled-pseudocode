/*
 * XREFs of ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1400A73EC
 * Callers:
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x140140B20 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x140140CE0 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006C3F0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 */

void __fastcall ndisPdGetIfIndexVPortStr(struct NDIS_PD_ASSOCIATION *a1, wchar_t *a2)
{
  __int64 v2; // r9
  int v3; // [rsp+20h] [rbp-18h]

  v2 = *(unsigned int *)(*((_QWORD *)a1 + 6) + 4056LL);
  if ( *((_DWORD *)a1 + 16) == -1 )
  {
    RtlStringCbPrintfW(a2, 0x80uLL, L"IfIndex %u", v2);
  }
  else
  {
    v3 = *((_DWORD *)a1 + 16);
    RtlStringCbPrintfW(a2, 0x80uLL, L"IfIndex %u: VPort %u", v2, v3);
  }
}
