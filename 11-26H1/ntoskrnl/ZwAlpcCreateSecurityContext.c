/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x140724410
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x14069AE70 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSecurityContext(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
