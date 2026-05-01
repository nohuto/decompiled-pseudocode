/*
 * XREFs of ?GetCreator@ComponentCreator@@QEAAAEAV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@W4ImmersiveComponentOptions@@@Z @ 0x1801BD6D0
 * Callers:
 *     ?CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803E4BD0 (-CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x1803E4C60 (-CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComponentCreator::GetCreator(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  if ( (a2 & 4) == 0 )
  {
    if ( (a2 & 2) != 0 )
    {
      return a1 + 8;
    }
    else
    {
      v3 = a1 + 16;
      result += 24LL;
      if ( (a2 & 8) != 0 )
        return v3;
    }
  }
  return result;
}
