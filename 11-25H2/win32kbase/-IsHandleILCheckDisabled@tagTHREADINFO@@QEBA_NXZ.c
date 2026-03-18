/*
 * XREFs of ?IsHandleILCheckDisabled@tagTHREADINFO@@QEBA_NXZ @ 0x1401AC164
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 *     ValidateHandleSecure @ 0x1400A1F30 (ValidateHandleSecure.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagTHREADINFO::IsHandleILCheckDisabled(tagTHREADINFO *this)
{
  return *((_BYTE *)this + 1708) == 0;
}
