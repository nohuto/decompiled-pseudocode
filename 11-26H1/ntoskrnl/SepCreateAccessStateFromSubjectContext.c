/*
 * XREFs of SepCreateAccessStateFromSubjectContext @ 0x14043B0F0
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     SeCreateAccessStateEx @ 0x1409463F0 (SeCreateAccessStateEx.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140ACA18C (SeCreateAccessStateFromSubjectContext.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SepCreateAccessStateFromSubjectContext(_OWORD *a1, _QWORD *a2, _QWORD *a3, int a4, _DWORD *a5)
{
  int v5; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v5 = a4;
  if ( (a4 & 0xF0000000) != 0 && a5 )
  {
    if ( a4 < 0 )
      v5 = *a5 | a4;
    if ( (v5 & 0x40000000) != 0 )
      v5 |= a5[1];
    if ( (v5 & 0x20000000) != 0 )
      v5 |= a5[2];
    if ( (v5 & 0x10000000) != 0 )
      v5 |= a5[3];
    v5 &= 0xFFFFFFFu;
  }
  memset_0(a2, 0, 0xA0uLL);
  memset_0(a3, 0, 0xE0uLL);
  a2[9] = a3;
  *((_OWORD *)a2 + 2) = *a1;
  *((_OWORD *)a2 + 3) = a1[1];
  v9 = a2[4];
  if ( !v9 )
    v9 = a2[6];
  if ( (*(_QWORD *)(v9 + 64) & *(_QWORD *)(v9 + 72) & 0x800000LL) != 0 )
    *((_DWORD *)a2 + 3) = 1;
  v10 = a2[4];
  if ( !v10 )
    v10 = a2[6];
  *((_DWORD *)a2 + 3) |= *(_DWORD *)(v10 + 200) & 0x810;
  *((_DWORD *)a2 + 4) = v5;
  *((_DWORD *)a2 + 6) = v5;
  *a3 = a2 + 10;
  *a2 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = 0LL;
  if ( a5 )
    *(_OWORD *)(a3 + 1) = *(_OWORD *)a5;
  return result;
}
