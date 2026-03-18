/*
 * XREFs of MiInsertSecureImageActivePatch @ 0x140870BC8
 * Callers:
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MmInsertSecureImageActivePatch @ 0x140874B1C (MmInsertSecureImageActivePatch.c)
 *     MmRegisterHotPatches @ 0x140CFBBA4 (MmRegisterHotPatches.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 *     MiCompareHotPatchNodes @ 0x14086F6BC (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  v4 = (_QWORD *)qword_140E36550;
  if ( qword_140E36550 )
  {
    while ( 1 )
    {
      v5 = MiCompareHotPatchNodes((__int64)a1, (__int64)v4);
      if ( v5 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v1 = v4;
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140E36550, (__int64)v4);
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E36550, (unsigned __int64)v4, v3, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
