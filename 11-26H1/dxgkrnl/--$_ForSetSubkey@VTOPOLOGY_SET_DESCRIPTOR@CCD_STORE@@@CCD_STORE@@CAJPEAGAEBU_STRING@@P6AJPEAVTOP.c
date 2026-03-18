/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x140339EC8
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x140339E1C (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x140339388 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14033A864 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1404018CC (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  ULONG *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v17; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING v23; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+100h] [rbp+0h] BYREF
  int v26; // [rsp+108h] [rbp+8h]

  KeyHandle = 0LL;
  Disposition = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v8,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      a2,
      a3,
      a4);
    WdLogGlobalForLineNumber = 2379;
  }
  else
  {
    Handle = 0LL;
    v23 = 0LL;
    v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v23, a2);
    LODWORD(v9) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v10,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
        a2,
        a3,
        a4);
      WdLogGlobalForLineNumber = 2401;
    }
    else
    {
      Disposition = 2;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      v11 = (ULONG *)((unsigned __int64)&Disposition & -(__int64)(a5 != 0));
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = &v23;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( v11 )
        v12 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, v11);
      else
        v12 = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
      LODWORD(v9) = v12;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23.Buffer);
      v23 = 0LL;
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          (int)v9,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2421;
      }
      else if ( Disposition == 1
             && (v26 = *(_DWORD *)L"d",
                 DestinationString.Buffer = (wchar_t *)&v25,
                 v25 = *(_QWORD *)L"SetId",
                 *(_QWORD *)&DestinationString.Length = 786442LL,
                 v17 = CcdWriteStrValueToRegistry(Handle, &DestinationString, a2),
                 v9 = v17,
                 v17 < 0) )
      {
        ZwClose(Handle);
        WdLogSingleEntry5(
          2LL,
          v9,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2446;
      }
      else
      {
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
          (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v24,
          Handle,
          a2);
        v9 = a3(v24, a4);
        ZwClose(Handle);
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
        v15[3] = v9;
        v15[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v15[5] = a2;
        v15[6] = a3;
        v15[7] = a4;
        if ( (int)v9 >= 0 )
          WdLogGlobalForLineNumber = 2476;
        else
          WdLogGlobalForLineNumber = 2466;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v24);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v9;
}
