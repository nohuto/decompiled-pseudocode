/*
 * XREFs of MiMarkSubsectionsStatic @ 0x140482BB0
 * Callers:
 *     MiFinishExtendAppend @ 0x1404829A0 (MiFinishExtendAppend.c)
 * Callees:
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

int __fastcall MiMarkSubsectionsStatic(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  int result; // eax
  int v6; // ecx

  v3 = a1;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x30000000;
  do
  {
    result = *(_DWORD *)(v3 + 32) | 0x10000;
    v6 = *(_DWORD *)(v3 + 32) | 0x50000;
    if ( !v4 )
      v6 = *(_DWORD *)(v3 + 32) | 0x10000;
    *(_DWORD *)(v3 + 32) = v6;
    if ( a2 )
      result = MiUpdateSubsectionCrossPartitionRefs(v3, a2);
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v3 );
  return result;
}
