/*
 * XREFs of ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x140327B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall RestartInactiveHelper(struct RFONT *a1)
{
  __int64 v1; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  struct RFONT *v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v3 = a1;
  v2[0] = v1;
  RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v3, 0LL, (struct PFFOBJ *)v2, 0);
  v3 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
}
