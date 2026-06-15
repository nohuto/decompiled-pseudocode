/*
 * XREFs of sub_14003F200 @ 0x14003F200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_14003F200()
{
  if ( hHandle )
    WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  return (unsigned int)dword_1400E8680;
}
