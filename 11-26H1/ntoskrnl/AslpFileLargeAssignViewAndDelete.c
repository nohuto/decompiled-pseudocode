/*
 * XREFs of AslpFileLargeAssignViewAndDelete @ 0x140895ABC
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1407805D8 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslpFileLargeMapDelete @ 0x14077EE90 (AslpFileLargeMapDelete.c)
 *     AslpFileMappingGetFileKind @ 0x140B40C0C (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslpFileLargeAssignViewAndDelete(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a2 )
    return 3221225712LL;
  v3 = (_QWORD *)*a2;
  if ( !*a2 )
    return 3221225712LL;
  *(_QWORD *)(a1 + 16) = v3[1];
  *(_BYTE *)(a1 + 57) = 1;
  v4 = v3[5];
  v3[1] = 0LL;
  *(_QWORD *)(a1 + 48) = v4;
  v5 = v3[2];
  v3[5] = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v3[3];
  *(_WORD *)(a1 + 58) = 1;
  *(_DWORD *)(a1 + 84) = 1;
  v3[2] = 0LL;
  v3[3] = 0LL;
  AslpFileLargeMapDelete(a2);
  return AslpFileMappingGetFileKind(a1 + 8, a1 + 64);
}
