/*
 * XREFs of ?DetachFromChannel@CPrimitiveGroup@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801C1980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveGroup::DetachFromChannel(CPrimitiveGroup *this, struct CChannelContext *a2)
{
  if ( a2 == *((struct CChannelContext **)this + 7) )
  {
    *((_QWORD *)this + 7) = 0LL;
LABEL_3:
    *((_BYTE *)this + 402) = 1;
    return;
  }
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_3;
}
