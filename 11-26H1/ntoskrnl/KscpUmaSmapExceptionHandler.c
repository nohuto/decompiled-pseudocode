/*
 * XREFs of KscpUmaSmapExceptionHandler @ 0x140C64120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpUmaSmapExceptionHandler(unsigned int *a1, __int64 a2, __int64 a3)
{
  if ( (*(_DWORD *)(a3 + 68) & 0x40000) == 0 )
    return 1LL;
  *(_DWORD *)(a3 + 68) &= ~0x40000u;
  *(_QWORD *)(a3 + 248) = KscpUmaSmapResumeAfterException;
  *(_QWORD *)(a3 + 128) = *a1;
  *(_QWORD *)(a3 + 136) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(a3 + 184) = a1[6];
  *(_OWORD *)(a3 + 416) = *((_OWORD *)a1 + 2);
  *(_OWORD *)(a3 + 432) = *((_OWORD *)a1 + 3);
  return 0LL;
}
