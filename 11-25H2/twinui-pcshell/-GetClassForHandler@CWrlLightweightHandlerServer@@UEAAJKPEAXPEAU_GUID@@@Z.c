/*
 * XREFs of ?GetClassForHandler@CWrlLightweightHandlerServer@@UEAAJKPEAXPEAU_GUID@@@Z @ 0x18022B730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerServer::GetClassForHandler(
        CWrlLightweightHandlerServer *this,
        __int64 a2,
        void *a3,
        struct _GUID *a4)
{
  struct _GUID v5; // xmm0
  __int64 result; // rax

  v5 = *(struct _GUID *)(*(__int64 (__fastcall **)(char *, __int64, void *))(*((_QWORD *)this - 5) + 104LL))(
                          (char *)this - 40,
                          a2,
                          a3);
  result = 0LL;
  *a4 = v5;
  return result;
}
