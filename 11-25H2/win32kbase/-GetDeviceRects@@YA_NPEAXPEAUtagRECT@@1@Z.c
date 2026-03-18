/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x14021C67C
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021C5BC (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 */

bool __fastcall GetDeviceRects(char *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct tagRECT *v10; // rax
  struct tagRECT v11; // xmm1
  bool result; // al
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 0, &Object) < 0 )
    return 0;
  v7 = Object;
  v8 = Object ? *((_QWORD *)Object + 9) : 0LL;
  *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19328) = v8;
  ObfDereferenceObject(v7);
  v9 = HMValidateHandleNoSecure(v8, 19);
  if ( !v9 )
    return 0;
  v10 = *(struct tagRECT **)(v9 + 456);
  if ( !v10 )
    return 0;
  *a2 = v10[11];
  v11 = v10[12];
  result = 1;
  *a3 = v11;
  return result;
}
