/*
 * XREFs of ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x14006B9E0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisHandleLegacyTransport(const struct _UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rdx
  NTSTATUS v3; // eax
  int v4; // ebx
  const WCHAR *v6; // rdi
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 Context; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-A0h] BYREF
  int (*v12)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+98h] [rbp-68h]
  int v13; // [rsp+A0h] [rbp-60h]
  const wchar_t *v14; // [rsp+A8h] [rbp-58h]
  PVOID *p_P; // [rsp+B0h] [rbp-50h]
  int v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+D0h] [rbp-30h]
  int v18; // [rsp+D8h] [rbp-28h]
  __int64 v19; // [rsp+E0h] [rbp-20h]

  P = 0LL;
  v9 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      5,
      10,
      (struct _GUID *)&WPP_253435589b0e38e3eac3f4424dd8c8e4_Traceguids,
      (char)a1);
  Context = 0LL;
  if ( ndisTdiRegisterCallback )
  {
    Buffer = a1->Buffer;
    QueryTable.Name = L"Linkage";
    QueryTable.QueryRoutine = 0LL;
    v12 = ndisReadParameter;
    QueryTable.Flags = 1;
    v14 = L"Export";
    v13 = 20;
    p_P = &P;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    DestinationString = 0LL;
    v3 = RtlQueryRegistryValuesEx(1u, (PCWSTR)Buffer, &QueryTable, &Context, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( (_DWORD)Context == 7 )
      {
        v6 = (const WCHAR *)P;
        if ( !P )
        {
LABEL_9:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4,
              5,
              12,
              (struct _GUID *)&WPP_253435589b0e38e3eac3f4424dd8c8e4_Traceguids);
          return (unsigned int)v4;
        }
        do
        {
          if ( !*v6 )
            break;
          RtlInitUnicodeString(&DestinationString, v6);
          v4 = ((__int64 (__fastcall *)(_UNICODE_STRING *, __int64 *))ndisTdiRegisterCallback)(&DestinationString, &v9);
          if ( v4 < 0 )
            break;
          v6 = (const WCHAR *)((char *)v6 + DestinationString.MaximumLength);
        }
        while ( v6 );
      }
      else
      {
        v4 = -1073741823;
      }
    }
    else if ( v3 == -1073741772 )
    {
      v4 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_9;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      5,
      11,
      (struct _GUID *)&WPP_253435589b0e38e3eac3f4424dd8c8e4_Traceguids);
  return 3221225473LL;
}
