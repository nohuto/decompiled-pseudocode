/*
 * XREFs of ?Detach@AttachProcessObj@Gre@@QEAAXXZ @ 0x14010EA90
 * Callers:
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x14010EA74 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401FF2A4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
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
