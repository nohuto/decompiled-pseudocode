/*
 * XREFs of MiPageHashBugCheck @ 0x14052F994
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiArePagefileContentsCorrupted @ 0x1402DB9F0 (MiArePagefileContentsCorrupted.c)
 *     MiUpdatePageFileBlockOwner @ 0x14030D080 (MiUpdatePageFileBlockOwner.c)
 *     MiWritePageFileHash @ 0x140470698 (MiWritePageFileHash.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiPageHashBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned int *a3,
        unsigned int *a4,
        int a5)
{
  unsigned int v5; // r11d
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v8; // rcx
  ULONG_PTR v9; // r9

  v5 = BugCheckParameter1 + 16;
  BugCheckParameter4 = *a4;
  if ( a5 )
    v5 = BugCheckParameter1;
  v8 = *a3;
  if ( (_DWORD)v8 == (_DWORD)BugCheckParameter4
    && (BugCheckParameter4 = a4[1], v8 = a3[1], (_DWORD)v8 == (_DWORD)BugCheckParameter4) )
  {
    v9 = *((_QWORD *)a3 + 1);
    BugCheckParameter4 = *((_QWORD *)a4 + 1);
  }
  else
  {
    v9 = v8;
  }
  KeBugCheckEx(0x1Au, v5, (unsigned int)BugCheckParameter2, v9, BugCheckParameter4);
}
