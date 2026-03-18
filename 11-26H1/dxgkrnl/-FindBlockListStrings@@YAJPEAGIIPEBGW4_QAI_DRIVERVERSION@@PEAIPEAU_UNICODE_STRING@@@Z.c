/*
 * XREFs of ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x14023B1F4
 * Callers:
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x14023ABEC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x14023AE00 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@34@Z @ 0x140003A40 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@343@Z @ 0x140003B48 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkRetrieveStringFromRegistry @ 0x14023AA60 (DxgkRetrieveStringFromRegistry.c)
 *     ?CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z @ 0x14023AF40 (-CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x14023B648 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 */

__int64 __fastcall FindBlockListStrings(
        PCWSTR SourceString,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned int *a6,
        struct _UNICODE_STRING *a7)
{
  NTSTATUS v8; // edi
  int v9; // ebx
  __int64 v10; // rsi
  ULONG v11; // r14d
  ULONG v12; // eax
  struct _UNICODE_STRING *v13; // rbx
  unsigned __int16 *v14; // r9
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  struct _UNICODE_STRING *v18; // rdx
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // r10
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v31; // [rsp+51h] [rbp-AFh]
  unsigned int v32; // [rsp+54h] [rbp-ACh]
  unsigned int v33; // [rsp+58h] [rbp-A8h]
  enum _QAI_DRIVERVERSION v34; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h] BYREF
  enum _QAI_DRIVERVERSION v36; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING *v38; // [rsp+70h] [rbp-90h]
  void *KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+90h] [rbp-70h] BYREF
  ULONG v42; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 *v43; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v44; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD KeyInformation[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v49; // [rsp+118h] [rbp+18h]

  v33 = a2;
  v43 = a4;
  v32 = a3;
  v38 = a7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v49 = 0LL;
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v8 >= 0 )
  {
    if ( (_DWORD)v49 )
    {
      v9 = DWORD1(v49) + 18;
      v10 = operator new[]((unsigned int)(DWORD1(v49) + 18), 0x4B677844u, 256LL);
      if ( v10 )
      {
        v11 = 0;
        if ( (_DWORD)v49 )
        {
          v12 = v9 - 2;
          v13 = v38;
          v42 = v12;
          do
          {
            v8 = ZwEnumerateValueKey(KeyHandle, v11, KeyValueBasicInformation, (PVOID)v10, v12, &ResultLength);
            if ( v8 >= 0 && *(_DWORD *)(v10 + 4) == 7 )
            {
              v14 = v43;
              v15 = v32;
              v16 = v33;
              v17 = (unsigned __int64)*(unsigned int *)(v10 + 8) >> 1;
              v30 = 0;
              *(_WORD *)(v10 + 2 * v17 + 12) = 0;
              v8 = ParseAndCompareBlockListCondition((const unsigned __int16 *)(v10 + 12), v16, v15, v14, a5, &v30);
              if ( v8 >= 0 )
              {
                if ( v30 )
                {
                  ValueName = 0LL;
                  RtlInitUnicodeString(&ValueName, (PCWSTR)(v10 + 12));
                  if ( *a6 < 0x14 )
                  {
                    v8 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName, (__int64)&v13[*a6]);
                    if ( v8 >= 0 )
                    {
                      v18 = v38;
                      v38[*a6].Buffer[((unsigned __int64)v38[*a6].Length >> 1) - 1] = 0;
                      v19 = *a6;
                      v40 = v18[*a6];
                      v31 = CompareMultiString((char *)L"GPU_P_ALL", &v40);
                      v40 = v38[v19];
                      v30 = CompareMultiString((char *)L"GPU_PV_ALL", &v40);
                      v40 = v38[v19];
                      v20 = CompareMultiString((char *)L"GPU_PV_HIGH_SECURITY", &v40);
                      LOBYTE(v21) = 0;
                      if ( (v30 || v20)
                        && (unsigned int)dword_140166660 > 5
                        && tlgKeywordOn((__int64)&dword_140166660, 0x400000000200LL) )
                      {
                        if ( !(_BYTE)v24 || (v26 = 1, v25) )
                          v26 = v21;
                        v41 = v26;
                        *(_QWORD *)&v40.Length = v43;
                        v35 = v32;
                        v36 = v33;
                        v44 = (unsigned __int16 *)(v10 + 12);
                        v34 = a5;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                          v22,
                          (__int64)&unk_1401440E7,
                          v23,
                          v24,
                          (__int64)&v36,
                          (__int64)&v35,
                          (void **)&v40,
                          (__int64)&v34,
                          (void **)&v44,
                          (__int64)&v41);
                        LOBYTE(v21) = 0;
                      }
                      if ( v31 != (_BYTE)v21 && (unsigned int)dword_140166660 > 5 )
                      {
                        if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000001000LL) )
                        {
                          v44 = v43;
                          v35 = v32;
                          v34 = v33;
                          *(_QWORD *)&v40.Length = v10 + 12;
                          v36 = a5;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                            v27,
                            (__int64)&unk_140144168,
                            v28,
                            v29,
                            (__int64)&v34,
                            (__int64)&v35,
                            (void **)&v44,
                            (__int64)&v36,
                            (void **)&v40);
                        }
                      }
                      ++*a6;
                      v13 = v38;
                    }
                  }
                }
              }
            }
            v12 = v42;
            ++v11;
          }
          while ( v11 < (unsigned int)v49 );
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v10);
      }
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v8;
}
