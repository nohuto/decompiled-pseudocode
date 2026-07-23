/*
 * XREFs of PopSqmThermalCriticalEvent @ 0x1407E8444
 * Callers:
 *     PopSqmThermalCriticalShutdown @ 0x1407E860C (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1407E8630 (PopSqmThermalHibernate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void *__fastcall PopSqmThermalCriticalEvent(__int64 a1, unsigned int a2, int a3)
{
  void *result; // rax
  void *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // r10d
  int v10; // r11d
  unsigned __int8 v11; // cl
  bool v12; // zf
  const WCHAR *v13; // rdx
  const WCHAR *v14; // r9
  bool v15; // [rsp+30h] [rbp-89h] BYREF
  char v16; // [rsp+31h] [rbp-88h] BYREF
  char v17; // [rsp+32h] [rbp-87h] BYREF
  bool v18; // [rsp+33h] [rbp-86h] BYREF
  int v19; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+40h] [rbp-79h] BYREF
  bool *v23; // [rsp+60h] [rbp-59h]
  __int64 v24; // [rsp+68h] [rbp-51h]
  char *v25; // [rsp+70h] [rbp-49h]
  __int64 v26; // [rsp+78h] [rbp-41h]
  char *v27; // [rsp+80h] [rbp-39h]
  __int64 v28; // [rsp+88h] [rbp-31h]
  int *v29; // [rsp+90h] [rbp-29h]
  __int64 v30; // [rsp+98h] [rbp-21h]
  int *v31; // [rsp+A0h] [rbp-19h]
  __int64 v32; // [rsp+A8h] [rbp-11h]
  int *v33; // [rsp+B0h] [rbp-9h]
  __int64 v34; // [rsp+B8h] [rbp-1h]
  bool *v35; // [rsp+C0h] [rbp+7h]
  __int64 v36; // [rsp+C8h] [rbp+Fh]
  _BYTE v37[16]; // [rsp+D0h] [rbp+17h] BYREF
  _BYTE v38[16]; // [rsp+E0h] [rbp+27h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v7 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL)
      && (unsigned int)dword_140E07560 > 5
      && tlgKeywordOn((__int64)&dword_140E07560, 0x800000000000LL) )
    {
      v11 = *(_BYTE *)(a1 + 65);
      v12 = *(_BYTE *)(a1 + 228) == (unsigned __int8)v10;
      v23 = &v15;
      v15 = !v12;
      v24 = (unsigned int)(v10 + 1);
      v16 = (v10 + 1) & v11;
      v26 = v24;
      v25 = &v16;
      v17 = (v10 + 1) & (v11 >> 2);
      v27 = &v17;
      v28 = v24;
      v29 = &v19;
      v18 = v9 > a2;
      v36 = v24;
      v13 = *(const WCHAR **)(v8 + 136);
      v31 = (int *)&v20;
      v33 = (int *)&v21;
      v35 = &v18;
      v19 = a3;
      v30 = 4LL;
      v20 = v9;
      v32 = 4LL;
      v21 = a2;
      v34 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v37, v13);
      tlgCreate1Sz_wchar_t((__int64)v38, v14);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)byte_140051AB3,
        0LL,
        0LL,
        0xBu,
        &v22);
    }
    return (void *)ObfDereferenceObjectWithTag(v7, 0x67446F50u);
  }
  return result;
}
