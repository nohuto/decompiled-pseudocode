/*
 * XREFs of ?get_Size@UwpWindowingEnvironmentSettings@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180415B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowingEnvironmentSettings::get_Size(
        UwpWindowingEnvironmentSettings *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  if ( !*((_BYTE *)this + 80) )
    return 2147943568LL;
  *(_QWORD *)a2 = *(_QWORD *)((char *)this + 84);
  return result;
}
