/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x14022004C
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021FF8C (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

bool __fastcall GetDeviceRects(char *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  PVOID v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  struct tagRECT *v12; // rax
  struct tagRECT v13; // xmm1
  bool result; // al
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 0, &Object) < 0 )
    return 0;
  v8 = Object;
  v9 = Object ? *((_QWORD *)Object + 9) : 0LL;
  *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 19360) = v9;
  ObfDereferenceObject(v8);
  LOBYTE(v10) = 19;
  v11 = HMValidateHandleNoSecure(v9, v10);
  if ( !v11 )
    return 0;
  v12 = *(struct tagRECT **)(v11 + 456);
  if ( !v12 )
    return 0;
  *a2 = v12[11];
  v13 = v12[12];
  result = 1;
  *a3 = v13;
  return result;
}
