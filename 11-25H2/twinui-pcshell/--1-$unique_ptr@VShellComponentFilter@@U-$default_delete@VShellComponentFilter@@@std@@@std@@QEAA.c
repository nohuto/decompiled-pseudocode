/*
 * XREFs of ??1?$unique_ptr@VShellComponentFilter@@U?$default_delete@VShellComponentFilter@@@std@@@std@@QEAA@XZ @ 0x1802CF2C8
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x18024D150 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ??R?$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z @ 0x1803DBA44 (--R-$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ShellComponentFilter>::~unique_ptr<ShellComponentFilter>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ShellComponentFilter>::operator()();
  return result;
}
