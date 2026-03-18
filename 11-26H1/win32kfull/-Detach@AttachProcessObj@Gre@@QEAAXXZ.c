/*
 * XREFs of ?Detach@AttachProcessObj@Gre@@QEAAXXZ @ 0x14014040C
 * Callers:
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x1401403F0 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::AttachProcessObj::Detach(struct _KAPC_STATE *this)
{
  if ( LOBYTE(this[1].ApcListHead[0].Flink) )
  {
    KeUnstackDetachProcess(this);
    LOBYTE(this[1].ApcListHead[0].Flink) = 0;
  }
}
