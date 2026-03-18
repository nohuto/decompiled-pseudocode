/*
 * XREFs of PopTraceZoneCr3Mitigated @ 0x14060A390
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void *__fastcall PopTraceZoneCr3Mitigated(int a1, __int64 a2)
{
  void *result; // rax
  void *v5; // rbx
  __int64 v6; // r8
  const WCHAR *v7; // rdx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-9h] BYREF
  int *v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  int *v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]
  _BYTE v15[16]; // [rsp+88h] [rbp+37h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL)
      && (unsigned int)dword_140E07598 > 5
      && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
    {
      v7 = *(const WCHAR **)(v6 + 136);
      v11 = &v8;
      v9 = *(_DWORD *)(a2 + 128);
      v13 = &v9;
      v8 = a1;
      v12 = 4LL;
      v14 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v15, v7);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07598,
        (unsigned __int8 *)&dword_14004B674,
        0LL,
        0LL,
        5u,
        &v10);
    }
    return (void *)ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
  return result;
}
