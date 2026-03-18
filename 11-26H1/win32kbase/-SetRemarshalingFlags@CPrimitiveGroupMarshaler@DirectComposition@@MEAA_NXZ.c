/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023FA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveGroupMarshaler *this)
{
  unsigned int v1; // eax
  bool v2; // zf
  bool result; // al

  v1 = *((_DWORD *)this + 4) & 0xFFFFFFBF;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 12) = 0LL;
  v2 = *((_QWORD *)this + 7) == 0LL;
  *((_DWORD *)this + 4) = v1 | 0x80;
  result = !v2;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
