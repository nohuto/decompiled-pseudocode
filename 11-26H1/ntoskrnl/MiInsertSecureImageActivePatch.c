/*
 * XREFs of MiInsertSecureImageActivePatch @ 0x140876F28
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MmInsertSecureImageActivePatch @ 0x14087AF00 (MmInsertSecureImageActivePatch.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertSecureImageActivePatch(_QWORD *a1)
{
  void *v1; // rdi
  bool v3; // si
  _QWORD *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax

  v1 = 0LL;
  v3 = 0;
LABEL_2:
  v4 = (_QWORD *)qword_140E366D0;
  if ( qword_140E366D0 )
  {
    while ( 1 )
    {
      v5 = MiCompareHotPatchNodes((__int64)a1, (__int64)v4);
      if ( v5 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v1 = v4;
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140E366D0, (__int64)v4);
          goto LABEL_2;
        }
        v6 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v6 = (_QWORD *)v4[1];
        if ( !v6 )
        {
          v3 = 1;
          break;
        }
      }
      v4 = v6;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E366D0, (unsigned __int64)v4, v3, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
