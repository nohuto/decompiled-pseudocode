/*
 * XREFs of ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18001E2E0
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E3D0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSid::IsValid(ATL::CSid *this)
{
  return *((_BYTE *)this + 76) && IsValidSid((char *)this + 8);
}
