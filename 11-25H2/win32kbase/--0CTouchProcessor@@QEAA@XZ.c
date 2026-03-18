/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x14014D0A8
 * Callers:
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x140210FD8 (--0CPTPProcessor@@AEAA@XZ.c)
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F788C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this, __int64 a2)
{
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_WORD *)this + 48) = 2;
  if ( isChildPartition((__int64)this, a2) )
    *((_WORD *)this + 48) = 0x4000;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  CEResourceLock::Initialize((CTouchProcessor *)((char *)this + 32));
  return this;
}
