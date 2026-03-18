/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033A268
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x140337944 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x140339A08 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x140339A78 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14033A864 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1404018CC (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v14; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING v20; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v21[112]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+120h] [rbp+20h] BYREF
  int v23; // [rsp+128h] [rbp+28h]

  KeyHandle = 0LL;
  Disposition = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  LODWORD(v8) = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v7,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
      a2,
      a3,
      a4);
    WdLogGlobalForLineNumber = 2379;
  }
  else
  {
    Handle = 0LL;
    v20 = 0LL;
    v9 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v20, a2);
    LODWORD(v8) = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v9,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
        a2,
        a3,
        a4);
      WdLogGlobalForLineNumber = 2401;
    }
    else
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      Disposition = 2;
      ObjectAttributes.ObjectName = &v20;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v20.Buffer);
      v20 = 0LL;
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          v8,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2421;
      }
      else if ( Disposition == 1
             && (v23 = *(_DWORD *)L"d",
                 DestinationString.Buffer = (wchar_t *)&v22,
                 v22 = *(_QWORD *)L"SetId",
                 *(_QWORD *)&DestinationString.Length = 786442LL,
                 v14 = CcdWriteStrValueToRegistry(Handle, &DestinationString, a2),
                 v8 = v14,
                 v14 < 0) )
      {
        ZwClose(Handle);
        WdLogSingleEntry5(
          2LL,
          v8,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2446;
      }
      else
      {
        CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR(
          (CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v21,
          Handle,
          a2);
        v8 = a3(v21, a4);
        ZwClose(Handle);
        v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
        v12[3] = v8;
        v12[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
        v12[5] = a2;
        v12[6] = a3;
        v12[7] = a4;
        if ( (int)v8 >= 0 )
          WdLogGlobalForLineNumber = 2476;
        else
          WdLogGlobalForLineNumber = 2466;
        CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v21);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v8;
}
