/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1401B5BE4
 * Callers:
 *     ?Initialize@CTouchProcessor@@SAJXZ @ 0x14018A808 (-Initialize@CTouchProcessor@@SAJXZ.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x140192AF8 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401B5C70 (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this, int a2, int a3)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_WORD *)this + 48) = 2;
  if ( isChildPartition((int)this, a2, a3) )
    *((_WORD *)this + 48) = 0x4000;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  CEResourceLock::Initialize((CTouchProcessor *)((char *)this + 32));
  return this;
}
