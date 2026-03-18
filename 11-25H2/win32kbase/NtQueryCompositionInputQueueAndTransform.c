/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1400D8B90
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x140065DD0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(HANDLE Handle, int a2, void *a3, void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  BOOL IsCurrentProcessDwm; // eax
  NTSTATUS v11; // ebx
  _QWORD *v12; // rsi
  _QWORD **v13; // r14
  int v14; // eax
  bool v15; // sf
  CInputSink *v16; // r14
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  __int64 v21; // rcx
  char *v22; // rdi
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD Src[3]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-90h]
  _OWORD v27[4]; // [rsp+70h] [rbp-88h] BYREF

  memset(Src, 0, sizeof(Src));
  v26 = 0LL;
  memset(v27, 0, sizeof(v27));
  IsCurrentProcessDwm = UserIsCurrentProcessDwm(v9, v8);
  v11 = !IsCurrentProcessDwm ? 0xC0000022 : 0;
  if ( !IsCurrentProcessDwm )
    goto LABEL_37;
  v12 = 0LL;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 1u, ExCompositionObjectType, 1, &Object, 0LL);
  v13 = (_QWORD **)Object;
  if ( v11 < 0 )
    goto LABEL_12;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[1] + 16LL))(v13[1]);
    if ( v14 != 2 )
      v11 = -1073741788;
    v12 = v13;
    if ( v14 != 2 )
      v12 = 0LL;
  }
  else
  {
    v11 = -1073741816;
  }
  v15 = v11 < 0;
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v13);
LABEL_12:
    v15 = v11 < 0;
  }
  if ( v15 )
    v12 = 0LL;
  if ( v11 < 0 )
    goto LABEL_35;
  v16 = 0LL;
  v11 = ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  if ( v11 >= 0 )
  {
    RIMLockShared((__int64)(v12 + 4));
    v11 = 0;
    v16 = (CInputSink *)(v12 + 3);
  }
  if ( v11 < 0 )
    goto LABEL_35;
  v17 = a2 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 != 1 )
            goto LABEL_30;
          v21 = *((_QWORD *)v16 + 9);
        }
        else
        {
          v21 = *((_QWORD *)v16 + 8);
        }
      }
      else
      {
        v21 = *((_QWORD *)v16 + 7);
      }
    }
    else
    {
      v21 = *((_QWORD *)v16 + 6);
    }
  }
  else
  {
    v21 = *((_QWORD *)v16 + 5);
  }
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v21 + 40LL))(v21, Src);
LABEL_30:
  CInputSink::UnlockAndRelease(v16);
  v22 = 0LL;
  v11 = ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  if ( v11 >= 0 )
  {
    RIMLockShared((__int64)(v12 + 4));
    v11 = 0;
    v22 = (char *)(v12 + 3);
  }
  if ( v11 >= 0 )
  {
    v27[0] = *(_OWORD *)(v22 + 88);
    v27[1] = *(_OWORD *)(v22 + 104);
    v27[2] = *(_OWORD *)(v22 + 120);
    v27[3] = *(_OWORD *)(v22 + 136);
    CInputSink::UnlockAndRelease((CInputSink *)v22);
  }
LABEL_35:
  if ( v12 )
    ObfDereferenceObject(v12);
LABEL_37:
  if ( v11 >= 0 )
  {
    RtlCopyToUser(a3, Src, 0x38uLL);
    RtlCopyToUser(a4, v27, 0x40uLL);
  }
  return (unsigned int)v11;
}
