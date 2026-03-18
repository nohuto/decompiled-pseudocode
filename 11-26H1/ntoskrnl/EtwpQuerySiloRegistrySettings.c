/*
 * XREFs of EtwpQuerySiloRegistrySettings @ 0x1406C4078
 * Callers:
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall EtwpQuerySiloRegistrySettings(__int64 a1)
{
  _WORD *v2; // rbx
  _WORD *Pool2; // rax
  unsigned __int64 v4; // rax
  HANDLE v5; // rcx
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+80h] [rbp-80h] BYREF
  void **v10; // [rsp+88h] [rbp-78h]
  _QWORD v11[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v12; // [rsp+C0h] [rbp-40h]
  __int16 *v13; // [rsp+C8h] [rbp-38h]
  __int16 v14; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+138h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v14 = 0;
  v2 = 0LL;
  *(_OWORD *)Src = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset_0(v11, 0, 0x70uLL);
    v12 = 1;
    v11[0] = &EtwpQueryRegistryCallback;
    v9 = 1;
    v11[3] = &v9;
    v11[2] = L"RTBacklogRoot";
    v13 = &v14;
    v10 = Src;
    if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v11, 0LL, 0LL) >= 0 )
    {
      if ( Src[1] )
      {
        if ( LOWORD(Src[0]) >= 4u )
        {
          Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
          v2 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, Src[1], WORD1(Src[0]));
            v4 = (unsigned __int64)LOWORD(Src[0]) >> 1;
            if ( v2[v4 - 1] != 92 )
            {
              v2[v4] = 92;
              v2[((unsigned __int64)LOWORD(Src[0]) >> 1) + 1] = 0;
            }
          }
        }
      }
    }
  }
  v5 = KeyHandle;
  *(_QWORD *)(a1 + 4384) = v2;
  if ( v5 )
    ZwClose(v5);
  RtlFreeAnsiString((PUNICODE_STRING)Src);
}
