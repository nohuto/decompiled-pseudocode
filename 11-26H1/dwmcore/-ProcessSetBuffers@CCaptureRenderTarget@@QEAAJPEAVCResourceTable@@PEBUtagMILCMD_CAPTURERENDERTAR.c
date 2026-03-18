/*
 * XREFs of ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801D29F4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x180133300 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801FCBB4 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetBuffers(
        void ***this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETBUFFERS *a3,
        struct CResourceTable **a4,
        unsigned int a5)
{
  __int64 v7; // rdi
  struct CResourceTable *v8; // rax
  void **v10; // rdx
  struct CResourceTable *v11; // rcx
  struct CResourceTable *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  if ( !*((_BYTE *)a3 + 8) )
    CCaptureRenderTarget::ResetBuffers(this);
  if ( a5 >> 3 )
  {
    v7 = a5 >> 3;
    do
    {
      v8 = *a4;
      if ( *a4 != (struct CResourceTable *)-1LL )
      {
        v12 = *a4;
        v10 = this[343];
        if ( v10 == this[344] )
        {
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
            this + 342,
            v10,
            &v12);
          v11 = v12;
        }
        else
        {
          v11 = 0LL;
          *v10 = v8;
          ++this[343];
        }
        if ( (unsigned __int64)v11 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v11);
      }
      ++a4;
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
