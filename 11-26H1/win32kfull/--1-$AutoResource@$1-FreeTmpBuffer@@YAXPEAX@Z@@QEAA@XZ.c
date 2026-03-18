/*
 * XREFs of ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401F1CE0
 * Callers:
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ??1TMPBUFOBJ@@QEAA@XZ @ 0x140329FB0 (--1TMPBUFOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = FreeTmpBuffer(v2);
    *a1 = 0LL;
  }
  return result;
}
