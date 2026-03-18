/*
 * XREFs of NtQueryCompositionInputSinkLuid @ 0x140126FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkLuid(void *a1, void *a2)
{
  _QWORD *v3; // rdi
  NTSTATUS v4; // ebx
  _QWORD **v5; // rsi
  int v6; // eax
  bool v7; // sf
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 Src; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v3 = 0LL;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 1u, ExCompositionObjectType, 1, &Object, 0LL);
  if ( v4 < 0 )
    goto LABEL_14;
  v5 = (_QWORD **)Object;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[1] + 16LL))(v5[1]);
    if ( v6 != 2 )
      v4 = -1073741788;
    v3 = v5;
    if ( v6 != 2 )
      v3 = 0LL;
  }
  else
  {
    v4 = -1073741816;
  }
  v7 = v4 < 0;
  if ( v4 < 0 )
  {
    ObfDereferenceObject(v5);
LABEL_14:
    v7 = v4 < 0;
  }
  if ( v7 )
    v3 = 0LL;
  if ( v4 >= 0 )
  {
    Src = v3[2];
    ObfDereferenceObject(v3);
    RtlCopyToUser(a2, &Src, 8uLL);
  }
  return (unsigned int)v4;
}
