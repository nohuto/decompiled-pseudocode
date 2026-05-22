/*
 * XREFs of ?DeviceAttachCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800CD510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameControllerRawInputProvider::DeviceAttachCallback(char *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !GameControllerRawInputProvider::s_instance )
    return 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 6) + 40LL))(
         *((_QWORD *)GameControllerRawInputProvider::s_instance + 6),
         a1 + 16);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B1,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
