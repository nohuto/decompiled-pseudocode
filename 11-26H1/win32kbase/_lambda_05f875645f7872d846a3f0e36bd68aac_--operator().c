/*
 * XREFs of _lambda_05f875645f7872d846a3f0e36bd68aac_::operator() @ 0x1401C0534
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aac___ @ 0x1401A2460 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_05f875645f7872d846a3f0e36bd68aac_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax

  v3 = *(_QWORD *)(*a1 + 160);
  v4 = 0;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 32);
  a2[2] = v4;
  a2[3] = *(_DWORD *)(*a1 + 168);
  a2[4] = *(_DWORD *)(*a1 + 172);
  result = *a1;
  a2[5] = *(_DWORD *)(*a1 + 176);
  return result;
}
