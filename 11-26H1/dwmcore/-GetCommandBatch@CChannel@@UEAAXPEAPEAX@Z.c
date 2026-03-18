/*
 * XREFs of ?GetCommandBatch@CChannel@@UEAAXPEAPEAX@Z @ 0x1801BCFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CChannel::GetCommandBatch(CChannel *this, void **a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rdx

  v2 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    v4 = (_QWORD *)v2[4];
    if ( v4 )
    {
      v5 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v5 != v2 )
        __fastfail(3u);
      *v4 = v2;
      v4[1] = v5;
      *v5 = v4;
      v2[1] = v4;
      v2[4] = 0LL;
    }
  }
  *a2 = v2;
  *((_QWORD *)this + 23) = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
}
