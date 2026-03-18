/*
 * XREFs of vKillEudcRFONTs @ 0x140107774
 * Callers:
 *     bUnloadEudcFont @ 0x140107588 (bUnloadEudcFont.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vKillEudcRFONTs(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v5 = *a1;
    if ( *a1 == a1 )
      break;
    v6 = (_QWORD *)*v5;
    v7 = *(v5 - 68);
    v9 = v5 - 84;
    memset(v8, 0, sizeof(v8));
    PushThreadGuardedObject(v8, a1, vRestartKillEudcRFONTs, a4);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v9, 0LL, (struct PFFOBJ *)&v7, 1);
    PopThreadGuardedObject(v8);
    v9 = 0LL;
    *a1 = v6;
    v6[1] = a1;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
}
