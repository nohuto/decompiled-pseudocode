/*
 * XREFs of ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x140035820
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateFlipTelemetryStats(
        struct _VIDSCH_PROCESS *a1,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a2,
        struct _VIDSCH_PRESENT_INFO *a3)
{
  __int64 v3; // rax

  v3 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v3 == -1 )
  {
    ++*((_QWORD *)a1 + 346);
    ++*((_QWORD *)a3 + 9862);
  }
  else if ( !(_DWORD)v3 || (_DWORD)v3 == *((_DWORD *)a3 + 20774) )
  {
    ++*((_QWORD *)a1 + 344);
    *((_QWORD *)a1 + 348) += v3;
    ++*((_QWORD *)a3 + 9860);
    *((_QWORD *)a3 + 9864) += v3;
  }
  else if ( *((_DWORD *)a3 + 20773) <= 1u )
  {
    ++*((_QWORD *)a1 + 345);
    *((_QWORD *)a1 + 349) += v3;
    ++*((_QWORD *)a3 + 9861);
    *((_QWORD *)a3 + 9865) += v3;
  }
  else
  {
    ++*((_QWORD *)a1 + 347);
    *((_QWORD *)a1 + 351) += v3;
    ++*((_QWORD *)a3 + 9863);
    *((_QWORD *)a3 + 9867) += v3;
  }
}
