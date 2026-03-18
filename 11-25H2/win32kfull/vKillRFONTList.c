/*
 * XREFs of vKillRFONTList @ 0x140207388
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14001774C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 *__fastcall vKillRFONTList(PFFOBJ *this, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v7; // rbx
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = (__int64 *)*a2;
    if ( (__int64 *)*a2 == a2 )
      break;
    v7 = *result;
    v9 = result - 84;
    memset(v8, 0, sizeof(v8));
    PushThreadGuardedObject(v8, a2, vRestartKillEudcRFONTs, a4);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v9, 0LL, 0LL, 1);
    PopThreadGuardedObject(v8);
    *a2 = v7;
    *(_QWORD *)(v7 + 8) = a2;
    PFFOBJ::vDeleteRFONTRef(this);
    v9 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
  return result;
}
