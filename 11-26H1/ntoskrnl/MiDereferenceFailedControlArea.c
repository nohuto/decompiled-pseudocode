/*
 * XREFs of MiDereferenceFailedControlArea @ 0x140B275E4
 * Callers:
 *     MiFinishCreateSection @ 0x14098BADC (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x14036F4A8 (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x140489730 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x140706188 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return MiDereferenceControlAreaBySection(v2, (v1 & 1) == 0);
  result = MiAweControlArea(v2);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
