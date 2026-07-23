/*
 * XREFs of PopReadSimulatedHGSClasses @ 0x140CD9D70
 * Callers:
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD9614 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CDA288 (PopReadSimulatedProcessorDetail.c)
 */

char __fastcall PopReadSimulatedHGSClasses(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  ULONG v4; // esi
  size_t v5; // rdi
  char v8; // r14
  HANDLE v9; // rcx
  ULONG v10; // r13d
  ULONG v11; // r12d
  HANDLE v12; // rcx
  ULONG v13; // r13d
  char SimulatedProcessorDetail; // r9
  unsigned int v15; // edx
  char *v16; // r8
  char v17; // al
  int v18; // ecx
  char v19; // r9
  unsigned int v20; // edx
  char *v21; // r8
  char v22; // al
  int v23; // ecx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v26; // [rsp+34h] [rbp-CCh]
  ULONG v27; // [rsp+38h] [rbp-C8h]
  HANDLE v28; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v29; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v31; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v32; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v34; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v37[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v39[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v40[2]; // [rsp+C8h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES v41; // [rsp+D8h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES v42; // [rsp+108h] [rbp+8h] BYREF
  OBJECT_ATTRIBUTES v43; // [rsp+138h] [rbp+38h] BYREF
  OBJECT_ATTRIBUTES v44; // [rsp+168h] [rbp+68h] BYREF
  OBJECT_ATTRIBUTES v45; // [rsp+198h] [rbp+98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C8h] [rbp+C8h] BYREF
  __int128 KeyInformation; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v48; // [rsp+208h] [rbp+108h] BYREF
  char v49; // [rsp+210h] [rbp+110h] BYREF

  v4 = 0;
  v5 = a3;
  v26 = a4;
  v39[0] = 1441812LL;
  *(&v44.Length + 1) = 0;
  memset(&v44.Attributes + 1, 0, 20);
  v44.Length = 48;
  v39[1] = L"Efficiency";
  Value = 0;
  v48 = 0LL;
  *(_QWORD *)&v41.Length = 48LL;
  v37[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups";
  v44.Attributes = 576;
  v38[1] = L"HWFeedback";
  *(_QWORD *)&v41.Attributes = 576LL;
  v40[1] = L"Performance";
  v37[0] = 10748066LL;
  v34.Buffer = (wchar_t *)&v49;
  v8 = 0;
  v38[0] = 1441812LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v37;
  v41.ObjectName = &String;
  v42.ObjectName = (PUNICODE_STRING)v38;
  v43.ObjectName = &v34;
  v44.ObjectName = (PUNICODE_STRING)v39;
  v45.ObjectName = (PUNICODE_STRING)v40;
  KeyInformation = 0LL;
  *(_QWORD *)&v42.Length = 48LL;
  String = 0LL;
  *(_QWORD *)&v42.Attributes = 576LL;
  v40[0] = 1572886LL;
  *(_QWORD *)&v45.Length = 48LL;
  *(_QWORD *)&v45.Attributes = 576LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&v34.Length = 0x80000LL;
  *(_QWORD *)&v43.Length = 48LL;
  *(_QWORD *)&v43.Attributes = 576LL;
  v31 = 0LL;
  v32 = 0LL;
  KeyHandle = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v41.RootDirectory = 0LL;
  *(_OWORD *)&v41.SecurityDescriptor = 0LL;
  v42.RootDirectory = 0LL;
  *(_OWORD *)&v42.SecurityDescriptor = 0LL;
  v43.RootDirectory = 0LL;
  *(_OWORD *)&v43.SecurityDescriptor = 0LL;
  v44.RootDirectory = 0LL;
  v45.RootDirectory = 0LL;
  *(_OWORD *)&v45.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v9 = KeyHandle;
    v10 = 0;
    v41.RootDirectory = KeyHandle;
    v27 = 0;
    while ( ZwEnumerateKey(v9, v10, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength) >= 0 )
    {
      String.Buffer = (wchar_t *)&v48;
      String.Length = WORD6(KeyInformation);
      String.MaximumLength = 4;
      if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0
        || (v11 = Value, Value >= 0x20)
        || ZwOpenKey(&v32, 0x20019u, &v41) < 0
        || (v42.RootDirectory = v32, ZwOpenKey(&v29, 0x20019u, &v42) < 0) )
      {
        v12 = v29;
      }
      else
      {
        v12 = v29;
        v43.RootDirectory = v29;
        if ( v26 )
        {
          v13 = v26;
          do
          {
            v34.Length = 0;
            memset_0(v34.Buffer, 0, v34.MaximumLength);
            RtlIntegerToUnicodeString(v4, 0xAu, &v34);
            if ( ZwOpenKey(&v28, 0x20019u, &v43) >= 0 )
            {
              v44.RootDirectory = v28;
              if ( ZwOpenKey(&v31, 0x20019u, &v44) >= 0 )
              {
                if ( a2 )
                  memset_0(a2, 1, v5);
                SimulatedProcessorDetail = PopReadSimulatedProcessorDetail(a2, v11, v31, (unsigned int)v5, 1);
                if ( SimulatedProcessorDetail )
                {
                  if ( a2 )
                  {
                    if ( a1 )
                    {
                      v15 = 0;
                      if ( (_DWORD)v5 )
                      {
                        v16 = (char *)a2;
                        do
                        {
                          v17 = *v16;
                          v18 = v15 * v13;
                          ++v16;
                          ++v15;
                          *(_BYTE *)(a1 + 4LL * (v4 + v18)) = v17;
                        }
                        while ( v15 < (unsigned int)v5 );
                      }
                    }
                  }
                }
                v8 |= SimulatedProcessorDetail;
              }
              v45.RootDirectory = v28;
              if ( ZwOpenKey(&Handle, 0x20019u, &v45) >= 0 )
              {
                if ( a2 )
                  memset_0(a2, 1, v5);
                v19 = PopReadSimulatedProcessorDetail(a2, v11, Handle, (unsigned int)v5, 1);
                if ( v19 )
                {
                  if ( a2 )
                  {
                    if ( a1 )
                    {
                      v20 = 0;
                      if ( (_DWORD)v5 )
                      {
                        v21 = (char *)a2;
                        do
                        {
                          v22 = *v21;
                          v23 = v20 * v13;
                          ++v21;
                          ++v20;
                          *(_BYTE *)(a1 + 4LL * (v4 + v23) + 1) = v22;
                        }
                        while ( v20 < (unsigned int)v5 );
                      }
                    }
                  }
                }
                v8 |= v19;
              }
              if ( Handle )
              {
                ZwClose(Handle);
                Handle = 0LL;
              }
              if ( v31 )
              {
                ZwClose(v31);
                v31 = 0LL;
              }
              if ( v28 )
              {
                ZwClose(v28);
                v28 = 0LL;
              }
            }
            ++v4;
          }
          while ( v4 < v13 );
          v10 = v27;
          v12 = v29;
        }
        v4 = 0;
      }
      if ( v12 )
      {
        ZwClose(v12);
        v29 = 0LL;
      }
      if ( v32 )
      {
        ZwClose(v32);
        v32 = 0LL;
      }
      v27 = ++v10;
      if ( v8 )
      {
        if ( !a1 || !a2 )
          break;
      }
      v9 = KeyHandle;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v8;
}
