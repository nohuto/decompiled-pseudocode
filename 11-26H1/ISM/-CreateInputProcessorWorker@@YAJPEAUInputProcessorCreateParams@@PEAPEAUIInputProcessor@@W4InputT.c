/*
 * XREFs of ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180021560
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18001FC78 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18007C270 (-IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801C35F0 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateInputProcessorWorker(
        struct InputProcessorCreateParams *a1,
        struct IInputProcessor **a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v8; // r10d
  __int64 i; // rax
  __int64 v10; // rbx
  unsigned int (__fastcall *v11)(_QWORD); // rax

  v4 = a4;
  v8 = -2147023728;
  for ( i = a4; (unsigned __int64)v4 < 0x13; i = v4 )
  {
    v10 = 6 * i;
    if ( IsEdition(*((_QWORD *)&unk_180251360 + 6 * i + 3)) && (!a3 || a3 == *((_DWORD *)&unk_180251360 + 2 * v10 + 4)) )
    {
      v11 = (unsigned int (__fastcall *)(_QWORD))*(&funcs_18002139E + v10);
      if ( !v11 || v11(*(_QWORD *)a1) )
      {
        v8 = funcs_180021410[v10](a1, a2);
        if ( v8 >= 0 )
          break;
      }
    }
    ++v4;
    v8 = -2147023728;
  }
  return (unsigned int)v8;
}
