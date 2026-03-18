/*
 * XREFs of ??1CSyncData@DirectComposition@@QEAA@XZ @ 0x140134DF0
 * Callers:
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140134DC8 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CSyncData::~CSyncData(
        DirectComposition::CSyncData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DirectComposition::CSyncData *v4; // rdx

  v4 = (DirectComposition::CSyncData *)*((_QWORD *)this + 9);
  if ( v4 != (DirectComposition::CSyncData *)((char *)this + 28) )
    GreDeleteFastMutex(*((char **)this + 9), (__int64)v4, a3, a4);
}
