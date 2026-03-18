/*
 * XREFs of ?PushThreadUMPDObj@UMPDOBJ@@QEAAXPEAU_GRETHREAD@@@Z @ 0x1400D3244
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x140265370 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::PushThreadUMPDObj(UMPDOBJ *this, struct _GRETHREAD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx

  if ( a2 )
  {
    v2 = (_QWORD *)((char *)this + 56);
    v3 = (_QWORD *)((char *)a2 + 72);
    v4 = *((_QWORD *)a2 + 9);
    if ( *(_QWORD **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = v4;
    v2[1] = v3;
    *(_QWORD *)(v4 + 8) = v2;
    *v3 = v2;
  }
}
