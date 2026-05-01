/*
 * XREFs of ?SetPointerActivationPolicy@FrameWrapper@@UEAAJW4_POINTER_ACTIVATION_POLICY@@@Z @ 0x180305EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FrameWrapper::SetPointerActivationPolicy(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v6);
  if ( !a2 )
  {
    v4 = 0LL;
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    v4 = 0x8000000LL;
LABEL_5:
    SHSetWindowBits(v6, 4294967276LL, 0x8000000LL, v4);
  }
  return 0LL;
}
