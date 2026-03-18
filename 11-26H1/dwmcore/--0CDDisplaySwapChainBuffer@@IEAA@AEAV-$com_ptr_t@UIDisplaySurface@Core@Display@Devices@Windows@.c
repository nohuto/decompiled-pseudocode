/*
 * XREFs of ??0CDDisplaySwapChainBuffer@@IEAA@AEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@2@AEBUD2D_SIZE_U@@I@Z @ 0x180211B0C
 * Callers:
 *     ?Create@CDDisplaySwapChainBuffer@@SAJAEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@3@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@3@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1801E2010 (-Create@CDDisplaySwapChainBuffer@@SAJAEAV-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChainBuffer::CDDisplaySwapChainBuffer(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int a6)
{
  int v6; // r11d
  int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)a1 = &ISwapChainBuffer::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  v6 = a5[1];
  v7 = *a5;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = v7;
  *(_DWORD *)(a1 + 28) = v6;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 104) = a6;
  *(_DWORD *)(a1 + 108) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = a1 + 128;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)a1 = &CDDisplaySwapChainBuffer::`vftable';
  *(_QWORD *)(a1 + 192) = 0LL;
  v8 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 200) = v8;
  *(_QWORD *)(a1 + 208) = *a3;
  *a3 = 0LL;
  v9 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 216) = v9;
  return a1;
}
