/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1409084AC
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ExDestroyHandle @ 0x140907B60 (ExDestroyHandle.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpAuditObjectAccess @ 0x14091F14C (ObpAuditObjectAccess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObCaptureObjectStateForDuplication @ 0x1409BB2E4 (ObCaptureObjectStateForDuplication.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v8; // [rsp+8h] [rbp+8h]

  v8 = a2 & 0xFFFFFFFFFFFFFC03uLL;
  v2 = (unsigned __int8)((unsigned int)a2 >> 2);
  v3 = a2 & 0xFFFFFFFFFFFFFC00uLL;
  if ( (v8 & 0xFFFFFFFFFFFFFFFCuLL) < *a1
    && ((v4 = *((_QWORD *)a1 + 1), (v4 & 3) == 0)
      ? (v6 = (_QWORD *)(v4 + 4 * v3))
      : ((v4 & 3) != 1
       ? (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * (v3 >> 19) - 2) + 8 * ((v3 >> 10) & 0x1FF)))
       : (v5 = *(_QWORD *)(v4 + 8 * (v3 >> 10) - 1)),
         v6 = (_QWORD *)(v5 + 4 * (v3 & 0x3FF))),
        v6 && *v6) )
  {
    return *v6 + 8 * v2;
  }
  else
  {
    return 0LL;
  }
}
