/*
 * XREFs of ??_G?$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x18021FB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPositionerHelpers@@UEAA@XZ @ 0x1802CCD1C (--1-$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPositione.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::~ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
