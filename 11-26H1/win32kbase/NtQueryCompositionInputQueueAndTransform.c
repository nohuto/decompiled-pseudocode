/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x14006F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(HANDLE Handle, int a2, void *a3, void *a4)
{
  int IsCurrentProcessDwm; // eax
  NTSTATUS v9; // ebx
  _QWORD *v10; // rsi
  _QWORD **v11; // r14
  int v12; // eax
  bool v13; // sf
  CInputSink *v14; // r14
  int v15; // edi
  __int64 v16; // rcx
  char *v17; // rdi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD Src[3]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-90h]
  _OWORD v25[4]; // [rsp+70h] [rbp-88h] BYREF

  memset(Src, 0, sizeof(Src));
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  IsCurrentProcessDwm = UserIsCurrentProcessDwm();
  v9 = IsCurrentProcessDwm == 0 ? 0xC0000022 : 0;
  if ( !IsCurrentProcessDwm )
    goto LABEL_25;
  v10 = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 1u, ExCompositionObjectType, 1, &Object, 0LL);
  if ( v9 < 0 )
    goto LABEL_29;
  v11 = (_QWORD **)Object;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[1] + 16LL))(v11[1]);
    if ( v12 != 2 )
      v9 = -1073741788;
    v10 = v11;
    if ( v12 != 2 )
      v10 = 0LL;
  }
  else
  {
    v9 = -1073741816;
  }
  v13 = v9 < 0;
  if ( v9 < 0 )
  {
    ObfDereferenceObject(v11);
LABEL_29:
    v13 = v9 < 0;
  }
  if ( v13 )
    v10 = 0LL;
  if ( v9 < 0 )
    goto LABEL_23;
  v14 = 0LL;
  v9 = ObReferenceObjectByPointer(v10, 3u, ExCompositionObjectType, 0);
  if ( v9 >= 0 )
  {
    v14 = (CInputSink *)(v10 + 3);
    RIMLockShared(v10 + 4);
    v9 = 0;
  }
  if ( v9 < 0 )
    goto LABEL_23;
  v15 = a2 - 1;
  if ( !v15 )
  {
    v16 = *((_QWORD *)v14 + 5);
LABEL_17:
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v16 + 40LL))(v16, Src);
    goto LABEL_18;
  }
  v19 = v15 - 1;
  if ( !v19 )
  {
    v16 = *((_QWORD *)v14 + 6);
    goto LABEL_17;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v16 = *((_QWORD *)v14 + 7);
    goto LABEL_17;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v16 = *((_QWORD *)v14 + 8);
    goto LABEL_17;
  }
  if ( v21 == 1 )
  {
    v16 = *((_QWORD *)v14 + 9);
    goto LABEL_17;
  }
LABEL_18:
  CInputSink::UnlockAndRelease(v14);
  v17 = 0LL;
  v9 = ObReferenceObjectByPointer(v10, 3u, ExCompositionObjectType, 0);
  if ( v9 >= 0 )
  {
    v17 = (char *)(v10 + 3);
    RIMLockShared(v10 + 4);
    v9 = 0;
  }
  if ( v9 >= 0 )
  {
    v25[0] = *(_OWORD *)(v17 + 88);
    v25[1] = *(_OWORD *)(v17 + 104);
    v25[2] = *(_OWORD *)(v17 + 120);
    v25[3] = *(_OWORD *)(v17 + 136);
    CInputSink::UnlockAndRelease((CInputSink *)v17);
  }
LABEL_23:
  if ( v10 )
    ObfDereferenceObject(v10);
LABEL_25:
  if ( v9 >= 0 )
  {
    RtlCopyToUser(a3, Src, 0x38uLL);
    RtlCopyToUser(a4, v25, 0x40uLL);
  }
  return (unsigned int)v9;
}
