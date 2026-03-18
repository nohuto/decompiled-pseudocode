/*
 * XREFs of KiRcuSystemInitialize @ 0x140D09E14
 * Callers:
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KiRcuProcessorInitialize @ 0x140512FBC (KiRcuProcessorInitialize.c)
 */

__int64 __fastcall KiRcuSystemInitialize(unsigned int *a1)
{
  unsigned int v1; // r8d
  _QWORD *v2; // r9
  _BYTE *v3; // r11
  _QWORD *v4; // rbx
  unsigned int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int v8; // edx

  KiRcuState = 536952864;
  v1 = 0;
  v2 = &KiRcuNode;
  v3 = &unk_140F24F02;
  v4 = &unk_140F24F08;
  do
  {
    *v4 = v2;
    v5 = 0;
    v6 = (unsigned __int8)*v3;
    if ( *v3 )
    {
      v7 = v1 - 1;
      do
      {
        if ( v1 )
        {
          v8 = v5 % *((unsigned __int8 *)&KiRcuState + v7);
          v2[1] = *((_QWORD *)&KiRcuState + v7 + 1)
                + ((unsigned __int64)(v5 / *((unsigned __int8 *)&KiRcuState + v7)) << 6);
          *v2 = 1LL << v8;
        }
        v2 += 8;
        ++v5;
      }
      while ( v5 < v6 );
    }
    ++v1;
    ++v4;
    ++v3;
  }
  while ( v1 < 2 );
  stru_140F24F80.Parameter = 0LL;
  qword_140F24F38 = (__int64)&qword_140F24F30;
  qword_140F24F30 = (__int64)&qword_140F24F30;
  stru_140F24F80.List.Flink = 0LL;
  stru_140F24F80.WorkerRoutine = (void (__fastcall *)(void *))KiRcuFlushCompletedWorkerRoutine;
  qword_140F24F58 = (__int64)KiRcuFlushCompletedDpcRoutine;
  LODWORD(dword_140F24F40) = 282;
  qword_140F24F60 = 0LL;
  qword_140F24F78 = 0LL;
  qword_140F24F50 = 0LL;
  return KiRcuProcessorInitialize(a1, 1u);
}
