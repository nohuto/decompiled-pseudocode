/*
 * XREFs of ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140162CD0
 * Callers:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x14005F3A0 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1400527B0 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x140052830 (RtlUnicodeStringValidateWorker.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x14005A630 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14005CD20 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140162F60 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisPcwEnumerateSingleInstance(PPCW_BUFFER Buffer, struct _NDIS_MINIPORT_BLOCK *a2, int a3)
{
  ULONG v3; // r14d
  __int16 v5; // di
  ULONG v7; // esi
  NTSTATUS v8; // eax
  NTSTATUS v9; // r8d
  const struct _UNICODE_STRING *MiniportName; // r14
  size_t v11; // rdx
  ULONG v12; // r8d
  size_t v13; // rdx
  unsigned __int16 v14; // r10
  wchar_t *v15; // r15
  wchar_t *v16; // rbx
  unsigned __int64 v17; // r12
  NTSTATUS v18; // eax
  unsigned __int64 v19; // r10
  __int64 v20; // r11
  wchar_t *v21; // rcx
  __int64 v22; // r11
  NTSTATUS v24; // eax
  const wchar_t *v25; // r9
  size_t v26; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-D0h] BYREF
  size_t pcchNewDestLength; // [rsp+48h] [rbp-C0h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-B8h] BYREF
  wchar_t v30[264]; // [rsp+68h] [rbp-A0h] BYREF

  v3 = -2;
  v5 = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  Data.Data = 0LL;
  Data.Size = 0;
  *(_DWORD *)&SourceString.Length = 33685504;
  if ( a3 == -2 )
  {
    SourceString.Buffer = v30;
    v9 = RtlUnicodeStringCopy(&SourceString, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE);
    goto LABEL_16;
  }
  v7 = a3 & 0xFFF | ((a2->IfIndex & 0xFFF) << 12) | (a2->NetLuid.Value >> 24) & 0xFF000000;
  SourceString.Buffer = v30;
  if ( a3 != 4095 )
  {
    v8 = RtlUnicodeStringPrintf(&SourceString, L"%u, ");
LABEL_4:
    v9 = v8;
    goto LABEL_5;
  }
  v24 = RtlUnicodeStringValidateWorker(&SourceString, (const size_t)a2, 0xFFFu);
  v9 = v24;
  if ( v24 >= 0 )
  {
    pcchNewDestLength = 0LL;
    v8 = RtlWideCharArrayCopyStringWorker(
           v30,
           (((__int64)v24 >> 63) & 0xFFFFFFFFFFFFFEFFuLL) + 257,
           &pcchNewDestLength,
           v25,
           v26);
    SourceString.Length = 2 * pcchNewDestLength;
    goto LABEL_4;
  }
LABEL_5:
  v3 = v7;
  if ( v9 < 0 )
    goto LABEL_16;
  MiniportName = ndisPcwGetMiniportName(a2);
  v9 = RtlUnicodeStringValidateWorker(&SourceString, v11, v12);
  if ( v9 < 0 )
  {
    v3 = v7;
    goto LABEL_16;
  }
  v15 = SourceString.Buffer;
  v16 = 0LL;
  v17 = (unsigned __int64)v14 >> 1;
  v18 = RtlUnicodeStringValidateWorker(MiniportName, v13, v9);
  v9 = v18;
  if ( v18 >= 0 && MiniportName )
  {
    v16 = MiniportName->Buffer;
    v19 = (unsigned __int64)MiniportName->Length >> 1;
  }
  else
  {
    v3 = v7;
    if ( v18 < 0 )
      goto LABEL_16;
  }
  v21 = &v15[v17];
  v9 = 0;
  v3 = v7;
  v22 = v20 - v17;
  if ( v22 )
  {
    while ( v19 )
    {
      --v19;
      *v21++ = *v16++;
      ++v5;
      if ( !--v22 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( v19 )
      v9 = -2147483643;
  }
  SourceString.Length = 2 * (v5 + v17);
LABEL_16:
  if ( v9 < 0 )
    return v9;
  else
    return PcwAddInstance(Buffer, &SourceString, v3, 1u, &Data);
}
