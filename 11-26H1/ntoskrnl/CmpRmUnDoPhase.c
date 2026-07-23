/*
 * XREFs of CmpRmUnDoPhase @ 0x140864A08
 * Callers:
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenTransaction @ 0x14072A740 (ZwOpenTransaction.c)
 *     CmpTransMgrRollback @ 0x1408B51E8 (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1408B5850 (CmpTransMgrCommit.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpRmUnDoPhase(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING *TmHandle; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _BYTE v8[4]; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  HANDLE TransactionHandle; // [rsp+40h] [rbp-21h] BYREF
  __int64 v11; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, 44);
  TransactionHandle = 0LL;
  v8[0] = 0;
  v9 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
LABEL_2:
  v11 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement(a1 + 16, &v11, 0LL);
    v4 = (_QWORD *)result;
    if ( !result )
      return result;
    if ( (*(_DWORD *)(result + 48) & 2) != 0 )
    {
      CmpTransMgrRollback(result, &v9);
      CmpAttachToRegistryProcess(&ApcState);
LABEL_12:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4);
      CmpDetachFromRegistryProcess(&ApcState);
      v6 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = TmHandle;
    ObjectAttributes.ObjectName = TmHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), TmHandle) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, v4, &v9, v8) < 0 || (int)CmpTransMgrCommit(v5, v4, &v9) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess(&ApcState);
      goto LABEL_12;
    }
    ZwClose(TransactionHandle);
  }
}
