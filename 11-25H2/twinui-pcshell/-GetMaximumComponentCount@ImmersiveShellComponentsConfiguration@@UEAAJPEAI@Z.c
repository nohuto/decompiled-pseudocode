/*
 * XREFs of ?GetMaximumComponentCount@ImmersiveShellComponentsConfiguration@@UEAAJPEAI@Z @ 0x1803DC2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::GetMaximumComponentCount(
        ImmersiveShellComponentsConfiguration *this,
        unsigned int *a2)
{
  *a2 = -1431655765 * ((__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3);
  return 0LL;
}
