/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x14006E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x14006F46C (-UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TR.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  NTSTATUS v4; // edi
  unsigned int i; // esi
  _QWORD **v6; // r14
  _QWORD **v7; // r15
  int v8; // eax
  bool v9; // sf
  _QWORD **v10; // r15
  NTSTATUS v11; // r12d
  PVOID Object; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-D8h]
  __int64 v15; // [rsp+48h] [rbp-D0h]
  HANDLE Handle[10]; // [rsp+50h] [rbp-C8h] BYREF
  _OWORD v17[5]; // [rsp+A0h] [rbp-78h] BYREF

  v2 = a2;
  v3 = a1;
  v14 = a1;
  v15 = a1;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      if ( v4 < 0 || i >= v2 )
        return (unsigned int)v4;
      memset(Handle, 0, 0x48uLL);
      memset(v17, 0, 0x48uLL);
      RtlCopyFromUser(v17, (void *)(v3 + 72LL * i), 0x48uLL);
      *(_OWORD *)Handle = v17[0];
      *(_OWORD *)&Handle[2] = v17[1];
      *(_OWORD *)&Handle[4] = v17[2];
      *(_OWORD *)&Handle[6] = v17[3];
      Handle[8] = *(HANDLE *)&v17[4];
      v6 = 0LL;
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(Handle[0], 2u, ExCompositionObjectType, 1, &Object, 0LL);
      if ( v4 < 0 )
        goto LABEL_26;
      v7 = (_QWORD **)Object;
      if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v7[1] + 16LL))(v7[1]);
        if ( v8 != 2 )
          v4 = -1073741788;
        v6 = v7;
        if ( v8 != 2 )
          v6 = 0LL;
      }
      else
      {
        v4 = -1073741816;
      }
      v9 = v4 < 0;
      if ( v4 < 0 )
        break;
LABEL_13:
      if ( v9 )
        v6 = 0LL;
      if ( v4 >= 0 )
      {
        v10 = 0LL;
        v11 = ObReferenceObjectByPointer(v6, 3u, ExCompositionObjectType, 0);
        if ( v11 >= 0 )
        {
          v11 = CPushLock::AcquireLockExclusive((CPushLock *)(v6 + 4));
          if ( v11 < 0 )
            ObfDereferenceObject(v6);
          else
            v10 = v6 + 3;
        }
        if ( v11 >= 0 )
        {
          *(_OWORD *)(v10 + 11) = *(_OWORD *)&Handle[1];
          *(_OWORD *)(v10 + 13) = *(_OWORD *)&Handle[3];
          *(_OWORD *)(v10 + 15) = *(_OWORD *)&Handle[5];
          *(_OWORD *)(v10 + 17) = *(_OWORD *)&Handle[7];
          CInputSink::UnlockAndRelease((CInputSink *)v10);
        }
        InputTraceLogging::InputSink::UpdateTransform(
          (const struct CompositionInputObject *)v6,
          Handle[0],
          (const struct tagINPUT_TRANSFORM *)&Handle[1]);
        ObfDereferenceObject(v6);
      }
      v2 = a2;
      v3 = v14;
    }
    ObfDereferenceObject(v7);
LABEL_26:
    v9 = v4 < 0;
    goto LABEL_13;
  }
  return (unsigned int)-1073741790;
}
