/*
 * XREFs of ?HampSystemSetBamWindowStateProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18008BC00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800021F8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemSetBamWindowStateProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v6; // edi
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[4]; // [rsp+58h] [rbp-49h] BYREF
  int v14; // [rsp+5Ch] [rbp-45h] BYREF
  NTSTATUS v15; // [rsp+60h] [rbp-41h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-39h] BYREF
  __int64 v17; // [rsp+70h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-9h] BYREF
  __int128 InputBuffer; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+37h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v22 = 0LL;
  FileHandle = 0LL;
  v6 = (int)a4;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  InputBuffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Bam");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v8 >= 0 )
  {
    LODWORD(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = a2;
    LODWORD(v22) = v6;
    v8 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220004u, &InputBuffer, 0x18u, 0LL, 0);
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
  {
    v17 = *((_QWORD *)a1 + 4);
    v13[0] = v6;
    v14 = a3;
    v15 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v9,
      (__int64)&unk_1800D4452,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)v13);
  }
  return (unsigned int)v8;
}
