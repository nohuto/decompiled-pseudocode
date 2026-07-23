/*
 * XREFs of PopTraceZoneCr3Tripped @ 0x14060D074
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void *__fastcall PopTraceZoneCr3Tripped(int a1, __int64 a2)
{
  void *result; // rax
  void *v5; // rdi
  __int64 v6; // r8
  int v7; // r10d
  char v8; // cl
  bool v9; // zf
  const WCHAR *v10; // rdx
  const WCHAR *v11; // r9
  bool v12; // [rsp+38h] [rbp-69h] BYREF
  char v13; // [rsp+39h] [rbp-68h] BYREF
  bool v14; // [rsp+3Ah] [rbp-67h] BYREF
  int v15; // [rsp+3Ch] [rbp-65h] BYREF
  int v16; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+44h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-59h] BYREF
  int *v19; // [rsp+68h] [rbp-39h]
  __int64 v20; // [rsp+70h] [rbp-31h]
  bool *v21; // [rsp+78h] [rbp-29h]
  __int64 v22; // [rsp+80h] [rbp-21h]
  char *v23; // [rsp+88h] [rbp-19h]
  __int64 v24; // [rsp+90h] [rbp-11h]
  bool *v25; // [rsp+98h] [rbp-9h]
  __int64 v26; // [rsp+A0h] [rbp-1h]
  int *v27; // [rsp+A8h] [rbp+7h]
  __int64 v28; // [rsp+B0h] [rbp+Fh]
  int *v29; // [rsp+B8h] [rbp+17h]
  __int64 v30; // [rsp+C0h] [rbp+1Fh]
  _BYTE v31[16]; // [rsp+C8h] [rbp+27h] BYREF
  _BYTE v32[16]; // [rsp+D8h] [rbp+37h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL)
      && (unsigned int)dword_140E07560 > 5
      && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    {
      v8 = *(_BYTE *)(a2 + 65);
      v9 = *(_BYTE *)(a2 + 228) == 0;
      v19 = &v15;
      v21 = &v12;
      v12 = !v9;
      v22 = 1LL;
      v13 = v8 & 1;
      v24 = 1LL;
      v23 = &v13;
      v25 = &v14;
      v27 = &v16;
      v17 = *(_DWORD *)(a2 + 136);
      v14 = (v8 & 4) != 0;
      v26 = 1LL;
      v10 = *(const WCHAR **)(v6 + 136);
      v29 = &v17;
      v15 = a1;
      v20 = 4LL;
      v16 = v7;
      v28 = 4LL;
      v30 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v31, v10);
      tlgCreate1Sz_wchar_t((__int64)v32, v11);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)word_14004BCDA,
        0LL,
        0LL,
        0xAu,
        &v18);
    }
    return (void *)ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
  return result;
}
