/*
 * XREFs of ??0VIDMM_PROCESS@@QEAA@XZ @ 0x14011ADF8
 * Callers:
 *     VidMmCreateProcess @ 0x14003F240 (VidMmCreateProcess.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?AddVidMmProcess@VIDMM_GLOBAL@@SAXPEAU_LIST_ENTRY@@@Z @ 0x14011AEEC (-AddVidMmProcess@VIDMM_GLOBAL@@SAXPEAU_LIST_ENTRY@@@Z.c)
 */

struct _LIST_ENTRY *__fastcall VIDMM_PROCESS::VIDMM_PROCESS(struct _LIST_ENTRY *this)
{
  this[1].Flink = 0LL;
  this[1].Blink = 0LL;
  this[2].Flink = 0LL;
  this[2].Blink = 0LL;
  this[3].Blink = 0LL;
  this[5].Flink = 0LL;
  this[6].Blink = 0LL;
  this[7].Flink = 0LL;
  LODWORD(this[7].Blink) = 0;
  HIDWORD(this[7].Blink) = 1;
  LODWORD(this[8].Flink) = -1;
  *(struct _LIST_ENTRY **)((char *)&this[8].Blink + 4) = 0LL;
  this[16].Blink = 0LL;
  HIDWORD(this[18].Flink) = 76;
  this[17].Flink = 0LL;
  this[17].Blink = 0LL;
  LODWORD(this[18].Blink) = -1;
  LODWORD(this[18].Flink) = 0;
  HIDWORD(this[20].Flink) = 76;
  this[19].Flink = 0LL;
  this[19].Blink = 0LL;
  LODWORD(this[20].Blink) = -1;
  LODWORD(this[20].Flink) = 0;
  this[21].Blink = (struct _LIST_ENTRY *)-1LL;
  this[21].Flink = 0LL;
  LODWORD(this[8].Blink) = 0;
  *(_OWORD *)&this[9].Blink = 0LL;
  this[10].Blink = 0LL;
  LODWORD(this[8].Blink) |= 1u;
  this[6].Flink = (struct _LIST_ENTRY *)((char *)this + 88);
  this[5].Blink = (struct _LIST_ENTRY *)((char *)this + 88);
  memset(&this[11], 0, 0x58uLL);
  VIDMM_GLOBAL::AddVidMmProcess(this);
  return this;
}
