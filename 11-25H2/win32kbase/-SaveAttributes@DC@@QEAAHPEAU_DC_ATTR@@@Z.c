/*
 * XREFs of ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x14001BC30
 * Callers:
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x14001B9F4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BA50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::SaveAttributes(DC *this, struct _DC_ATTR *a2)
{
  _OWORD *v2; // r8
  _OWORD *v3; // r8

  v2 = (_OWORD *)((char *)this + 688);
  if ( this == (DC *)-544LL )
    v2 = 0LL;
  *v2 = *((_OWORD *)a2 + 9);
  v2[1] = *((_OWORD *)a2 + 10);
  v2[2] = *((_OWORD *)a2 + 11);
  v2[3] = *((_OWORD *)a2 + 12);
  v2[4] = *((_OWORD *)a2 + 13);
  v2[5] = *((_OWORD *)a2 + 14);
  v2[6] = *((_OWORD *)a2 + 15);
  v3 = v2 + 8;
  *(v3 - 1) = *((_OWORD *)a2 + 16);
  *v3 = *((_OWORD *)a2 + 17);
  v3[1] = *((_OWORD *)a2 + 18);
  v3[2] = *((_OWORD *)a2 + 19);
  v3[3] = *((_OWORD *)a2 + 20);
  v3[4] = *((_OWORD *)a2 + 21);
  return 1LL;
}
