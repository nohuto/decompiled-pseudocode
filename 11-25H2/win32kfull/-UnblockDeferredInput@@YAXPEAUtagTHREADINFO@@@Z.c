/*
 * XREFs of ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401AFBA8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall UnblockDeferredInput(struct tagTHREADINFO *a1)
{
  __int64 *i; // rdi
  int v3; // eax

  if ( (*((_DWORD *)a1 + 340) & 0x20000000) != 0 )
  {
    for ( i = *(__int64 **)(*((_QWORD *)a1 + 59) + 24LL); ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        *((_QWORD *)a1 + 170) &= ~0x20000000uLL;
        return;
      }
      v3 = *((_DWORD *)i + 25);
      if ( ((v3 & 0x2000) != 0 || (v3 & 0x4000) != 0) && (struct tagTHREADINFO *)i[13] == a1 )
        break;
    }
    if ( (unsigned int)((unsigned __int64)(1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - i[17])) / gliQpcFreq) > 0x2710 )
      HandleDeferredInput(a1, 4LL);
  }
}
